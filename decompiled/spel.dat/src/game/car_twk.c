/* spel.dat — game/car_twk.cpp: 23 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00432020 FUN_00432020 ==== */

void FUN_00432020(void)

{
  FUN_00431b00();
  FUN_004c5930(0,0,0);
  FUN_004c5930(0,0x14,0x28,s___Gear_1___f_00598328,
               (double)*(float *)(&DAT_006c1cb0 + (DAT_006fbb50 + DAT_006fba5c * 10) * 0x18));
  FUN_004c5930(0,0x14,0x3c,s___Gear_2___f_00598338,
               (double)*(float *)(&DAT_006c1cb4 + (DAT_006fbb50 + DAT_006fba5c * 10) * 0x18));
  FUN_004c5930(0,0x14,0x50,s___Gear_3___f_00598348,
               (double)*(float *)(&DAT_006c1cb8 + (DAT_006fbb50 + DAT_006fba5c * 10) * 0x18));
  FUN_004c5930(0,0x14,100,s___Gear_4___f_00598358,
               (double)*(float *)(&DAT_006c1cbc + (DAT_006fbb50 + DAT_006fba5c * 10) * 0x18));
  FUN_004c5930(0,0x14,0x78,s___Gear_5___f_00598368,
               (double)*(float *)(&DAT_006c1cc0 + (DAT_006fbb50 + DAT_006fba5c * 10) * 0x18));
  FUN_004c5930(0,0x14,0x8c,s___Gear_6___f_00598378,
               (double)*(float *)(&DAT_006c1cc4 + (DAT_006fbb50 + DAT_006fba5c * 10) * 0x18));
  FUN_004c5930(0,0,0x28,s_>_00598388);
  FUN_004c5930(0,0,0xb4,s_Escape_to_leave_menu_0059838c);
  return;
}


/* ==== 004321a0 FUN_004321a0 ==== */

void FUN_004321a0(void)

{
  float fVar1;
  int iVar2;
  int i;
  int iVar3;
  
  iVar3 = 0x28;
  i = 0;
  FUN_00432020();
  iVar2 = FUN_004c5e40();
  while (iVar2 == 0) {
    iVar2 = FUN_004c5e40();
    if (iVar2 != 0) {
      FUN_004c5930(0,0,iVar3,s__005983a4);
      iVar3 = iVar3 + -0x14;
      i = i + -1;
      if (iVar3 < 0x28) {
        iVar3 = 0x8c;
        i = 5;
      }
      FUN_004c5930(0,0,iVar3,s_>_005983a8);
      FUN_00431ad0(0x26);
    }
    iVar2 = FUN_004c5e40();
    if (iVar2 != 0) {
      FUN_004c5930(0,0,iVar3,s__005983ac);
      iVar3 = iVar3 + 0x14;
      i = i + 1;
      if (0x8c < iVar3) {
        iVar3 = 0x28;
        i = 0;
      }
      FUN_004c5930(0,0,iVar3,s_>_005983b0);
      FUN_00431ad0(0x28);
    }
    iVar2 = FUN_004c5e40();
    if (iVar2 != 0) {
      iVar2 = i + (DAT_006fbb50 + DAT_006fba5c * 10) * 6;
      fVar1 = *(float *)(&DAT_006c1cb0 + iVar2 * 4);
      *(float *)(&DAT_006c1cb0 + iVar2 * 4) = fVar1 - 0.1;
      if (fVar1 - 0.1 < 0.0) {
        *(undefined4 *)(&DAT_006c1cb0 + iVar2 * 4) = 0;
      }
      FUN_004c5930(0,0x14,(i * 5 + 10) * 4,s___Gear__d___f_005983b4,i + 1,
                   (double)*(float *)(&DAT_006c1cb0 + iVar2 * 4));
      FUN_00431ad0(0x25);
    }
    iVar2 = FUN_004c5e40();
    if (iVar2 != 0) {
      iVar2 = i + (DAT_006fbb50 + DAT_006fba5c * 10) * 6;
      fVar1 = *(float *)(&DAT_006c1cb0 + iVar2 * 4);
      *(float *)(&DAT_006c1cb0 + iVar2 * 4) = fVar1 + 0.1;
      FUN_004c5930(0,0x14,(i * 5 + 10) * 4,s___Gear__d___f_005983c4,i + 1,(double)(fVar1 + 0.1));
      FUN_00431ad0(0x27);
    }
    iVar2 = FUN_004c5e40();
    if (iVar2 != 0) {
      *(undefined4 *)(&DAT_006c1cb0 + (i + (DAT_006fbb50 + DAT_006fba5c * 10) * 6) * 4) = 0;
      FUN_004c5930(0,0x14,(i * 5 + 10) * 4,s___Gear__d___f_005983d4,i + 1,0);
      FUN_00431ad0(0x52);
    }
    iVar2 = FUN_004c5e40();
  }
  FUN_00431ad0();
  return;
}


/* ==== 004323b0 FUN_004323b0 ==== */

void FUN_004323b0(void)

{
  FUN_00431b00();
  FUN_004c5930(0,0,0,s_Engine_menu_005983e4);
  FUN_004c5930(0,0x14,0x28,s___Engine_power_parameter_A_005983f0);
  FUN_004c5930(0,0x14,0x3c,s___Engine_power_parameter_B_0059840c);
  FUN_004c5930(0,0x14,0x50,s___Engine_power_parameter_C_00598428);
  FUN_004c5930(0,0x14,100,s___Gearbox_transmissions_00598444);
  FUN_004c5930(0,0x14,0x78,s___Maximum_RPM_per_gear_0059845c);
  FUN_004c5930(0,0,0xa0,s_Escape_to_leave_menu_00598474);
  return;
}


