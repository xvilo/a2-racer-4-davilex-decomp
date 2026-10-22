//! The race's course: the countdown, the laps (game.ini [OPTIONS] Nrlaps; a stage whose
//! finish chunk is elsewhere than its start is driven once, start to finish), the times and
//! the finish (Gm_clock.cpp, Tr_finis.cpp). Progress is counted in chunks along the road,
//! from the start line.

/// ARRESTED: stopped by the police (GEARRESTEERD), the race is over.
#[allow(non_camel_case_types)]
#[derive(Clone, Copy, Debug, Default, PartialEq, Eq)]
pub enum Phase {
	#[default]
	COUNTDOWN,
	RACING,
	FINISHED,
	ARRESTED,
	TIME_UP,
	TOTAL_LOSS,
}

#[derive(Clone)]
pub struct RaceRules {
	pub phase: Phase,
	/// seconds until the start
	pub countdown: f32,
	/// race time, seconds
	pub time: f32,
	pub laps: i32,
	/// chunks in the stage
	pub chunks: i32,
	pub start: i32,
	pub finish: i32,
	pub circuit: bool,
	/// chunks driven from the start line (negative before it)
	pub progress: f32,
	/// the lap being driven, 1..
	pub lap: i32,
	pub lap_start: f32,
	pub lap_times: Vec<f32>,
	/// time since finishing
	pub finished_at: f32,

	last_chunk: i32,
}

impl Default for RaceRules {
	fn default() -> Self {
		RaceRules {
			phase: Phase::COUNTDOWN,
			countdown: 3.0,
			time: 0.0,
			laps: 2,
			chunks: 0,
			start: 0,
			finish: 0,
			circuit: true,
			progress: 0.0,
			lap: 1,
			lap_start: 0.0,
			lap_times: Vec::new(),
			finished_at: 0.0,
			last_chunk: 0,
		}
	}
}

impl RaceRules {
	pub const COUNTDOWN: Phase = Phase::COUNTDOWN;
	pub const RACING: Phase = Phase::RACING;
	pub const FINISHED: Phase = Phase::FINISHED;
	pub const ARRESTED: Phase = Phase::ARRESTED;
	pub const TIME_UP: Phase = Phase::TIME_UP;
	pub const TOTAL_LOSS: Phase = Phase::TOTAL_LOSS;

	pub fn begin(&mut self, chunk_count: i32, start_chunk: i32, finish_chunk: i32, lap_count: i32, car_chunk: i32) {
		self.chunks = chunk_count.max(1);
		self.start = start_chunk;
		self.finish = if finish_chunk < 0 { start_chunk } else { finish_chunk };
		self.circuit = self.finish == self.start;
		self.laps = if self.circuit { lap_count.max(1) } else { 1 };
		self.last_chunk = car_chunk;
		let chunks = self.chunks;
		let d = ((car_chunk - self.start) % chunks + chunks) % chunks;
		self.progress = (if d > chunks / 2 { d - chunks } else { d }) as f32;
		self.phase = Phase::COUNTDOWN;
		self.countdown = 3.0;
		self.time = 0.0;
		self.lap = 1;
		self.lap_start = 0.0;
		self.lap_times.clear();
		self.finished_at = 0.0;
	}

	/// Advances the clock and follows the car's chunk.
	pub fn update(&mut self, dt: f32, car_chunk: i32) {
		// Chunks moved since last time, the short way round the ring.
		let chunks = self.chunks;
		let mut d = ((car_chunk - self.last_chunk) % chunks + chunks) % chunks;
		if d > chunks / 2 {
			d -= chunks;
		}
		self.last_chunk = car_chunk;
		self.progress += d as f32;
		match self.phase {
			Phase::COUNTDOWN => {
				self.countdown -= dt;
				if self.countdown <= 0.0 {
					self.phase = Phase::RACING;
					self.countdown = 0.0;
				}
			}
			Phase::RACING => {
				self.time += dt;
				// A lap ends on crossing the start line again.
				while self.circuit && self.progress >= (self.lap * chunks) as f32 && self.phase == Phase::RACING {
					self.lap_times.push(self.time - self.lap_start);
					self.lap_start = self.time;
					if self.lap >= self.laps {
						self.phase = Phase::FINISHED;
					} else {
						self.lap += 1;
					}
				}
				if !self.circuit && self.progress >= self.distance() as f32 {
					self.lap_times.push(self.time);
					self.phase = Phase::FINISHED;
				}
			}
			Phase::FINISHED | Phase::ARRESTED | Phase::TIME_UP | Phase::TOTAL_LOSS => {
				self.finished_at += dt;
			}
		}
	}

	/// The race distance in chunks.
	pub fn distance(&self) -> i32 {
		if self.circuit {
			self.laps * self.chunks
		} else {
			((self.finish - self.start) % self.chunks + self.chunks) % self.chunks
		}
	}
}

#[cfg(test)]
mod tests {
	use super::*;

	#[test]
	fn two_laps_of_a_circuit() {
		let mut r = RaceRules::default();
		r.begin(100, 10, -1, 2, 8);
		assert!(r.circuit);
		assert_eq!(r.progress, -2.0);
		assert_eq!(r.distance(), 200);
		r.update(3.0, 8);
		assert_eq!(r.phase, RaceRules::RACING);
		let mut c = 8;
		for _ in 0..202 {
			c = (c + 1) % 100;
			r.update(0.5, c);
		}
		assert_eq!(r.phase, Phase::FINISHED);
		assert_eq!(r.lap_times.len(), 2);
		assert_eq!(r.lap, 2);
	}

	#[test]
	fn point_to_point_runs_once() {
		let mut r = RaceRules::default();
		r.begin(100, 90, 20, 3, 90);
		assert!(!r.circuit);
		assert_eq!(r.laps, 1);
		assert_eq!(r.distance(), 30);
	}
}
