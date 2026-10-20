/* spel.dat — game/snd_main.cpp: 63 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004504c0 FUN_004504c0 ==== */

void FUN_004504c0(void)

{
  FUN_00448610(3,0xfffffff,0);
  return;
}


/* ==== 004504e0 FUN_004504e0 ==== */

void FUN_004504e0(void)

{
  FUN_004482c0(3);
  return;
}


/* ==== 004504f0 FUN_004504f0 ==== */

void FUN_004504f0(void)

{
  DAT_006fbaa0 = FUN_00448470(3);
  FUN_00448330(3);
  return;
}


/* ==== 00450550 FUN_00450550 ==== */

void FUN_00450550(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00450560 FUN_00450560 ==== */

void FUN_00450560(void)

{
  FUN_005584e0(&LAB_00450570);
  return;
}


/* ==== 00450590 FUN_00450590 ==== */

void FUN_00450590(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004505a0 FUN_004505a0 ==== */

void FUN_004505a0(void)

{
  FUN_005584e0(&LAB_004505b0);
  return;
}


/* ==== 004505d0 FUN_004505d0 ==== */

void * __thiscall FUN_004505d0(void *this)

{
  FUN_00402d30((int)this + 100);
  return this;
}


/* ==== 004505e0 FUN_004505e0 ==== */

void FUN_004505e0(void)

{
  return;
}


/* ==== 00450630 FUN_00450630 ==== */

void FUN_00450630(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00450640 FUN_00450640 ==== */

void FUN_00450640(void)

{
  FUN_005584e0(&LAB_00450650);
  return;
}


/* ==== 00450670 FUN_00450670 ==== */

void FUN_00450670(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00450680 FUN_00450680 ==== */

void FUN_00450680(void)

{
  FUN_005584e0(&LAB_00450690);
  return;
}


/* ==== 004506b0 FUN_004506b0 ==== */

void FUN_004506b0(void)

{
  FUN_0049f6e0(&DAT_006fbb58);
  return;
}


/* ==== 004506c0 FUN_004506c0 ==== */

void FUN_004506c0(void)

{
  FUN_005584e0(&LAB_004506d0);
  return;
}


/* ==== 004506e0 InitSndFxEngine ==== */

void __thiscall InitSndFxEngine(void *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  uint i;
  uint k;
  int j;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  
  iVar2 = FUN_00447540(this);
  i = (uint)(iVar2 == 0);
  uVar3 = FUN_00447590(i);
  cVar1 = FUN_0049f880(&DAT_006fbb58,2000,0x1c2,uVar3,i);
  if (cVar1 == '\0') {
    FUN_004c3fa0(s_Warning__Could_not_init_SndEngin_005a25ec);
    skelet2d_set_sound(0);
  }
  FUN_004489a0(&DAT_006fa558,s_SOUND_INI_005a264c,s_Sound_Settings_005a263c);
  iVar2 = FUN_00448c90(&DAT_006fa558,s_Sound_Settings_005a2658);
  puVar4 = *(undefined1 **)(iVar2 + 4);
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = &DAT_0057629c;
  }
  FUN_0049ff60(&DAT_006fbb58,puVar4);
  iVar2 = DAT_006fbb70;
  DAT_006fbdd0 = DAT_006fbb70;
  if (DAT_006fbb70 != 0) {
    iVar8 = DAT_006fbb70;
    DAT_006fbdd4 = operator_new(DAT_006fbb70 * 0x44);
    if (DAT_006fbdd4 == (void *)0x0) {
      FUN_004c4150(s__s___d__Couldn_t_allocate_static_005a268c,
                   s_C__Work_A2IV_Game_prog_snd_main__005a2668,0x47,iVar2);
    }
    j = 0;
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        iVar5 = FUN_0049ef20(&DAT_006fbb6c,j);
        if (0x3f < *(uint *)(iVar5 + 0x30)) {
          FUN_004c4150(s__s___d__Sound_type_name_too_long_005a2700,
                       s_C__Work_A2IV_Game_prog_snd_main__005a26dc,0x52,j);
        }
        pcVar6 = "";
        if (*(char **)(iVar5 + 0x2c) != (char *)0x0) {
          pcVar6 = *(char **)(iVar5 + 0x2c);
        }
        i = 0xffffffff;
        do {
          pcVar7 = pcVar6;
          if (i == 0) break;
          i = i - 1;
          pcVar7 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar7;
        } while (cVar1 != '\0');
        i = ~i;
        pcVar6 = pcVar7 + -i;
        pcVar7 = (char *)((int)DAT_006fbdd4 + iVar2);
        for (k = i >> 2; k != 0; k = k - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (i = i & 3; i != 0; i = i - 1) {
          *pcVar7 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
        }
        uVar3 = FUN_0049ecf0(&DAT_006fbb5c,j);
        j = j + 1;
        *(undefined4 *)((int)DAT_006fbdd4 + iVar2 + 0x40) = uVar3;
        iVar2 = iVar2 + 0x44;
      } while (j < iVar8);
    }
  }
  FUN_00450de0();
  return;
}


/* ==== 00450840 FUN_00450840 ==== */

void FUN_00450840(void)

{
  FUN_00450e70();
  if (DAT_006fbdd4 != 0) {
    FUN_0054b339(DAT_006fbdd4);
  }
  FUN_0049f900(&DAT_006fbb58);
  return;
}


/* ==== 00450870 FUN_00450870 ==== */

void FUN_00450870(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_0049f9a0(&DAT_006fbb58,s_MUSIC_COPS_005a272c);
  uVar2 = FUN_004475d0();
  FUN_0049ff90(&DAT_006fbb58,~uVar1,uVar2);
  return;
}


/* ==== 004508a0 FUN_004508a0 ==== */

void FUN_004508a0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_0049f920(&DAT_006fbb58,s_MUSIC_005a2738);
  uVar2 = FUN_004475b0();
  FUN_0049ff90(&DAT_006fbb58,uVar1,uVar2);
  return;
}


/* ==== 004508d0 FUN_004508d0 ==== */

undefined4 FUN_004508d0(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  cVar2 = *param_1;
  if (cVar2 == *param_2) {
    pcVar3 = param_1;
    do {
      if (cVar2 == '\0') {
        return 1;
      }
      cVar2 = pcVar3[1];
      pcVar1 = pcVar3 + (int)(param_2 + (1 - (int)param_1));
      pcVar3 = pcVar3 + 1;
    } while (cVar2 == *pcVar1);
  }
  return 0;
}


/* ==== 00450900 FUN_00450900 ==== */

int FUN_00450900(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int i;
  
  i = 0;
  if (0 < DAT_006fbdd0) {
    iVar2 = 0;
    do {
      iVar1 = FUN_004508d0(param_1,iVar2 + DAT_006fbdd4);
      if (iVar1 != 0) {
        return i;
      }
      i = i + 1;
      iVar2 = iVar2 + 0x44;
    } while (i < DAT_006fbdd0);
  }
  return -1;
}


/* ==== 00450950 FUN_00450950 ==== */

void FUN_00450950(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 this_val;
  
  iVar1 = FUN_00447540();
  if (iVar1 != 0) {
    iVar1 = FUN_00450900(param_1);
    if (iVar1 == -1) {
      FUN_004c4150(s__s___d__Static_sample__s_not_fou_005a2764,
                   s_C__Work_A2IV_Game_prog_snd_main__005a2740,0xe0,param_1);
    }
    this_val = FUN_0049eb50(&DAT_006fbb5c,iVar1);
    FUN_0049e550(this_val,param_2);
  }
  return;
}


/* ==== 004509b0 FUN_004509b0 ==== */

void FUN_004509b0(void)

{
  float fVar1;
  float fVar2;
  int i;
  uint __ftol_result;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float local_4c [3];
  undefined4 local_40 [8];
  float local_20;
  float local_1c;
  float local_18;
  float local_10;
  float local_c;
  float local_8;
  
  i = FUN_00447540();
  if (i != 0) {
    puVar3 = (undefined4 *)(DAT_00719b50 + 0x14 + (&DAT_006c3518)[DAT_006c3568] * 0x178);
    puVar4 = local_40;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    local_20 = -local_20;
    local_1c = -local_1c;
    local_18 = -local_18;
    i = DAT_006fba58 * 0xf0 + DAT_00715e50;
    fVar1 = *(float *)(i + 0xbc);
    fVar2 = *(float *)(i + 0xc4);
    __ftol_result = __ftol();
    i = (DAT_005b23bc & __ftol_result) * 4;
    local_4c[0] = *(float *)(i + DAT_0073b578) * fVar1 - *(float *)(i + DAT_0073b530) * fVar2;
    local_4c[1] = 0.0;
    local_4c[2] = *(float *)(i + DAT_0073b578) * fVar2 + *(float *)(i + DAT_0073b530) * fVar1;
    local_10 = local_10 * 0.1;
    local_c = local_c * 0.1;
    local_8 = local_8 * 0.1;
    FUN_004a0040(&DAT_006fbb58,local_40,local_4c);
  }
  return;
}


/* ==== 00450b00 FUN_00450b00 ==== */

void FUN_00450b00(int param_1,char *str1)

{
  undefined4 uVar1;
  
  if (str1 != (char *)0x0) {
    uVar1 = FUN_0049ecb0(&DAT_006fbb5c,str1);
    *(undefined4 *)(param_1 * 0xf0 + 0x30 + DAT_00715e50) = uVar1;
  }
  return;
}


/* ==== 00450b30 FUN_00450b30 ==== */

void FUN_00450b30(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  uint __ftol_result;
  undefined4 this_val;
  int iVar11;
  int iVar12;
  
  iVar10 = FUN_00447540();
  if (iVar10 != 0) {
    iVar12 = param_1 * 0xf0;
    fVar8 = *(float *)(iVar12 + 0xbc + DAT_00715e50);
    fVar9 = *(float *)(iVar12 + DAT_00715e50 + 0xc4);
    iVar10 = DAT_0073b0d0 + *(int *)(iVar12 + 0x24 + DAT_00715e50) * 0xa9;
    __ftol_result = __ftol();
    iVar11 = (DAT_005b23bc & __ftol_result) * 4;
    fVar1 = *(float *)(iVar11 + DAT_0073b578);
    fVar2 = *(float *)(iVar11 + DAT_0073b530);
    fVar3 = *(float *)(iVar11 + DAT_0073b530);
    fVar4 = *(float *)(iVar11 + DAT_0073b578);
    fVar5 = *(float *)(iVar10 + 0x50);
    fVar6 = *(float *)(iVar10 + 0x54);
    fVar7 = *(float *)(iVar10 + 0x58);
    FUN_004c3fa0(s_Handling_sound_source_object__d_005a2788,param_1);
    iVar10 = *(int *)(iVar12 + 0x30 + DAT_00715e50);
    if (iVar10 != -1) {
      this_val = FUN_0049eb50(&DAT_006fbb5c,iVar10);
      FUN_0049e890(this_val,fVar5 * 0.1,fVar6 * 0.1,fVar7 * 0.1,fVar1 * fVar8 - fVar2 * fVar9,0,
                   fVar4 * fVar9 + fVar3 * fVar8,param_2);
    }
  }
  return;
}


/* ==== 00450c90 FUN_00450c90 ==== */

void FUN_00450c90(int param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  uint __ftol_result;
  undefined4 this_val;
  int iVar11;
  
  iVar10 = FUN_00447540();
  if (iVar10 != 0) {
    iVar10 = param_1 * 0xf0 + DAT_00715e50;
    fVar8 = *(float *)(iVar10 + 0xbc);
    fVar9 = *(float *)(iVar10 + 0xc4);
    iVar11 = DAT_0073b0d0 + *(int *)(iVar10 + 0x24) * 0xa9;
    __ftol_result = __ftol();
    iVar10 = (DAT_005b23bc & __ftol_result) * 4;
    fVar1 = *(float *)(iVar10 + DAT_0073b578);
    fVar2 = *(float *)(iVar10 + DAT_0073b530);
    fVar3 = *(float *)(iVar10 + DAT_0073b530);
    fVar4 = *(float *)(iVar10 + DAT_0073b578);
    fVar5 = *(float *)(iVar11 + 0x50);
    fVar6 = *(float *)(iVar11 + 0x54);
    fVar7 = *(float *)(iVar11 + 0x58);
    FUN_004c3fa0(s_Handling_sound_source_object__d_005a27ac,param_1);
    this_val = FUN_0049eb50(&DAT_006fbb5c,param_2);
    FUN_0049e890(this_val,fVar5 * 0.1,fVar6 * 0.1,fVar7 * 0.1,fVar1 * fVar8 - fVar2 * fVar9,0,
                 fVar4 * fVar9 + fVar3 * fVar8,param_3);
  }
  return;
}


/* ==== 00450de0 FUN_00450de0 ==== */

void FUN_00450de0(void)

{
  int iVar1;
  
  if ((DAT_006fb88c < 0) || (DAT_006fb6e4 <= DAT_006fb88c)) {
    FUN_004c4150(s__s___d__Illegal_index_music___d_o_005a27f4,
                 s_C__Work_A2IV_Game_prog_snd_main__005a27d0,0x184,DAT_006fb88c,DAT_006fb6e4);
  }
  iVar1 = FUN_004475b0();
  if (0 < iVar1) {
    if (17000000 < DAT_00740dc8) {
      FUN_00450950(&DAT_006fb6e8 + DAT_006fb88c * 0xe,1);
      FUN_004508a0();
      return;
    }
    FUN_004475a0(0);
    FUN_004c3fa0(s__d_total_memory___d_needed_for_m_005a281c,DAT_00740dc8,17000000);
  }
  return;
}


/* ==== 00450e70 FUN_00450e70 ==== */

void FUN_00450e70(void)

{
  int iVar1;
  undefined4 this_val;
  
  iVar1 = FUN_004475b0();
  if (iVar1 != 0) {
    iVar1 = FUN_00450900(&DAT_006fb6e8 + DAT_006fb88c * 0xe);
    if (iVar1 == -1) {
      FUN_004c4150(s__s___d__Static_sound_source_for_m_005a287c,
                   s_C__Work_A2IV_Game_prog_snd_main__005a2858,0x1a5,
                   &DAT_006fb6e8 + DAT_006fb88c * 0xe);
    }
    this_val = FUN_0049eb50(&DAT_006fbb5c,iVar1);
    FUN_0049e570(this_val);
  }
  return;
}


/* ==== 00450f20 FUN_00450f20 ==== */

void FUN_00450f20(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00450f30 FUN_00450f30 ==== */

void FUN_00450f30(void)

{
  FUN_005584e0(&LAB_00450f40);
  return;
}


/* ==== 00450f60 FUN_00450f60 ==== */

void FUN_00450f60(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00450f70 FUN_00450f70 ==== */

void FUN_00450f70(void)

{
  FUN_005584e0(&LAB_00450f80);
  return;
}


/* ==== 00451060 FUN_00451060 ==== */

void FUN_00451060(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00451070 FUN_00451070 ==== */

void FUN_00451070(void)

{
  FUN_005584e0(&LAB_00451080);
  return;
}


/* ==== 004510a0 FUN_004510a0 ==== */

void FUN_004510a0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004510b0 FUN_004510b0 ==== */

void FUN_004510b0(void)

{
  FUN_005584e0(&LAB_004510c0);
  return;
}


/* ==== 004511e0 FUN_004511e0 ==== */

void FUN_004511e0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 004511f0 FUN_004511f0 ==== */

void FUN_004511f0(void)

{
  FUN_005584e0(&LAB_00451200);
  return;
}


/* ==== 00451220 FUN_00451220 ==== */

void FUN_00451220(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00451230 FUN_00451230 ==== */

void FUN_00451230(void)

{
  FUN_005584e0(&LAB_00451240);
  return;
}


/* ==== 00451250 FUN_00451250 ==== */

undefined4 FUN_00451250(int param_1,char *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  uint i;
  uint j;
  int iVar4;
  char *pcVar5;
  float10 fVar6;
  undefined1 local_1c [4];
  char *local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056a648;
  local_c = ExceptionList;
  local_1c[0] = param_2._0_1_;
  ExceptionList = &local_c;
  FUN_004028f0(local_1c,0);
  i = 0xffffffff;
  pcVar5 = param_2;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  cVar2 = FUN_00402a00(local_1c,i,1);
  if (cVar2 != '\0') {
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_18 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
      local_18 = local_18 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_18 = *param_2;
      param_2 = param_2 + 1;
      local_18 = local_18 + 1;
    }
    FUN_004029e0(local_1c,i);
  }
  local_4 = 0;
  iVar4 = param_1 * 0xf0;
  FUN_004a7be0(DAT_00715e50 + iVar4,local_1c);
  local_4 = 0xffffffff;
  FUN_004028f0(local_1c,1);
  iVar1 = iVar4 + DAT_00715e50;
  fVar6 = (float10)FUN_004a67f0(&DAT_007128b0);
  *(float *)(iVar1 + 0xb4) = (float)fVar6;
  *(undefined4 *)(iVar4 + 0xb0 + DAT_00715e50) = 0xbf800000;
  *(undefined4 *)(iVar4 + 0x58 + DAT_00715e50) = 0x3f800000;
  *(undefined4 *)(iVar4 + 0xe0 + DAT_00715e50) = 0;
  *(undefined4 *)(iVar4 + 0x2c + DAT_00715e50) = 0;
  uVar3 = FUN_004a7bd0(DAT_00715e50 + iVar4);
  FUN_00477b90(&DAT_00712678,param_1,uVar3);
  ExceptionList = local_c;
  return 1;
}


/* ==== 00451380 FUN_00451380 ==== */

void FUN_00451380(int param_1)

{
  int iVar1;
  int iVar2;
  int this_val;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  this_val = DAT_00715e50 + param_1 * 0xf0;
  iVar2 = *(int *)(this_val + 0x24);
  iVar1 = DAT_0073b0d0 + iVar2 + 0x74 + iVar2 * 0xa8;
  local_18 = *(float *)(DAT_0073b0d0 + iVar2 + 0x74 + iVar2 * 0xa8) + *(float *)(this_val + 200);
  local_14 = *(float *)(iVar1 + 4) + *(float *)(this_val + 0xcc);
  local_10 = *(float *)(iVar1 + 8) + *(float *)(this_val + 0xd0);
  local_c = local_18;
  local_8 = local_14;
  local_4 = local_10;
  FUN_004a7d10(this_val,&local_18);
  return;
}


/* ==== 00451640 FUN_00451640 ==== */

void FUN_00451640(void)

{
  undefined4 __ftol_result;
  
  DAT_006fbde2 = 1;
  FUN_00448290(0xf);
  __ftol_result = __ftol(1);
  FUN_00448610(0xf,__ftol_result);
  FUN_004482c0(0xf);
  return;
}


/* ==== 004516a0 FUN_004516a0 ==== */

void FUN_004516a0(void)

{
  int iVar1;
  
  if (DAT_006fbde2 == '\x01') {
    iVar1 = FUN_004486a0(0xf);
    if (iVar1 != 0) {
      DAT_006fbde2 = '\0';
      FUN_00448570(0xf,0);
    }
  }
  return;
}


/* ==== 004516d0 FUN_004516d0 ==== */

void FUN_004516d0(void)

{
  undefined4 __ftol_result;
  
  FUN_004195e0(1);
  FUN_00448290(0x10);
  __ftol_result = __ftol(1);
  FUN_00448610(0x10,__ftol_result);
  FUN_004482c0(0x10);
  return;
}


/* ==== 00451730 FUN_00451730 ==== */

void FUN_00451730(void)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_004195f0();
  if (cVar1 != '\0') {
    iVar2 = FUN_004486a0(0x10);
    if (iVar2 != 0) {
      FUN_004195e0(0);
      FUN_00448570(0x10,0);
    }
  }
  return;
}


/* ==== 00451760 FUN_00451760 ==== */

void FUN_00451760(undefined4 param_1,undefined4 param_2)

{
  undefined4 __ftol_result;
  
  FUN_00429080(param_2);
  FUN_00448290(0x11);
  __ftol_result = __ftol(1);
  FUN_00448610(0x11,__ftol_result);
  FUN_004482c0(0x11);
  return;
}


/* ==== 004517c0 FUN_004517c0 ==== */

void FUN_004517c0(void)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_004290e0();
  if (cVar1 != '\0') {
    iVar2 = FUN_004486a0(0x11);
    if (iVar2 != 0) {
      FUN_004290d0();
      FUN_00448570(0x11,0);
    }
  }
  return;
}


/* ==== 004517f0 FUN_004517f0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004517f0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int i;
  undefined4 *puVar3;
  float10 fVar4;
  undefined4 local_80 [16];
  undefined1 local_40 [64];
  
  FUN_004516a0();
  FUN_00451730();
  FUN_004517c0();
  if (_DAT_005a28b8 != _DAT_006fb974) {
    fVar4 = (float10)FUN_004a6800(&DAT_007128b0);
    _DAT_006fb974 =
         (float)((((float10)_DAT_005a28b8 - (float10)_DAT_006fb974) * fVar4) /
                 (float10)_DAT_005a28bc + (float10)_DAT_006fb974);
    puVar1 = (undefined4 *)
             FUN_004b39d0(local_40,0.5 / _DAT_006fb974,0x46435000,_DAT_006fb974 * 3.1415927);
    puVar3 = local_80;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar1 = local_80;
    puVar3 = &DAT_0073b3f4;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    i = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,3,&DAT_0073b3f4);
    if (i != 0) {
      uVar2 = FUN_004bb290(i);
      FUN_004c4150(s__s__d_____FOG__error_setting_tra_005912e0,
                   s_______Libs_Win3DLib_Include_d3de_00591314,0x59,uVar2);
    }
  }
  return;
}


/* ==== 004518e0 FUN_004518e0 ==== */

void FUN_004518e0(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float *pfVar15;
  int i;
  undefined4 *puVar16;
  int iVar17;
  undefined4 *puVar18;
  int j;
  undefined1 local_54 [12];
  undefined4 local_48 [17];
  
  param_1 = param_1 * 0xf0;
  i = *(int *)(param_1 + 0x24 + DAT_00715e50);
  iVar17 = *(int *)(DAT_0073b0d0 + i + i * 0xa8);
  i = DAT_0073b0d0 + i + i * 0xa8;
  if ((iVar17 == 1) || (iVar17 != 2)) {
    iVar17 = *(int *)(i + 0x99);
  }
  else {
    iVar17 = *(int *)(*(int *)(*(int *)(*(int *)(i + 4) * 9 + 4 + DAT_0073b168) +
                              *(int *)(i + 8) * 4) * 0x10 + DAT_0073b120);
  }
  *(undefined4 *)(i + 0x80) = 0x40000000;
  *(undefined4 *)(i + 0x84) = 0x40000000;
  *(undefined4 *)(i + 0x88) = 0x40000000;
  puVar16 = (undefined4 *)(DAT_0073b0d0 + *(int *)(param_1 + 0x24 + DAT_00715e50) * 0xa9 + 0x10);
  puVar18 = local_48;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar18 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar18 = puVar18 + 1;
  }
  j = 0;
  iVar1 = *(int *)(param_1 + 0x24 + DAT_00715e50);
  i = DAT_0073b0d0 + iVar1 + 0x50 + iVar1 * 0xa8;
  fVar2 = *(float *)(DAT_0073b0d0 + iVar1 + 0x50 + iVar1 * 0xa8);
  fVar3 = *(float *)(i + 4);
  fVar4 = *(float *)(i + 8);
  i = DAT_00719b50 + 8 + (&DAT_006c3518)[DAT_006c3568] * 0x178;
  fVar5 = *(float *)(DAT_00719b50 + 8 + (&DAT_006c3518)[DAT_006c3568] * 0x178);
  fVar6 = *(float *)(i + 4);
  fVar7 = *(float *)(i + 8);
  iVar17 = iVar17 * 0xac;
  if (0 < *(int *)(iVar17 + 0x84 + DAT_0073b5c8)) {
    do {
      i = j * 0x20;
      pfVar15 = (float *)FUN_004b42a0();
      fVar8 = *pfVar15;
      fVar9 = pfVar15[1];
      fVar10 = pfVar15[2];
      if (j == 0) {
        FUN_004c5930(0,0,0xf0,s_vertex_x__06f__y__06f__z__06f_005a28c0,(double)fVar8,(double)fVar9,
                     (double)fVar10);
      }
      pfVar15 = (float *)FUN_004b4070(local_54,local_48);
      fVar11 = *pfVar15;
      fVar8 = fVar2 + fVar8;
      fVar12 = pfVar15[1];
      fVar13 = pfVar15[2];
      fVar9 = fVar3 + fVar9;
      fVar10 = fVar4 + fVar10;
      if (j == 0) {
        FUN_004c5930(0,0,0x104,s_vertex_x__06f__y__06f__z__06f_005a28e0,(double)fVar8,(double)fVar9,
                     (double)fVar10);
      }
      fVar8 = fVar8 - fVar5;
      fVar9 = fVar9 - fVar6;
      fVar10 = fVar10 - fVar7;
      fVar14 = SQRT(fVar8 * fVar8 + fVar9 * fVar9 + fVar10 * fVar10);
      fVar8 = fVar8 / fVar14;
      fVar9 = fVar9 / fVar14;
      fVar10 = fVar10 / fVar14;
      if (j == 0) {
        FUN_004c5930(0,0,0x118,s_eye_x__06f__y__06f__z__06f_005a2900,(double)fVar8,(double)fVar9,
                     (double)fVar10);
      }
      fVar14 = fVar8 * fVar11 + fVar12 * fVar9 + fVar13 * fVar10;
      fVar14 = fVar14 + fVar14;
      fVar8 = fVar11 * fVar14 - fVar8;
      fVar9 = fVar12 * fVar14 - fVar9;
      fVar10 = fVar14 * fVar13 - fVar10;
      if (j == 0) {
        FUN_004c5930(0,0,300,s_reflect_x__06f__y__06f__z__06f_005a291c,(double)fVar8,(double)fVar9,
                     (double)fVar10);
      }
      fVar10 = fVar10 + 1.0;
      fVar10 = fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8;
      if (fVar10 == 0.0) {
        fVar10 = 1.0;
      }
      else {
        fVar10 = SQRT(fVar10);
      }
      j = j + 1;
      *(float *)(*(int *)(iVar17 + 0x80 + DAT_0073b5c8) + 0x18 + i) =
           fVar8 / (fVar10 + fVar10) + 0.5;
      *(float *)(*(int *)(iVar17 + 0x80 + DAT_0073b5c8) + 0x1c + i) =
           fVar9 / (fVar10 + fVar10) + 0.5;
    } while (j < *(int *)(iVar17 + 0x84 + DAT_0073b5c8));
  }
  return;
}


/* ==== 00451d60 FUN_00451d60 ==== */

void FUN_00451d60(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00451d70 FUN_00451d70 ==== */

void FUN_00451d70(void)

{
  FUN_005584e0(&LAB_00451d80);
  return;
}


/* ==== 00451da0 FUN_00451da0 ==== */

void FUN_00451da0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00451db0 FUN_00451db0 ==== */

void FUN_00451db0(void)

{
  FUN_005584e0(&LAB_00451dc0);
  return;
}


/* ==== 00451e60 FUN_00451e60 ==== */

void FUN_00451e60(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00451e70 FUN_00451e70 ==== */

void FUN_00451e70(void)

{
  FUN_005584e0(&LAB_00451e80);
  return;
}


/* ==== 00451ea0 FUN_00451ea0 ==== */

void FUN_00451ea0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00451eb0 FUN_00451eb0 ==== */

void FUN_00451eb0(void)

{
  FUN_005584e0(&LAB_00451ec0);
  return;
}


/* ==== 00451ed0 FUN_00451ed0 ==== */

void FUN_00451ed0(int param_1)

{
  FUN_004a79d0(param_1,0,0,0,0,0,0,0x43160000,0x3f666666,0x3e4ccccd,0,&LAB_004544c0,0,1);
  FUN_004a7190(param_1);
  FUN_00450b00(param_1,PTR_s_PAAL_HIT_CAR_005a293c);
  *(undefined4 *)(param_1 * 0xf0 + 0x2c + DAT_00715e50) = 0;
  return;
}


/* ==== 00452110 FUN_00452110 ==== */

void FUN_00452110(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00452120 FUN_00452120 ==== */

void FUN_00452120(void)

{
  FUN_005584e0(&LAB_00452130);
  return;
}


/* ==== 00452150 FUN_00452150 ==== */

void FUN_00452150(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00452160 FUN_00452160 ==== */

void FUN_00452160(void)

{
  FUN_005584e0(&LAB_00452170);
  return;
}