/* ==== 00432430 FUN_00432430 ==== */

void FUN_00432430(void)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  
  FUN_004323b0();
  iVar1 = FUN_00431c20(5);
  do {
    if (iVar1 < 0) {
      return;
    }
    switch(iVar1) {
    case 0:
      pcVar6 = s_Current_value_0059848c;
      pcVar5 = s_Parameter_A__max_power_0059849c;
      uVar4 = 0x358637bd;
      uVar3 = 0x358637bd;
      puVar2 = &DAT_006c1c8c + (DAT_006fbb40 + DAT_006fba5c * 0x3c) * 4;
      break;
    case 1:
      pcVar6 = s_Current_value_005984b4;
      pcVar5 = s_Parameter_B__peak_position_005984c4;
      uVar4 = 0x3ba3d70a;
      uVar3 = 0x3ba3d70a;
      puVar2 = &DAT_006c1c98 + (DAT_006fbb40 + DAT_006fba5c * 0x3c) * 4;
      break;
    case 2:
      pcVar6 = s_Current_value_005984e0;
      pcVar5 = s_Parameter_C__default_force_005984f0;
      uVar4 = 0x40a00000;
      uVar3 = 0x40a00000;
      puVar2 = &DAT_006c1ca4 + (DAT_006fbb40 + DAT_006fba5c * 0x3c) * 4;
      break;
    case 3:
      FUN_004321a0();
      goto switchD_00432450_default;
    case 4:
      pcVar6 = s_Current_maximum_0059850c;
      pcVar5 = s_Maximum_RPM_in_gear_0059851c;
      uVar4 = 0x42c80000;
      uVar3 = 0x42c80000;
      puVar2 = &DAT_006c1cf8 + (DAT_006fbb40 + DAT_006fba5c * 0x3c) * 4;
      break;
    default:
      goto switchD_00432450_default;
    }
    FUN_00431b40(puVar2,uVar3,uVar4,pcVar5,pcVar6);
switchD_00432450_default:
    FUN_004323b0();
    iVar1 = FUN_00431c20(5);
  } while( true );
}


/* ==== 00432560 FUN_00432560 ==== */

void FUN_00432560(void)

{
  FUN_00431b00();
  FUN_004c5930(0,0,0,s_Front_tire_menu_00598530);
  FUN_004c5930(0,0x14,0x28,s___Magic_Formula_II_Parameter_A_00598540);
  FUN_004c5930(0,0x14,0x3c,s___Magic_Formula_II_Parameter_B_00598560);
  FUN_004c5930(0,0x14,0x50,s___Magic_Formula_II_Parameter_C_00598580);
  FUN_004c5930(0,0x14,100,s___Friction_factor_005985a0);
  FUN_004c5930(0,0x14,0x8c,s_Escape_to_leave_menu_005985b4);
  return;
}


/* ==== 004325d0 FUN_004325d0 ==== */

void FUN_004325d0(void)

{
  FUN_00431b00();
  FUN_004c5930(0,0,0,s_Rear_tire_menu_005985cc);
  FUN_004c5930(0,0x14,0x28,s___Magic_Formula_II_Parameter_A_005985dc);
  FUN_004c5930(0,0x14,0x3c,s___Magic_Formula_II_Parameter_B_005985fc);
  FUN_004c5930(0,0x14,0x50,s___Magic_Formula_II_Parameter_C_0059861c);
  FUN_004c5930(0,0x14,100,s___Friction_factor_0059863c);
  FUN_004c5930(0,0x14,0x8c,s_Escape_to_leave_menu_00598650);
  return;
}


/* ==== 00432640 FUN_00432640 ==== */

void FUN_00432640(void)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  
  FUN_00432560();
  iVar1 = FUN_00431c20(4);
  do {
    if (iVar1 < 0) {
      return;
    }
    switch(iVar1) {
    case 0:
      pcVar6 = s_Current_value_00598668;
      pcVar5 = s_Parameter_A__steepness_00598678;
      uVar4 = 0x3f800000;
      uVar3 = 0x3f800000;
      puVar2 = &DAT_006c1d28 + (DAT_006fbb44 + DAT_006fba5c * 0x3c) * 4;
      break;
    case 1:
      pcVar6 = s_Current_value_00598690;
      pcVar5 = s_Parameter_B__fall_off_005986a0;
      uVar4 = 0x3f000000;
      uVar3 = 0x3f000000;
      puVar2 = &DAT_006c1d34 + (DAT_006fbb44 + DAT_006fba5c * 0x3c) * 4;
      break;
    case 2:
      pcVar6 = s_Current_value_005986b8;
      pcVar5 = s_Parameter_C__fall_off_moment_005986c8;
      uVar4 = 0x3f000000;
      uVar3 = 0x3f000000;
      puVar2 = &DAT_006c1d40 + (DAT_006fbb44 + DAT_006fba5c * 0x3c) * 4;
      break;
    case 3:
      pcVar6 = s_Current_factor_005986e8;
      pcVar5 = s_Friction_factor_of_tires_005986f8;
      uVar4 = 0x3ba3d70a;
      uVar3 = 0x3ba3d70a;
      puVar2 = &DAT_006c1d4c + (DAT_006fbb44 + DAT_006fba5c * 0x3c) * 4;
      break;
    default:
      goto switchD_00432660_default;
    }
    FUN_00431b40(puVar2,uVar3,uVar4,pcVar5,pcVar6);
switchD_00432660_default:
    FUN_00432560();
    iVar1 = FUN_00431c20(4);
  } while( true );
}


