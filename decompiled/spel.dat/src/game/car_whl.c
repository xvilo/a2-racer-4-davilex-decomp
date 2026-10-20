/* spel.dat — game/car_whl.CPP: 27 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004345a0 FUN_004345a0 ==== */

void FUN_004345a0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  int local_8;
  int local_4;
  
  FUN_00431b00();
  FUN_004c5930(0,10,0,s_Vehicle_Wheel_Data_00598d18);
  FUN_004c5930(0,10,0x28,s_Front_Wheel_Set_00598d2c);
  FUN_004c5930(0,10,0x3c,s_Front_Wheel_Factor_00598d3c);
  FUN_004c5930(0,10,0x50,s_Rear_Wheel_Set_00598d50);
  FUN_004c5930(0,10,100,s_Rear_Wheel_Factor_00598d60);
  FUN_004c5930(0,10,0x78,s_Wheel_Radius_00598d74);
  iVar2 = (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4;
  local_8 = FUN_00432ef0(*(undefined4 *)(&DAT_006b2d0c + iVar2),
                         *(undefined4 *)(&DAT_006b2d20 + iVar2),
                         *(undefined4 *)(&DAT_006b2d34 + iVar2));
  FUN_004c5930(0,0xfa,0x28,s__d_00598d84,local_8);
  FUN_004c5930(0,0xfa,0x3c,s__f_00598d88,
               (double)*(float *)(&DAT_006b2d48 + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4));
  iVar2 = (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4;
  local_4 = FUN_00432ef0(*(undefined4 *)(&DAT_006b2d5c + iVar2),
                         *(undefined4 *)(&DAT_006b2d70 + iVar2),
                         *(undefined4 *)(&DAT_006b2d84 + iVar2));
  FUN_004c5930(0,0xfa,0x50,s__d_00598d8c,local_4);
  FUN_004c5930(0,0xfa,100,s__f_00598d90,
               (double)*(float *)(&DAT_006b2d98 + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4));
  FUN_004c5930(0,0xfa,0x78,s__f_00598d94,(double)*(float *)(&DAT_006b2e24 + DAT_006c34fc * 0x268));
  iVar2 = FUN_00432f40(5,0);
  do {
    if (iVar2 == -1) {
      return;
    }
    switch(iVar2) {
    case 0:
      FUN_00433100(&local_8,1,0x28,0);
      iVar2 = (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4;
      *(undefined4 *)(&DAT_006b2d0c + iVar2) = (&DAT_00597eb4)[local_8 * 3];
      uVar1 = (&DAT_00597ebc)[local_8 * 3];
      *(undefined4 *)(&DAT_006b2d20 + iVar2) = (&DAT_00597eb8)[local_8 * 3];
      *(undefined4 *)(&DAT_006b2d34 + iVar2) = uVar1;
      break;
    case 1:
      uVar4 = 0x3c3dcccccd;
      puVar3 = &DAT_006b2d48 + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4;
      goto LAB_004348c1;
    case 2:
      FUN_00433100(&local_4,1,0x50,0,9);
      iVar2 = (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4;
      *(undefined4 *)(&DAT_006b2d5c + iVar2) = (&DAT_00597eb4)[local_4 * 3];
      uVar1 = (&DAT_00597ebc)[local_4 * 3];
      *(undefined4 *)(&DAT_006b2d70 + iVar2) = (&DAT_00597eb8)[local_4 * 3];
      *(undefined4 *)(&DAT_006b2d84 + iVar2) = uVar1;
      break;
    case 3:
      uVar4 = 0x643dcccccd;
      puVar3 = &DAT_006b2d98 + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4;
      goto LAB_004348c1;
    case 4:
      uVar4 = 0x783dcccccd;
      puVar3 = &DAT_006b2e24 + DAT_006c34fc * 0x268;
LAB_004348c1:
      FUN_00433020(puVar3,uVar4);
    }
    iVar2 = FUN_00432f40();
  } while( true );
}


/* ==== 00434900 FUN_00434900 ==== */

void FUN_00434900(void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  FUN_00431b00();
  FUN_004c5930(0,10,0,s_Vehicle_Engine_Data_00598d98);
  FUN_004c5930(0,10,0x28,s_Engine_Horsepowers_00598dac);
  FUN_004c5930(0,10,0x3c,s_Maximum_RPM_00598dc0);
  FUN_004c5930(0,10,0x50,s_Minimum_RPM_00598dcc);
  FUN_004c5930(0,10,100,s_Maximum_Speed___00598dd8);
  FUN_004c5930(0,10,0x78,s_Axle_Torque_Ratio_00598de8);
  FUN_004c5930(0,10,0x8c,s_Axle_Ratio_00598dfc);
  FUN_004c5930(0,0xfa,0x28,s__f_00598e08,
               (double)*(float *)(&DAT_006b2c1c + (DAT_006fbb40 + DAT_006c34fc * 0x9a) * 4));
  FUN_004c5930(0,0xfa,0x3c,s__f_00598e0c,
               (double)*(float *)(&DAT_006b2c30 + (DAT_006fbb40 + DAT_006c34fc * 0x9a) * 4));
  FUN_004c5930(0,0xfa,0x50,s__f_00598e10,
               (double)*(float *)(&DAT_006b2c44 + (DAT_006fbb40 + DAT_006c34fc * 0x9a) * 4));
  FUN_004c5930(0,0xfa,100,s__f_00598e14,
               (double)*(float *)(&DAT_006b2c58 + (DAT_006fbb40 + DAT_006c34fc * 0x9a) * 4));
  FUN_004c5930(0,0xfa,0x78,s__f_00598e18,
               (double)*(float *)(&DAT_006b2c6c + (DAT_006fbb40 + DAT_006c34fc * 0x9a) * 4));
  FUN_004c5930(0,0xfa,0x8c,s__f_00598e1c,
               (double)*(float *)(&DAT_006b2c80 + (DAT_006fbb40 + DAT_006c34fc * 0x9a) * 4));
  iVar1 = FUN_00432f40(6,0);
  do {
    if (iVar1 == -1) {
      return;
    }
    switch(iVar1) {
    case 0:
      uVar3 = 0x2840a00000;
      puVar2 = &DAT_006b2c1c + (DAT_006fbb40 + DAT_006c34fc * 0x9a) * 4;
      break;
    case 1:
      uVar3 = 0x3c42480000;
      puVar2 = &DAT_006b2c30 + (DAT_006fbb40 + DAT_006c34fc * 0x9a) * 4;
      break;
    case 2:
      uVar3 = 0x5042480000;
      puVar2 = &DAT_006b2c44 + (DAT_006fbb40 + DAT_006c34fc * 0x9a) * 4;
      break;
    case 3:
      uVar3 = 0x6440a00000;
      puVar2 = &DAT_006b2c58 + (DAT_006fbb40 + DAT_006c34fc * 0x9a) * 4;
      break;
    case 4:
      uVar3 = 0x783dcccccd;
      puVar2 = &DAT_006b2c6c + (DAT_006fbb40 + DAT_006c34fc * 0x9a) * 4;
      break;
    case 5:
      uVar3 = 0x8c3dcccccd;
      puVar2 = &DAT_006b2c80 + (DAT_006fbb40 + DAT_006c34fc * 0x9a) * 4;
      break;
    default:
      goto switchD_00434ae9_default;
    }
    FUN_00433020(puVar2,uVar3);
switchD_00434ae9_default:
    iVar1 = FUN_00432f40(6);
  } while( true );
}


/* ==== 00434c20 FUN_00434c20 ==== */

void FUN_00434c20(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  FUN_00431b00();
  FUN_004c5930(0,10,0,s_General_Vehicle_Data_00598e20);
  FUN_004c5930(0,10,0x28,s_Vehicle_Mass___00598e38);
  FUN_004c5930(0,10,0x3c,s_Center_Of_Mass_x___00598e48);
  FUN_004c5930(0,10,0x50,s_Center_Of_Mass_y___00598e5c);
  FUN_004c5930(0,10,100,s_Center_Of_Mass_z___00598e70);
  FUN_004c5930(0,10,0x78,s_Max_Steering_Angle_00598e84);
  FUN_004c5930(0,10,0x8c,s_Max_Speed_Steer_Angle_00598e98);
  FUN_004c5930(0,10,0xa0,s_Body_Extra_Gravity___00598eb0);
  FUN_004c5930(0,10,0xb4,s_Front_Brake_Power_00598ec8);
  FUN_004c5930(0,10,200,s_Rear_Brake_Power_00598edc);
  FUN_004c5930(0,10,0xdc,s_Handbrake_Power_00598ef0);
  FUN_004c5930(0,0xfa,0x28,s__f_00598f00,(double)(float)(&DAT_006b2bc0)[DAT_006c34fc * 0x9a]);
  FUN_004c5930(0,0xfa,0x3c,s__f_00598f04,(double)(float)(&DAT_006b2bc4)[DAT_006c34fc * 0x9a]);
  FUN_004c5930(0,0xfa,0x50,s__f_00598f08,(double)*(float *)(&DAT_006b2bc8 + DAT_006c34fc * 0x268));
  FUN_004c5930(0,0xfa,100,s__f_00598f0c,(double)*(float *)(&DAT_006b2bcc + DAT_006c34fc * 0x268));
  FUN_004c5930(0,0xfa,0x78,s__f_00598f10,(double)*(float *)(&DAT_006b2bd0 + DAT_006c34fc * 0x268));
  FUN_004c5930(0,0xfa,0x8c,s__f_00598f14,(double)*(float *)(&DAT_006b2bd4 + DAT_006c34fc * 0x268));
  FUN_004c5930(0,0xfa,0xa0,s__f_00598f18,(double)*(float *)(&DAT_006b2bd8 + DAT_006c34fc * 0x268));
  FUN_004c5930(0,0xfa,0xb4,s__f_00598f1c,
               (double)*(float *)(&DAT_006b2bdc + (DAT_006fbb4c + DAT_006c34fc * 0x9a) * 4));
  FUN_004c5930(0,0xfa,200,s__f_00598f20,
               (double)*(float *)(&DAT_006b2bf0 + (DAT_006fbb4c + DAT_006c34fc * 0x9a) * 4));
  FUN_004c5930(0,0xfa,0xdc,s__f_00598f24,(double)*(float *)(&DAT_006b2c04 + DAT_006c34fc * 0x268));
  iVar1 = FUN_00432f40(10,0);
  do {
    if (iVar1 == -1) {
      return;
    }
    switch(iVar1) {
    case 0:
      uVar3 = 0x2842480000;
      puVar2 = &DAT_006b2bc0 + DAT_006c34fc * 0x9a;
      break;
    case 1:
      uVar3 = 0x3c3dcccccd;
      puVar2 = &DAT_006b2bc4 + DAT_006c34fc * 0x9a;
      break;
    case 2:
      uVar3 = 0x503dcccccd;
      puVar2 = (undefined4 *)(&DAT_006b2bc8 + DAT_006c34fc * 0x268);
      break;
    case 3:
      uVar3 = 0x643dcccccd;
      puVar2 = (undefined4 *)(&DAT_006b2bcc + DAT_006c34fc * 0x268);
      break;
    case 4:
      uVar3 = 0x783f800000;
      puVar2 = (undefined4 *)(&DAT_006b2bd0 + DAT_006c34fc * 0x268);
      break;
    case 5:
      uVar3 = 0x8c3f800000;
      puVar2 = (undefined4 *)(&DAT_006b2bd4 + DAT_006c34fc * 0x268);
      break;
    case 6:
      uVar3 = 0xa03dcccccd;
      puVar2 = (undefined4 *)(&DAT_006b2bd8 + DAT_006c34fc * 0x268);
      break;
    case 7:
      uVar3 = 0xb43dcccccd;
      puVar2 = (undefined4 *)(&DAT_006b2bdc + (DAT_006fbb4c + DAT_006c34fc * 0x9a) * 4);
      break;
    case 8:
      uVar3 = 0xc83dcccccd;
      puVar2 = (undefined4 *)(&DAT_006b2bf0 + (DAT_006fbb4c + DAT_006c34fc * 0x9a) * 4);
      break;
    case 9:
      uVar3 = 0xdc3f000000;
      puVar2 = (undefined4 *)(&DAT_006b2c04 + DAT_006c34fc * 0x268);
      break;
    default:
      goto switchD_00434ef8_default;
    }
    FUN_00433020(puVar2,uVar3);
switchD_00434ef8_default:
    iVar1 = FUN_00432f40(10);
  } while( true );
}


/* ==== 004350b0 FUN_004350b0 ==== */

void FUN_004350b0(void)

{
  int iVar1;
  
  FUN_00431b00();
  FUN_004c5930(0,10,0,s_Vehicle_Tweak_Menu_00598f28);
  FUN_004c5930(0,10,0x28,s_General_Vehicle_Data_00598f3c);
  FUN_004c5930(0,10,0x3c,s_Engine_Data_00598f54);
  FUN_004c5930(0,10,0x50,s_Gearbox_Data_00598f60);
  FUN_004c5930(0,10,100,s_Wheel_Data_00598f70);
  FUN_004c5930(0,10,0x78,s_Suspension_Data_00598f7c);
  iVar1 = FUN_00431c20(5);
  while (iVar1 != -1) {
    switch(iVar1) {
    case 0:
      FUN_00434c20();
      break;
    case 1:
      FUN_00434900();
      break;
    case 2:
      FUN_00433c30();
      break;
    case 3:
      FUN_004345a0();
      break;
    case 4:
      FUN_00433f30();
    }
    FUN_00431b00();
    FUN_004c5930(0,10,0,s_Vehicle_Tweak_Menu_00598f8c);
    FUN_004c5930(0,10,0x28,s_General_Vehicle_Data_00598fa0);
    FUN_004c5930(0,10,0x3c,s_Engine_Data_00598fb8);
    FUN_004c5930(0,10,0x50,s_Gearbox_Data_00598fc4);
    FUN_004c5930(0,10,100,s_Wheel_Data_00598fd4);
    FUN_004c5930(0,10,0x78,s_Suspension_Data_00598fe0);
    iVar1 = FUN_00431c20(5);
  }
  return;
}


/* ==== 004351f0 FUN_004351f0 ==== */

void FUN_004351f0(void)

{
  int iVar1;
  
  FUN_00431ad0(0x20);
  FUN_00431b00();
  DAT_006c34fc = DAT_006fbae4;
  FUN_004c5930(0,10,0,s_Tweak_Main_Menu_00598ff0);
  FUN_004c5930(0,10,0x28,s_Cartype_Selection_00599000);
  FUN_004c5930(0,10,0x3c,s_Edit_Vehicle_Data_00599014);
  FUN_004c5930(0,10,0x50,s_Save_and_Leave_00599028);
  FUN_004c5930(0,10,100,s_Leave_00599038);
  iVar1 = FUN_00431c20(4);
  while (iVar1 != -1) {
    switch(iVar1) {
    case 0:
      FUN_00433950();
      break;
    case 1:
      FUN_004350b0();
      break;
    case 2:
      FUN_00433270();
      FUN_00433300(DAT_006fba58);
      return;
    case 3:
      FUN_00433300(DAT_006fba58);
      return;
    }
    FUN_00431b00();
    FUN_004c5930(0,10,0,s_Tweak_Main_Menu_00599040);
    FUN_004c5930(0,10,0x28,s_Cartype_Selection_00599050);
    FUN_004c5930(0,10,0x3c,s_Edit_Vehicle_Data_00599064);
    FUN_004c5930(0,10,0x50,s_Save_and_Leave_00599078);
    FUN_004c5930(0,10,100,s_Leave_00599088);
    iVar1 = FUN_00431c20(4);
  }
  FUN_00433300(DAT_006fba58);
  return;
}


/* ==== 00435340 FUN_00435340 ==== */

void FUN_00435340(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00435350 FUN_00435350 ==== */

void FUN_00435350(void)

{
  FUN_005584e0(&LAB_00435360);
  return;
}


/* ==== 00435380 FUN_00435380 ==== */

void FUN_00435380(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00435390 FUN_00435390 ==== */

void FUN_00435390(void)

{
  FUN_005584e0(&LAB_004353a0);
  return;
}


/* ==== 004353e0 FUN_004353e0 ==== */

void FUN_004353e0(undefined4 param_1,undefined4 param_2)

{
  FUN_00435760(param_1,param_2);
  FUN_00436170(param_1,param_2);
  FUN_004370f0(param_1,param_2);
  return;
}


/* ==== 00435410 FUN_00435410 ==== */

void FUN_00435410(undefined4 param_1,undefined4 param_2)

{
  FUN_00435c60(param_1);
  FUN_00436850(param_1,param_2);
  FUN_00437370(param_1);
  return;
}


/* ==== 00435440 FUN_00435440 ==== */

void FUN_00435440(undefined4 param_1,undefined4 param_2)

{
  FUN_00435ab0(param_1);
  FUN_00436850(param_1,param_2);
  FUN_00437370(param_1);
  return;
}


/* ==== 00435470 FUN_00435470 ==== */

void FUN_00435470(undefined4 param_1,undefined4 param_2)

{
  FUN_00435ab0(param_1);
  FUN_00436850(param_1,param_2);
  FUN_00437370(param_1);
  return;
}


/* ==== 004354a0 FUN_004354a0 ==== */

void FUN_004354a0(int param_1)

{
  char local_c8 [200];
  
  FUN_004c3f10(param_1,local_c8,199);
  FUN_00558d27(local_c8,s__f_00599090);
  return;
}


/* ==== 004354e0 FUN_004354e0 ==== */

void FUN_004354e0(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  int i;
  undefined1 *puVar2;
  char *pcVar3;
  undefined1 local_e8 [32];
  char local_c8 [200];
  
  i = FUN_00448c90(&DAT_006fa558,s_Car_Configurations_00599094);
  puVar2 = *(undefined1 **)(i + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60();
  FUN_005587a3(local_e8,s__d_005990a8,param_1,puVar2);
  FUN_004c3d10(s_WHEEL_POSITIONS_005990ac,local_e8,local_c8,199);
  i = -1;
  pcVar3 = local_c8;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (i == -2) {
    i = FUN_00448c90(&DAT_006fa558,s_Car_Configurations_005990e0);
    puVar2 = *(undefined1 **)(i + 4);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_0057629c;
    }
    FUN_004c4150(s___s___s__d____No_valid_ini_setti_005990f4,puVar2,
                 s_C__Work_A2IV_Game_prog_car_whl_C_005990bc,0x80,param_1);
  }
  i = FUN_004c3d60(local_c8,0);
  if (i != 6) {
    i = FUN_00448c90(&DAT_006fa558,s_Car_Configurations_0059914c);
    puVar2 = *(undefined1 **)(i + 4);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_0057629c;
    }
    FUN_004c4150(s___s___s__d____Not_the_right_numb_00599160,puVar2,
                 s_C__Work_A2IV_Game_prog_car_whl_C_00599128,0x8b,param_1);
  }
  FUN_004354a0(0,param_2);
  FUN_004354a0(1,param_2 + 4);
  FUN_004354a0(2,param_2 + 8);
  FUN_004354a0(3,param_3);
  FUN_004354a0(4,param_3 + 4);
  FUN_004354a0(5,param_3 + 8);
  return;
}


/* ==== 00435620 FUN_00435620 ==== */

void FUN_00435620(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  int i;
  undefined1 *puVar2;
  char *pcVar3;
  undefined1 local_e8 [32];
  char local_c8 [200];
  
  i = FUN_00448c90(&DAT_006fa558,s_Car_Configurations_005991b0);
  puVar2 = *(undefined1 **)(i + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60();
  FUN_005587a3(local_e8,s__d_005991c4,param_1,puVar2);
  FUN_004c3d10(s_LIGHT_POSITIONS_005991c8,local_e8,local_c8,199);
  i = -1;
  pcVar3 = local_c8;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (i == -2) {
    i = FUN_00448c90(&DAT_006fa558,s_Car_Configurations_005991fc);
    puVar2 = *(undefined1 **)(i + 4);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_0057629c;
    }
    FUN_004c4150(s___s___s__d____No_valid_ini_setti_00599210,puVar2,
                 s_C__Work_A2IV_Game_prog_car_whl_C_005991d8,0xa8,param_1);
  }
  i = FUN_004c3d60(local_c8,0);
  if (i != 6) {
    i = FUN_00448c90(&DAT_006fa558,s_Car_Configurations_00599268);
    puVar2 = *(undefined1 **)(i + 4);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_0057629c;
    }
    FUN_004c4150(s___s___s__d____Not_the_right_numb_0059927c,puVar2,
                 s_C__Work_A2IV_Game_prog_car_whl_C_00599244,0xb3,param_1);
  }
  FUN_004354a0(0,param_2);
  FUN_004354a0(1,param_2 + 4);
  FUN_004354a0(2,param_2 + 8);
  FUN_004354a0(3,param_3);
  FUN_004354a0(4,param_3 + 4);
  FUN_004354a0(5,param_3 + 8);
  return;
}


/* ==== 00435760 FUN_00435760 ==== */

void FUN_00435760(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (param_1 < 0) {
    FUN_004c4150(s__s__d____Illegal_car_type___d__005992e0,
                 s_C__Work_A2IV_Game_prog_car_whl_C_005992bc,0xc4,param_1);
  }
  iVar2 = param_2 * 0xf0;
  iVar1 = *(int *)(iVar2 + 0x24 + DAT_00715e50) * 0xa9;
  if (*(int *)(DAT_0073b168 + *(int *)(iVar1 + 4 + DAT_0073b0d0) * 9) < 2) {
    FUN_004c4150(s__s__d____car_type___d__doesn_t_h_00599328,
                 s_C__Work_A2IV_Game_prog_car_whl_C_00599304,0xca,param_1);
  }
  FUN_004354e0(param_1,&fStack_54,&fStack_48);
  uStack_2c = uStack_50;
  uStack_28 = uStack_4c;
  uStack_4 = uStack_4c;
  uStack_8 = uStack_50;
  fStack_18 = fStack_48;
  uStack_20 = uStack_44;
  uStack_14 = uStack_44;
  uStack_3c = 0;
  uStack_1c = uStack_40;
  uStack_10 = uStack_40;
  uStack_38 = 0;
  uStack_34 = 0;
  fStack_30 = -fStack_54;
  fStack_24 = -fStack_48;
  FUN_004aa390(param_2,*(undefined4 *)(iVar1 + 4 + DAT_0073b0d0),1,fStack_30,uStack_50,uStack_4c,0,0
               ,0);
  fStack_30 = 0.0;
  uStack_2c = 0;
  uStack_28 = 0;
  FUN_004aa390(param_2,*(undefined4 *)(iVar1 + 4 + DAT_0073b0d0),1,fStack_54,uStack_8,uStack_4,0,0,0
              );
  fStack_30 = 0.0;
  uStack_2c = 0;
  uStack_28 = 0;
  FUN_004aa390(param_2,*(undefined4 *)(iVar1 + 4 + DAT_0073b0d0),1,fStack_24,uStack_20,uStack_1c,0,0
               ,0);
  fStack_24 = 0.0;
  uStack_20 = 0;
  uStack_1c = 0;
  FUN_004aa390(param_2,*(undefined4 *)(iVar1 + 4 + DAT_0073b0d0),1,fStack_18,uStack_14,uStack_10,0,0
               ,0);
  iVar1 = FUN_004a8600(iVar2 + DAT_00715e50,0);
  FUN_004b5770(DAT_0073b0d0 + iVar1 * 0xa9);
  iVar1 = FUN_004a8600(iVar2 + DAT_00715e50,1);
  FUN_004b5770(DAT_0073b0d0 + iVar1 * 0xa9);
  iVar1 = FUN_004a8600(iVar2 + DAT_00715e50,2);
  FUN_004b5770(DAT_0073b0d0 + iVar1 * 0xa9);
  iVar1 = FUN_004a8600(iVar2 + DAT_00715e50,3);
  FUN_004b5770(DAT_0073b0d0 + iVar1 * 0xa9);
  return;
}


/* ==== 00435a70 FUN_00435a70 ==== */

float10 FUN_00435a70(float param_1)

{
  float10 fVar1;
  
  fVar1 = -(float10)5.0;
  if (fVar1 <= (float10)param_1) {
    if (5.0 < param_1) {
      return (float10)5.0;
    }
    fVar1 = (float10)param_1;
  }
  return fVar1;
}


/* ==== 00435ab0 FUN_00435ab0 ==== */

void FUN_00435ab0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  int i;
  int k;
  int j;
  undefined4 *puVar5;
  float10 fVar6;
  undefined4 local_18c [12];
  float local_15c;
  float local_158;
  float local_154;
  undefined4 local_14c [12];
  float local_11c;
  float local_118;
  float local_114;
  undefined1 local_10c [12];
  undefined4 local_100 [13];
  float local_cc;
  undefined4 local_c0 [16];
  undefined1 local_80 [64];
  undefined1 local_40 [64];
  
  param_1 = param_1 * 0xf0;
  if (*(int *)(param_1 + 0x10 + DAT_00715e50) != 0) {
    puVar4 = (undefined4 *)(DAT_0073b0d0 + *(int *)(param_1 + 0x24 + DAT_00715e50) * 0xa9 + 0x10);
    puVar5 = local_14c;
    for (i = 0x10; fVar3 = local_114, fVar2 = local_118, fVar1 = local_11c, i != 0; i = i + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    local_11c = 0.0;
    local_118 = 0.0;
    local_114 = 0.0;
    puVar4 = (undefined4 *)FUN_004b4310(local_100,local_14c);
    j = 0;
    puVar5 = local_c0;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    do {
      puVar4 = (undefined4 *)FUN_004a1e20(local_80);
      puVar5 = local_18c;
      for (i = 0x10; i != 0; i = i + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      FUN_004a1dd0(local_10c);
      local_15c = local_15c - fVar1;
      local_158 = local_158 - fVar2;
      local_154 = local_154 - fVar3;
      puVar4 = (undefined4 *)FUN_004b4110(local_40,local_c0,local_18c);
      puVar5 = local_100;
      for (i = 0x10; i != 0; i = i + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      fVar6 = (float10)FUN_00435a70(local_cc);
      local_cc = (float)fVar6;
      i = FUN_004a8600(param_1 + DAT_00715e50,j);
      j = j + 1;
      puVar4 = local_100;
      puVar5 = (undefined4 *)(DAT_0073b0d0 + i * 0xa9 + 0x10);
      for (k = 0x10; k != 0; k = k + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    } while (j < 4);
  }
  return;
}


/* ==== 00435c60 FUN_00435c60 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00435c60(int param_1)

{
  float fVar1;
  int this_val;
  int iVar2;
  int i;
  float10 fVar3;
  float10 fVar4;
  
  iVar2 = param_1 * 0xf0;
  if (*(int *)(iVar2 + 0xac + DAT_00715e50) < 4) {
    FUN_004c4150(s__s__d____object___d__doesn_t_hav_0059937c,
                 s_C__Work_A2IV_Game_prog_car_whl_C_00599358,0x11c,param_1);
  }
  this_val = FUN_004a8600(DAT_00715e50 + iVar2,0);
  fVar1 = *(float *)(DAT_0073b5c8 + 0x14 +
                    *(int *)(*(int *)(*(int *)(*(int *)(DAT_0073b0d0 + this_val * 0xa9 + 4) * 9 + 4
                                              + DAT_0073b168) + 4) * 0x10 + DAT_0073b120) * 0xac);
  this_val = iVar2 + DAT_00715e50;
  fVar3 = (float10)FUN_004a6800(&DAT_007128b0);
  fVar4 = (float10)ABS(fVar1);
  fVar1 = (float)(((float10)_DAT_005b23b8 / (fVar4 + fVar4)) * fVar3 *
                 (float10)*(float *)(this_val + 0xc4));
  this_val = FUN_004a8600(this_val,0);
  *(float *)(DAT_0073b0d0 + this_val + 0x74 + this_val * 0xa8) =
       *(float *)(DAT_0073b0d0 + this_val + 0x74 + this_val * 0xa8) - fVar1;
  this_val = FUN_004a8600(iVar2 + DAT_00715e50,1);
  *(float *)(DAT_0073b0d0 + this_val + 0x74 + this_val * 0xa8) =
       *(float *)(DAT_0073b0d0 + this_val + 0x74 + this_val * 0xa8) - fVar1;
  this_val = FUN_004a8600(iVar2 + DAT_00715e50,2);
  *(float *)(DAT_0073b0d0 + this_val + 0x74 + this_val * 0xa8) =
       *(float *)(DAT_0073b0d0 + this_val + 0x74 + this_val * 0xa8) - fVar1;
  this_val = FUN_004a8600(iVar2 + DAT_00715e50,3);
  *(float *)(DAT_0073b0d0 + this_val + 0x74 + this_val * 0xa8) =
       *(float *)(DAT_0073b0d0 + this_val + 0x74 + this_val * 0xa8) - fVar1;
  this_val = FUN_004a8600(iVar2 + DAT_00715e50,0);
  *(float *)(DAT_0073b0d0 + this_val * 0xa9 + 0x78) =
       _DAT_005b23b8 * 0.083333336 * -0.01 * _DAT_006fbabc;
  this_val = FUN_004a8600(iVar2 + DAT_00715e50,1);
  i = 0;
  *(float *)(DAT_0073b0d0 + this_val * 0xa9 + 0x78) =
       _DAT_005b23b8 * 0.083333336 * -0.01 * _DAT_006fbabc;
  do {
    this_val = FUN_004a8600(iVar2 + DAT_00715e50,i);
    FUN_004b5770(DAT_0073b0d0 + this_val * 0xa9);
    i = i + 1;
  } while (i < 4);
  return;
}


/* ==== 00436170 FUN_00436170 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00436170(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  float fStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (param_1 < 0) {
    FUN_004c4150(s__s__d____Illegal_car_type___d__0059942c,
                 s_C__Work_A2IV_Game_prog_car_whl_C_00599408,0x18e,param_1);
  }
  iVar3 = param_2 * 0xf0;
  iVar2 = *(int *)(iVar3 + 0x24 + DAT_00715e50) * 0xa9;
  if (*(int *)(DAT_0073b168 + *(int *)(iVar2 + 4 + DAT_0073b0d0) * 9) < 4) {
    FUN_004c4150(s__s__d____car_type___d__doesn_t_h_00599474,
                 s_C__Work_A2IV_Game_prog_car_whl_C_00599450,0x194,param_1);
  }
  if (*(int *)(DAT_0073b168 + *(int *)(iVar2 + 4 + DAT_0073b0d0) * 9) < 5) {
    FUN_004c4150(s__s__d____car_type___d__doesn_t_h_005994cc,
                 s_C__Work_A2IV_Game_prog_car_whl_C_005994a8,0x197,param_1);
  }
  FUN_00435620(param_1,&fStack_54,&fStack_48);
  fStack_30 = -fStack_54;
  fStack_24 = -fStack_48;
  fStack_38 = _DAT_005b23b8 * 0.5;
  fStack_2c = (float)uStack_50;
  uStack_28 = uStack_4c;
  uStack_4 = uStack_4c;
  uStack_8 = uStack_50;
  fStack_18 = fStack_48;
  uStack_20 = uStack_44;
  uStack_14 = uStack_44;
  uStack_3c = 0;
  uStack_1c = uStack_40;
  uStack_10 = uStack_40;
  uStack_34 = 0;
  FUN_004aa390(param_2,*(undefined4 *)(iVar2 + 4 + DAT_0073b0d0),3,fStack_30,uStack_50,uStack_4c,0,
               fStack_38,0);
  if (DAT_006fb940 != 0) {
    iVar1 = FUN_004a8600(iVar3 + DAT_00715e50,*(int *)(iVar3 + 0xac + DAT_00715e50) + -1);
    *(undefined4 *)(DAT_0073b0d0 + iVar1 * 0xa9 + 0xa5) = 2;
  }
  fStack_2c = _DAT_005b23b8 * 0.5;
  fStack_30 = 0.0;
  uStack_28 = 0;
  FUN_004aa390(param_2,*(undefined4 *)(iVar2 + 4 + DAT_0073b0d0),3,fStack_54,uStack_8,uStack_4,0,
               fStack_2c,0);
  if (DAT_006fb940 != 0) {
    iVar1 = FUN_004a8600(DAT_00715e50 + iVar3,*(int *)(DAT_00715e50 + iVar3 + 0xac) + -1);
    *(undefined4 *)(DAT_0073b0d0 + iVar1 * 0xa9 + 0xa5) = 2;
  }
  fStack_30 = 0.0;
  fStack_2c = 0.0;
  uStack_28 = 0;
  FUN_004aa390(param_2,*(undefined4 *)(iVar2 + 4 + DAT_0073b0d0),4,fStack_24,uStack_20,uStack_1c,0,0
               ,0);
  if (DAT_006fb940 != 0) {
    iVar1 = FUN_004a8600(iVar3 + DAT_00715e50,*(int *)(iVar3 + 0xac + DAT_00715e50) + -1);
    *(undefined4 *)(DAT_0073b0d0 + iVar1 * 0xa9 + 0xa5) = 2;
  }
  fStack_24 = 0.0;
  uStack_20 = 0;
  uStack_1c = 0;
  FUN_004aa390(param_2,*(undefined4 *)(iVar2 + 4 + DAT_0073b0d0),4,fStack_18,uStack_14,uStack_10,0,0
               ,0);
  if (DAT_006fb940 != 0) {
    iVar2 = FUN_004a8600(iVar3 + DAT_00715e50,*(int *)(iVar3 + 0xac + DAT_00715e50) + -1);
    *(undefined4 *)(DAT_0073b0d0 + iVar2 * 0xa9 + 0xa5) = 2;
  }
  return;
}


/* ==== 00436510 FUN_00436510 ==== */

void FUN_00436510(int param_1,int param_2)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  undefined4 uVar4;
  int i;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float fStack_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float local_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined4 local_80 [16];
  undefined4 local_40 [16];
  
  iVar5 = param_1 * 0xf0;
  puVar6 = (undefined4 *)(DAT_0073b0d0 + *(int *)(DAT_00715e50 + 0x24 + iVar5) * 0xa9 + 0x10);
  puVar7 = local_40;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar6 = (undefined4 *)(DAT_00719b50 + 0x14 + (&DAT_006c3518)[DAT_006c3568] * 0x178);
  puVar7 = local_80;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  pfVar2 = (float *)FUN_004b4070(&local_a4,local_80);
  local_98 = *pfVar2;
  local_94 = pfVar2[1];
  local_90 = pfVar2[2];
  pfVar2 = (float *)FUN_004b4070(&local_a4,local_40);
  local_b0 = *pfVar2;
  local_ac = pfVar2[1];
  local_a8 = pfVar2[2];
  if (*(int *)(DAT_00715e50 + 0xac + iVar5) < 4) {
    FUN_004c4150(s__s__d____object___d__doesn_t_hav_00599524,
                 s_C__Work_A2IV_Game_prog_car_whl_C_00599500,0x1d0,param_1);
  }
  i = 0;
  do {
    if (i == 2) {
      local_b0 = -local_b0;
      local_ac = -local_ac;
      local_a8 = -local_a8;
      fStack_8c = local_b0;
      fStack_88 = local_ac;
      fStack_84 = local_a8;
    }
    fVar1 = local_98 * local_b0 + local_90 * local_a8 + local_94 * local_ac;
    if (0.0 < fVar1) {
      fVar1 = 0.0;
    }
    fStack_b4 = (ABS(fVar1) - 0.6) * 3.5;
    if (fStack_b4 < 0.0) {
      fStack_b4 = 0.0;
    }
    iVar3 = FUN_004a8600(DAT_00715e50 + iVar5,i);
    fStack_9c = fStack_b4;
    *(float *)(DAT_0073b0d0 + iVar3 * 0xa9 + 0x7c) = fStack_b4 * 1500.0;
    fStack_a0 = fStack_b4;
    local_a4 = fStack_b4;
    iVar3 = FUN_004a8600(DAT_00715e50 + iVar5,i);
    iVar3 = DAT_0073b0d0 + iVar3 * 0xa9;
    *(float *)(iVar3 + 0x80) = local_a4;
    *(float *)(iVar3 + 0x84) = fStack_a0;
    *(float *)(iVar3 + 0x88) = fStack_9c;
    iVar3 = FUN_004a8600(DAT_00715e50 + iVar5,i);
    FUN_004b5770(DAT_0073b0d0 + iVar3 * 0xa9);
    i = i + 1;
  } while (i < 4);
  if (param_2 != 0) {
    uVar4 = FUN_004a8600(DAT_00715e50 + iVar5,2);
    FUN_004a74a0(&DAT_00715b28,uVar4);
    uVar4 = FUN_004a8600(DAT_00715e50 + iVar5,3);
    FUN_004a74a0(&DAT_00715b28,uVar4);
  }
  if ((DAT_006fb940 == 0) || (DAT_006fb8d0 == 0)) {
    i = FUN_004a8600(DAT_00715e50 + iVar5,0);
    *(undefined1 *)(DAT_0073b0d0 + i * 0xa9 + 0x90) = 0;
    i = FUN_004a8600(DAT_00715e50 + iVar5,1);
    *(undefined1 *)(DAT_0073b0d0 + i * 0xa9 + 0x90) = 0;
    i = FUN_004a8600(DAT_00715e50 + iVar5,2);
    *(undefined1 *)(DAT_0073b0d0 + i * 0xa9 + 0x90) = 0;
    i = FUN_004a8600(DAT_00715e50 + iVar5,3);
    *(undefined1 *)(DAT_0073b0d0 + i * 0xa9 + 0x90) = 0;
  }
  return;
}


/* ==== 00436850 FUN_00436850 ==== */

void FUN_00436850(int param_1,int param_2)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  undefined4 uVar4;
  int i;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float fStack_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float local_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined4 local_80 [16];
  undefined4 local_40 [16];
  
  iVar5 = param_1 * 0xf0;
  puVar6 = (undefined4 *)(DAT_0073b0d0 + *(int *)(DAT_00715e50 + 0x24 + iVar5) * 0xa9 + 0x10);
  puVar7 = local_40;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar6 = (undefined4 *)(DAT_00719b50 + 0x14 + (&DAT_006c3518)[DAT_006c3568] * 0x178);
  puVar7 = local_80;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  pfVar2 = (float *)FUN_004b4070(&local_a4,local_80);
  local_98 = *pfVar2;
  local_94 = pfVar2[1];
  local_90 = pfVar2[2];
  pfVar2 = (float *)FUN_004b4070(&local_a4,local_40);
  local_b0 = *pfVar2;
  local_ac = pfVar2[1];
  local_a8 = pfVar2[2];
  if (*(int *)(DAT_00715e50 + 0xac + iVar5) < 8) {
    FUN_004c4150(s__s__d____object___d__doesn_t_hav_00599580,
                 s_C__Work_A2IV_Game_prog_car_whl_C_0059955c,0x1fe,param_1);
  }
  i = 4;
  do {
    if (i == 6) {
      local_b0 = -local_b0;
      local_ac = -local_ac;
      local_a8 = -local_a8;
      fStack_8c = local_b0;
      fStack_88 = local_ac;
      fStack_84 = local_a8;
    }
    fVar1 = local_98 * local_b0 + local_90 * local_a8 + local_94 * local_ac;
    if (0.0 < fVar1) {
      fVar1 = 0.0;
    }
    fStack_b4 = (ABS(fVar1) - 0.6) * 3.5;
    if (fStack_b4 < 0.0) {
      fStack_b4 = 0.0;
    }
    iVar3 = FUN_004a8600(DAT_00715e50 + iVar5,i);
    fStack_9c = fStack_b4;
    *(float *)(DAT_0073b0d0 + iVar3 * 0xa9 + 0x7c) = fStack_b4 * 1500.0;
    fStack_a0 = fStack_b4;
    local_a4 = fStack_b4;
    iVar3 = FUN_004a8600(DAT_00715e50 + iVar5,i);
    iVar3 = DAT_0073b0d0 + iVar3 * 0xa9;
    *(float *)(iVar3 + 0x80) = local_a4;
    *(float *)(iVar3 + 0x84) = fStack_a0;
    *(float *)(iVar3 + 0x88) = fStack_9c;
    iVar3 = FUN_004a8600(DAT_00715e50 + iVar5,i);
    FUN_004b5770(DAT_0073b0d0 + iVar3 * 0xa9);
    i = i + 1;
  } while (i < 8);
  if (param_2 != 0) {
    uVar4 = FUN_004a8600(DAT_00715e50 + iVar5,6);
    FUN_004a74a0(&DAT_00715b28,uVar4);
    uVar4 = FUN_004a8600(DAT_00715e50 + iVar5,7);
    FUN_004a74a0(&DAT_00715b28,uVar4);
  }
  if ((DAT_006fb940 == 0) || (DAT_006fb8d0 == 0)) {
    i = FUN_004a8600(DAT_00715e50 + iVar5,4);
    *(undefined1 *)(DAT_0073b0d0 + i * 0xa9 + 0x90) = 0;
    i = FUN_004a8600(DAT_00715e50 + iVar5,5);
    *(undefined1 *)(DAT_0073b0d0 + i * 0xa9 + 0x90) = 0;
    i = FUN_004a8600(DAT_00715e50 + iVar5,6);
    *(undefined1 *)(DAT_0073b0d0 + i * 0xa9 + 0x90) = 0;
    i = FUN_004a8600(DAT_00715e50 + iVar5,7);
    *(undefined1 *)(DAT_0073b0d0 + i * 0xa9 + 0x90) = 0;
  }
  return;
}


/* ==== 00436b90 FUN_00436b90 ==== */

void FUN_00436b90(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int this_val;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar1 = FUN_00558625();
  uVar1 = uVar1 & 0x800003ff;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffc00) + 1;
  }
  uVar8 = 0;
  uVar9 = 0;
  uVar4 = 0;
  uVar10 = 0;
  uVar5 = 0xc04ccccd;
  uVar6 = 0x41700000;
  uVar7 = 0xc0333333;
  uVar2 = FUN_004b75a0(&DAT_00712130,s_COPLIGHTS_005995b8);
  FUN_004aa390(param_1,uVar2,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
  if (DAT_006fb940 != 0) {
    this_val = param_1 * 0xf0 + DAT_00715e50;
    this_val = FUN_004a8600(this_val,*(int *)(this_val + 0xac) + -1);
    *(undefined4 *)(DAT_0073b0d0 + this_val * 0xa9 + 0xa5) = 2;
  }
  iVar3 = param_1 * 0xf0;
  this_val = FUN_004a8600(iVar3 + DAT_00715e50,*(int *)(iVar3 + 0xac + DAT_00715e50) + -1);
  *(float *)(DAT_0073b0d0 + this_val * 0xa9 + 0x78) = (float)(int)(DAT_005b23b4 / 2 + uVar1 + 0x400)
  ;
  uVar8 = 0;
  uVar9 = 0;
  uVar4 = 1;
  uVar10 = 0;
  uVar5 = 0x404ccccd;
  uVar6 = 0x41700000;
  uVar7 = 0xc0333333;
  uVar2 = FUN_004b75a0(&DAT_00712130,s_COPLIGHTS_005995c4);
  FUN_004aa390(param_1,uVar2,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
  if (DAT_006fb940 != 0) {
    this_val = FUN_004a8600(DAT_00715e50 + iVar3,*(int *)(DAT_00715e50 + iVar3 + 0xac) + -1);
    *(undefined4 *)(DAT_0073b0d0 + this_val * 0xa9 + 0xa5) = 2;
  }
  this_val = FUN_004a8600(iVar3 + DAT_00715e50,*(int *)(iVar3 + 0xac + DAT_00715e50) + -1);
  *(float *)(DAT_0073b0d0 + this_val * 0xa9 + 0x78) = (float)(int)(uVar1 + 0x400);
  return;
}


/* ==== 00436dc0 FUN_00436dc0 ==== */

void FUN_00436dc0(int param_1,undefined1 param_2)

{
  float *pfVar1;
  int k;
  undefined4 *puVar2;
  int i;
  int iVar3;
  undefined4 *puVar4;
  int j;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float local_124;
  float local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  int iStack_110;
  undefined1 auStack_10c [12];
  undefined4 local_100 [16];
  undefined4 auStack_c0 [16];
  undefined4 local_80 [16];
  undefined1 auStack_40 [64];
  
  iVar3 = param_1 * 0xf0;
  puVar2 = (undefined4 *)(DAT_0073b0d0 + *(int *)(DAT_00715e50 + 0x24 + iVar3) * 0xa9 + 0x10);
  puVar4 = local_100;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar2 = (undefined4 *)(DAT_00719b50 + 0x14 + (&DAT_006c3518)[DAT_006c3568] * 0x178);
  puVar4 = local_80;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  pfVar1 = (float *)FUN_004b4070(&local_140,local_80);
  local_128 = *pfVar1;
  local_124 = pfVar1[1];
  local_120 = pfVar1[2];
  if (*(int *)(DAT_00715e50 + 0xac + iVar3) < 0xb) {
    FUN_004c4150(s__s__d____object___d__doesn_t_hav_005995f4,
                 s_C__Work_A2IV_Game_prog_car_whl_C_005995d0,0x267,param_1);
  }
  local_114 = 0x3f800000;
  j = 9;
  local_118 = 0x3f800000;
  local_11c = 0x3f800000;
  do {
    i = FUN_004a8600(DAT_00715e50 + iVar3,j);
    k = FUN_004a8600(DAT_00715e50 + iVar3,j);
    pfVar1 = (float *)(DAT_0073b0d0 + k * 0xa9 + 0x78);
    FUN_004a6800(&DAT_007128b0);
    iStack_110 = __ftol();
    i = i * 0xa9;
    *pfVar1 = (float)iStack_110 + *pfVar1;
    puVar2 = (undefined4 *)(i + 0x80 + DAT_0073b0d0);
    *puVar2 = local_11c;
    puVar2[1] = local_118;
    puVar2[2] = local_114;
    FUN_004b5770(DAT_0073b0d0 + i);
    puVar2 = (undefined4 *)FUN_004b4110(auStack_40,local_100,i + 0x10 + DAT_0073b0d0);
    puVar4 = auStack_c0;
    for (k = 0x10; k != 0; k = k + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    pfVar1 = (float *)FUN_004b4070(auStack_10c,auStack_c0);
    fStack_134 = *pfVar1;
    fStack_130 = pfVar1[1];
    fStack_12c = pfVar1[2];
    local_140 = (ABS(fStack_134 * local_128 + fStack_130 * local_124 + fStack_12c * local_120) - 0.6
                ) * 12.0;
    if (local_140 < 0.0) {
      local_140 = 0.0;
    }
    pfVar1 = (float *)(i + 0x80 + DAT_0073b0d0);
    *pfVar1 = local_140;
    pfVar1[1] = local_140;
    pfVar1[2] = local_140;
    fStack_13c = local_140;
    fStack_138 = local_140;
    FUN_004b5770(i + DAT_0073b0d0);
    j = j + 1;
  } while (j < 0xb);
  i = FUN_004a8600(DAT_00715e50 + iVar3,9);
  *(undefined1 *)(DAT_0073b0d0 + i * 0xa9 + 0x90) = param_2;
  i = FUN_004a8600(DAT_00715e50 + iVar3,10);
  *(undefined1 *)(DAT_0073b0d0 + i * 0xa9 + 0x90) = param_2;
  if ((DAT_006fb940 == 0) || (DAT_006fb8d0 == 0)) {
    i = FUN_004a8600(DAT_00715e50 + iVar3,9);
    *(undefined1 *)(DAT_0073b0d0 + i * 0xa9 + 0x90) = 0;
    i = FUN_004a8600(DAT_00715e50 + iVar3,10);
    *(undefined1 *)(DAT_0073b0d0 + i * 0xa9 + 0x90) = 0;
  }
  return;
}


/* ==== 004370f0 FUN_004370f0 ==== */

void FUN_004370f0(undefined4 param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int i;
  int iVar7;
  float *pfVar8;
  
  i = (int)param_2;
  iVar7 = (int)param_2 * 0xf0;
  iVar5 = *(int *)(iVar7 + 0x24 + DAT_00715e50) * 0xa9;
  iVar6 = *(int *)(*(int *)(*(int *)(*(int *)(iVar5 + 4 + DAT_0073b0d0) * 9 + 4 + DAT_0073b168) + 8)
                   * 0x10 + DAT_0073b120);
  iVar4 = FUN_004b75a0(&DAT_00712130,s_CAR_REFLECT_0059962c);
  param_2 = 0.0;
  uVar3 = *(undefined4 *)(**(int **)(DAT_0073b168 + iVar4 * 9 + 4) * 0x10 + 4 + DAT_0073b120);
  if (*(int *)(DAT_0073b168 + *(int *)(iVar5 + 4 + DAT_0073b0d0) * 9) < 3) {
    FUN_004c4150(s__s__d____car_type___d__doesn_t_h_0059965c,
                 s_C__Work_A2IV_Game_prog_car_whl_C_00599638,0x296,param_1);
  }
  FUN_004aa4a0(i,iVar6,uVar3,0,0,0,0,0,0);
  if (DAT_006fb940 != 0) {
    iVar5 = FUN_004a8600(iVar7 + DAT_00715e50,*(int *)(iVar7 + 0xac + DAT_00715e50) + -1);
    *(undefined4 *)(DAT_0073b0d0 + iVar5 * 0xa9 + 0xa5) = 1;
  }
  FUN_004a8600(iVar7 + DAT_00715e50,*(int *)(iVar7 + 0xac + DAT_00715e50) + -1);
  iVar6 = iVar6 * 0xac;
  iVar5 = *(int *)(iVar6 + 0x84 + DAT_0073b5c8);
  if (0 < iVar5) {
    fVar2 = 0.0;
    pfVar8 = (float *)(*(int *)(iVar6 + 0x80 + DAT_0073b5c8) + 0x1c);
    i = iVar5;
    do {
      if (fVar2 < pfVar8[-1]) {
        fVar2 = pfVar8[-1];
      }
      if (param_2 < *pfVar8) {
        param_2 = *pfVar8;
      }
      pfVar8 = pfVar8 + 8;
      i = i + -1;
    } while (i != 0);
    if (fVar2 != 0.0) goto LAB_004372e5;
  }
  fVar2 = 1.0;
LAB_004372e5:
  if (param_2 == 0.0) {
    param_2 = 1.0;
  }
  i = 0;
  if (0 < iVar5) {
    iVar5 = 0;
    do {
      iVar4 = *(int *)(iVar6 + 0x80 + DAT_0073b5c8);
      i = i + 1;
      *(float *)(iVar4 + 0x18 + iVar5) = (1.0 / fVar2) * *(float *)(iVar4 + 0x18 + iVar5);
      iVar4 = *(int *)(iVar6 + 0x80 + DAT_0073b5c8);
      pfVar8 = (float *)(iVar4 + 0x1c + iVar5);
      pfVar1 = (float *)(iVar4 + 0x1c + iVar5);
      iVar5 = iVar5 + 0x20;
      *pfVar1 = (1.0 / param_2) * *pfVar8;
    } while (i < *(int *)(iVar6 + 0x84 + DAT_0073b5c8));
  }
  return;
}


/* ==== 00437370 FUN_00437370 ==== */

void FUN_00437370(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int i;
  int *piVar5;
  float *pfVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int iStack_e4;
  int iStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined4 *puStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  float fStack_7c;
  float fStack_70;
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [12];
  undefined1 auStack_4c [12];
  undefined4 auStack_40 [16];
  
  iVar8 = param_1 * 0xf0;
  local_80 = iVar8;
  if (*(int *)(iVar8 + 0xac + DAT_00715e50) < 9) {
    FUN_004c4150(s__s__d____object___d__doesn_t_hav_005996b0,
                 s_C__Work_A2IV_Game_prog_car_whl_C_0059968c,0x2b7,param_1);
  }
  iStack_84 = FUN_004a8600(iVar8 + DAT_00715e50,8);
  iStack_84 = iStack_84 * 0xa9;
  if (*(int *)(iStack_84 + DAT_0073b0d0) == 1) {
    iStack_e4 = *(int *)(iStack_84 + 0x99 + DAT_0073b0d0);
  }
  else if (*(int *)(iStack_84 + DAT_0073b0d0) == 2) {
    iStack_e4 = *(int *)(*(int *)(*(int *)(*(int *)(iStack_84 + 4 + DAT_0073b0d0) * 9 + 4 +
                                          DAT_0073b168) + 8) * 0x10 + DAT_0073b120);
  }
  else {
    iStack_e4 = *(int *)(iStack_84 + 0x99 + DAT_0073b0d0);
  }
  i = FUN_004a8600(iVar8 + DAT_00715e50,8);
  piVar5 = (int *)(i * 0xa9 + DAT_0073b0d0);
  if (*piVar5 == 1) {
    iStack_e0 = *(int *)((int)piVar5 + 0x99);
  }
  else if (*piVar5 == 2) {
    iStack_e0 = *(int *)(*(int *)(*(int *)(piVar5[1] * 9 + 4 + DAT_0073b168) + 8) * 0x10 +
                        DAT_0073b120);
  }
  else {
    iStack_e0 = *(int *)((int)piVar5 + 0x99);
  }
  puVar7 = (undefined4 *)(*(int *)(iVar8 + 0x24 + DAT_00715e50) * 0xa9 + DAT_0073b0d0 + 0x10);
  puVar10 = auStack_40;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar10 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar10 = puVar10 + 1;
  }
  i = *(int *)(iVar8 + 0x24 + DAT_00715e50) * 0xa9 + DAT_0073b0d0;
  fStack_9c = *(float *)(i + 0x50);
  fStack_98 = *(float *)(i + 0x54);
  fStack_94 = *(float *)(i + 0x58);
  pfVar6 = (float *)(DAT_00719b50 + 8 + (&DAT_006c3518)[DAT_006c3568] * 0x178);
  fStack_a8 = *pfVar6;
  fStack_a4 = pfVar6[1];
  fStack_a0 = pfVar6[2];
  if ((param_1 == DAT_006fba58) || (iStack_e4 != iStack_e0)) {
    i = 0;
    iVar11 = iStack_e4 * 0xac;
    if (0 < *(int *)(iVar11 + 0x84 + DAT_0073b5c8)) {
      iVar9 = 0;
      iStack_e4 = 0;
      do {
        iVar8 = *(int *)(iVar11 + 0x80 + DAT_0073b5c8);
        fStack_d4 = *(float *)(iVar8 + 8 + iVar9);
        fStack_d8 = *(float *)(iVar8 + 4 + iVar9);
        fStack_dc = *(float *)(iVar8 + iVar9);
        pfVar6 = (float *)FUN_004b42a0(auStack_4c,&fStack_dc,auStack_40);
        fStack_dc = fStack_9c + *pfVar6;
        fStack_d8 = pfVar6[1] + fStack_98;
        piVar5 = (int *)(iVar11 + DAT_0073b5c8);
        fStack_d4 = pfVar6[2] + fStack_94;
        if ((piVar5[1] != 1) && (piVar5[1] != 2)) {
          FUN_004c4150(s__s__d____vertices_were_not__yet__00597c44,
                       s_______Libs_Win3DLib_Include_mesh_00597ca8,0xf1);
        }
        if (*piVar5 == 1) {
          if ((iStack_e4 < 0) || (piVar5[0x1f] <= i)) {
            FUN_004c4150(s__s__d____index__d_is_out_of_VERT_005996e4,
                         s_______Libs_Win3DLib_Include_mesh_00597ca8,0xf8,i,piVar5[0x1f]);
          }
          uStack_b4 = *(undefined4 *)(piVar5[0x1e] + 0xc + iVar9);
          iVar8 = piVar5[0x1e] + iVar9;
          uStack_b0 = *(undefined4 *)(iVar8 + 0x10);
          uStack_ac = *(undefined4 *)(iVar8 + 0x14);
          uStack_90 = uStack_b4;
          uStack_8c = uStack_b0;
          uStack_88 = uStack_ac;
LAB_004376b7:
          puStack_d0 = &uStack_b4;
        }
        else if (*piVar5 == 2) {
          if ((iStack_e4 < 0) || (piVar5[0x21] <= i)) {
            FUN_004c4150(s__s__d____index__d_is_out_of_VERT_005996e4,
                         s_______Libs_Win3DLib_Include_mesh_00597ca8,0xfe,i,piVar5[0x1f]);
          }
          puVar7 = (undefined4 *)(piVar5[0x22] + iStack_e4);
          uStack_b4 = *puVar7;
          uStack_b0 = puVar7[1];
          uStack_ac = puVar7[2];
          goto LAB_004376b7;
        }
        pfVar6 = (float *)FUN_004b42a0(auStack_64,puStack_d0,auStack_40);
        fVar1 = fStack_dc - fStack_a8;
        fVar4 = fStack_d8 - fStack_a4;
        fVar3 = fStack_d4 - fStack_a0;
        fStack_c0 = *pfVar6;
        fStack_bc = pfVar6[1];
        fStack_b8 = pfVar6[2];
        fVar2 = SQRT(fVar1 * fVar1 + fVar4 * fVar4 + fVar3 * fVar3);
        pfVar6 = (float *)FUN_004066c0(auStack_58,fVar1 / fVar2,fVar4 / fVar2,fVar3 / fVar2);
        fStack_cc = *pfVar6;
        fStack_c8 = pfVar6[1];
        fStack_c4 = pfVar6[2];
        fVar1 = fStack_cc * fStack_c0 + fStack_c8 * fStack_bc + fStack_c4 * fStack_b8;
        fVar1 = fVar1 + fVar1;
        fStack_7c = fStack_c0 * fVar1;
        fStack_70 = fStack_cc - fStack_7c;
        *(float *)(*(int *)(iVar11 + 0x80 + DAT_0073b5c8) + 0x18 + iVar9) = fStack_70 * 0.5 + 0.5;
        i = i + 1;
        iStack_e4 = iStack_e4 + 0xc;
        iVar9 = iVar9 + 0x20;
        *(float *)(*(int *)(iVar11 + 0x80 + DAT_0073b5c8) + -4 + iVar9) =
             (fStack_c4 - fVar1 * fStack_b8) * 0.5 + 0.5;
        iVar8 = local_80;
      } while (i < *(int *)(iVar11 + 0x84 + DAT_0073b5c8));
    }
  }
  FUN_004b5770(iStack_84 + DAT_0073b0d0);
  if ((DAT_006fb940 == 0) || (DAT_006fb8d0 == 0)) {
    iVar8 = FUN_004a8600(DAT_00715e50 + iVar8,8);
    *(undefined1 *)(DAT_0073b0d0 + iVar8 * 0xa9 + 0x90) = 0;
  }
  return;
}