/* ==== 00432760 FUN_00432760 ==== */

void FUN_00432760(void)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  
  FUN_004325d0();
  iVar1 = FUN_00431c20(4);
  do {
    if (iVar1 < 0) {
      return;
    }
    switch(iVar1) {
    case 0:
      pcVar6 = s_Current_value_00598714;
      pcVar5 = s_Parameter_A__steepness_00598724;
      uVar4 = 0x3f800000;
      uVar3 = 0x3f800000;
      puVar2 = &DAT_006c1d04 + (DAT_006fbb44 + DAT_006fba5c * 0x3c) * 4;
      break;
    case 1:
      pcVar6 = s_Current_value_0059873c;
      pcVar5 = s_Parameter_B__fall_off_0059874c;
      uVar4 = 0x3f000000;
      uVar3 = 0x3f000000;
      puVar2 = &DAT_006c1d10 + (DAT_006fbb44 + DAT_006fba5c * 0x3c) * 4;
      break;
    case 2:
      pcVar6 = s_Current_value_00598764;
      pcVar5 = s_Parameter_C__fall_off_moment_00598774;
      uVar4 = 0x3f000000;
      uVar3 = 0x3f000000;
      puVar2 = &DAT_006c1d1c + (DAT_006fbb44 + DAT_006fba5c * 0x3c) * 4;
      break;
    case 3:
      pcVar6 = s_Current_factor_00598794;
      pcVar5 = s_Friction_factor_of_tires_005987a4;
      uVar4 = 0x3ba3d70a;
      uVar3 = 0x3ba3d70a;
      puVar2 = &DAT_006c1d4c + (DAT_006fbb44 + DAT_006fba5c * 0x3c) * 4;
      break;
    default:
      goto switchD_00432780_default;
    }
    FUN_00431b40(puVar2,uVar3,uVar4,pcVar5,pcVar6);
switchD_00432780_default:
    FUN_004325d0();
    iVar1 = FUN_00431c20(4);
  } while( true );
}


/* ==== 00432880 FUN_00432880 ==== */

void FUN_00432880(void)

{
  FUN_00431b00();
  FUN_004c5930(0,0,0,s_Tweak_settings_menu_005987c0);
  FUN_004c5930(0,0x14,0x28,s___Upgrade_motor_005987d4);
  FUN_004c5930(0,200,0x28,s__d_005987e4,DAT_006fbb40);
  FUN_004c5930(0,0x14,0x3c,s___Upgrade_gearbox_005987ec);
  FUN_004c5930(0,200,0x3c,s__d_00598800,DAT_006fbb50);
  FUN_004c5930(0,0x14,0x50,s___Tires_00598808);
  FUN_004c5930(0,200,0x50,s__d_00598810,DAT_006fbb44);
  FUN_004c5930(0,0x14,100,s___Player_car_00598818);
  FUN_004c5930(0,200,100,s__d_00598828,DAT_006fba5c);
  FUN_004c5930(0,0x14,0x78,s___Copy_current_to_car_F12____0059882c);
  FUN_004c5930(0,200,0x78,s__d_0059884c,DAT_00597eb0);
  FUN_004c5930(0,0,0xa0,s_Escape_to_leave_menu_00598850);
  return;
}


/* ==== 00432990 FUN_00432990 ==== */

void FUN_00432990(void)

{
  int j;
  int iVar1;
  int i;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  iVar1 = 0x28;
  i = 0;
  FUN_00431b00();
  FUN_00432880();
  FUN_004c5930(0,0,0x28,s_>_00598868);
  j = FUN_004c5e40(0x1b);
  do {
    if (j != 0) {
      FUN_00431ad0(0x1b);
      return;
    }
    j = FUN_004c5e40(0x26);
    if (j != 0) {
      FUN_004c5930(0,0,iVar1,s__0059886c);
      iVar1 = iVar1 + -0x14;
      i = i + -1;
      if (iVar1 < 0x28) {
        iVar1 = 100;
        i = 3;
      }
      FUN_004c5930(0,0,iVar1,s_>_00598870);
      FUN_00431ad0(0x26);
    }
    j = FUN_004c5e40(0x28);
    if (j != 0) {
      FUN_004c5930(0,0,iVar1,s__00598874);
      iVar1 = iVar1 + 0x14;
      i = i + 1;
      if (100 < iVar1) {
        iVar1 = 0x28;
        i = 0;
      }
      FUN_004c5930(0,0,iVar1,s_>_00598878);
      FUN_00431ad0(0x28);
    }
    j = FUN_004c5e40(0x20);
    if (j != 0) {
      if (i == 0) {
        DAT_006fbb40 = (DAT_006fbb40 + 1) % 3;
        pcVar5 = s__d_0059887c;
        uVar4 = 0x28;
        j = DAT_006fbb40;
LAB_00432acf:
        FUN_004c5930(0,200,uVar4,pcVar5,j);
      }
      else {
        if (i == 1) {
          DAT_006fbb50 = (DAT_006fbb50 + 1) % 3;
          pcVar5 = s__d_00598880;
          uVar4 = 0x3c;
          j = DAT_006fbb50;
          goto LAB_00432acf;
        }
        if (i == 2) {
          DAT_006fbb44 = (DAT_006fbb44 + 1) % 3;
          pcVar5 = s__d_00598884;
          uVar4 = 0x50;
          j = DAT_006fbb44;
          goto LAB_00432acf;
        }
      }
      FUN_00431ad0(0x20);
    }
    j = FUN_004c5e40(0x25);
    if (j != 0) {
      DAT_006fba5c = DAT_006fba5c + -1;
      if (DAT_006fba5c < 0) {
        DAT_006fba5c = 0;
      }
      FUN_00431ad0(0x25);
      FUN_004c5930(0,200,100,s__d_00598888,DAT_006fba5c);
    }
    j = FUN_004c5e40(0x27);
    if (j != 0) {
      DAT_006fba5c = DAT_006fba5c + 1;
      if (10 < DAT_006fba5c) {
        DAT_006fba5c = 10;
      }
      FUN_00431ad0(0x27);
      FUN_004c5930(0,200,100,s__d_0059888c,DAT_006fba5c);
    }
    j = FUN_004c5e40(0x22);
    if (j != 0) {
      DAT_00597eb0 = DAT_00597eb0 + -1;
      if (DAT_00597eb0 < 0) {
        DAT_00597eb0 = 0;
      }
      FUN_00431ad0(0x22);
      FUN_004c5930(0,200,0x78,s__d_00598890,DAT_00597eb0);
    }
    j = FUN_004c5e40(0x21);
    if (j != 0) {
      DAT_00597eb0 = DAT_00597eb0 + 1;
      if (10 < DAT_00597eb0) {
        DAT_00597eb0 = 10;
      }
      FUN_00431ad0(0x21);
      FUN_004c5930(0,200,0x78,s__d_00598894,DAT_00597eb0);
    }
    j = FUN_004c5e40(0x7b);
    if (j != 0) {
      puVar2 = (undefined4 *)(&DAT_006c1c68 + DAT_006fba5c * 0xf0);
      puVar3 = (undefined4 *)(&DAT_006c1c68 + DAT_00597eb0 * 0xf0);
      for (j = 0x3c; j != 0; j = j + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    j = FUN_004c5e40(0x1b);
  } while( true );
}


/* ==== 00432c70 FUN_00432c70 ==== */

void FUN_00432c70(void)

{
  FUN_00431b00();
  FUN_004c5930(0,0,0,s_Physics_Tweak_Menu_00598898);
  FUN_004c5930(0,0x14,0x28,s___Save_and_leave_005988ac);
  FUN_004c5930(0,0x14,0x3c,s___Just_leave_005988c0);
  FUN_004c5930(0,0x14,0x50,s___Tweak_settings_005988d0);
  FUN_004c5930(0,0x14,100,s___Car_characteristics_005988e4);
  FUN_004c5930(0,0x14,0x78,s___Engine_characteristics_005988fc);
  FUN_004c5930(0,0x14,0x8c,s___Front_tire_characteristics_00598918);
  FUN_004c5930(0,0x14,0xa0,s___Rear_tire_characteristics_00598938);
  FUN_004c5930(0,0x14,0xb4,s___Suspension_characteristics_00598954);
  return;
}


/* ==== 00432d20 FUN_00432d20 ==== */

/* WARNING: Removing unreachable block (ram,0x00432ea1) */
/* WARNING: Removing unreachable block (ram,0x00432ea8) */
/* WARNING: Removing unreachable block (ram,0x00432eac) */
/* WARNING: Removing unreachable block (ram,0x00432ec1) */

void FUN_00432d20(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  FILE *file;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0056a3a0;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00432c70();
  do {
    do {
      iVar2 = FUN_004c5e40(0x43);
    } while (iVar2 != 0);
    iVar2 = FUN_004c5e40(0x11);
  } while ((iVar2 != 0) || (iVar2 = FUN_004c5e40(0x20), iVar2 != 0));
  iVar2 = FUN_00431c20(8);
  while (1 < iVar2) {
    switch(iVar2) {
    case 2:
      FUN_00432990();
      break;
    case 3:
      FUN_00431e20();
      break;
    case 4:
      FUN_00432430();
      break;
    case 5:
      FUN_00432640();
      break;
    case 6:
      FUN_00432760();
    }
    FUN_00432c70();
    iVar2 = FUN_00431c20(8);
  }
  if (iVar2 == 0) {
    uVar3 = FUN_0049df90(local_1c,s_PHYS_d_DAT_00598974,DAT_006fb958);
    local_4._0_1_ = 1;
    FUN_004093c0(uVar3,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(local_18 + -1));
      }
      else {
        *(char *)(local_18 + -1) = cVar1 + -1;
      }
    }
    file = (FILE *)FUN_005589a5(&DAT_0057629c,s_wb_00598980);
    if (file == (FILE *)0x0) {
      FUN_004c4150(s___s___d_Could_not_save__s_file_005989a8,
                   s_C__Work_A2IV_Game_prog_car_twk_c_00598984,0x2f4,&DAT_0057629c);
    }
    FUN_00558c1d(&DAT_006c1c68,0xf0,0x14,file);
    FUN_005588fd(file);
  }
  ExceptionList = local_c;
  return;
}


/* ==== 00432ef0 FUN_00432ef0 ==== */

int FUN_00432ef0(float param_1,float param_2,float param_3)

{
  float *pfVar1;
  int i;
  
  i = 0;
  pfVar1 = (float *)&DAT_00597eb8;
  do {
    if (pfVar1[-1] == param_1) {
      if (*pfVar1 == param_2) {
        if (pfVar1[1] == param_3) {
          return i;
        }
      }
    }
    pfVar1 = pfVar1 + 3;
    i = i + 1;
  } while ((int)pfVar1 < 0x597f30);
  return -1;
}


/* ==== 00432f40 FUN_00432f40 ==== */

int FUN_00432f40(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_2 * 5 + 10) * 4;
  FUN_004c5930(0,0,iVar2,s_>_005989c8);
  iVar1 = FUN_004c5e40(0x26);
  if (iVar1 != 0) {
    FUN_00431ad0(0x26);
    FUN_004c5930(0,0,iVar2,s__005989cc);
    param_2 = param_2 + -1;
    if (param_2 < 0) {
      param_2 = param_1 + -1;
    }
    iVar2 = (param_2 * 5 + 10) * 4;
    FUN_004c5930(0,0,iVar2,s_>_005989d0);
  }
  iVar1 = FUN_004c5e40(0x28);
  if (iVar1 != 0) {
    FUN_00431ad0(0x28);
    FUN_004c5930(0,0,iVar2,s__005989d4);
    param_2 = param_2 + 1;
    if (param_2 == param_1) {
      param_2 = 0;
    }
    FUN_004c5930(0,0,(param_2 * 5 + 10) * 4,s_>_005989d8);
  }
  iVar1 = FUN_004c5e40(0x1b);
  if (iVar1 != 0) {
    FUN_00431ad0(0x1b);
    return -1;
  }
  return param_2;
}


/* ==== 00433020 FUN_00433020 ==== */

void FUN_00433020(float *param_1,float param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_004c5e40();
  if (iVar1 != 0) {
    *param_1 = param_2 + *param_1;
    FUN_00431ad0();
  }
  iVar1 = FUN_004c5e40();
  if (iVar1 != 0) {
    *param_1 = *param_1 - param_2;
    FUN_00431ad0();
  }
  iVar1 = FUN_004c5e40();
  if (iVar1 != 0) {
    *param_1 = *param_1 - param_2 * 10.0;
    FUN_00431ad0();
  }
  iVar1 = FUN_004c5e40();
  if (iVar1 != 0) {
    *param_1 = param_2 * 10.0 + *param_1;
    FUN_00431ad0();
  }
  iVar1 = FUN_004c5e40();
  if (iVar1 != 0) {
    *param_1 = 0.0;
    FUN_00431ad0();
  }
  FUN_004c5930(0,0xfa,param_3,s__f_005989dc,(double)*param_1);
  return;
}


/* ==== 00433100 FUN_00433100 ==== */

void FUN_00433100(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  
  iVar1 = FUN_004c5e40(0x6b);
  if (iVar1 != 0) {
    *param_1 = *param_1 + param_2;
    FUN_00431ad0(0x6b);
  }
  iVar1 = FUN_004c5e40(0x6d);
  if (iVar1 != 0) {
    *param_1 = *param_1 - param_2;
    FUN_00431ad0(0x6d);
  }
  iVar1 = FUN_004c5e40(0x25);
  if (iVar1 != 0) {
    *param_1 = *param_1 + param_2 * -10;
    FUN_00431ad0(0x25);
  }
  iVar1 = FUN_004c5e40(0x27);
  if (iVar1 != 0) {
    *param_1 = *param_1 + param_2 * 10;
    FUN_00431ad0(0x27);
  }
  iVar1 = FUN_004c5e40(0x52);
  if (iVar1 != 0) {
    *param_1 = 0;
    FUN_00431ad0(0x52);
  }
  if (*param_1 < param_4) {
    *param_1 = param_4;
  }
  if (param_5 < *param_1) {
    *param_1 = param_5;
  }
  FUN_004c5930(0,0xfa,param_3,s__d_005989e8,*param_1);
  return;
}


/* ==== 004331f0 FUN_004331f0 ==== */

void FUN_004331f0(int param_1,int param_2)

{
  int i;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = &DAT_006b2bc0 + param_1 * 0x9a;
  puVar2 = &DAT_006b2bc0 + param_2 * 0x9a;
  for (i = 0x9a; i != 0; i = i + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}


/* ==== 00433230 FUN_00433230 ==== */

void FUN_00433230(int param_1)

{
  int i;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = &DAT_006b2bc0 + param_1 * 0x9a;
  puVar2 = &DAT_006b2bc0;
  for (i = 0x9a; i != 0; i = i + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar1 = &DAT_006b2bc0;
  puVar2 = &DAT_006b2e28;
  for (i = 0x3b8e; i != 0; i = i + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}


/* ==== 00433270 FUN_00433270 ==== */

void FUN_00433270(void)

{
  FILE *file;
  int iVar1;
  
  file = (FILE *)FUN_005589a5(PTR_s_VDYNS_DAT_005962ec,s_wb_005989f0);
  if (file != (FILE *)0x0) {
    FUN_00558c1d(&DAT_006b2bc0,0x268,100,file);
    FUN_005588fd(file);
    return;
  }
  FUN_004c5930(0,10,200,s_____Could_not_save_file_____005989f4);
  iVar1 = FUN_004c5e40(0x20);
  while (iVar1 == 0) {
    iVar1 = FUN_004c5e40(0x20);
  }
  FUN_00431ad0(0x20);
  FUN_004c5930(0,0,200,s__00598a10);
  return;
}


/* ==== 00433300 FUN_00433300 ==== */

void FUN_00433300(void)

{
  FUN_004a3240(*(undefined4 *)(&DAT_006b2bd0 + DAT_006c34fc * 0x268));
  FUN_004a3250(*(undefined4 *)(&DAT_006b2bd4 + DAT_006c34fc * 0x268));
  FUN_004a3260(*(undefined4 *)(&DAT_006b2bdc + (DAT_006fbb4c + DAT_006c34fc * 0x9a) * 4));
  FUN_004a3270(*(undefined4 *)(&DAT_006b2bf0 + (DAT_006fbb4c + DAT_006c34fc * 0x9a) * 4));
  FUN_004a3280(*(undefined4 *)(&DAT_006b2c04 + DAT_006c34fc * 0x268));
  FUN_004a32b0(*(undefined4 *)(&DAT_006b2c1c + (DAT_006fbb40 + DAT_006c34fc * 0x9a) * 4));
  FUN_004a3290(*(undefined4 *)(&DAT_006b2c80 + (DAT_006fbb40 + DAT_006c34fc * 0x9a) * 4));
  FUN_004a32a0(*(undefined4 *)(&DAT_006b2c6c + (DAT_006fbb40 + DAT_006c34fc * 0x9a) * 4));
  FUN_004a32c0(*(undefined4 *)(&DAT_006b2c30 + (DAT_006fbb40 + DAT_006c34fc * 0x9a) * 4));
  FUN_004a32d0(*(undefined4 *)(&DAT_006b2c44 + (DAT_006fbb40 + DAT_006c34fc * 0x9a) * 4));
  FUN_004a32e0(*(undefined4 *)(&DAT_006b2c58 + (DAT_006fbb40 + DAT_006c34fc * 0x9a) * 4));
  FUN_004a32f0(*(undefined4 *)(&DAT_006b2c08 + (DAT_006fbb50 + DAT_006c34fc * 0x9a) * 4));
  FUN_004a3310(0,*(undefined4 *)(&DAT_006b2c94 + DAT_006c34fc * 0x268 + DAT_006fbb50 * 0x18));
  FUN_004a3310(1,*(undefined4 *)(&DAT_006b2c98 + DAT_006c34fc * 0x268 + DAT_006fbb50 * 0x18));
  FUN_004a3310(2,*(undefined4 *)(&DAT_006b2c9c + DAT_006c34fc * 0x268 + DAT_006fbb50 * 0x18));
  FUN_004a3310(3,*(undefined4 *)(&DAT_006b2ca0 + DAT_006c34fc * 0x268 + DAT_006fbb50 * 0x18));
  FUN_004a3310(4,*(undefined4 *)(&DAT_006b2ca4 + DAT_006c34fc * 0x268 + DAT_006fbb50 * 0x18));
  FUN_004a3310(5,*(undefined4 *)(&DAT_006b2ca8 + DAT_006c34fc * 0x268 + DAT_006fbb50 * 0x18));
  FUN_004a3350(*(undefined4 *)(&DAT_006b2d0c + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4));
  FUN_004a3360(*(undefined4 *)(&DAT_006b2d20 + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4));
  FUN_004a3370(*(undefined4 *)(&DAT_006b2d34 + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4));
  FUN_004a3340(*(undefined4 *)(&DAT_006b2d48 + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4));
  FUN_004a3390(*(undefined4 *)(&DAT_006b2d5c + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4));
  FUN_004a33a0(*(undefined4 *)(&DAT_006b2d70 + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4));
  FUN_004a33b0(*(undefined4 *)(&DAT_006b2d84 + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4));
  FUN_004a3380(*(undefined4 *)(&DAT_006b2d98 + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4));
  FUN_004a2510(0,*(undefined4 *)(&DAT_006b2dac + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4));
  FUN_004a2510(1,*(undefined4 *)(&DAT_006b2dac + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4));
  FUN_004a2530(0,*(undefined4 *)(&DAT_006b2dc0 + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4));
  FUN_004a2530(1,*(undefined4 *)(&DAT_006b2dc0 + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4));
  FUN_004a2550(0,*(float *)(&DAT_006b2dc0 + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4) * 0.2);
  FUN_004a2550(1,*(float *)(&DAT_006b2dc0 + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4) * 0.2);
  FUN_004a2570(0,*(undefined4 *)(&DAT_006b2dd4 + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4));
  FUN_004a2510(2,*(undefined4 *)(&DAT_006b2de8 + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4));
  FUN_004a2510(3,*(undefined4 *)(&DAT_006b2de8 + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4));
  FUN_004a2530(2,*(undefined4 *)(&DAT_006b2dfc + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4));
  FUN_004a2530(3,*(undefined4 *)(&DAT_006b2dfc + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4));
  FUN_004a2550(2,*(float *)(&DAT_006b2dfc + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4) * 0.2);
  FUN_004a2550(3,*(float *)(&DAT_006b2dfc + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4) * 0.2);
  FUN_004a2570(1,*(undefined4 *)(&DAT_006b2e10 + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4));
  return;
}


/* ==== 00433950 FUN_00433950 ==== */

void FUN_00433950(void)

{
  int iVar1;
  int iVar2;
  
  FUN_00431b00();
  FUN_004c5930(0,10,0,s_Vehicle_Selection_Menu_00598a44);
  FUN_004c5930(0,10,0x28,s_Vehicle_Index_00598a5c);
  FUN_004c5930(0,10,0x3c,s_Engine_Upgrade_00598a6c);
  FUN_004c5930(0,10,0x50,s_Gearbox_Upgrade_00598a7c);
  FUN_004c5930(0,10,100,s_Brake_Upgrade_00598a8c);
  FUN_004c5930(0,10,0x78,s_Wheel_Upgrade_00598a9c);
  FUN_004c5930(0,10,0x8c,s_Source_Vehicle_00598aac);
  FUN_004c5930(0,10,0xa0,s_Target_Vehicle_00598abc);
  FUN_004c5930(0,10,0xb4,s_Copy_To_Single_Vehicle_00598acc);
  FUN_004c5930(0,10,200,s_Copy_To_All_00598ae4);
  FUN_004c5930(0,0xfa,0x28,s__d_00598af0,DAT_006c34fc);
  FUN_004c5930(0,0xfa,0x3c,s__d_00598af4,DAT_006fbb40);
  FUN_004c5930(0,0xfa,0x50,s__d_00598af8,DAT_006fbb50);
  FUN_004c5930(0,0xfa,100,s__d_00598afc,DAT_006fbb4c);
  FUN_004c5930(0,0xfa,0x78,s__d_00598b00,DAT_006fbb44);
  FUN_004c5930(0,0xfa,0x8c,s__d_00598b04,DAT_006c3500);
  FUN_004c5930(0,0xfa,0xa0,s__d_00598b08,DAT_006c3504);
  for (iVar1 = FUN_00432f40(9,0); iVar1 != -1; iVar1 = FUN_00432f40(9,iVar1)) {
    switch(iVar1) {
    case 0:
      FUN_00433100(&DAT_006c34fc,1,0x28,0,99);
      break;
    case 1:
      FUN_00433100(&DAT_006fbb40,1,0x3c,0,4);
      break;
    case 2:
      FUN_00433100(&DAT_006fbb50,1,0x50,0,4);
      break;
    case 3:
      FUN_00433100(&DAT_006fbb4c,1,100,0,4);
      break;
    case 4:
      FUN_00433100(&DAT_006fbb44,1,0x78,0,4);
      break;
    case 5:
      FUN_00433100(&DAT_006c3500,1,0x8c,0,99);
      break;
    case 6:
      FUN_00433100(&DAT_006c3504,1,0xa0,0,99);
      break;
    case 7:
      iVar2 = FUN_004c5e40(0x20);
      if (iVar2 != 0) {
        FUN_004331f0(DAT_006c3500,DAT_006c3504);
        FUN_00431ad0(0x20);
      }
      break;
    case 8:
      iVar2 = FUN_004c5e40(0x20);
      if (iVar2 != 0) {
        FUN_00433230(DAT_006c3500);
        FUN_00431ad0(0x20);
      }
    }
  }
  return;
}


/* ==== 00433c30 FUN_00433c30 ==== */

void FUN_00433c30(void)

{
  int i;
  int j;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(&DAT_006b2c08 + (DAT_006fbb50 + DAT_006c34fc * 0x9a) * 4);
  FUN_00431b00();
  FUN_004c5930(0,10,0,s_Vehicle_Gearbox_Data_00598b0c);
  FUN_004c5930(0,10,0x28,s_Number_Of_Gears_00598b24);
  i = 0;
  if (0 < *(int *)(&DAT_006b2c08 + (DAT_006fbb50 + DAT_006c34fc * 0x9a) * 4)) {
    j = 0x3c;
    do {
      i = i + 1;
      FUN_004c5930(0,10,j,s_Gear_Ratio__d_00598b34,i);
      j = j + 0x14;
    } while (i < *(int *)(&DAT_006b2c08 + (DAT_006fbb50 + DAT_006c34fc * 0x9a) * 4));
  }
  FUN_004c5930(0,0xfa,0x28,s__d_00598b44,
               *(undefined4 *)(&DAT_006b2c08 + (DAT_006fbb50 + DAT_006c34fc * 0x9a) * 4));
  j = 0;
  i = DAT_006c34fc * 0x9a;
  if (0 < *(int *)(&DAT_006b2c08 + (i + DAT_006fbb50) * 4)) {
    iVar1 = 0x3c;
    do {
      FUN_004c5930(0,0xfa,iVar1,s__f_00598b48,
                   (double)*(float *)(&DAT_006b2c94 + (i + DAT_006fbb50 * 6 + j) * 4));
      j = j + 1;
      iVar1 = iVar1 + 0x14;
      i = DAT_006c34fc * 0x9a;
    } while (j < *(int *)(&DAT_006b2c08 + (i + DAT_006fbb50) * 4));
  }
  i = FUN_00432f40(iVar2 + 1,0);
  while (i != -1) {
    if (i == 0) {
      FUN_00433100(&DAT_006b2c08 + (DAT_006fbb50 + DAT_006c34fc * 0x9a) * 4,1,0x28,1,6);
      if (*(int *)(&DAT_006b2c08 + (DAT_006fbb50 + DAT_006c34fc * 0x9a) * 4) < 6) {
        i = (*(int *)(&DAT_006b2c08 + (DAT_006fbb50 + DAT_006c34fc * 0x9a) * 4) * 5 + 0xf) * 4;
        do {
          FUN_004c5930(0,0,i);
          i = i + 0x14;
        } while (i < 0xb4);
      }
      i = 0;
      if (0 < *(int *)(&DAT_006b2c08 + (DAT_006fbb50 + DAT_006c34fc * 0x9a) * 4)) {
        iVar2 = 0x3c;
        do {
          i = i + 1;
          FUN_004c5930(0,10,iVar2,s_Gear_Ratio__d_00598ba4,i);
          FUN_004c5930(0,0xfa,iVar2,s__f_00598bb4);
          iVar2 = iVar2 + 0x14;
        } while (i < *(int *)(&DAT_006b2c08 + (DAT_006fbb50 + DAT_006c34fc * 0x9a) * 4));
      }
    }
    else {
      FUN_00433020(&DAT_006b2c90 + (i + DAT_006fbb50 * 6 + DAT_006c34fc * 0x9a) * 4,0x3dcccccd);
    }
    i = FUN_00432f40();
  }
  return;
}


/* ==== 00433f30 FUN_00433f30 ==== */

void FUN_00433f30(void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 local_c [2];
  
  FUN_00431b00();
  FUN_004c5930(0,10,0,s_Vehicle_Suspension_Data_00598bb8);
  FUN_004c5930(0,10,0x28,s_Wheelspring_Constant_All_00598bd0);
  FUN_004c5930(0,10,0x3c,s_Wheelspring_Dampening_All_00598bec);
  FUN_004c5930(0,10,0x50,s_Stabilizer_All_00598c08);
  FUN_004c5930(0,10,100,s_Wheelspring_Constant_Front_00598c18);
  FUN_004c5930(0,10,0x78,s_Wheelspring_Dampening_Front_00598c34);
  FUN_004c5930(0,10,0x8c,s_Stabilizer_Front_00598c50);
  FUN_004c5930(0,10,0xa0,s_Wheelspring_Constant_Rear_00598c64);
  FUN_004c5930(0,10,0xb4,s_Wheelspring_Dampening_Rear_00598c80);
  FUN_004c5930(0,10,200,s_Stabilizer_Rear_00598c9c);
  FUN_004c5930(0,0xfa,0x28,s__f_00598cac,
               (double)*(float *)(&DAT_006b2dac + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4));
  FUN_004c5930(0,0xfa,0x3c,s__f_00598cb0,
               (double)*(float *)(&DAT_006b2dc0 + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4));
  FUN_004c5930(0,0xfa,0x50,s__f_00598cb4,
               (double)*(float *)(&DAT_006b2dd4 + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4));
  FUN_004c5930(0,0xfa,100,s__f_00598cb8,
               (double)*(float *)(&DAT_006b2dac + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4));
  FUN_004c5930(0,0xfa,0x78,s__f_00598cbc,
               (double)*(float *)(&DAT_006b2dc0 + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4));
  FUN_004c5930(0,0xfa,0x8c,s__f_00598cc0,
               (double)*(float *)(&DAT_006b2dd4 + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4));
  FUN_004c5930(0,0xfa,0xa0,s__f_00598cc4,
               (double)*(float *)(&DAT_006b2de8 + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4));
  FUN_004c5930(0,0xfa,0xb4,s__f_00598cc8,
               (double)*(float *)(&DAT_006b2dfc + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4));
  FUN_004c5930(0,0xfa,200,s__f_00598ccc,
               (double)*(float *)(&DAT_006b2e10 + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4));
  iVar1 = FUN_00432f40(9,0);
  do {
    if (iVar1 == -1) {
      return;
    }
    switch(iVar1) {
    case 0:
      local_c[0] = *(undefined4 *)(&DAT_006b2dac + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4);
      FUN_00433020(local_c,0x43fa0000,0x28);
      iVar1 = (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4;
      *(undefined4 *)(&DAT_006b2dac + iVar1) = local_c[0];
      *(undefined4 *)(&DAT_006b2de8 + iVar1) = local_c[0];
      FUN_004c5930(0,0xfa,100,s__f_00598cd0,(double)*(float *)(&DAT_006b2dac + iVar1));
      FUN_004c5930(0,0xfa,0xa0,s__f_00598cdc,
                   (double)*(float *)(&DAT_006b2de8 + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4));
      goto switchD_0043420a_default;
    case 1:
      local_c[0] = *(undefined4 *)(&DAT_006b2dc0 + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4);
      FUN_00433020(local_c,0x43fa0000,0x3c);
      iVar1 = (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4;
      *(undefined4 *)(&DAT_006b2dc0 + iVar1) = local_c[0];
      *(undefined4 *)(&DAT_006b2dfc + iVar1) = local_c[0];
      FUN_004c5930(0,0xfa,0x78,s__f_00598ce8,(double)*(float *)(&DAT_006b2dc0 + iVar1));
      FUN_004c5930(0,0xfa,0xb4,s__f_00598cf4,
                   (double)*(float *)(&DAT_006b2dfc + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4));
      goto switchD_0043420a_default;
    case 2:
      local_c[0] = *(undefined4 *)(&DAT_006b2dd4 + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4);
      FUN_00433020(local_c,0x43fa0000,0x50);
      iVar1 = (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4;
      *(undefined4 *)(&DAT_006b2dd4 + iVar1) = local_c[0];
      *(undefined4 *)(&DAT_006b2e10 + iVar1) = local_c[0];
      FUN_004c5930(0,0xfa,0x8c,s__f_00598d00,(double)*(float *)(&DAT_006b2dd4 + iVar1));
      FUN_004c5930(0,0xfa,200,s__f_00598d0c,
                   (double)*(float *)(&DAT_006b2e10 + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4));
      goto switchD_0043420a_default;
    case 3:
      uVar3 = 0x6443fa0000;
      puVar2 = &DAT_006b2dac + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4;
      break;
    case 4:
      uVar3 = 0x7843fa0000;
      puVar2 = &DAT_006b2dc0 + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4;
      break;
    case 5:
      uVar3 = 0x8c43fa0000;
      puVar2 = &DAT_006b2dd4 + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4;
      break;
    case 6:
      uVar3 = 0xa043fa0000;
      puVar2 = &DAT_006b2de8 + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4;
      break;
    case 7:
      uVar3 = 0xb443fa0000;
      puVar2 = &DAT_006b2dfc + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4;
      break;
    case 8:
      uVar3 = 0xc843fa0000;
      puVar2 = &DAT_006b2e10 + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4;
      break;
    default:
      goto switchD_0043420a_default;
    }
    FUN_00433020(puVar2,uVar3);
switchD_0043420a_default:
    iVar1 = FUN_00432f40();
  } while( true );
}


