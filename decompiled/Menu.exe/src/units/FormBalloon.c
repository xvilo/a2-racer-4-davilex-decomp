/* Menu.exe — units/FormBalloon.pas: 29 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004779ac TBalloonForm.virtual_02c ==== */

int * TBalloonForm_virtual_02c(int *param_1,char param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  TCustomForm_virtual_02c(param_1,'\0',param_3);
  TForm_SetBorderStyle((int)param_1,'\0');
  TForm_SetBorderIcons((int)param_1,'\0');
  TGroupBox_SetColor((int)param_1,0xffffff);
  TFont_SetName((int *)param_1[0x16],(undefined4 *)"MS Sans Serif");
  TFont_SetSize((int *)param_1[0x16],10);
  TControl_SetHeight(param_1,0xe6);
  TControl_SetWidth(param_1,200);
  *(undefined1 *)(param_1 + 0xb6) = 1;
  param_1[0xb7] = 0;
  *(undefined1 *)(param_1 + 0xb8) = 1;
  TDaviColors_SetBtn3DLight(*(int *)(param_1[0xb4] + 300),0xffffff);
  TDaviColors_SetBtnFace(*(int *)(param_1[0xb4] + 300),0xffffff);
  TDaviColors_SetBtnShadow(*(int *)(param_1[0xb4] + 300),0xffffff);
  if (cVar1 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 00477ab0 FUN_00477ab0 ==== */

void FUN_00477ab0(int *param_1,uint *param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  int extraout_EDX_00;
  int j;
  int i_val;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined1 local_14;
  int local_10;
  int local_c;
  uint *local_8;
  
  local_10 = 0;
  puStack_28 = (undefined1 *)0x477ace;
  local_c = param_3;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  puStack_2c = &LAB_00477c2a;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  i_val = 0;
  puStack_28 = &stack0xfffffffc;
  uVar1 = FUN_004317bc((int)param_1);
  j = uVar1 - 1;
  if (SBORROW4(uVar1,1)) {
    thunk_FUN_00402808(uVar1);
  }
  if (-1 < j) {
    do {
      piVar2 = (int *)FUN_00431780((int)param_1,j);
      uVar1 = FUN_00403114(piVar2,(int)&PTR_TControl_virtual_000_00476b74);
      if (((char)uVar1 != '\0') && (bVar4 = SCARRY4(i_val,1), i_val = i_val + 1, bVar4)) {
        thunk_FUN_00402808(uVar1);
      }
      j = j + -1;
    } while (j != -1);
  }
  if (0x11 < i_val) {
    local_18 = 0x12;
    local_14 = 0;
    FUN_00409254((byte *)"Het maximaal aantal links: %d is bereikt",&local_18,0,&local_10);
    FUN_00403c40(local_10);
  }
  piVar2 = TDaviCustomLinkLabel_virtual_02c
                     ((int *)&PTR_TControl_virtual_000_00476b74,'\x01',param_1);
  (**(code **)(*piVar2 + 0x60))(piVar2,param_1);
  TControl_SetTop(piVar2,param_1[0xb9]);
  TControl_SetLeft(piVar2,6);
  (**(code **)(*piVar2 + 0x8c))(piVar2,0);
  TLabel_SetWordWrap(piVar2,CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX);
  TGroupBox_SetCaption((int)piVar2,local_8);
  uVar1 = TForm_GetClientWidth(param_1);
  j = uVar1 - 0xc;
  if (SBORROW4(uVar1,0xc)) {
    thunk_FUN_00402808(uVar1);
    j = extraout_EDX_00;
  }
  TControl_SetWidth(piVar2,j);
  (**(code **)(*piVar2 + 0x8c))(piVar2,1);
  piVar2[3] = local_c;
  TFont_SetColor((int *)piVar2[0x16],0x1f0674,extraout_ECX_00);
  piVar2[0x42] = param_4;
  piVar2[0x43] = param_5;
  uVar1 = piVar2[0xd] + piVar2[0xf];
  if (SCARRY4(piVar2[0xd],piVar2[0xf])) {
    uVar1 = thunk_FUN_00402808(uVar1);
  }
  uVar3 = uVar1 + 3;
  if (SCARRY4(uVar1,3)) {
    uVar3 = thunk_FUN_00402808(uVar3);
  }
  param_1[0xb9] = uVar3;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_00477c31;
  puStack_2c = (undefined1 *)0x477c21;
  FUN_00403c5c(&local_10);
  puStack_2c = (undefined1 *)0x477c29;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 00477c98 FUN_00477c98 ==== */

void FUN_00477c98(int *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  int iVar3;
  int extraout_EDX_00;
  int extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  uint *local_8;
  
  puStack_10 = (undefined1 *)0x477caa;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  puStack_14 = &LAB_00477d59;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_00449c70(param_1,extraout_EDX,extraout_ECX);
  TBalloonForm_SetHideOnClick(param_1,'\0');
  TBalloonForm_SetBalloonPosition(param_1,'\x01');
  FUN_0047d5a0(param_1);
  TForm_SetClientWidth(param_1,0x96);
  iVar1 = TForm_GetClientWidth(param_1);
  uVar2 = param_1[0xb4];
  iVar3 = iVar1 - *(int *)(uVar2 + 0x38);
  if (SBORROW4(iVar1,*(int *)(uVar2 + 0x38))) {
    uVar2 = thunk_FUN_00402808(uVar2);
    iVar3 = extraout_EDX_00;
  }
  iVar1 = iVar3 + -6;
  if (SBORROW4(iVar3,6)) {
    thunk_FUN_00402808(uVar2);
    iVar1 = extraout_EDX_01;
  }
  TControl_SetLeft((int *)param_1[0xb4],iVar1);
  TControl_SetTop((int *)param_1[0xb4],6);
  TBalloonForm_SetBalloonCaption(param_1,local_8);
  TGroupBox_SetVisible
            ((int *)param_1[0xb5],CONCAT31((int3)((uint)extraout_EDX_02 >> 8),1),extraout_ECX_00);
  param_1[0xb9] = 0x2a;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00477d60;
  puStack_14 = (undefined1 *)0x477d58;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 00477d64 FUN_00477d64 ==== */

/* WARNING: Removing unreachable block (ram,0x00477d84) */
/* WARNING: Removing unreachable block (ram,0x00477d8a) */
/* WARNING: Removing unreachable block (ram,0x00477d8f) */

void FUN_00477d64(int *param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined4 *extraout_ECX_02;
  undefined4 *extraout_ECX_03;
  undefined4 *extraout_ECX_04;
  undefined4 *extraout_ECX_05;
  undefined4 *extraout_ECX_06;
  undefined4 *extraout_ECX_07;
  undefined4 *extraout_ECX_08;
  undefined4 *extraout_ECX_09;
  undefined4 *extraout_ECX_10;
  undefined4 *extraout_ECX_11;
  undefined4 *extraout_ECX_12;
  undefined4 *extraout_ECX_13;
  undefined4 *extraout_ECX_14;
  undefined4 *extraout_ECX_15;
  undefined4 *extraout_ECX_16;
  undefined4 *extraout_ECX_17;
  undefined4 *extraout_ECX_18;
  undefined4 *extraout_ECX_19;
  undefined4 *extraout_ECX_20;
  undefined4 *extraout_ECX_21;
  undefined4 *extraout_ECX_22;
  undefined4 *extraout_ECX_23;
  undefined4 *extraout_ECX_24;
  undefined4 *extraout_ECX_25;
  undefined4 *extraout_ECX_26;
  undefined4 *extraout_ECX_27;
  undefined4 *extraout_ECX_28;
  undefined4 *extraout_ECX_29;
  undefined4 *extraout_ECX_30;
  undefined4 *extraout_ECX_31;
  undefined4 *extraout_ECX_32;
  undefined4 *extraout_ECX_33;
  undefined4 *extraout_ECX_34;
  undefined4 *extraout_ECX_35;
  undefined4 *extraout_ECX_36;
  undefined4 *extraout_ECX_37;
  undefined4 *extraout_ECX_38;
  undefined4 *extraout_ECX_39;
  undefined4 *extraout_ECX_40;
  undefined4 *extraout_ECX_41;
  undefined4 *extraout_ECX_42;
  undefined4 *extraout_ECX_43;
  undefined4 *extraout_ECX_44;
  undefined4 *extraout_ECX_45;
  undefined4 *extraout_ECX_46;
  undefined4 *extraout_ECX_47;
  undefined4 *extraout_ECX_48;
  undefined4 *extraout_ECX_49;
  undefined4 *extraout_ECX_50;
  undefined4 *extraout_ECX_51;
  undefined4 *extraout_ECX_52;
  undefined4 *extraout_ECX_53;
  undefined4 *extraout_ECX_54;
  undefined4 *extraout_ECX_55;
  undefined4 *extraout_ECX_56;
  undefined4 *extraout_ECX_57;
  undefined4 *extraout_ECX_58;
  undefined4 *extraout_ECX_59;
  undefined4 *extraout_ECX_60;
  undefined4 *extraout_ECX_61;
  undefined4 *extraout_ECX_62;
  undefined4 *extraout_ECX_63;
  undefined4 *extraout_ECX_64;
  undefined4 *extraout_ECX_65;
  undefined4 *extraout_ECX_66;
  undefined4 *extraout_ECX_67;
  undefined4 *extraout_ECX_68;
  undefined4 *extraout_ECX_69;
  undefined4 *extraout_ECX_70;
  undefined4 *extraout_ECX_71;
  undefined4 *extraout_ECX_72;
  undefined4 *extraout_ECX_73;
  undefined4 *extraout_ECX_74;
  undefined4 *extraout_ECX_75;
  undefined4 *extraout_ECX_76;
  undefined4 *extraout_ECX_77;
  undefined4 *extraout_ECX_78;
  undefined4 *extraout_ECX_79;
  undefined4 *extraout_ECX_80;
  undefined4 *extraout_ECX_81;
  undefined4 *extraout_ECX_82;
  undefined4 *extraout_ECX_83;
  undefined4 *extraout_ECX_84;
  undefined4 *extraout_ECX_85;
  undefined4 *extraout_ECX_86;
  undefined4 *extraout_ECX_87;
  undefined4 *extraout_ECX_88;
  undefined4 *extraout_ECX_89;
  undefined4 *extraout_ECX_90;
  undefined4 *extraout_ECX_91;
  undefined4 *extraout_ECX_92;
  undefined4 *extraout_ECX_93;
  undefined4 *extraout_ECX_94;
  undefined4 *extraout_ECX_95;
  undefined4 *extraout_ECX_96;
  undefined4 *extraout_ECX_97;
  undefined4 *extraout_ECX_98;
  undefined4 *extraout_ECX_99;
  undefined4 *extraout_ECX_x00100;
  undefined4 *extraout_ECX_x00101;
  undefined4 *extraout_ECX_x00102;
  undefined4 *extraout_ECX_x00103;
  undefined4 *extraout_ECX_x00104;
  undefined4 *extraout_ECX_x00105;
  undefined4 *extraout_ECX_x00106;
  undefined4 *extraout_ECX_x00107;
  undefined4 *extraout_ECX_x00108;
  undefined4 *extraout_ECX_x00109;
  undefined4 *extraout_ECX_x00110;
  undefined4 *extraout_ECX_x00111;
  undefined4 *extraout_ECX_x00112;
  undefined4 *extraout_ECX_x00113;
  undefined4 *extraout_ECX_x00114;
  undefined4 *extraout_ECX_x00115;
  undefined4 *extraout_ECX_x00116;
  undefined4 *extraout_ECX_x00117;
  undefined4 *extraout_ECX_x00118;
  undefined4 *extraout_ECX_x00119;
  undefined4 *extraout_ECX_x00120;
  undefined4 *extraout_ECX_x00121;
  undefined4 *extraout_ECX_x00122;
  undefined4 *extraout_ECX_x00123;
  undefined4 *extraout_ECX_x00124;
  undefined4 *extraout_ECX_x00125;
  undefined4 *extraout_ECX_x00126;
  undefined4 *extraout_ECX_x00127;
  undefined4 *extraout_ECX_x00128;
  undefined4 *extraout_ECX_x00129;
  undefined4 *extraout_ECX_x00130;
  undefined4 *extraout_ECX_x00131;
  undefined4 *extraout_ECX_x00132;
  undefined4 *extraout_ECX_x00133;
  undefined4 *extraout_ECX_x00134;
  undefined4 *extraout_ECX_x00135;
  undefined4 *extraout_ECX_x00136;
  undefined4 *extraout_ECX_x00137;
  undefined4 *extraout_ECX_x00138;
  undefined4 *extraout_ECX_x00139;
  undefined4 *extraout_ECX_x00140;
  undefined4 *extraout_ECX_x00141;
  undefined4 *extraout_ECX_x00142;
  undefined4 *extraout_ECX_x00143;
  undefined4 *extraout_ECX_x00144;
  undefined4 *extraout_ECX_x00145;
  undefined4 *extraout_ECX_x00146;
  undefined4 *extraout_ECX_x00147;
  undefined4 *extraout_ECX_x00148;
  undefined4 *extraout_ECX_x00149;
  undefined4 *extraout_ECX_x00150;
  undefined4 *extraout_ECX_x00151;
  undefined4 *extraout_ECX_x00152;
  undefined4 *extraout_ECX_x00153;
  undefined4 *extraout_ECX_x00154;
  undefined4 *extraout_ECX_x00155;
  undefined4 *extraout_ECX_x00156;
  undefined4 *extraout_ECX_x00157;
  undefined4 *extraout_ECX_x00158;
  undefined4 *extraout_ECX_x00159;
  undefined4 *extraout_ECX_x00160;
  undefined4 *extraout_ECX_x00161;
  undefined4 *extraout_ECX_x00162;
  undefined4 *extraout_ECX_x00163;
  undefined4 *extraout_ECX_x00164;
  undefined4 *extraout_ECX_x00165;
  undefined4 *extraout_ECX_x00166;
  undefined4 *extraout_ECX_x00167;
  undefined4 *extraout_ECX_x00168;
  undefined4 *extraout_ECX_x00169;
  undefined4 *extraout_ECX_x00170;
  undefined4 *extraout_ECX_x00171;
  undefined4 *extraout_ECX_x00172;
  undefined4 *extraout_ECX_x00173;
  undefined4 *extraout_ECX_x00174;
  undefined4 *extraout_ECX_x00175;
  undefined4 *extraout_ECX_x00176;
  undefined4 *extraout_ECX_x00177;
  undefined4 *extraout_ECX_x00178;
  undefined4 *extraout_ECX_x00179;
  undefined4 *extraout_ECX_x00180;
  undefined4 *extraout_ECX_x00181;
  undefined4 *extraout_ECX_x00182;
  undefined4 *extraout_ECX_x00183;
  undefined4 *extraout_ECX_x00184;
  undefined4 *extraout_ECX_x00185;
  undefined4 *extraout_ECX_x00186;
  undefined4 *extraout_ECX_x00187;
  undefined4 *extraout_ECX_x00188;
  undefined4 *extraout_ECX_x00189;
  undefined4 *extraout_ECX_x00190;
  undefined4 *extraout_ECX_x00191;
  undefined4 *extraout_ECX_x00192;
  undefined4 *extraout_ECX_x00193;
  undefined4 *extraout_ECX_x00194;
  undefined4 *extraout_ECX_x00195;
  undefined4 *extraout_ECX_x00196;
  undefined4 *extraout_ECX_x00197;
  undefined4 *extraout_ECX_x00198;
  undefined4 *extraout_ECX_x00199;
  undefined4 *extraout_ECX_x00200;
  undefined4 *extraout_ECX_x00201;
  undefined4 *extraout_ECX_x00202;
  undefined4 *extraout_ECX_x00203;
  undefined4 *extraout_ECX_x00204;
  undefined4 *extraout_ECX_x00205;
  undefined4 *extraout_ECX_x00206;
  undefined4 *extraout_ECX_x00207;
  undefined4 *extraout_ECX_x00208;
  undefined4 *extraout_ECX_x00209;
  undefined4 *extraout_ECX_x00210;
  undefined4 *extraout_ECX_x00211;
  undefined4 *extraout_ECX_x00212;
  undefined4 *extraout_ECX_x00213;
  undefined4 *extraout_ECX_x00214;
  undefined4 *extraout_ECX_x00215;
  undefined4 *extraout_ECX_x00216;
  undefined4 *extraout_ECX_x00217;
  undefined4 *extraout_ECX_x00218;
  undefined4 *extraout_ECX_x00219;
  undefined4 *extraout_ECX_x00220;
  undefined4 *extraout_ECX_x00221;
  undefined4 *extraout_ECX_x00222;
  undefined4 *extraout_ECX_x00223;
  undefined4 *extraout_ECX_x00224;
  undefined4 *extraout_ECX_x00225;
  undefined4 *extraout_ECX_x00226;
  undefined4 *extraout_ECX_x00227;
  undefined4 *extraout_ECX_x00228;
  undefined4 *extraout_ECX_x00229;
  undefined4 *extraout_ECX_x00230;
  undefined4 *extraout_ECX_x00231;
  undefined4 *extraout_ECX_x00232;
  undefined4 *extraout_ECX_x00233;
  undefined4 *extraout_ECX_x00234;
  undefined4 *extraout_ECX_x00235;
  undefined4 *extraout_ECX_x00236;
  undefined4 *extraout_ECX_x00237;
  undefined4 *extraout_ECX_x00238;
  undefined4 *extraout_ECX_x00239;
  undefined4 *extraout_ECX_x00240;
  undefined4 *extraout_ECX_x00241;
  undefined4 *extraout_ECX_x00242;
  undefined4 *extraout_ECX_x00243;
  undefined4 *extraout_ECX_x00244;
  undefined4 *extraout_ECX_x00245;
  undefined4 *extraout_ECX_x00246;
  undefined4 *extraout_ECX_x00247;
  undefined4 *extraout_ECX_x00248;
  undefined4 *extraout_ECX_x00249;
  undefined4 *extraout_ECX_x00250;
  undefined4 *extraout_ECX_x00251;
  undefined4 *extraout_ECX_x00252;
  undefined4 *extraout_ECX_x00253;
  undefined4 *extraout_ECX_x00254;
  undefined4 *extraout_ECX_x00255;
  undefined4 *extraout_ECX_x00256;
  undefined4 *extraout_ECX_x00257;
  undefined4 *extraout_ECX_x00258;
  undefined4 *extraout_ECX_x00259;
  undefined4 *extraout_ECX_x00260;
  undefined4 *extraout_ECX_x00261;
  undefined4 *extraout_ECX_x00262;
  undefined4 *extraout_ECX_x00263;
  undefined4 *extraout_ECX_x00264;
  undefined4 *extraout_ECX_x00265;
  undefined4 *extraout_ECX_x00266;
  undefined4 *extraout_ECX_x00267;
  undefined4 *extraout_ECX_x00268;
  undefined4 *extraout_ECX_x00269;
  undefined4 *extraout_ECX_x00270;
  undefined4 *extraout_ECX_x00271;
  undefined4 *extraout_ECX_x00272;
  undefined4 *extraout_ECX_x00273;
  undefined4 *extraout_ECX_x00274;
  undefined4 *extraout_ECX_x00275;
  undefined4 *extraout_ECX_x00276;
  undefined4 *extraout_ECX_x00277;
  undefined4 *extraout_ECX_x00278;
  undefined4 *extraout_ECX_x00279;
  undefined4 *extraout_ECX_x00280;
  undefined4 *extraout_ECX_x00281;
  undefined4 *extraout_ECX_x00282;
  undefined4 *puVar4;
  undefined4 *extraout_ECX_x00283;
  undefined4 *extraout_ECX_x00284;
  undefined4 *extraout_ECX_x00285;
  undefined4 *extraout_ECX_x00286;
  undefined4 *extraout_ECX_x00287;
  undefined4 *extraout_ECX_x00288;
  undefined4 *extraout_ECX_x00289;
  undefined4 *extraout_ECX_x00290;
  undefined4 *extraout_ECX_x00291;
  undefined4 *extraout_ECX_x00292;
  undefined4 *extraout_ECX_x00293;
  undefined4 *extraout_ECX_x00294;
  undefined4 *extraout_ECX_x00295;
  undefined4 *extraout_ECX_x00296;
  undefined4 *extraout_ECX_x00297;
  undefined4 *extraout_ECX_x00298;
  undefined4 *extraout_ECX_x00299;
  undefined4 *extraout_ECX_x00300;
  undefined4 *extraout_ECX_x00301;
  undefined4 *extraout_ECX_x00302;
  undefined4 *extraout_ECX_x00303;
  undefined4 *extraout_ECX_x00304;
  undefined4 *extraout_ECX_x00305;
  undefined4 *extraout_ECX_x00306;
  undefined4 *extraout_ECX_x00307;
  undefined4 *extraout_ECX_x00308;
  undefined4 *extraout_ECX_x00309;
  undefined4 *extraout_ECX_x00310;
  undefined4 *extraout_ECX_x00311;
  undefined4 *extraout_ECX_x00312;
  undefined4 *extraout_ECX_x00313;
  undefined4 *extraout_ECX_x00314;
  undefined4 *extraout_ECX_x00315;
  undefined4 *extraout_ECX_x00316;
  undefined4 *extraout_ECX_x00317;
  undefined4 *extraout_ECX_x00318;
  undefined4 *extraout_ECX_x00319;
  undefined4 *extraout_ECX_x00320;
  undefined4 *extraout_ECX_x00321;
  undefined4 *extraout_ECX_x00322;
  undefined4 *extraout_ECX_x00323;
  undefined4 *extraout_ECX_x00324;
  undefined4 *extraout_ECX_x00325;
  undefined4 *extraout_ECX_x00326;
  undefined4 *extraout_ECX_x00327;
  undefined4 *extraout_ECX_x00328;
  undefined4 *extraout_ECX_x00329;
  undefined4 *extraout_ECX_x00330;
  undefined4 *extraout_ECX_x00331;
  undefined4 *extraout_ECX_x00332;
  undefined4 *extraout_ECX_x00333;
  undefined4 *extraout_ECX_x00334;
  undefined4 *extraout_ECX_x00335;
  undefined4 *extraout_ECX_x00336;
  undefined4 *extraout_ECX_x00337;
  undefined4 *extraout_ECX_x00338;
  undefined4 *extraout_ECX_x00339;
  undefined4 *extraout_ECX_x00340;
  undefined4 *extraout_ECX_x00341;
  undefined4 *extraout_ECX_x00342;
  undefined4 *extraout_ECX_x00343;
  undefined4 *extraout_ECX_x00344;
  undefined4 *extraout_ECX_x00345;
  undefined4 *extraout_ECX_x00346;
  undefined4 *extraout_ECX_x00347;
  undefined4 *extraout_ECX_x00348;
  undefined4 *extraout_ECX_x00349;
  undefined4 *extraout_ECX_x00350;
  undefined4 *extraout_ECX_x00351;
  undefined4 *extraout_ECX_x00352;
  undefined4 *extraout_ECX_x00353;
  undefined4 *extraout_ECX_x00354;
  undefined4 *extraout_ECX_x00355;
  undefined4 *extraout_ECX_x00356;
  undefined4 *extraout_ECX_x00357;
  undefined4 *extraout_ECX_x00358;
  undefined4 *extraout_ECX_x00359;
  undefined4 *extraout_ECX_x00360;
  undefined4 *extraout_ECX_x00361;
  undefined4 *extraout_ECX_x00362;
  undefined4 *extraout_ECX_x00363;
  undefined4 *extraout_ECX_x00364;
  undefined4 *extraout_ECX_x00365;
  undefined4 *extraout_ECX_x00366;
  undefined4 *extraout_ECX_x00367;
  undefined4 *extraout_ECX_x00368;
  undefined4 *extraout_ECX_x00369;
  undefined4 *extraout_ECX_x00370;
  undefined4 *extraout_ECX_x00371;
  undefined4 *extraout_ECX_x00372;
  undefined4 *extraout_ECX_x00373;
  undefined4 *extraout_ECX_x00374;
  undefined4 *extraout_ECX_x00375;
  undefined4 *extraout_ECX_x00376;
  undefined4 *extraout_ECX_x00377;
  undefined4 *extraout_ECX_x00378;
  undefined4 *extraout_ECX_x00379;
  undefined4 *extraout_ECX_x00380;
  undefined4 *extraout_ECX_x00381;
  undefined4 *extraout_ECX_x00382;
  undefined4 *extraout_ECX_x00383;
  undefined4 *extraout_ECX_x00384;
  undefined4 *extraout_ECX_x00385;
  undefined4 *extraout_ECX_x00386;
  undefined4 *extraout_ECX_x00387;
  undefined4 *extraout_ECX_x00388;
  undefined4 *extraout_ECX_x00389;
  undefined4 *extraout_ECX_x00390;
  undefined4 *extraout_ECX_x00391;
  undefined4 *extraout_ECX_x00392;
  undefined4 *extraout_ECX_x00393;
  undefined4 *extraout_ECX_x00394;
  undefined4 *extraout_ECX_x00395;
  undefined4 *extraout_ECX_x00396;
  undefined4 *extraout_ECX_x00397;
  undefined4 *extraout_ECX_x00398;
  undefined4 *extraout_ECX_x00399;
  undefined4 *extraout_ECX_x00400;
  undefined4 *extraout_ECX_x00401;
  undefined4 *extraout_ECX_x00402;
  undefined4 *extraout_ECX_x00403;
  undefined4 *extraout_ECX_x00404;
  undefined4 *extraout_ECX_x00405;
  undefined4 *extraout_ECX_x00406;
  undefined4 *extraout_ECX_x00407;
  undefined4 *extraout_ECX_x00408;
  undefined4 *extraout_ECX_x00409;
  undefined4 *extraout_ECX_x00410;
  undefined4 *extraout_ECX_x00411;
  undefined4 *extraout_ECX_x00412;
  undefined4 *extraout_ECX_x00413;
  undefined4 *extraout_ECX_x00414;
  undefined4 *extraout_ECX_x00415;
  undefined4 *extraout_ECX_x00416;
  undefined4 *extraout_ECX_x00417;
  undefined4 *extraout_ECX_x00418;
  undefined4 *extraout_ECX_x00419;
  undefined4 *extraout_ECX_x00420;
  undefined4 *extraout_ECX_x00421;
  undefined4 *extraout_ECX_x00422;
  undefined4 *extraout_ECX_x00423;
  undefined4 *extraout_ECX_x00424;
  undefined4 *extraout_ECX_x00425;
  undefined4 *extraout_ECX_x00426;
  undefined4 *extraout_ECX_x00427;
  undefined4 *extraout_ECX_x00428;
  undefined4 *extraout_ECX_x00429;
  undefined4 *extraout_ECX_x00430;
  undefined4 *extraout_ECX_x00431;
  undefined4 *extraout_ECX_x00432;
  undefined4 *extraout_ECX_x00433;
  undefined4 *extraout_ECX_x00434;
  undefined4 *extraout_ECX_x00435;
  undefined4 *extraout_ECX_x00436;
  undefined4 *extraout_ECX_x00437;
  undefined4 *extraout_ECX_x00438;
  undefined4 *extraout_ECX_x00439;
  undefined4 *extraout_ECX_x00440;
  undefined4 *extraout_ECX_x00441;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  int extraout_EDX_06;
  int extraout_EDX_07;
  int extraout_EDX_08;
  int extraout_EDX_09;
  int extraout_EDX_10;
  int extraout_EDX_11;
  int extraout_EDX_12;
  int extraout_EDX_13;
  int extraout_EDX_14;
  int extraout_EDX_15;
  int extraout_EDX_16;
  int extraout_EDX_17;
  int extraout_EDX_18;
  int extraout_EDX_19;
  int extraout_EDX_20;
  int extraout_EDX_21;
  int extraout_EDX_22;
  int extraout_EDX_23;
  int extraout_EDX_24;
  int extraout_EDX_25;
  int extraout_EDX_26;
  int extraout_EDX_27;
  int extraout_EDX_28;
  int extraout_EDX_29;
  int extraout_EDX_30;
  int extraout_EDX_31;
  int extraout_EDX_32;
  int extraout_EDX_33;
  int extraout_EDX_34;
  int extraout_EDX_35;
  int extraout_EDX_36;
  int extraout_EDX_37;
  int extraout_EDX_38;
  int extraout_EDX_39;
  int extraout_EDX_40;
  int extraout_EDX_41;
  int extraout_EDX_42;
  int extraout_EDX_43;
  int extraout_EDX_44;
  int extraout_EDX_45;
  int extraout_EDX_46;
  int extraout_EDX_47;
  int extraout_EDX_48;
  int extraout_EDX_49;
  int extraout_EDX_50;
  int extraout_EDX_51;
  int extraout_EDX_52;
  int extraout_EDX_53;
  int extraout_EDX_54;
  int extraout_EDX_55;
  int extraout_EDX_56;
  int extraout_EDX_57;
  int extraout_EDX_58;
  int extraout_EDX_59;
  int extraout_EDX_60;
  int extraout_EDX_61;
  int extraout_EDX_62;
  int extraout_EDX_63;
  int extraout_EDX_64;
  int extraout_EDX_65;
  int extraout_EDX_66;
  int extraout_EDX_67;
  int extraout_EDX_68;
  int extraout_EDX_69;
  int extraout_EDX_70;
  int extraout_EDX_71;
  int extraout_EDX_72;
  int extraout_EDX_73;
  int extraout_EDX_74;
  int extraout_EDX_75;
  int extraout_EDX_76;
  int extraout_EDX_77;
  int extraout_EDX_78;
  int extraout_EDX_79;
  int extraout_EDX_80;
  int extraout_EDX_81;
  int extraout_EDX_82;
  int extraout_EDX_83;
  int extraout_EDX_84;
  int extraout_EDX_85;
  int extraout_EDX_86;
  int extraout_EDX_87;
  int extraout_EDX_88;
  int extraout_EDX_89;
  int extraout_EDX_90;
  int extraout_EDX_91;
  int extraout_EDX_92;
  int extraout_EDX_93;
  int extraout_EDX_94;
  int extraout_EDX_95;
  int extraout_EDX_96;
  int extraout_EDX_97;
  int extraout_EDX_98;
  int extraout_EDX_99;
  int extraout_EDX_x00100;
  int extraout_EDX_x00101;
  int extraout_EDX_x00102;
  int extraout_EDX_x00103;
  int extraout_EDX_x00104;
  int extraout_EDX_x00105;
  int extraout_EDX_x00106;
  int extraout_EDX_x00107;
  int extraout_EDX_x00108;
  int extraout_EDX_x00109;
  int extraout_EDX_x00110;
  int extraout_EDX_x00111;
  int extraout_EDX_x00112;
  int extraout_EDX_x00113;
  int extraout_EDX_x00114;
  int extraout_EDX_x00115;
  int extraout_EDX_x00116;
  int extraout_EDX_x00117;
  int extraout_EDX_x00118;
  int extraout_EDX_x00119;
  int extraout_EDX_x00120;
  int extraout_EDX_x00121;
  int extraout_EDX_x00122;
  int extraout_EDX_x00123;
  int extraout_EDX_x00124;
  int extraout_EDX_x00125;
  int extraout_EDX_x00126;
  int extraout_EDX_x00127;
  int extraout_EDX_x00128;
  int extraout_EDX_x00129;
  int extraout_EDX_x00130;
  int extraout_EDX_x00131;
  int extraout_EDX_x00132;
  int extraout_EDX_x00133;
  int extraout_EDX_x00134;
  int extraout_EDX_x00135;
  int extraout_EDX_x00136;
  int extraout_EDX_x00137;
  int extraout_EDX_x00138;
  int extraout_EDX_x00139;
  int extraout_EDX_x00140;
  int extraout_EDX_x00141;
  int extraout_EDX_x00142;
  int extraout_EDX_x00143;
  int extraout_EDX_x00144;
  int extraout_EDX_x00145;
  int extraout_EDX_x00146;
  int extraout_EDX_x00147;
  int extraout_EDX_x00148;
  int extraout_EDX_x00149;
  int extraout_EDX_x00150;
  int extraout_EDX_x00151;
  int extraout_EDX_x00152;
  int extraout_EDX_x00153;
  int extraout_EDX_x00154;
  int extraout_EDX_x00155;
  int extraout_EDX_x00156;
  int extraout_EDX_x00157;
  int extraout_EDX_x00158;
  int extraout_EDX_x00159;
  int extraout_EDX_x00160;
  int extraout_EDX_x00161;
  int extraout_EDX_x00162;
  int extraout_EDX_x00163;
  int extraout_EDX_x00164;
  int extraout_EDX_x00165;
  int extraout_EDX_x00166;
  int extraout_EDX_x00167;
  int extraout_EDX_x00168;
  int extraout_EDX_x00169;
  int extraout_EDX_x00170;
  int extraout_EDX_x00171;
  int extraout_EDX_x00172;
  int extraout_EDX_x00173;
  int extraout_EDX_x00174;
  int extraout_EDX_x00175;
  int extraout_EDX_x00176;
  int extraout_EDX_x00177;
  int extraout_EDX_x00178;
  int extraout_EDX_x00179;
  int extraout_EDX_x00180;
  int extraout_EDX_x00181;
  int extraout_EDX_x00182;
  int extraout_EDX_x00183;
  int iVar5;
  int extraout_EDX_x00184;
  int extraout_EDX_x00185;
  int extraout_EDX_x00186;
  int extraout_EDX_x00187;
  int extraout_EDX_x00188;
  int extraout_EDX_x00189;
  int extraout_EDX_x00190;
  int extraout_EDX_x00191;
  int extraout_EDX_x00192;
  int extraout_EDX_x00193;
  int extraout_EDX_x00194;
  int extraout_EDX_x00195;
  int extraout_EDX_x00196;
  int extraout_EDX_x00197;
  int extraout_EDX_x00198;
  int extraout_EDX_x00199;
  int extraout_EDX_x00200;
  int extraout_EDX_x00201;
  int extraout_EDX_x00202;
  int extraout_EDX_x00203;
  int extraout_EDX_x00204;
  int extraout_EDX_x00205;
  int extraout_EDX_x00206;
  int extraout_EDX_x00207;
  int extraout_EDX_x00208;
  int extraout_EDX_x00209;
  int extraout_EDX_x00210;
  int extraout_EDX_x00211;
  int extraout_EDX_x00212;
  int extraout_EDX_x00213;
  int extraout_EDX_x00214;
  int extraout_EDX_x00215;
  int extraout_EDX_x00216;
  int extraout_EDX_x00217;
  int extraout_EDX_x00218;
  int extraout_EDX_x00219;
  int extraout_EDX_x00220;
  int extraout_EDX_x00221;
  int extraout_EDX_x00222;
  int extraout_EDX_x00223;
  int extraout_EDX_x00224;
  int extraout_EDX_x00225;
  int extraout_EDX_x00226;
  int extraout_EDX_x00227;
  int extraout_EDX_x00228;
  int extraout_EDX_x00229;
  int extraout_EDX_x00230;
  int extraout_EDX_x00231;
  int extraout_EDX_x00232;
  int extraout_EDX_x00233;
  int extraout_EDX_x00234;
  int extraout_EDX_x00235;
  int extraout_EDX_x00236;
  int extraout_EDX_x00237;
  int extraout_EDX_x00238;
  int extraout_EDX_x00239;
  int extraout_EDX_x00240;
  int extraout_EDX_x00241;
  int extraout_EDX_x00242;
  int extraout_EDX_x00243;
  int extraout_EDX_x00244;
  int extraout_EDX_x00245;
  int extraout_EDX_x00246;
  int extraout_EDX_x00247;
  int extraout_EDX_x00248;
  int extraout_EDX_x00249;
  int extraout_EDX_x00250;
  int extraout_EDX_x00251;
  int extraout_EDX_x00252;
  int extraout_EDX_x00253;
  int extraout_EDX_x00254;
  int extraout_EDX_x00255;
  int extraout_EDX_x00256;
  int extraout_EDX_x00257;
  int extraout_EDX_x00258;
  int extraout_EDX_x00259;
  int extraout_EDX_x00260;
  int extraout_EDX_x00261;
  int extraout_EDX_x00262;
  int extraout_EDX_x00263;
  int extraout_EDX_x00264;
  int extraout_EDX_x00265;
  int extraout_EDX_x00266;
  int extraout_EDX_x00267;
  int extraout_EDX_x00268;
  int extraout_EDX_x00269;
  int extraout_EDX_x00270;
  int extraout_EDX_x00271;
  int extraout_EDX_x00272;
  int extraout_EDX_x00273;
  int extraout_EDX_x00274;
  int extraout_EDX_x00275;
  int extraout_EDX_x00276;
  int extraout_EDX_x00277;
  int extraout_EDX_x00278;
  int extraout_EDX_x00279;
  int extraout_EDX_x00280;
  int extraout_EDX_x00281;
  int extraout_EDX_x00282;
  int extraout_EDX_x00283;
  int extraout_EDX_x00284;
  int iVar6;
  int extraout_EDX_x00285;
  int extraout_EDX_x00286;
  int extraout_EDX_x00287;
  int extraout_EDX_x00288;
  int extraout_EDX_x00289;
  int extraout_EDX_x00290;
  int extraout_EDX_x00291;
  int extraout_EDX_x00292;
  int extraout_EDX_x00293;
  int extraout_EDX_x00294;
  int extraout_EDX_x00295;
  int extraout_EDX_x00296;
  int extraout_EDX_x00297;
  int extraout_EDX_x00298;
  int extraout_EDX_x00299;
  int extraout_EDX_x00300;
  int extraout_EDX_x00301;
  int extraout_EDX_x00302;
  int extraout_EDX_x00303;
  int extraout_EDX_x00304;
  int extraout_EDX_x00305;
  int iVar7;
  int extraout_EDX_x00306;
  int extraout_EDX_x00307;
  int extraout_EDX_x00308;
  int extraout_EDX_x00309;
  int extraout_EDX_x00310;
  int extraout_EDX_x00311;
  int extraout_EDX_x00312;
  int extraout_EDX_x00313;
  int extraout_EDX_x00314;
  int extraout_EDX_x00315;
  int extraout_EDX_x00316;
  int extraout_EDX_x00317;
  int extraout_EDX_x00318;
  int extraout_EDX_x00319;
  int extraout_EDX_x00320;
  int extraout_EDX_x00321;
  int extraout_EDX_x00322;
  int extraout_EDX_x00323;
  int extraout_EDX_x00324;
  int extraout_EDX_x00325;
  int extraout_EDX_x00326;
  int iVar8;
  uint uVar9;
  undefined4 local_380;
  undefined4 local_37c;
  undefined4 local_378;
  undefined4 local_374;
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  uint local_324;
  undefined4 local_320;
  uint local_31c;
  undefined4 local_318;
  uint local_314;
  undefined4 local_310;
  uint local_30c;
  undefined4 local_308;
  uint local_304;
  undefined4 local_300;
  uint local_2fc;
  undefined4 local_2f8;
  uint local_2f4;
  undefined4 local_2f0;
  uint local_2ec;
  undefined4 local_2e8;
  uint local_2e4;
  undefined4 local_2e0;
  uint local_2dc;
  undefined4 local_2d8;
  uint local_2d4;
  undefined4 local_2d0;
  uint local_2cc;
  undefined4 local_2c8;
  uint local_2c4;
  undefined4 local_2c0;
  uint local_2bc;
  undefined4 local_2b8;
  uint local_2b4;
  undefined4 local_2b0;
  uint local_2ac;
  undefined4 local_2a8;
  uint local_2a4;
  undefined4 local_2a0;
  uint local_29c;
  undefined4 local_298;
  uint local_294;
  undefined4 local_290;
  uint local_28c;
  undefined4 local_288;
  uint local_284;
  undefined4 local_280;
  uint local_27c;
  undefined4 local_278;
  uint local_274;
  undefined4 local_270;
  uint local_26c;
  undefined4 local_268;
  uint local_264;
  undefined4 local_260;
  uint local_25c;
  undefined4 local_258;
  uint local_254;
  undefined4 local_250;
  uint local_24c;
  undefined4 local_248;
  uint local_244;
  undefined4 local_240;
  uint local_23c;
  undefined4 local_238;
  uint local_234;
  undefined4 local_230;
  uint local_22c;
  undefined4 local_228;
  uint local_224;
  undefined4 local_220;
  uint local_21c;
  undefined4 local_218;
  uint local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  LONG local_1d8;
  LONG local_1d4;
  POINT point;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  uint local_18c;
  undefined4 local_188;
  uint local_184;
  undefined4 local_180;
  uint local_17c;
  undefined4 local_178;
  uint local_174;
  undefined4 local_170;
  uint local_16c;
  undefined4 local_168;
  uint local_164;
  undefined4 local_160;
  uint local_15c;
  undefined4 local_158;
  uint local_154;
  undefined4 local_150;
  uint local_14c;
  undefined4 local_148;
  uint local_144;
  undefined4 local_140;
  uint local_13c;
  undefined4 local_138;
  uint local_134;
  undefined4 local_130;
  uint local_12c;
  undefined4 local_128;
  uint local_124;
  undefined4 local_120;
  uint local_11c;
  undefined4 local_118;
  uint local_114;
  undefined4 local_110;
  uint local_10c;
  undefined4 local_108;
  uint local_104;
  undefined4 local_100;
  uint local_fc;
  undefined4 local_f8;
  uint local_f4;
  undefined4 local_f0;
  uint local_ec;
  undefined4 local_e8;
  uint local_e4;
  undefined4 local_e0;
  uint local_dc;
  undefined4 local_d8;
  uint local_d4;
  undefined4 local_d0;
  uint local_cc;
  undefined4 local_c8;
  uint local_c4;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  uint local_b4;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a8;
  uint local_a4;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  uint local_94;
  undefined4 local_90;
  uint local_8c;
  undefined4 local_88;
  uint local_84;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [2];
  uint local_18;
  int local_14;
  undefined4 local_10;
  int *local_c;
  int *local_8;
  
  uVar2 = param_1[0xe] - 10;
  local_c = param_2;
  local_8 = param_1;
  if (SBORROW4(param_1[0xe],10)) {
    uVar2 = thunk_FUN_00402808(uVar2);
  }
  uVar9 = 0x30;
  if ((int)uVar2 < 0x30) {
    uVar9 = uVar2;
  }
  if ((int)uVar9 < 0xf) {
    uVar9 = 0xf;
  }
  TPen_SetColor((int *)local_c[4],local_8[0xb7]);
  TPen_SetStyle((int *)local_c[4],0);
  (**(code **)(*local_8 + 0x40))(local_8,local_20);
  (**(code **)(*local_8 + 0x40))(local_8,local_20);
  (**(code **)(*local_8 + 0x40))(local_8,local_20);
  local_10 = local_20[0];
  cVar1 = (char)local_8[0xb6];
  if (cVar1 == '\0') {
    FUN_0040f7d0(5,0,&local_1d8);
    point.x = local_1d8;
    point.y = local_1d4;
    FUN_0040f7d0(5,1,&local_1e0);
    local_1c8 = local_1e0;
    local_1c4 = local_1dc;
    FUN_0040f7d0(3,1,&local_1e8);
    local_1c0 = local_1e8;
    local_1bc = local_1e4;
    FUN_0040f7d0(3,2,&local_1f0);
    local_1b8 = local_1f0;
    local_1b4 = local_1ec;
    FUN_0040f7d0(2,2,&local_1f8);
    local_1b0 = local_1f8;
    local_1ac = local_1f4;
    FUN_0040f7d0(2,3,&local_200);
    local_1a8 = local_200;
    local_1a4 = local_1fc;
    FUN_0040f7d0(1,3,&local_208);
    local_1a0 = local_208;
    local_19c = local_204;
    FUN_0040f7d0(1,5,&local_210);
    local_198 = local_210;
    local_194 = local_20c;
    FUN_0040f7d0(local_10,5,&local_218);
    local_190 = local_218;
    local_18c = local_214;
    puVar4 = &local_220;
    iVar6 = local_14 + -0x15;
    if (SBORROW4(local_14,0x15)) {
      thunk_FUN_00402808(local_214);
      puVar4 = extraout_ECX;
      iVar6 = extraout_EDX;
    }
    FUN_0040f7d0(local_10,iVar6,puVar4);
    local_188 = local_220;
    local_184 = local_21c;
    puVar4 = &local_228;
    iVar6 = local_14 + -0x15;
    if (SBORROW4(local_14,0x15)) {
      thunk_FUN_00402808(local_21c);
      puVar4 = extraout_ECX_00;
      iVar6 = extraout_EDX_00;
    }
    FUN_0040f7d0(1,iVar6,puVar4);
    local_180 = local_228;
    local_17c = local_224;
    puVar4 = &local_230;
    iVar6 = local_14 + -0x13;
    if (SBORROW4(local_14,0x13)) {
      thunk_FUN_00402808(local_224);
      puVar4 = extraout_ECX_01;
      iVar6 = extraout_EDX_01;
    }
    FUN_0040f7d0(1,iVar6,puVar4);
    local_178 = local_230;
    local_174 = local_22c;
    puVar4 = &local_238;
    iVar6 = local_14 + -0x13;
    if (SBORROW4(local_14,0x13)) {
      thunk_FUN_00402808(local_22c);
      puVar4 = extraout_ECX_02;
      iVar6 = extraout_EDX_02;
    }
    FUN_0040f7d0(2,iVar6,puVar4);
    local_170 = local_238;
    local_16c = local_234;
    puVar4 = &local_240;
    iVar6 = local_14 + -0x12;
    if (SBORROW4(local_14,0x12)) {
      thunk_FUN_00402808(local_234);
      puVar4 = extraout_ECX_03;
      iVar6 = extraout_EDX_03;
    }
    FUN_0040f7d0(2,iVar6,puVar4);
    local_168 = local_240;
    local_164 = local_23c;
    puVar4 = &local_248;
    iVar6 = local_14 + -0x12;
    if (SBORROW4(local_14,0x12)) {
      thunk_FUN_00402808(local_23c);
      puVar4 = extraout_ECX_04;
      iVar6 = extraout_EDX_04;
    }
    FUN_0040f7d0(4,iVar6,puVar4);
    local_160 = local_248;
    local_15c = local_244;
    puVar4 = &local_250;
    iVar6 = local_14 + -0x11;
    if (SBORROW4(local_14,0x11)) {
      thunk_FUN_00402808(local_244);
      puVar4 = extraout_ECX_05;
      iVar6 = extraout_EDX_05;
    }
    FUN_0040f7d0(4,iVar6,puVar4);
    local_158 = local_250;
    local_154 = local_24c;
    puVar4 = &local_258;
    iVar6 = local_14 + -0x11;
    if (SBORROW4(local_14,0x11)) {
      thunk_FUN_00402808(local_24c);
      puVar4 = extraout_ECX_06;
      iVar6 = extraout_EDX_06;
    }
    uVar2 = uVar9 - 8;
    if (SBORROW4(uVar9,8)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_07;
      iVar6 = extraout_EDX_07;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_150 = local_258;
    local_14c = local_254;
    puVar4 = &local_260;
    iVar6 = local_14 + -1;
    if (SBORROW4(local_14,1)) {
      thunk_FUN_00402808(local_254);
      puVar4 = extraout_ECX_08;
      iVar6 = extraout_EDX_08;
    }
    uVar2 = uVar9 - 8;
    if (SBORROW4(uVar9,8)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_09;
      iVar6 = extraout_EDX_09;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_148 = local_260;
    local_144 = local_25c;
    puVar4 = &local_268;
    iVar6 = local_14 + -2;
    if (SBORROW4(local_14,2)) {
      thunk_FUN_00402808(local_25c);
      puVar4 = extraout_ECX_10;
      iVar6 = extraout_EDX_10;
    }
    uVar2 = uVar9 - 8;
    if (SBORROW4(uVar9,8)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_11;
      iVar6 = extraout_EDX_11;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_140 = local_268;
    local_13c = local_264;
    puVar4 = &local_270;
    iVar6 = local_14 + -3;
    if (SBORROW4(local_14,3)) {
      thunk_FUN_00402808(local_264);
      puVar4 = extraout_ECX_12;
      iVar6 = extraout_EDX_12;
    }
    uVar2 = uVar9 - 8;
    if (SBORROW4(uVar9,8)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_13;
      iVar6 = extraout_EDX_13;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_138 = local_270;
    local_134 = local_26c;
    puVar4 = &local_278;
    iVar6 = local_14 + -4;
    if (SBORROW4(local_14,4)) {
      thunk_FUN_00402808(local_26c);
      puVar4 = extraout_ECX_14;
      iVar6 = extraout_EDX_14;
    }
    uVar2 = uVar9 - 8;
    if (SBORROW4(uVar9,8)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_15;
      iVar6 = extraout_EDX_15;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_130 = local_278;
    local_12c = local_274;
    puVar4 = &local_280;
    iVar6 = local_14 + -4;
    if (SBORROW4(local_14,4)) {
      thunk_FUN_00402808(local_274);
      puVar4 = extraout_ECX_16;
      iVar6 = extraout_EDX_16;
    }
    uVar2 = uVar9 - 7;
    if (SBORROW4(uVar9,7)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_17;
      iVar6 = extraout_EDX_17;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_128 = local_280;
    local_124 = local_27c;
    puVar4 = &local_288;
    iVar6 = local_14 + -6;
    if (SBORROW4(local_14,6)) {
      thunk_FUN_00402808(local_27c);
      puVar4 = extraout_ECX_18;
      iVar6 = extraout_EDX_18;
    }
    uVar2 = uVar9 - 7;
    if (SBORROW4(uVar9,7)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_19;
      iVar6 = extraout_EDX_19;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_120 = local_288;
    local_11c = local_284;
    puVar4 = &local_290;
    iVar6 = local_14 + -6;
    if (SBORROW4(local_14,6)) {
      thunk_FUN_00402808(local_284);
      puVar4 = extraout_ECX_20;
      iVar6 = extraout_EDX_20;
    }
    uVar2 = uVar9 - 6;
    if (SBORROW4(uVar9,6)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_21;
      iVar6 = extraout_EDX_21;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_118 = local_290;
    local_114 = local_28c;
    puVar4 = &local_298;
    iVar6 = local_14 + -8;
    if (SBORROW4(local_14,8)) {
      thunk_FUN_00402808(local_28c);
      puVar4 = extraout_ECX_22;
      iVar6 = extraout_EDX_22;
    }
    uVar2 = uVar9 - 6;
    if (SBORROW4(uVar9,6)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_23;
      iVar6 = extraout_EDX_23;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_110 = local_298;
    local_10c = local_294;
    puVar4 = &local_2a0;
    iVar6 = local_14 + -8;
    if (SBORROW4(local_14,8)) {
      thunk_FUN_00402808(local_294);
      puVar4 = extraout_ECX_24;
      iVar6 = extraout_EDX_24;
    }
    uVar2 = uVar9 - 5;
    if (SBORROW4(uVar9,5)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_25;
      iVar6 = extraout_EDX_25;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_108 = local_2a0;
    local_104 = local_29c;
    puVar4 = &local_2a8;
    iVar6 = local_14 + -9;
    if (SBORROW4(local_14,9)) {
      thunk_FUN_00402808(local_29c);
      puVar4 = extraout_ECX_26;
      iVar6 = extraout_EDX_26;
    }
    uVar2 = uVar9 - 5;
    if (SBORROW4(uVar9,5)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_27;
      iVar6 = extraout_EDX_27;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_100 = local_2a8;
    local_fc = local_2a4;
    puVar4 = &local_2b0;
    iVar6 = local_14 + -9;
    if (SBORROW4(local_14,9)) {
      thunk_FUN_00402808(local_2a4);
      puVar4 = extraout_ECX_28;
      iVar6 = extraout_EDX_28;
    }
    uVar2 = uVar9 - 4;
    if (SBORROW4(uVar9,4)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_29;
      iVar6 = extraout_EDX_29;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_f8 = local_2b0;
    local_f4 = local_2ac;
    puVar4 = &local_2b8;
    iVar6 = local_14 + -0xb;
    if (SBORROW4(local_14,0xb)) {
      thunk_FUN_00402808(local_2ac);
      puVar4 = extraout_ECX_30;
      iVar6 = extraout_EDX_30;
    }
    uVar2 = uVar9 - 4;
    if (SBORROW4(uVar9,4)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_31;
      iVar6 = extraout_EDX_31;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_f0 = local_2b8;
    local_ec = local_2b4;
    puVar4 = &local_2c0;
    iVar6 = local_14 + -0xb;
    if (SBORROW4(local_14,0xb)) {
      thunk_FUN_00402808(local_2b4);
      puVar4 = extraout_ECX_32;
      iVar6 = extraout_EDX_32;
    }
    uVar2 = uVar9 - 3;
    if (SBORROW4(uVar9,3)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_33;
      iVar6 = extraout_EDX_33;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_e8 = local_2c0;
    local_e4 = local_2bc;
    puVar4 = &local_2c8;
    iVar6 = local_14 + -0xc;
    if (SBORROW4(local_14,0xc)) {
      thunk_FUN_00402808(local_2bc);
      puVar4 = extraout_ECX_34;
      iVar6 = extraout_EDX_34;
    }
    uVar2 = uVar9 - 3;
    if (SBORROW4(uVar9,3)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_35;
      iVar6 = extraout_EDX_35;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_e0 = local_2c8;
    local_dc = local_2c4;
    puVar4 = &local_2d0;
    iVar6 = local_14 + -0xc;
    if (SBORROW4(local_14,0xc)) {
      thunk_FUN_00402808(local_2c4);
      puVar4 = extraout_ECX_36;
      iVar6 = extraout_EDX_36;
    }
    uVar2 = uVar9 - 2;
    if (SBORROW4(uVar9,2)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_37;
      iVar6 = extraout_EDX_37;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_d8 = local_2d0;
    local_d4 = local_2cc;
    puVar4 = &local_2d8;
    iVar6 = local_14 + -0xe;
    if (SBORROW4(local_14,0xe)) {
      thunk_FUN_00402808(local_2cc);
      puVar4 = extraout_ECX_38;
      iVar6 = extraout_EDX_38;
    }
    uVar2 = uVar9 - 2;
    if (SBORROW4(uVar9,2)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_39;
      iVar6 = extraout_EDX_39;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_d0 = local_2d8;
    local_cc = local_2d4;
    puVar4 = &local_2e0;
    iVar6 = local_14 + -0xe;
    if (SBORROW4(local_14,0xe)) {
      thunk_FUN_00402808(local_2d4);
      puVar4 = extraout_ECX_40;
      iVar6 = extraout_EDX_40;
    }
    uVar2 = uVar9 - 1;
    if (SBORROW4(uVar9,1)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_41;
      iVar6 = extraout_EDX_41;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_c8 = local_2e0;
    local_c4 = local_2dc;
    puVar4 = &local_2e8;
    iVar6 = local_14 + -0x10;
    if (SBORROW4(local_14,0x10)) {
      thunk_FUN_00402808(local_2dc);
      puVar4 = extraout_ECX_42;
      iVar6 = extraout_EDX_42;
    }
    uVar2 = uVar9 - 1;
    if (SBORROW4(uVar9,1)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_43;
      iVar6 = extraout_EDX_43;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_c0 = local_2e8;
    local_bc = local_2e4;
    puVar4 = &local_2f0;
    iVar6 = local_14 + -0x10;
    if (SBORROW4(local_14,0x10)) {
      thunk_FUN_00402808(local_2e4);
      puVar4 = extraout_ECX_44;
      iVar6 = extraout_EDX_44;
    }
    FUN_0040f7d0(uVar9,iVar6,puVar4);
    local_b8 = local_2f0;
    local_b4 = local_2ec;
    puVar4 = &local_2f8;
    iVar6 = local_14 + -0x11;
    if (SBORROW4(local_14,0x11)) {
      thunk_FUN_00402808(local_2ec);
      puVar4 = extraout_ECX_45;
      iVar6 = extraout_EDX_45;
    }
    FUN_0040f7d0(uVar9,iVar6,puVar4);
    local_b0 = local_2f8;
    local_ac = local_2f4;
    puVar4 = &local_300;
    iVar6 = local_14 + -0x11;
    if (SBORROW4(local_14,0x11)) {
      thunk_FUN_00402808(local_2f4);
      puVar4 = extraout_ECX_46;
      iVar6 = extraout_EDX_46;
    }
    uVar2 = local_18 - 5;
    if (SBORROW4(local_18,5)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_47;
      iVar6 = extraout_EDX_47;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_a8 = local_300;
    local_a4 = local_2fc;
    puVar4 = &local_308;
    iVar6 = local_14 + -0x12;
    if (SBORROW4(local_14,0x12)) {
      thunk_FUN_00402808(local_2fc);
      puVar4 = extraout_ECX_48;
      iVar6 = extraout_EDX_48;
    }
    uVar2 = local_18 - 5;
    if (SBORROW4(local_18,5)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_49;
      iVar6 = extraout_EDX_49;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_a0 = local_308;
    local_9c = local_304;
    puVar4 = &local_310;
    iVar6 = local_14 + -0x12;
    if (SBORROW4(local_14,0x12)) {
      thunk_FUN_00402808(local_304);
      puVar4 = extraout_ECX_50;
      iVar6 = extraout_EDX_50;
    }
    uVar2 = local_18 - 3;
    if (SBORROW4(local_18,3)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_51;
      iVar6 = extraout_EDX_51;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_98 = local_310;
    local_94 = local_30c;
    puVar4 = &local_318;
    iVar6 = local_14 + -0x13;
    if (SBORROW4(local_14,0x13)) {
      thunk_FUN_00402808(local_30c);
      puVar4 = extraout_ECX_52;
      iVar6 = extraout_EDX_52;
    }
    uVar2 = local_18 - 3;
    if (SBORROW4(local_18,3)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_53;
      iVar6 = extraout_EDX_53;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_90 = local_318;
    local_8c = local_314;
    puVar4 = &local_320;
    iVar6 = local_14 + -0x13;
    if (SBORROW4(local_14,0x13)) {
      thunk_FUN_00402808(local_314);
      puVar4 = extraout_ECX_54;
      iVar6 = extraout_EDX_54;
    }
    uVar2 = local_18 - 2;
    if (SBORROW4(local_18,2)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_55;
      iVar6 = extraout_EDX_55;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_88 = local_320;
    local_84 = local_31c;
    puVar4 = &local_328;
    iVar6 = local_14 + -0x15;
    if (SBORROW4(local_14,0x15)) {
      thunk_FUN_00402808(local_31c);
      puVar4 = extraout_ECX_56;
      iVar6 = extraout_EDX_56;
    }
    uVar2 = local_18 - 2;
    if (SBORROW4(local_18,2)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_57;
      iVar6 = extraout_EDX_57;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_80 = local_328;
    local_7c = local_324;
    puVar4 = &local_330;
    iVar6 = local_14 + -0x15;
    if (SBORROW4(local_14,0x15)) {
      thunk_FUN_00402808(local_324);
      puVar4 = extraout_ECX_58;
      iVar6 = extraout_EDX_58;
    }
    uVar2 = local_18 - 1;
    if (SBORROW4(local_18,1)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_59;
      iVar6 = extraout_EDX_59;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_78 = local_330;
    local_74 = local_32c;
    puVar4 = &local_338;
    uVar2 = local_18 - 1;
    if (SBORROW4(local_18,1)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_60;
    }
    FUN_0040f7d0(uVar2,5,puVar4);
    local_70 = local_338;
    local_6c = local_334;
    puVar4 = &local_340;
    uVar2 = local_18 - 2;
    if (SBORROW4(local_18,2)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_61;
    }
    FUN_0040f7d0(uVar2,5,puVar4);
    local_68 = local_340;
    local_64 = local_33c;
    puVar4 = &local_348;
    uVar2 = local_18 - 2;
    if (SBORROW4(local_18,2)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_62;
    }
    FUN_0040f7d0(uVar2,3,puVar4);
    local_60 = local_348;
    local_5c = local_344;
    puVar4 = &local_350;
    uVar2 = local_18 - 3;
    if (SBORROW4(local_18,3)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_63;
    }
    FUN_0040f7d0(uVar2,3,puVar4);
    local_58 = local_350;
    local_54 = local_34c;
    puVar4 = &local_358;
    uVar2 = local_18 - 3;
    if (SBORROW4(local_18,3)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_64;
    }
    FUN_0040f7d0(uVar2,2,puVar4);
    local_50 = local_358;
    local_4c = local_354;
    puVar4 = &local_360;
    uVar2 = local_18 - 4;
    if (SBORROW4(local_18,4)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_65;
    }
    FUN_0040f7d0(uVar2,2,puVar4);
    local_48 = local_360;
    local_44 = local_35c;
    puVar4 = &local_368;
    uVar2 = local_18 - 4;
    if (SBORROW4(local_18,4)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_66;
    }
    FUN_0040f7d0(uVar2,1,puVar4);
    local_40 = local_368;
    local_3c = local_364;
    puVar4 = &local_370;
    uVar2 = local_18 - 6;
    if (SBORROW4(local_18,6)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_67;
    }
    FUN_0040f7d0(uVar2,1,puVar4);
    local_38 = local_370;
    local_34 = local_36c;
    puVar4 = &local_378;
    uVar2 = local_18 - 6;
    if (SBORROW4(local_18,6)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_68;
    }
    FUN_0040f7d0(uVar2,0,puVar4);
    local_30 = local_378;
    local_2c = local_374;
    FUN_0040f7d0(5,0,&local_380);
    local_28 = local_380;
    local_24 = local_37c;
    uVar2 = FUN_00419180(local_c,&point,0x35);
    iVar6 = local_14 + 1;
    if (SCARRY4(local_14,1)) {
      uVar2 = thunk_FUN_00402808(uVar2);
    }
    iVar8 = uVar9 + 1;
    if (SCARRY4(uVar9,1)) {
      uVar2 = thunk_FUN_00402808(uVar2);
    }
    iVar7 = local_18 + 1;
    if (SCARRY4(local_18,1)) {
      thunk_FUN_00402808(uVar2);
    }
    FUN_0040f7d0(5,0,&local_1d8);
    point.x = local_1d8;
    point.y = local_1d4;
    FUN_0040f7d0(5,1,&local_1e0);
    local_1c8 = local_1e0;
    local_1c4 = local_1dc;
    FUN_0040f7d0(3,1,&local_1e8);
    local_1c0 = local_1e8;
    local_1bc = local_1e4;
    FUN_0040f7d0(3,2,&local_1f0);
    local_1b8 = local_1f0;
    local_1b4 = local_1ec;
    FUN_0040f7d0(2,2,&local_1f8);
    local_1b0 = local_1f8;
    local_1ac = local_1f4;
    FUN_0040f7d0(2,3,&local_200);
    local_1a8 = local_200;
    local_1a4 = local_1fc;
    FUN_0040f7d0(1,3,&local_208);
    local_1a0 = local_208;
    local_19c = local_204;
    FUN_0040f7d0(1,5,&local_210);
    local_198 = local_210;
    local_194 = local_20c;
    FUN_0040f7d0(local_10,5,&local_218);
    local_190 = local_218;
    local_18c = local_214;
    puVar4 = &local_220;
    iVar5 = local_14 + -0x14;
    if (SBORROW4(iVar6,0x15)) {
      thunk_FUN_00402808(local_214);
      puVar4 = extraout_ECX_69;
      iVar5 = extraout_EDX_60;
    }
    FUN_0040f7d0(local_10,iVar5,puVar4);
    local_188 = local_220;
    local_184 = local_21c;
    puVar4 = &local_228;
    iVar5 = local_14 + -0x14;
    if (SBORROW4(iVar6,0x15)) {
      thunk_FUN_00402808(local_21c);
      puVar4 = extraout_ECX_70;
      iVar5 = extraout_EDX_61;
    }
    FUN_0040f7d0(1,iVar5,puVar4);
    local_180 = local_228;
    local_17c = local_224;
    puVar4 = &local_230;
    iVar5 = local_14 + -0x12;
    if (SBORROW4(iVar6,0x13)) {
      thunk_FUN_00402808(local_224);
      puVar4 = extraout_ECX_71;
      iVar5 = extraout_EDX_62;
    }
    FUN_0040f7d0(1,iVar5,puVar4);
    local_178 = local_230;
    local_174 = local_22c;
    puVar4 = &local_238;
    iVar5 = local_14 + -0x12;
    if (SBORROW4(iVar6,0x13)) {
      thunk_FUN_00402808(local_22c);
      puVar4 = extraout_ECX_72;
      iVar5 = extraout_EDX_63;
    }
    FUN_0040f7d0(2,iVar5,puVar4);
    local_170 = local_238;
    local_16c = local_234;
    puVar4 = &local_240;
    iVar5 = local_14 + -0x11;
    if (SBORROW4(iVar6,0x12)) {
      thunk_FUN_00402808(local_234);
      puVar4 = extraout_ECX_73;
      iVar5 = extraout_EDX_64;
    }
    FUN_0040f7d0(2,iVar5,puVar4);
    local_168 = local_240;
    local_164 = local_23c;
    puVar4 = &local_248;
    iVar5 = local_14 + -0x11;
    if (SBORROW4(iVar6,0x12)) {
      thunk_FUN_00402808(local_23c);
      puVar4 = extraout_ECX_74;
      iVar5 = extraout_EDX_65;
    }
    FUN_0040f7d0(4,iVar5,puVar4);
    local_160 = local_248;
    local_15c = local_244;
    puVar4 = &local_250;
    iVar5 = local_14 + -0x10;
    if (SBORROW4(iVar6,0x11)) {
      thunk_FUN_00402808(local_244);
      puVar4 = extraout_ECX_75;
      iVar5 = extraout_EDX_66;
    }
    FUN_0040f7d0(4,iVar5,puVar4);
    local_158 = local_250;
    local_154 = local_24c;
    puVar4 = &local_258;
    iVar5 = local_14 + -0x10;
    if (SBORROW4(iVar6,0x11)) {
      thunk_FUN_00402808(local_24c);
      puVar4 = extraout_ECX_76;
      iVar5 = extraout_EDX_67;
    }
    uVar2 = uVar9 - 7;
    if (SBORROW4(iVar8,8)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_77;
      iVar5 = extraout_EDX_68;
    }
    FUN_0040f7d0(uVar2,iVar5,puVar4);
    local_150 = local_258;
    local_14c = local_254;
    puVar4 = &local_260;
    iVar5 = local_14;
    if (SBORROW4(iVar6,1)) {
      thunk_FUN_00402808(local_254);
      puVar4 = extraout_ECX_78;
      iVar5 = extraout_EDX_69;
    }
    uVar2 = uVar9 - 7;
    if (SBORROW4(iVar8,8)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_79;
      iVar5 = extraout_EDX_70;
    }
    FUN_0040f7d0(uVar2,iVar5,puVar4);
    local_148 = local_260;
    local_144 = local_25c;
    puVar4 = &local_268;
    iVar5 = local_14 + -1;
    if (SBORROW4(iVar6,2)) {
      thunk_FUN_00402808(local_25c);
      puVar4 = extraout_ECX_80;
      iVar5 = extraout_EDX_71;
    }
    uVar2 = uVar9 - 7;
    if (SBORROW4(iVar8,8)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_81;
      iVar5 = extraout_EDX_72;
    }
    FUN_0040f7d0(uVar2,iVar5,puVar4);
    local_140 = local_268;
    local_13c = local_264;
    puVar4 = &local_270;
    iVar5 = local_14 + -2;
    if (SBORROW4(iVar6,3)) {
      thunk_FUN_00402808(local_264);
      puVar4 = extraout_ECX_82;
      iVar5 = extraout_EDX_73;
    }
    uVar2 = uVar9 - 7;
    if (SBORROW4(iVar8,8)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_83;
      iVar5 = extraout_EDX_74;
    }
    FUN_0040f7d0(uVar2,iVar5,puVar4);
    local_138 = local_270;
    local_134 = local_26c;
    puVar4 = &local_278;
    iVar5 = local_14 + -3;
    if (SBORROW4(iVar6,4)) {
      thunk_FUN_00402808(local_26c);
      puVar4 = extraout_ECX_84;
      iVar5 = extraout_EDX_75;
    }
    uVar2 = uVar9 - 7;
    if (SBORROW4(iVar8,8)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_85;
      iVar5 = extraout_EDX_76;
    }
    FUN_0040f7d0(uVar2,iVar5,puVar4);
    local_130 = local_278;
    local_12c = local_274;
    puVar4 = &local_280;
    iVar5 = local_14 + -3;
    if (SBORROW4(iVar6,4)) {
      thunk_FUN_00402808(local_274);
      puVar4 = extraout_ECX_86;
      iVar5 = extraout_EDX_77;
    }
    uVar2 = uVar9 - 6;
    if (SBORROW4(iVar8,7)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_87;
      iVar5 = extraout_EDX_78;
    }
    FUN_0040f7d0(uVar2,iVar5,puVar4);
    local_128 = local_280;
    local_124 = local_27c;
    puVar4 = &local_288;
    iVar5 = local_14 + -5;
    if (SBORROW4(iVar6,6)) {
      thunk_FUN_00402808(local_27c);
      puVar4 = extraout_ECX_88;
      iVar5 = extraout_EDX_79;
    }
    uVar2 = uVar9 - 6;
    if (SBORROW4(iVar8,7)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_89;
      iVar5 = extraout_EDX_80;
    }
    FUN_0040f7d0(uVar2,iVar5,puVar4);
    local_120 = local_288;
    local_11c = local_284;
    puVar4 = &local_290;
    iVar5 = local_14 + -5;
    if (SBORROW4(iVar6,6)) {
      thunk_FUN_00402808(local_284);
      puVar4 = extraout_ECX_90;
      iVar5 = extraout_EDX_81;
    }
    uVar2 = uVar9 - 5;
    if (SBORROW4(iVar8,6)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_91;
      iVar5 = extraout_EDX_82;
    }
    FUN_0040f7d0(uVar2,iVar5,puVar4);
    local_118 = local_290;
    local_114 = local_28c;
    puVar4 = &local_298;
    iVar5 = local_14 + -7;
    if (SBORROW4(iVar6,8)) {
      thunk_FUN_00402808(local_28c);
      puVar4 = extraout_ECX_92;
      iVar5 = extraout_EDX_83;
    }
    uVar2 = uVar9 - 5;
    if (SBORROW4(iVar8,6)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_93;
      iVar5 = extraout_EDX_84;
    }
    FUN_0040f7d0(uVar2,iVar5,puVar4);
    local_110 = local_298;
    local_10c = local_294;
    puVar4 = &local_2a0;
    iVar5 = local_14 + -7;
    if (SBORROW4(iVar6,8)) {
      thunk_FUN_00402808(local_294);
      puVar4 = extraout_ECX_94;
      iVar5 = extraout_EDX_85;
    }
    uVar2 = uVar9 - 4;
    if (SBORROW4(iVar8,5)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_95;
      iVar5 = extraout_EDX_86;
    }
    FUN_0040f7d0(uVar2,iVar5,puVar4);
    local_108 = local_2a0;
    local_104 = local_29c;
    puVar4 = &local_2a8;
    iVar5 = local_14 + -8;
    if (SBORROW4(iVar6,9)) {
      thunk_FUN_00402808(local_29c);
      puVar4 = extraout_ECX_96;
      iVar5 = extraout_EDX_87;
    }
    uVar2 = uVar9 - 4;
    if (SBORROW4(iVar8,5)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_97;
      iVar5 = extraout_EDX_88;
    }
    FUN_0040f7d0(uVar2,iVar5,puVar4);
    local_100 = local_2a8;
    local_fc = local_2a4;
    puVar4 = &local_2b0;
    iVar5 = local_14 + -8;
    if (SBORROW4(iVar6,9)) {
      thunk_FUN_00402808(local_2a4);
      puVar4 = extraout_ECX_98;
      iVar5 = extraout_EDX_89;
    }
    uVar2 = uVar9 - 3;
    if (SBORROW4(iVar8,4)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_99;
      iVar5 = extraout_EDX_90;
    }
    FUN_0040f7d0(uVar2,iVar5,puVar4);
    local_f8 = local_2b0;
    local_f4 = local_2ac;
    puVar4 = &local_2b8;
    iVar5 = local_14 + -10;
    if (SBORROW4(iVar6,0xb)) {
      thunk_FUN_00402808(local_2ac);
      puVar4 = extraout_ECX_x00100;
      iVar5 = extraout_EDX_91;
    }
    uVar2 = uVar9 - 3;
    if (SBORROW4(iVar8,4)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00101;
      iVar5 = extraout_EDX_92;
    }
    FUN_0040f7d0(uVar2,iVar5,puVar4);
    local_f0 = local_2b8;
    local_ec = local_2b4;
    puVar4 = &local_2c0;
    iVar5 = local_14 + -10;
    if (SBORROW4(iVar6,0xb)) {
      thunk_FUN_00402808(local_2b4);
      puVar4 = extraout_ECX_x00102;
      iVar5 = extraout_EDX_93;
    }
    uVar2 = uVar9 - 2;
    if (SBORROW4(iVar8,3)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00103;
      iVar5 = extraout_EDX_94;
    }
    FUN_0040f7d0(uVar2,iVar5,puVar4);
    local_e8 = local_2c0;
    local_e4 = local_2bc;
    puVar4 = &local_2c8;
    iVar5 = local_14 + -0xb;
    if (SBORROW4(iVar6,0xc)) {
      thunk_FUN_00402808(local_2bc);
      puVar4 = extraout_ECX_x00104;
      iVar5 = extraout_EDX_95;
    }
    uVar2 = uVar9 - 2;
    if (SBORROW4(iVar8,3)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00105;
      iVar5 = extraout_EDX_96;
    }
    FUN_0040f7d0(uVar2,iVar5,puVar4);
    local_e0 = local_2c8;
    local_dc = local_2c4;
    puVar4 = &local_2d0;
    iVar5 = local_14 + -0xb;
    if (SBORROW4(iVar6,0xc)) {
      thunk_FUN_00402808(local_2c4);
      puVar4 = extraout_ECX_x00106;
      iVar5 = extraout_EDX_97;
    }
    uVar2 = uVar9 - 1;
    if (SBORROW4(iVar8,2)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00107;
      iVar5 = extraout_EDX_98;
    }
    FUN_0040f7d0(uVar2,iVar5,puVar4);
    local_d8 = local_2d0;
    local_d4 = local_2cc;
    puVar4 = &local_2d8;
    iVar5 = local_14 + -0xd;
    if (SBORROW4(iVar6,0xe)) {
      thunk_FUN_00402808(local_2cc);
      puVar4 = extraout_ECX_x00108;
      iVar5 = extraout_EDX_99;
    }
    uVar2 = uVar9 - 1;
    if (SBORROW4(iVar8,2)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00109;
      iVar5 = extraout_EDX_x00100;
    }
    FUN_0040f7d0(uVar2,iVar5,puVar4);
    local_d0 = local_2d8;
    local_cc = local_2d4;
    puVar4 = &local_2e0;
    iVar5 = local_14 + -0xd;
    if (SBORROW4(iVar6,0xe)) {
      thunk_FUN_00402808(local_2d4);
      puVar4 = extraout_ECX_x00110;
      iVar5 = extraout_EDX_x00101;
    }
    uVar2 = uVar9;
    if (SBORROW4(iVar8,1)) {
      uVar2 = thunk_FUN_00402808(uVar9);
      puVar4 = extraout_ECX_x00111;
      iVar5 = extraout_EDX_x00102;
    }
    FUN_0040f7d0(uVar2,iVar5,puVar4);
    local_c8 = local_2e0;
    local_c4 = local_2dc;
    puVar4 = &local_2e8;
    iVar5 = local_14 + -0xf;
    if (SBORROW4(iVar6,0x10)) {
      thunk_FUN_00402808(local_2dc);
      puVar4 = extraout_ECX_x00112;
      iVar5 = extraout_EDX_x00103;
    }
    if (SBORROW4(iVar8,1)) {
      uVar9 = thunk_FUN_00402808(uVar9);
      puVar4 = extraout_ECX_x00113;
      iVar5 = extraout_EDX_x00104;
    }
    FUN_0040f7d0(uVar9,iVar5,puVar4);
    local_c0 = local_2e8;
    local_bc = local_2e4;
    puVar4 = &local_2f0;
    iVar5 = local_14 + -0xf;
    if (SBORROW4(iVar6,0x10)) {
      thunk_FUN_00402808(local_2e4);
      puVar4 = extraout_ECX_x00114;
      iVar5 = extraout_EDX_x00105;
    }
    FUN_0040f7d0(iVar8,iVar5,puVar4);
    local_b8 = local_2f0;
    local_b4 = local_2ec;
    puVar4 = &local_2f8;
    iVar5 = local_14 + -0x10;
    if (SBORROW4(iVar6,0x11)) {
      thunk_FUN_00402808(local_2ec);
      puVar4 = extraout_ECX_x00115;
      iVar5 = extraout_EDX_x00106;
    }
    FUN_0040f7d0(iVar8,iVar5,puVar4);
    local_b0 = local_2f8;
    local_ac = local_2f4;
    puVar4 = &local_300;
    iVar8 = local_14 + -0x10;
    if (SBORROW4(iVar6,0x11)) {
      thunk_FUN_00402808(local_2f4);
      puVar4 = extraout_ECX_x00116;
      iVar8 = extraout_EDX_x00107;
    }
    uVar2 = local_18 - 4;
    if (SBORROW4(iVar7,5)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00117;
      iVar8 = extraout_EDX_x00108;
    }
    FUN_0040f7d0(uVar2,iVar8,puVar4);
    local_a8 = local_300;
    local_a4 = local_2fc;
    puVar4 = &local_308;
    iVar8 = local_14 + -0x11;
    if (SBORROW4(iVar6,0x12)) {
      thunk_FUN_00402808(local_2fc);
      puVar4 = extraout_ECX_x00118;
      iVar8 = extraout_EDX_x00109;
    }
    uVar2 = local_18 - 4;
    if (SBORROW4(iVar7,5)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00119;
      iVar8 = extraout_EDX_x00110;
    }
    FUN_0040f7d0(uVar2,iVar8,puVar4);
    local_a0 = local_308;
    local_9c = local_304;
    puVar4 = &local_310;
    iVar8 = local_14 + -0x11;
    if (SBORROW4(iVar6,0x12)) {
      thunk_FUN_00402808(local_304);
      puVar4 = extraout_ECX_x00120;
      iVar8 = extraout_EDX_x00111;
    }
    uVar2 = local_18 - 2;
    if (SBORROW4(iVar7,3)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00121;
      iVar8 = extraout_EDX_x00112;
    }
    FUN_0040f7d0(uVar2,iVar8,puVar4);
    local_98 = local_310;
    local_94 = local_30c;
    puVar4 = &local_318;
    iVar8 = local_14 + -0x12;
    if (SBORROW4(iVar6,0x13)) {
      thunk_FUN_00402808(local_30c);
      puVar4 = extraout_ECX_x00122;
      iVar8 = extraout_EDX_x00113;
    }
    uVar2 = local_18 - 2;
    if (SBORROW4(iVar7,3)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00123;
      iVar8 = extraout_EDX_x00114;
    }
    FUN_0040f7d0(uVar2,iVar8,puVar4);
    local_90 = local_318;
    local_8c = local_314;
    puVar4 = &local_320;
    iVar8 = local_14 + -0x12;
    if (SBORROW4(iVar6,0x13)) {
      thunk_FUN_00402808(local_314);
      puVar4 = extraout_ECX_x00124;
      iVar8 = extraout_EDX_x00115;
    }
    uVar2 = local_18 - 1;
    if (SBORROW4(iVar7,2)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00125;
      iVar8 = extraout_EDX_x00116;
    }
    FUN_0040f7d0(uVar2,iVar8,puVar4);
    local_88 = local_320;
    local_84 = local_31c;
    puVar4 = &local_328;
    iVar8 = local_14 + -0x14;
    if (SBORROW4(iVar6,0x15)) {
      thunk_FUN_00402808(local_31c);
      puVar4 = extraout_ECX_x00126;
      iVar8 = extraout_EDX_x00117;
    }
    uVar2 = local_18 - 1;
    if (SBORROW4(iVar7,2)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00127;
      iVar8 = extraout_EDX_x00118;
    }
    FUN_0040f7d0(uVar2,iVar8,puVar4);
    local_80 = local_328;
    local_7c = local_324;
    puVar4 = &local_330;
    local_14 = local_14 + -0x14;
    if (SBORROW4(iVar6,0x15)) {
      thunk_FUN_00402808(local_324);
      puVar4 = extraout_ECX_x00128;
      local_14 = extraout_EDX_x00119;
    }
    uVar2 = local_18;
    if (SBORROW4(iVar7,1)) {
      uVar2 = thunk_FUN_00402808(local_18);
      puVar4 = extraout_ECX_x00129;
      local_14 = extraout_EDX_x00120;
    }
    FUN_0040f7d0(uVar2,local_14,puVar4);
    local_78 = local_330;
    local_74 = local_32c;
    puVar4 = &local_338;
    uVar2 = local_18;
    if (SBORROW4(iVar7,1)) {
      uVar2 = thunk_FUN_00402808(local_18);
      puVar4 = extraout_ECX_x00130;
    }
    FUN_0040f7d0(uVar2,5,puVar4);
    local_70 = local_338;
    local_6c = local_334;
    puVar4 = &local_340;
    uVar2 = local_18 - 1;
    if (SBORROW4(iVar7,2)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00131;
    }
    FUN_0040f7d0(uVar2,5,puVar4);
    local_68 = local_340;
    local_64 = local_33c;
    puVar4 = &local_348;
    uVar2 = local_18 - 1;
    if (SBORROW4(iVar7,2)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00132;
    }
    FUN_0040f7d0(uVar2,3,puVar4);
    local_60 = local_348;
    local_5c = local_344;
    puVar4 = &local_350;
    uVar2 = local_18 - 2;
    if (SBORROW4(iVar7,3)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00133;
    }
    FUN_0040f7d0(uVar2,3,puVar4);
    local_58 = local_350;
    local_54 = local_34c;
    puVar4 = &local_358;
    uVar2 = local_18 - 2;
    if (SBORROW4(iVar7,3)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00134;
    }
    FUN_0040f7d0(uVar2,2,puVar4);
    local_50 = local_358;
    local_4c = local_354;
    puVar4 = &local_360;
    uVar2 = local_18 - 3;
    if (SBORROW4(iVar7,4)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00135;
    }
    FUN_0040f7d0(uVar2,2,puVar4);
    local_48 = local_360;
    local_44 = local_35c;
    puVar4 = &local_368;
    uVar2 = local_18 - 3;
    if (SBORROW4(iVar7,4)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00136;
    }
    FUN_0040f7d0(uVar2,1,puVar4);
    local_40 = local_368;
    local_3c = local_364;
    puVar4 = &local_370;
    uVar2 = local_18 - 5;
    if (SBORROW4(iVar7,6)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00137;
    }
    FUN_0040f7d0(uVar2,1,puVar4);
    local_38 = local_370;
    local_34 = local_36c;
    puVar4 = &local_378;
    local_18 = local_18 - 5;
    if (SBORROW4(iVar7,6)) {
      local_18 = thunk_FUN_00402808(local_18);
      puVar4 = extraout_ECX_x00138;
    }
    FUN_0040f7d0(local_18,0,puVar4);
    local_30 = local_378;
    local_2c = local_374;
    FUN_0040f7d0(5,0,&local_380);
    local_28 = local_380;
    local_24 = local_37c;
    FUN_0047d49c(local_8,&point,0x35);
  }
  else if (cVar1 == '\x01') {
    FUN_0040f7d0(5,0,&local_1d8);
    point.x = local_1d8;
    point.y = local_1d4;
    FUN_0040f7d0(5,1,&local_1e0);
    local_1c8 = local_1e0;
    local_1c4 = local_1dc;
    FUN_0040f7d0(3,1,&local_1e8);
    local_1c0 = local_1e8;
    local_1bc = local_1e4;
    FUN_0040f7d0(3,2,&local_1f0);
    local_1b8 = local_1f0;
    local_1b4 = local_1ec;
    FUN_0040f7d0(2,2,&local_1f8);
    local_1b0 = local_1f8;
    local_1ac = local_1f4;
    FUN_0040f7d0(2,3,&local_200);
    local_1a8 = local_200;
    local_1a4 = local_1fc;
    FUN_0040f7d0(1,3,&local_208);
    local_1a0 = local_208;
    local_19c = local_204;
    FUN_0040f7d0(1,5,&local_210);
    local_198 = local_210;
    local_194 = local_20c;
    FUN_0040f7d0(local_10,5,&local_218);
    local_190 = local_218;
    local_18c = local_214;
    puVar4 = &local_220;
    iVar6 = local_14 + -0x15;
    if (SBORROW4(local_14,0x15)) {
      thunk_FUN_00402808(local_214);
      puVar4 = extraout_ECX_x00139;
      iVar6 = extraout_EDX_x00121;
    }
    FUN_0040f7d0(local_10,iVar6,puVar4);
    local_188 = local_220;
    local_184 = local_21c;
    puVar4 = &local_228;
    iVar6 = local_14 + -0x15;
    if (SBORROW4(local_14,0x15)) {
      thunk_FUN_00402808(local_21c);
      puVar4 = extraout_ECX_x00140;
      iVar6 = extraout_EDX_x00122;
    }
    FUN_0040f7d0(1,iVar6,puVar4);
    local_180 = local_228;
    local_17c = local_224;
    puVar4 = &local_230;
    iVar6 = local_14 + -0x13;
    if (SBORROW4(local_14,0x13)) {
      thunk_FUN_00402808(local_224);
      puVar4 = extraout_ECX_x00141;
      iVar6 = extraout_EDX_x00123;
    }
    FUN_0040f7d0(1,iVar6,puVar4);
    local_178 = local_230;
    local_174 = local_22c;
    puVar4 = &local_238;
    iVar6 = local_14 + -0x13;
    if (SBORROW4(local_14,0x13)) {
      thunk_FUN_00402808(local_22c);
      puVar4 = extraout_ECX_x00142;
      iVar6 = extraout_EDX_x00124;
    }
    FUN_0040f7d0(2,iVar6,puVar4);
    local_170 = local_238;
    local_16c = local_234;
    puVar4 = &local_240;
    iVar6 = local_14 + -0x12;
    if (SBORROW4(local_14,0x12)) {
      thunk_FUN_00402808(local_234);
      puVar4 = extraout_ECX_x00143;
      iVar6 = extraout_EDX_x00125;
    }
    FUN_0040f7d0(2,iVar6,puVar4);
    local_168 = local_240;
    local_164 = local_23c;
    puVar4 = &local_248;
    iVar6 = local_14 + -0x12;
    if (SBORROW4(local_14,0x12)) {
      thunk_FUN_00402808(local_23c);
      puVar4 = extraout_ECX_x00144;
      iVar6 = extraout_EDX_x00126;
    }
    FUN_0040f7d0(4,iVar6,puVar4);
    local_160 = local_248;
    local_15c = local_244;
    puVar4 = &local_250;
    iVar6 = local_14 + -0x11;
    if (SBORROW4(local_14,0x11)) {
      thunk_FUN_00402808(local_244);
      puVar4 = extraout_ECX_x00145;
      iVar6 = extraout_EDX_x00127;
    }
    FUN_0040f7d0(4,iVar6,puVar4);
    local_158 = local_250;
    local_154 = local_24c;
    puVar4 = &local_258;
    iVar6 = local_14 + -0x11;
    if (SBORROW4(local_14,0x11)) {
      thunk_FUN_00402808(local_24c);
      puVar4 = extraout_ECX_x00146;
      iVar6 = extraout_EDX_x00128;
    }
    uVar2 = uVar9 + 0x13;
    if (SCARRY4(uVar9,0x13)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00147;
      iVar6 = extraout_EDX_x00129;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_150 = local_258;
    local_14c = local_254;
    puVar4 = &local_260;
    iVar6 = local_14 + -0x10;
    if (SBORROW4(local_14,0x10)) {
      thunk_FUN_00402808(local_254);
      puVar4 = extraout_ECX_x00148;
      iVar6 = extraout_EDX_x00130;
    }
    uVar2 = uVar9 + 0x13;
    if (SCARRY4(uVar9,0x13)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00149;
      iVar6 = extraout_EDX_x00131;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_148 = local_260;
    local_144 = local_25c;
    puVar4 = &local_268;
    iVar6 = local_14 + -0x10;
    if (SBORROW4(local_14,0x10)) {
      thunk_FUN_00402808(local_25c);
      puVar4 = extraout_ECX_x00150;
      iVar6 = extraout_EDX_x00132;
    }
    uVar2 = uVar9 + 0x14;
    if (SCARRY4(uVar9,0x14)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00151;
      iVar6 = extraout_EDX_x00133;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_140 = local_268;
    local_13c = local_264;
    puVar4 = &local_270;
    iVar6 = local_14 + -0xe;
    if (SBORROW4(local_14,0xe)) {
      thunk_FUN_00402808(local_264);
      puVar4 = extraout_ECX_x00152;
      iVar6 = extraout_EDX_x00134;
    }
    uVar2 = uVar9 + 0x14;
    if (SCARRY4(uVar9,0x14)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00153;
      iVar6 = extraout_EDX_x00135;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_138 = local_270;
    local_134 = local_26c;
    puVar4 = &local_278;
    iVar6 = local_14 + -0xe;
    if (SBORROW4(local_14,0xe)) {
      thunk_FUN_00402808(local_26c);
      puVar4 = extraout_ECX_x00154;
      iVar6 = extraout_EDX_x00136;
    }
    uVar2 = uVar9 + 0x15;
    if (SCARRY4(uVar9,0x15)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00155;
      iVar6 = extraout_EDX_x00137;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_130 = local_278;
    local_12c = local_274;
    puVar4 = &local_280;
    iVar6 = local_14 + -0xd;
    if (SBORROW4(local_14,0xd)) {
      thunk_FUN_00402808(local_274);
      puVar4 = extraout_ECX_x00156;
      iVar6 = extraout_EDX_x00138;
    }
    uVar2 = uVar9 + 0x15;
    if (SCARRY4(uVar9,0x15)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00157;
      iVar6 = extraout_EDX_x00139;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_128 = local_280;
    local_124 = local_27c;
    puVar4 = &local_288;
    iVar6 = local_14 + -0xd;
    if (SBORROW4(local_14,0xd)) {
      thunk_FUN_00402808(local_27c);
      puVar4 = extraout_ECX_x00158;
      iVar6 = extraout_EDX_x00140;
    }
    uVar2 = uVar9 + 0x16;
    if (SCARRY4(uVar9,0x16)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00159;
      iVar6 = extraout_EDX_x00141;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_120 = local_288;
    local_11c = local_284;
    puVar4 = &local_290;
    iVar6 = local_14 + -0xb;
    if (SBORROW4(local_14,0xb)) {
      thunk_FUN_00402808(local_284);
      puVar4 = extraout_ECX_x00160;
      iVar6 = extraout_EDX_x00142;
    }
    uVar2 = uVar9 + 0x16;
    if (SCARRY4(uVar9,0x16)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00161;
      iVar6 = extraout_EDX_x00143;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_118 = local_290;
    local_114 = local_28c;
    puVar4 = &local_298;
    iVar6 = local_14 + -0xb;
    if (SBORROW4(local_14,0xb)) {
      thunk_FUN_00402808(local_28c);
      puVar4 = extraout_ECX_x00162;
      iVar6 = extraout_EDX_x00144;
    }
    uVar2 = uVar9 + 0x17;
    if (SCARRY4(uVar9,0x17)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00163;
      iVar6 = extraout_EDX_x00145;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_110 = local_298;
    local_10c = local_294;
    puVar4 = &local_2a0;
    iVar6 = local_14 + -9;
    if (SBORROW4(local_14,9)) {
      thunk_FUN_00402808(local_294);
      puVar4 = extraout_ECX_x00164;
      iVar6 = extraout_EDX_x00146;
    }
    uVar2 = uVar9 + 0x17;
    if (SCARRY4(uVar9,0x17)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00165;
      iVar6 = extraout_EDX_x00147;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_108 = local_2a0;
    local_104 = local_29c;
    puVar4 = &local_2a8;
    iVar6 = local_14 + -9;
    if (SBORROW4(local_14,9)) {
      thunk_FUN_00402808(local_29c);
      puVar4 = extraout_ECX_x00166;
      iVar6 = extraout_EDX_x00148;
    }
    uVar2 = uVar9 + 0x18;
    if (SCARRY4(uVar9,0x18)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00167;
      iVar6 = extraout_EDX_x00149;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_100 = local_2a8;
    local_fc = local_2a4;
    puVar4 = &local_2b0;
    iVar6 = local_14 + -8;
    if (SBORROW4(local_14,8)) {
      thunk_FUN_00402808(local_2a4);
      puVar4 = extraout_ECX_x00168;
      iVar6 = extraout_EDX_x00150;
    }
    uVar2 = uVar9 + 0x18;
    if (SCARRY4(uVar9,0x18)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00169;
      iVar6 = extraout_EDX_x00151;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_f8 = local_2b0;
    local_f4 = local_2ac;
    puVar4 = &local_2b8;
    iVar6 = local_14 + -8;
    if (SBORROW4(local_14,8)) {
      thunk_FUN_00402808(local_2ac);
      puVar4 = extraout_ECX_x00170;
      iVar6 = extraout_EDX_x00152;
    }
    uVar2 = uVar9 + 0x19;
    if (SCARRY4(uVar9,0x19)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00171;
      iVar6 = extraout_EDX_x00153;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_f0 = local_2b8;
    local_ec = local_2b4;
    puVar4 = &local_2c0;
    iVar6 = local_14 + -6;
    if (SBORROW4(local_14,6)) {
      thunk_FUN_00402808(local_2b4);
      puVar4 = extraout_ECX_x00172;
      iVar6 = extraout_EDX_x00154;
    }
    uVar2 = uVar9 + 0x19;
    if (SCARRY4(uVar9,0x19)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00173;
      iVar6 = extraout_EDX_x00155;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_e8 = local_2c0;
    local_e4 = local_2bc;
    puVar4 = &local_2c8;
    iVar6 = local_14 + -6;
    if (SBORROW4(local_14,6)) {
      thunk_FUN_00402808(local_2bc);
      puVar4 = extraout_ECX_x00174;
      iVar6 = extraout_EDX_x00156;
    }
    uVar2 = uVar9 + 0x1a;
    if (SCARRY4(uVar9,0x1a)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00175;
      iVar6 = extraout_EDX_x00157;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_e0 = local_2c8;
    local_dc = local_2c4;
    puVar4 = &local_2d0;
    iVar6 = local_14 + -5;
    if (SBORROW4(local_14,5)) {
      thunk_FUN_00402808(local_2c4);
      puVar4 = extraout_ECX_x00176;
      iVar6 = extraout_EDX_x00158;
    }
    uVar2 = uVar9 + 0x1a;
    if (SCARRY4(uVar9,0x1a)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00177;
      iVar6 = extraout_EDX_x00159;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_d8 = local_2d0;
    local_d4 = local_2cc;
    puVar4 = &local_2d8;
    iVar6 = local_14 + -5;
    if (SBORROW4(local_14,5)) {
      thunk_FUN_00402808(local_2cc);
      puVar4 = extraout_ECX_x00178;
      iVar6 = extraout_EDX_x00160;
    }
    uVar2 = uVar9 + 0x1b;
    if (SCARRY4(uVar9,0x1b)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00179;
      iVar6 = extraout_EDX_x00161;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_d0 = local_2d8;
    local_cc = local_2d4;
    puVar4 = &local_2e0;
    iVar6 = local_14 + -3;
    if (SBORROW4(local_14,3)) {
      thunk_FUN_00402808(local_2d4);
      puVar4 = extraout_ECX_x00180;
      iVar6 = extraout_EDX_x00162;
    }
    uVar2 = uVar9 + 0x1b;
    if (SCARRY4(uVar9,0x1b)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00181;
      iVar6 = extraout_EDX_x00163;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_c8 = local_2e0;
    local_c4 = local_2dc;
    puVar4 = &local_2e8;
    iVar6 = local_14 + -2;
    if (SBORROW4(local_14,2)) {
      thunk_FUN_00402808(local_2dc);
      puVar4 = extraout_ECX_x00182;
      iVar6 = extraout_EDX_x00164;
    }
    uVar2 = uVar9 + 0x1c;
    if (SCARRY4(uVar9,0x1c)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00183;
      iVar6 = extraout_EDX_x00165;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_c0 = local_2e8;
    local_bc = local_2e4;
    puVar4 = &local_2f0;
    iVar6 = local_14 + -1;
    if (SBORROW4(local_14,1)) {
      thunk_FUN_00402808(local_2e4);
      puVar4 = extraout_ECX_x00184;
      iVar6 = extraout_EDX_x00166;
    }
    uVar2 = uVar9 + 0x1c;
    if (SCARRY4(uVar9,0x1c)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00185;
      iVar6 = extraout_EDX_x00167;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_b8 = local_2f0;
    local_b4 = local_2ec;
    puVar4 = &local_2f8;
    iVar6 = local_14 + -0x11;
    if (SBORROW4(local_14,0x11)) {
      thunk_FUN_00402808(local_2ec);
      puVar4 = extraout_ECX_x00186;
      iVar6 = extraout_EDX_x00168;
    }
    uVar2 = uVar9 + 0x1c;
    if (SCARRY4(uVar9,0x1c)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00187;
      iVar6 = extraout_EDX_x00169;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_b0 = local_2f8;
    local_ac = local_2f4;
    puVar4 = &local_300;
    iVar6 = local_14 + -0x11;
    if (SBORROW4(local_14,0x11)) {
      thunk_FUN_00402808(local_2f4);
      puVar4 = extraout_ECX_x00188;
      iVar6 = extraout_EDX_x00170;
    }
    uVar2 = local_18 - 5;
    if (SBORROW4(local_18,5)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00189;
      iVar6 = extraout_EDX_x00171;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_a8 = local_300;
    local_a4 = local_2fc;
    puVar4 = &local_308;
    iVar6 = local_14 + -0x12;
    if (SBORROW4(local_14,0x12)) {
      thunk_FUN_00402808(local_2fc);
      puVar4 = extraout_ECX_x00190;
      iVar6 = extraout_EDX_x00172;
    }
    uVar2 = local_18 - 5;
    if (SBORROW4(local_18,5)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00191;
      iVar6 = extraout_EDX_x00173;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_a0 = local_308;
    local_9c = local_304;
    puVar4 = &local_310;
    iVar6 = local_14 + -0x12;
    if (SBORROW4(local_14,0x12)) {
      thunk_FUN_00402808(local_304);
      puVar4 = extraout_ECX_x00192;
      iVar6 = extraout_EDX_x00174;
    }
    uVar2 = local_18 - 3;
    if (SBORROW4(local_18,3)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00193;
      iVar6 = extraout_EDX_x00175;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_98 = local_310;
    local_94 = local_30c;
    puVar4 = &local_318;
    iVar6 = local_14 + -0x13;
    if (SBORROW4(local_14,0x13)) {
      thunk_FUN_00402808(local_30c);
      puVar4 = extraout_ECX_x00194;
      iVar6 = extraout_EDX_x00176;
    }
    uVar2 = local_18 - 3;
    if (SBORROW4(local_18,3)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00195;
      iVar6 = extraout_EDX_x00177;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_90 = local_318;
    local_8c = local_314;
    puVar4 = &local_320;
    iVar6 = local_14 + -0x13;
    if (SBORROW4(local_14,0x13)) {
      thunk_FUN_00402808(local_314);
      puVar4 = extraout_ECX_x00196;
      iVar6 = extraout_EDX_x00178;
    }
    uVar2 = local_18 - 2;
    if (SBORROW4(local_18,2)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00197;
      iVar6 = extraout_EDX_x00179;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_88 = local_320;
    local_84 = local_31c;
    puVar4 = &local_328;
    iVar6 = local_14 + -0x15;
    if (SBORROW4(local_14,0x15)) {
      thunk_FUN_00402808(local_31c);
      puVar4 = extraout_ECX_x00198;
      iVar6 = extraout_EDX_x00180;
    }
    uVar2 = local_18 - 2;
    if (SBORROW4(local_18,2)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00199;
      iVar6 = extraout_EDX_x00181;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_80 = local_328;
    local_7c = local_324;
    puVar4 = &local_330;
    iVar6 = local_14 + -0x15;
    if (SBORROW4(local_14,0x15)) {
      thunk_FUN_00402808(local_324);
      puVar4 = extraout_ECX_x00200;
      iVar6 = extraout_EDX_x00182;
    }
    uVar2 = local_18 - 1;
    if (SBORROW4(local_18,1)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00201;
      iVar6 = extraout_EDX_x00183;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_78 = local_330;
    local_74 = local_32c;
    puVar4 = &local_338;
    uVar2 = local_18 - 1;
    if (SBORROW4(local_18,1)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00202;
    }
    FUN_0040f7d0(uVar2,5,puVar4);
    local_70 = local_338;
    local_6c = local_334;
    puVar4 = &local_340;
    uVar2 = local_18 - 2;
    if (SBORROW4(local_18,2)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00203;
    }
    FUN_0040f7d0(uVar2,5,puVar4);
    local_68 = local_340;
    local_64 = local_33c;
    puVar4 = &local_348;
    uVar2 = local_18 - 2;
    if (SBORROW4(local_18,2)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00204;
    }
    FUN_0040f7d0(uVar2,3,puVar4);
    local_60 = local_348;
    local_5c = local_344;
    puVar4 = &local_350;
    uVar2 = local_18 - 3;
    if (SBORROW4(local_18,3)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00205;
    }
    FUN_0040f7d0(uVar2,3,puVar4);
    local_58 = local_350;
    local_54 = local_34c;
    puVar4 = &local_358;
    uVar2 = local_18 - 3;
    if (SBORROW4(local_18,3)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00206;
    }
    FUN_0040f7d0(uVar2,2,puVar4);
    local_50 = local_358;
    local_4c = local_354;
    puVar4 = &local_360;
    uVar2 = local_18 - 4;
    if (SBORROW4(local_18,4)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00207;
    }
    FUN_0040f7d0(uVar2,2,puVar4);
    local_48 = local_360;
    local_44 = local_35c;
    puVar4 = &local_368;
    uVar2 = local_18 - 4;
    if (SBORROW4(local_18,4)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00208;
    }
    FUN_0040f7d0(uVar2,1,puVar4);
    local_40 = local_368;
    local_3c = local_364;
    puVar4 = &local_370;
    uVar2 = local_18 - 6;
    if (SBORROW4(local_18,6)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00209;
    }
    FUN_0040f7d0(uVar2,1,puVar4);
    local_38 = local_370;
    local_34 = local_36c;
    puVar4 = &local_378;
    uVar2 = local_18 - 6;
    if (SBORROW4(local_18,6)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00210;
    }
    FUN_0040f7d0(uVar2,0,puVar4);
    local_30 = local_378;
    local_2c = local_374;
    FUN_0040f7d0(5,0,&local_380);
    local_28 = local_380;
    local_24 = local_37c;
    piVar3 = (int *)FUN_00447524((int)local_8);
    uVar2 = FUN_00419180(piVar3,&point,0x35);
    iVar6 = local_14 + 1;
    if (SCARRY4(local_14,1)) {
      uVar2 = thunk_FUN_00402808(uVar2);
    }
    iVar8 = uVar9 + 1;
    if (SCARRY4(uVar9,1)) {
      uVar2 = thunk_FUN_00402808(uVar2);
    }
    iVar7 = local_18 + 1;
    if (SCARRY4(local_18,1)) {
      thunk_FUN_00402808(uVar2);
    }
    FUN_0040f7d0(5,0,&local_1d8);
    point.x = local_1d8;
    point.y = local_1d4;
    FUN_0040f7d0(5,1,&local_1e0);
    local_1c8 = local_1e0;
    local_1c4 = local_1dc;
    FUN_0040f7d0(3,1,&local_1e8);
    local_1c0 = local_1e8;
    local_1bc = local_1e4;
    FUN_0040f7d0(3,2,&local_1f0);
    local_1b8 = local_1f0;
    local_1b4 = local_1ec;
    FUN_0040f7d0(2,2,&local_1f8);
    local_1b0 = local_1f8;
    local_1ac = local_1f4;
    FUN_0040f7d0(2,3,&local_200);
    local_1a8 = local_200;
    local_1a4 = local_1fc;
    FUN_0040f7d0(1,3,&local_208);
    local_1a0 = local_208;
    local_19c = local_204;
    FUN_0040f7d0(1,5,&local_210);
    local_198 = local_210;
    local_194 = local_20c;
    FUN_0040f7d0(local_10,5,&local_218);
    local_190 = local_218;
    local_18c = local_214;
    puVar4 = &local_220;
    iVar5 = local_14 + -0x14;
    if (SBORROW4(iVar6,0x15)) {
      thunk_FUN_00402808(local_214);
      puVar4 = extraout_ECX_x00211;
      iVar5 = extraout_EDX_x00184;
    }
    FUN_0040f7d0(local_10,iVar5,puVar4);
    local_188 = local_220;
    local_184 = local_21c;
    puVar4 = &local_228;
    iVar5 = local_14 + -0x14;
    if (SBORROW4(iVar6,0x15)) {
      thunk_FUN_00402808(local_21c);
      puVar4 = extraout_ECX_x00212;
      iVar5 = extraout_EDX_x00185;
    }
    FUN_0040f7d0(1,iVar5,puVar4);
    local_180 = local_228;
    local_17c = local_224;
    puVar4 = &local_230;
    iVar5 = local_14 + -0x12;
    if (SBORROW4(iVar6,0x13)) {
      thunk_FUN_00402808(local_224);
      puVar4 = extraout_ECX_x00213;
      iVar5 = extraout_EDX_x00186;
    }
    FUN_0040f7d0(1,iVar5,puVar4);
    local_178 = local_230;
    local_174 = local_22c;
    puVar4 = &local_238;
    iVar5 = local_14 + -0x12;
    if (SBORROW4(iVar6,0x13)) {
      thunk_FUN_00402808(local_22c);
      puVar4 = extraout_ECX_x00214;
      iVar5 = extraout_EDX_x00187;
    }
    FUN_0040f7d0(2,iVar5,puVar4);
    local_170 = local_238;
    local_16c = local_234;
    puVar4 = &local_240;
    iVar5 = local_14 + -0x11;
    if (SBORROW4(iVar6,0x12)) {
      thunk_FUN_00402808(local_234);
      puVar4 = extraout_ECX_x00215;
      iVar5 = extraout_EDX_x00188;
    }
    FUN_0040f7d0(2,iVar5,puVar4);
    local_168 = local_240;
    local_164 = local_23c;
    puVar4 = &local_248;
    iVar5 = local_14 + -0x11;
    if (SBORROW4(iVar6,0x12)) {
      thunk_FUN_00402808(local_23c);
      puVar4 = extraout_ECX_x00216;
      iVar5 = extraout_EDX_x00189;
    }
    FUN_0040f7d0(4,iVar5,puVar4);
    local_160 = local_248;
    local_15c = local_244;
    puVar4 = &local_250;
    iVar5 = local_14 + -0x10;
    if (SBORROW4(iVar6,0x11)) {
      thunk_FUN_00402808(local_244);
      puVar4 = extraout_ECX_x00217;
      iVar5 = extraout_EDX_x00190;
    }
    FUN_0040f7d0(4,iVar5,puVar4);
    local_158 = local_250;
    local_154 = local_24c;
    puVar4 = &local_258;
    iVar5 = local_14 + -0x10;
    if (SBORROW4(iVar6,0x11)) {
      thunk_FUN_00402808(local_24c);
      puVar4 = extraout_ECX_x00218;
      iVar5 = extraout_EDX_x00191;
    }
    uVar2 = uVar9 + 0x14;
    if (SCARRY4(iVar8,0x13)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00219;
      iVar5 = extraout_EDX_x00192;
    }
    FUN_0040f7d0(uVar2,iVar5,puVar4);
    local_150 = local_258;
    local_14c = local_254;
    puVar4 = &local_260;
    iVar5 = local_14 + -0xf;
    if (SBORROW4(iVar6,0x10)) {
      thunk_FUN_00402808(local_254);
      puVar4 = extraout_ECX_x00220;
      iVar5 = extraout_EDX_x00193;
    }
    uVar2 = uVar9 + 0x14;
    if (SCARRY4(iVar8,0x13)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00221;
      iVar5 = extraout_EDX_x00194;
    }
    FUN_0040f7d0(uVar2,iVar5,puVar4);
    local_148 = local_260;
    local_144 = local_25c;
    puVar4 = &local_268;
    iVar5 = local_14 + -0xf;
    if (SBORROW4(iVar6,0x10)) {
      thunk_FUN_00402808(local_25c);
      puVar4 = extraout_ECX_x00222;
      iVar5 = extraout_EDX_x00195;
    }
    uVar2 = uVar9 + 0x15;
    if (SCARRY4(iVar8,0x14)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00223;
      iVar5 = extraout_EDX_x00196;
    }
    FUN_0040f7d0(uVar2,iVar5,puVar4);
    local_140 = local_268;
    local_13c = local_264;
    puVar4 = &local_270;
    iVar5 = local_14 + -0xd;
    if (SBORROW4(iVar6,0xe)) {
      thunk_FUN_00402808(local_264);
      puVar4 = extraout_ECX_x00224;
      iVar5 = extraout_EDX_x00197;
    }
    uVar2 = uVar9 + 0x15;
    if (SCARRY4(iVar8,0x14)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00225;
      iVar5 = extraout_EDX_x00198;
    }
    FUN_0040f7d0(uVar2,iVar5,puVar4);
    local_138 = local_270;
    local_134 = local_26c;
    puVar4 = &local_278;
    iVar5 = local_14 + -0xd;
    if (SBORROW4(iVar6,0xe)) {
      thunk_FUN_00402808(local_26c);
      puVar4 = extraout_ECX_x00226;
      iVar5 = extraout_EDX_x00199;
    }
    uVar2 = uVar9 + 0x16;
    if (SCARRY4(iVar8,0x15)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00227;
      iVar5 = extraout_EDX_x00200;
    }
    FUN_0040f7d0(uVar2,iVar5,puVar4);
    local_130 = local_278;
    local_12c = local_274;
    puVar4 = &local_280;
    iVar5 = local_14 + -0xc;
    if (SBORROW4(iVar6,0xd)) {
      thunk_FUN_00402808(local_274);
      puVar4 = extraout_ECX_x00228;
      iVar5 = extraout_EDX_x00201;
    }
    uVar2 = uVar9 + 0x16;
    if (SCARRY4(iVar8,0x15)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00229;
      iVar5 = extraout_EDX_x00202;
    }
    FUN_0040f7d0(uVar2,iVar5,puVar4);
    local_128 = local_280;
    local_124 = local_27c;
    puVar4 = &local_288;
    iVar5 = local_14 + -0xc;
    if (SBORROW4(iVar6,0xd)) {
      thunk_FUN_00402808(local_27c);
      puVar4 = extraout_ECX_x00230;
      iVar5 = extraout_EDX_x00203;
    }
    uVar2 = uVar9 + 0x17;
    if (SCARRY4(iVar8,0x16)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00231;
      iVar5 = extraout_EDX_x00204;
    }
    FUN_0040f7d0(uVar2,iVar5,puVar4);
    local_120 = local_288;
    local_11c = local_284;
    puVar4 = &local_290;
    iVar5 = local_14 + -10;
    if (SBORROW4(iVar6,0xb)) {
      thunk_FUN_00402808(local_284);
      puVar4 = extraout_ECX_x00232;
      iVar5 = extraout_EDX_x00205;
    }
    uVar2 = uVar9 + 0x17;
    if (SCARRY4(iVar8,0x16)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00233;
      iVar5 = extraout_EDX_x00206;
    }
    FUN_0040f7d0(uVar2,iVar5,puVar4);
    local_118 = local_290;
    local_114 = local_28c;
    puVar4 = &local_298;
    iVar5 = local_14 + -10;
    if (SBORROW4(iVar6,0xb)) {
      thunk_FUN_00402808(local_28c);
      puVar4 = extraout_ECX_x00234;
      iVar5 = extraout_EDX_x00207;
    }
    uVar2 = uVar9 + 0x18;
    if (SCARRY4(iVar8,0x17)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00235;
      iVar5 = extraout_EDX_x00208;
    }
    FUN_0040f7d0(uVar2,iVar5,puVar4);
    local_110 = local_298;
    local_10c = local_294;
    puVar4 = &local_2a0;
    iVar5 = local_14 + -8;
    if (SBORROW4(iVar6,9)) {
      thunk_FUN_00402808(local_294);
      puVar4 = extraout_ECX_x00236;
      iVar5 = extraout_EDX_x00209;
    }
    uVar2 = uVar9 + 0x18;
    if (SCARRY4(iVar8,0x17)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00237;
      iVar5 = extraout_EDX_x00210;
    }
    FUN_0040f7d0(uVar2,iVar5,puVar4);
    local_108 = local_2a0;
    local_104 = local_29c;
    puVar4 = &local_2a8;
    iVar5 = local_14 + -8;
    if (SBORROW4(iVar6,9)) {
      thunk_FUN_00402808(local_29c);
      puVar4 = extraout_ECX_x00238;
      iVar5 = extraout_EDX_x00211;
    }
    uVar2 = uVar9 + 0x19;
    if (SCARRY4(iVar8,0x18)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00239;
      iVar5 = extraout_EDX_x00212;
    }
    FUN_0040f7d0(uVar2,iVar5,puVar4);
    local_100 = local_2a8;
    local_fc = local_2a4;
    puVar4 = &local_2b0;
    iVar5 = local_14 + -7;
    if (SBORROW4(iVar6,8)) {
      thunk_FUN_00402808(local_2a4);
      puVar4 = extraout_ECX_x00240;
      iVar5 = extraout_EDX_x00213;
    }
    uVar2 = uVar9 + 0x19;
    if (SCARRY4(iVar8,0x18)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00241;
      iVar5 = extraout_EDX_x00214;
    }
    FUN_0040f7d0(uVar2,iVar5,puVar4);
    local_f8 = local_2b0;
    local_f4 = local_2ac;
    puVar4 = &local_2b8;
    iVar5 = local_14 + -7;
    if (SBORROW4(iVar6,8)) {
      thunk_FUN_00402808(local_2ac);
      puVar4 = extraout_ECX_x00242;
      iVar5 = extraout_EDX_x00215;
    }
    uVar2 = uVar9 + 0x1a;
    if (SCARRY4(iVar8,0x19)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00243;
      iVar5 = extraout_EDX_x00216;
    }
    FUN_0040f7d0(uVar2,iVar5,puVar4);
    local_f0 = local_2b8;
    local_ec = local_2b4;
    puVar4 = &local_2c0;
    iVar5 = local_14 + -5;
    if (SBORROW4(iVar6,6)) {
      thunk_FUN_00402808(local_2b4);
      puVar4 = extraout_ECX_x00244;
      iVar5 = extraout_EDX_x00217;
    }
    uVar2 = uVar9 + 0x1a;
    if (SCARRY4(iVar8,0x19)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00245;
      iVar5 = extraout_EDX_x00218;
    }
    FUN_0040f7d0(uVar2,iVar5,puVar4);
    local_e8 = local_2c0;
    local_e4 = local_2bc;
    puVar4 = &local_2c8;
    iVar5 = local_14 + -5;
    if (SBORROW4(iVar6,6)) {
      thunk_FUN_00402808(local_2bc);
      puVar4 = extraout_ECX_x00246;
      iVar5 = extraout_EDX_x00219;
    }
    uVar2 = uVar9 + 0x1b;
    if (SCARRY4(iVar8,0x1a)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00247;
      iVar5 = extraout_EDX_x00220;
    }
    FUN_0040f7d0(uVar2,iVar5,puVar4);
    local_e0 = local_2c8;
    local_dc = local_2c4;
    puVar4 = &local_2d0;
    iVar5 = local_14 + -4;
    if (SBORROW4(iVar6,5)) {
      thunk_FUN_00402808(local_2c4);
      puVar4 = extraout_ECX_x00248;
      iVar5 = extraout_EDX_x00221;
    }
    uVar2 = uVar9 + 0x1b;
    if (SCARRY4(iVar8,0x1a)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00249;
      iVar5 = extraout_EDX_x00222;
    }
    FUN_0040f7d0(uVar2,iVar5,puVar4);
    local_d8 = local_2d0;
    local_d4 = local_2cc;
    puVar4 = &local_2d8;
    iVar5 = local_14 + -4;
    if (SBORROW4(iVar6,5)) {
      thunk_FUN_00402808(local_2cc);
      puVar4 = extraout_ECX_x00250;
      iVar5 = extraout_EDX_x00223;
    }
    uVar2 = uVar9 + 0x1c;
    if (SCARRY4(iVar8,0x1b)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00251;
      iVar5 = extraout_EDX_x00224;
    }
    FUN_0040f7d0(uVar2,iVar5,puVar4);
    local_d0 = local_2d8;
    local_cc = local_2d4;
    puVar4 = &local_2e0;
    iVar5 = local_14 + -2;
    if (SBORROW4(iVar6,3)) {
      thunk_FUN_00402808(local_2d4);
      puVar4 = extraout_ECX_x00252;
      iVar5 = extraout_EDX_x00225;
    }
    uVar2 = uVar9 + 0x1c;
    if (SCARRY4(iVar8,0x1b)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00253;
      iVar5 = extraout_EDX_x00226;
    }
    FUN_0040f7d0(uVar2,iVar5,puVar4);
    local_c8 = local_2e0;
    local_c4 = local_2dc;
    puVar4 = &local_2e8;
    iVar5 = local_14 + -1;
    if (SBORROW4(iVar6,2)) {
      thunk_FUN_00402808(local_2dc);
      puVar4 = extraout_ECX_x00254;
      iVar5 = extraout_EDX_x00227;
    }
    uVar2 = uVar9 + 0x1d;
    if (SCARRY4(iVar8,0x1c)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00255;
      iVar5 = extraout_EDX_x00228;
    }
    FUN_0040f7d0(uVar2,iVar5,puVar4);
    local_c0 = local_2e8;
    local_bc = local_2e4;
    puVar4 = &local_2f0;
    iVar5 = local_14;
    if (SBORROW4(iVar6,1)) {
      thunk_FUN_00402808(local_2e4);
      puVar4 = extraout_ECX_x00256;
      iVar5 = extraout_EDX_x00229;
    }
    uVar2 = uVar9 + 0x1d;
    if (SCARRY4(iVar8,0x1c)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00257;
      iVar5 = extraout_EDX_x00230;
    }
    FUN_0040f7d0(uVar2,iVar5,puVar4);
    local_b8 = local_2f0;
    local_b4 = local_2ec;
    puVar4 = &local_2f8;
    iVar5 = local_14 + -0x10;
    if (SBORROW4(iVar6,0x11)) {
      thunk_FUN_00402808(local_2ec);
      puVar4 = extraout_ECX_x00258;
      iVar5 = extraout_EDX_x00231;
    }
    uVar9 = uVar9 + 0x1d;
    if (SCARRY4(iVar8,0x1c)) {
      uVar9 = thunk_FUN_00402808(uVar9);
      puVar4 = extraout_ECX_x00259;
      iVar5 = extraout_EDX_x00232;
    }
    FUN_0040f7d0(uVar9,iVar5,puVar4);
    local_b0 = local_2f8;
    local_ac = local_2f4;
    puVar4 = &local_300;
    iVar8 = local_14 + -0x10;
    if (SBORROW4(iVar6,0x11)) {
      thunk_FUN_00402808(local_2f4);
      puVar4 = extraout_ECX_x00260;
      iVar8 = extraout_EDX_x00233;
    }
    uVar2 = local_18 - 4;
    if (SBORROW4(iVar7,5)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00261;
      iVar8 = extraout_EDX_x00234;
    }
    FUN_0040f7d0(uVar2,iVar8,puVar4);
    local_a8 = local_300;
    local_a4 = local_2fc;
    puVar4 = &local_308;
    iVar8 = local_14 + -0x11;
    if (SBORROW4(iVar6,0x12)) {
      thunk_FUN_00402808(local_2fc);
      puVar4 = extraout_ECX_x00262;
      iVar8 = extraout_EDX_x00235;
    }
    uVar2 = local_18 - 4;
    if (SBORROW4(iVar7,5)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00263;
      iVar8 = extraout_EDX_x00236;
    }
    FUN_0040f7d0(uVar2,iVar8,puVar4);
    local_a0 = local_308;
    local_9c = local_304;
    puVar4 = &local_310;
    iVar8 = local_14 + -0x11;
    if (SBORROW4(iVar6,0x12)) {
      thunk_FUN_00402808(local_304);
      puVar4 = extraout_ECX_x00264;
      iVar8 = extraout_EDX_x00237;
    }
    uVar2 = local_18 - 2;
    if (SBORROW4(iVar7,3)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00265;
      iVar8 = extraout_EDX_x00238;
    }
    FUN_0040f7d0(uVar2,iVar8,puVar4);
    local_98 = local_310;
    local_94 = local_30c;
    puVar4 = &local_318;
    iVar8 = local_14 + -0x12;
    if (SBORROW4(iVar6,0x13)) {
      thunk_FUN_00402808(local_30c);
      puVar4 = extraout_ECX_x00266;
      iVar8 = extraout_EDX_x00239;
    }
    uVar2 = local_18 - 2;
    if (SBORROW4(iVar7,3)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00267;
      iVar8 = extraout_EDX_x00240;
    }
    FUN_0040f7d0(uVar2,iVar8,puVar4);
    local_90 = local_318;
    local_8c = local_314;
    puVar4 = &local_320;
    iVar8 = local_14 + -0x12;
    if (SBORROW4(iVar6,0x13)) {
      thunk_FUN_00402808(local_314);
      puVar4 = extraout_ECX_x00268;
      iVar8 = extraout_EDX_x00241;
    }
    uVar2 = local_18 - 1;
    if (SBORROW4(iVar7,2)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00269;
      iVar8 = extraout_EDX_x00242;
    }
    FUN_0040f7d0(uVar2,iVar8,puVar4);
    local_88 = local_320;
    local_84 = local_31c;
    puVar4 = &local_328;
    iVar8 = local_14 + -0x14;
    if (SBORROW4(iVar6,0x15)) {
      thunk_FUN_00402808(local_31c);
      puVar4 = extraout_ECX_x00270;
      iVar8 = extraout_EDX_x00243;
    }
    uVar2 = local_18 - 1;
    if (SBORROW4(iVar7,2)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00271;
      iVar8 = extraout_EDX_x00244;
    }
    FUN_0040f7d0(uVar2,iVar8,puVar4);
    local_80 = local_328;
    local_7c = local_324;
    puVar4 = &local_330;
    local_14 = local_14 + -0x14;
    if (SBORROW4(iVar6,0x15)) {
      thunk_FUN_00402808(local_324);
      puVar4 = extraout_ECX_x00272;
      local_14 = extraout_EDX_x00245;
    }
    uVar2 = local_18;
    if (SBORROW4(iVar7,1)) {
      uVar2 = thunk_FUN_00402808(local_18);
      puVar4 = extraout_ECX_x00273;
      local_14 = extraout_EDX_x00246;
    }
    FUN_0040f7d0(uVar2,local_14,puVar4);
    local_78 = local_330;
    local_74 = local_32c;
    puVar4 = &local_338;
    uVar2 = local_18;
    if (SBORROW4(iVar7,1)) {
      uVar2 = thunk_FUN_00402808(local_18);
      puVar4 = extraout_ECX_x00274;
    }
    FUN_0040f7d0(uVar2,5,puVar4);
    local_70 = local_338;
    local_6c = local_334;
    puVar4 = &local_340;
    uVar2 = local_18 - 1;
    if (SBORROW4(iVar7,2)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00275;
    }
    FUN_0040f7d0(uVar2,5,puVar4);
    local_68 = local_340;
    local_64 = local_33c;
    puVar4 = &local_348;
    uVar2 = local_18 - 1;
    if (SBORROW4(iVar7,2)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00276;
    }
    FUN_0040f7d0(uVar2,3,puVar4);
    local_60 = local_348;
    local_5c = local_344;
    puVar4 = &local_350;
    uVar2 = local_18 - 2;
    if (SBORROW4(iVar7,3)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00277;
    }
    FUN_0040f7d0(uVar2,3,puVar4);
    local_58 = local_350;
    local_54 = local_34c;
    puVar4 = &local_358;
    uVar2 = local_18 - 2;
    if (SBORROW4(iVar7,3)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00278;
    }
    FUN_0040f7d0(uVar2,2,puVar4);
    local_50 = local_358;
    local_4c = local_354;
    puVar4 = &local_360;
    uVar2 = local_18 - 3;
    if (SBORROW4(iVar7,4)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00279;
    }
    FUN_0040f7d0(uVar2,2,puVar4);
    local_48 = local_360;
    local_44 = local_35c;
    puVar4 = &local_368;
    uVar2 = local_18 - 3;
    if (SBORROW4(iVar7,4)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00280;
    }
    FUN_0040f7d0(uVar2,1,puVar4);
    local_40 = local_368;
    local_3c = local_364;
    puVar4 = &local_370;
    uVar2 = local_18 - 5;
    if (SBORROW4(iVar7,6)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00281;
    }
    FUN_0040f7d0(uVar2,1,puVar4);
    local_38 = local_370;
    local_34 = local_36c;
    puVar4 = &local_378;
    local_18 = local_18 - 5;
    if (SBORROW4(iVar7,6)) {
      local_18 = thunk_FUN_00402808(local_18);
      puVar4 = extraout_ECX_x00282;
    }
    FUN_0040f7d0(local_18,0,puVar4);
    local_30 = local_378;
    local_2c = local_374;
    FUN_0040f7d0(5,0,&local_380);
    local_28 = local_380;
    local_24 = local_37c;
    FUN_0047d49c(local_8,&point,0x35);
  }
  else if (cVar1 == '\x02') {
    FUN_0040f7d0(0x15,0,&local_1d8);
    point.x = local_1d8;
    point.y = local_1d4;
    FUN_0040f7d0(0x15,1,&local_1e0);
    local_1c8 = local_1e0;
    local_1c4 = local_1dc;
    FUN_0040f7d0(0x13,1,&local_1e8);
    local_1c0 = local_1e8;
    local_1bc = local_1e4;
    FUN_0040f7d0(0x13,2,&local_1f0);
    local_1b8 = local_1f0;
    local_1b4 = local_1ec;
    FUN_0040f7d0(0x12,2,&local_1f8);
    local_1b0 = local_1f8;
    local_1ac = local_1f4;
    FUN_0040f7d0(0x12,3,&local_200);
    local_1a8 = local_200;
    local_1a4 = local_1fc;
    FUN_0040f7d0(0x11,3,&local_208);
    local_1a0 = local_208;
    local_19c = local_204;
    FUN_0040f7d0(0x11,5,&local_210);
    local_198 = local_210;
    local_194 = local_20c;
    FUN_0040f7d0(0x10,5,&local_218);
    local_190 = local_218;
    local_18c = local_214;
    FUN_0040f7d0(0x10,0x1a,&local_220);
    local_188 = local_220;
    local_184 = local_21c;
    FUN_0040f7d0(0,0x1a,&local_228);
    local_180 = local_228;
    local_17c = local_224;
    FUN_0040f7d0(1,0x1a,&local_230);
    local_178 = local_230;
    local_174 = local_22c;
    FUN_0040f7d0(2,0x1b,&local_238);
    local_170 = local_238;
    local_16c = local_234;
    FUN_0040f7d0(3,0x1b,&local_240);
    local_168 = local_240;
    local_164 = local_23c;
    FUN_0040f7d0(3,0x1c,&local_248);
    local_160 = local_248;
    local_15c = local_244;
    FUN_0040f7d0(5,0x1c,&local_250);
    local_158 = local_250;
    local_154 = local_24c;
    FUN_0040f7d0(5,0x1d,&local_258);
    local_150 = local_258;
    local_14c = local_254;
    FUN_0040f7d0(7,0x1d,&local_260);
    local_148 = local_260;
    local_144 = local_25c;
    FUN_0040f7d0(7,0x1e,&local_268);
    local_140 = local_268;
    local_13c = local_264;
    FUN_0040f7d0(8,0x1e,&local_270);
    local_138 = local_270;
    local_134 = local_26c;
    FUN_0040f7d0(8,0x1f,&local_278);
    local_130 = local_278;
    local_12c = local_274;
    FUN_0040f7d0(10,0x1f,&local_280);
    local_128 = local_280;
    local_124 = local_27c;
    FUN_0040f7d0(10,0x20,&local_288);
    local_120 = local_288;
    local_11c = local_284;
    FUN_0040f7d0(0xb,0x20,&local_290);
    local_118 = local_290;
    local_114 = local_28c;
    FUN_0040f7d0(0xb,0x21,&local_298);
    local_110 = local_298;
    local_10c = local_294;
    FUN_0040f7d0(0xd,0x21,&local_2a0);
    local_108 = local_2a0;
    local_104 = local_29c;
    FUN_0040f7d0(0xd,0x22,&local_2a8);
    local_100 = local_2a8;
    local_fc = local_2a4;
    FUN_0040f7d0(0xf,0x22,&local_2b0);
    local_f8 = local_2b0;
    local_f4 = local_2ac;
    FUN_0040f7d0(0xf,0x23,&local_2b8);
    local_f0 = local_2b8;
    local_ec = local_2b4;
    FUN_0040f7d0(0x10,0x23,&local_2c0);
    local_e8 = local_2c0;
    local_e4 = local_2bc;
    puVar4 = &local_2c8;
    iVar6 = local_14 + -5;
    if (SBORROW4(local_14,5)) {
      thunk_FUN_00402808(local_2bc);
      puVar4 = extraout_ECX_x00283;
    }
    FUN_0040f7d0(0x10,iVar6,puVar4);
    local_e0 = local_2c8;
    local_dc = local_2c4;
    FUN_0040f7d0(0x11,iVar6,&local_2d0);
    local_d8 = local_2d0;
    local_d4 = local_2cc;
    puVar4 = &local_2d8;
    iVar8 = local_14 + -3;
    if (SBORROW4(local_14,3)) {
      thunk_FUN_00402808(local_2cc);
      puVar4 = extraout_ECX_x00284;
      iVar8 = extraout_EDX_x00247;
    }
    FUN_0040f7d0(0x11,iVar8,puVar4);
    local_d0 = local_2d8;
    local_cc = local_2d4;
    puVar4 = &local_2e0;
    iVar8 = local_14 + -3;
    if (SBORROW4(local_14,3)) {
      thunk_FUN_00402808(local_2d4);
      puVar4 = extraout_ECX_x00285;
      iVar8 = extraout_EDX_x00248;
    }
    FUN_0040f7d0(0x12,iVar8,puVar4);
    local_c8 = local_2e0;
    local_c4 = local_2dc;
    puVar4 = &local_2e8;
    iVar8 = local_14 + -2;
    if (SBORROW4(local_14,2)) {
      thunk_FUN_00402808(local_2dc);
      puVar4 = extraout_ECX_x00286;
      iVar8 = extraout_EDX_x00249;
    }
    FUN_0040f7d0(0x12,iVar8,puVar4);
    local_c0 = local_2e8;
    local_bc = local_2e4;
    puVar4 = &local_2f0;
    iVar8 = local_14 + -2;
    if (SBORROW4(local_14,2)) {
      thunk_FUN_00402808(local_2e4);
      puVar4 = extraout_ECX_x00287;
      iVar8 = extraout_EDX_x00250;
    }
    FUN_0040f7d0(0x14,iVar8,puVar4);
    local_b8 = local_2f0;
    local_b4 = local_2ec;
    puVar4 = &local_2f8;
    iVar8 = local_14 + -1;
    if (SBORROW4(local_14,1)) {
      thunk_FUN_00402808(local_2ec);
      puVar4 = extraout_ECX_x00288;
      iVar8 = extraout_EDX_x00251;
    }
    FUN_0040f7d0(0x14,iVar8,puVar4);
    local_b0 = local_2f8;
    local_ac = local_2f4;
    puVar4 = &local_300;
    iVar8 = local_14 + -1;
    if (SBORROW4(local_14,1)) {
      thunk_FUN_00402808(local_2f4);
      puVar4 = extraout_ECX_x00289;
      iVar8 = extraout_EDX_x00252;
    }
    uVar2 = local_18 - 5;
    if (SBORROW4(local_18,5)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00290;
      iVar8 = extraout_EDX_x00253;
    }
    FUN_0040f7d0(uVar2,iVar8,puVar4);
    local_a8 = local_300;
    local_a4 = local_2fc;
    puVar4 = &local_308;
    iVar8 = local_14 + -2;
    if (SBORROW4(local_14,2)) {
      thunk_FUN_00402808(local_2fc);
      puVar4 = extraout_ECX_x00291;
      iVar8 = extraout_EDX_x00254;
    }
    uVar2 = local_18 - 5;
    if (SBORROW4(local_18,5)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00292;
      iVar8 = extraout_EDX_x00255;
    }
    FUN_0040f7d0(uVar2,iVar8,puVar4);
    local_a0 = local_308;
    local_9c = local_304;
    puVar4 = &local_310;
    iVar8 = local_14 + -2;
    if (SBORROW4(local_14,2)) {
      thunk_FUN_00402808(local_304);
      puVar4 = extraout_ECX_x00293;
      iVar8 = extraout_EDX_x00256;
    }
    uVar2 = local_18 - 3;
    if (SBORROW4(local_18,3)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00294;
      iVar8 = extraout_EDX_x00257;
    }
    FUN_0040f7d0(uVar2,iVar8,puVar4);
    local_98 = local_310;
    local_94 = local_30c;
    puVar4 = &local_318;
    iVar8 = local_14 + -3;
    if (SBORROW4(local_14,3)) {
      thunk_FUN_00402808(local_30c);
      puVar4 = extraout_ECX_x00295;
      iVar8 = extraout_EDX_x00258;
    }
    uVar2 = local_18 - 3;
    if (SBORROW4(local_18,3)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00296;
      iVar8 = extraout_EDX_x00259;
    }
    FUN_0040f7d0(uVar2,iVar8,puVar4);
    local_90 = local_318;
    local_8c = local_314;
    puVar4 = &local_320;
    iVar8 = local_14 + -3;
    if (SBORROW4(local_14,3)) {
      thunk_FUN_00402808(local_314);
      puVar4 = extraout_ECX_x00297;
      iVar8 = extraout_EDX_x00260;
    }
    uVar2 = local_18 - 2;
    if (SBORROW4(local_18,2)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00298;
      iVar8 = extraout_EDX_x00261;
    }
    FUN_0040f7d0(uVar2,iVar8,puVar4);
    local_88 = local_320;
    local_84 = local_31c;
    puVar4 = &local_328;
    uVar2 = local_18 - 2;
    iVar8 = iVar6;
    if (SBORROW4(local_18,2)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00299;
      iVar8 = extraout_EDX_x00262;
    }
    FUN_0040f7d0(uVar2,iVar8,puVar4);
    local_80 = local_328;
    local_7c = local_324;
    puVar4 = &local_330;
    uVar2 = local_18 - 1;
    if (SBORROW4(local_18,1)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00300;
      iVar6 = extraout_EDX_x00263;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_78 = local_330;
    local_74 = local_32c;
    puVar4 = &local_338;
    uVar2 = local_18 - 1;
    if (SBORROW4(local_18,1)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00301;
    }
    FUN_0040f7d0(uVar2,5,puVar4);
    local_70 = local_338;
    local_6c = local_334;
    puVar4 = &local_340;
    uVar2 = local_18 - 2;
    if (SBORROW4(local_18,2)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00302;
    }
    FUN_0040f7d0(uVar2,5,puVar4);
    local_68 = local_340;
    local_64 = local_33c;
    puVar4 = &local_348;
    uVar2 = local_18 - 2;
    if (SBORROW4(local_18,2)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00303;
    }
    FUN_0040f7d0(uVar2,3,puVar4);
    local_60 = local_348;
    local_5c = local_344;
    puVar4 = &local_350;
    uVar2 = local_18 - 3;
    if (SBORROW4(local_18,3)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00304;
    }
    FUN_0040f7d0(uVar2,3,puVar4);
    local_58 = local_350;
    local_54 = local_34c;
    puVar4 = &local_358;
    uVar2 = local_18 - 3;
    if (SBORROW4(local_18,3)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00305;
    }
    FUN_0040f7d0(uVar2,2,puVar4);
    local_50 = local_358;
    local_4c = local_354;
    puVar4 = &local_360;
    uVar2 = local_18 - 4;
    if (SBORROW4(local_18,4)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00306;
    }
    FUN_0040f7d0(uVar2,2,puVar4);
    local_48 = local_360;
    local_44 = local_35c;
    puVar4 = &local_368;
    uVar2 = local_18 - 4;
    if (SBORROW4(local_18,4)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00307;
    }
    FUN_0040f7d0(uVar2,1,puVar4);
    local_40 = local_368;
    local_3c = local_364;
    puVar4 = &local_370;
    uVar2 = local_18 - 6;
    if (SBORROW4(local_18,6)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00308;
    }
    FUN_0040f7d0(uVar2,1,puVar4);
    local_38 = local_370;
    local_34 = local_36c;
    puVar4 = &local_378;
    uVar2 = local_18 - 6;
    if (SBORROW4(local_18,6)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00309;
    }
    FUN_0040f7d0(uVar2,0,puVar4);
    local_30 = local_378;
    local_2c = local_374;
    FUN_0040f7d0(0x15,0,&local_380);
    local_28 = local_380;
    local_24 = local_37c;
    uVar2 = FUN_00419180(local_c,&point,0x35);
    iVar6 = local_14 + 1;
    if (SCARRY4(local_14,1)) {
      uVar2 = thunk_FUN_00402808(uVar2);
    }
    iVar8 = local_18 + 1;
    if (SCARRY4(local_18,1)) {
      thunk_FUN_00402808(uVar2);
    }
    FUN_0040f7d0(0x15,0,&local_1d8);
    point.x = local_1d8;
    point.y = local_1d4;
    FUN_0040f7d0(0x15,1,&local_1e0);
    local_1c8 = local_1e0;
    local_1c4 = local_1dc;
    FUN_0040f7d0(0x13,1,&local_1e8);
    local_1c0 = local_1e8;
    local_1bc = local_1e4;
    FUN_0040f7d0(0x13,2,&local_1f0);
    local_1b8 = local_1f0;
    local_1b4 = local_1ec;
    FUN_0040f7d0(0x12,2,&local_1f8);
    local_1b0 = local_1f8;
    local_1ac = local_1f4;
    FUN_0040f7d0(0x12,3,&local_200);
    local_1a8 = local_200;
    local_1a4 = local_1fc;
    FUN_0040f7d0(0x11,3,&local_208);
    local_1a0 = local_208;
    local_19c = local_204;
    FUN_0040f7d0(0x11,5,&local_210);
    local_198 = local_210;
    local_194 = local_20c;
    FUN_0040f7d0(0x10,5,&local_218);
    local_190 = local_218;
    local_18c = local_214;
    FUN_0040f7d0(0x10,0x1a,&local_220);
    local_188 = local_220;
    local_184 = local_21c;
    FUN_0040f7d0(0,0x1a,&local_228);
    local_180 = local_228;
    local_17c = local_224;
    FUN_0040f7d0(1,0x1a,&local_230);
    local_178 = local_230;
    local_174 = local_22c;
    FUN_0040f7d0(2,0x1b,&local_238);
    local_170 = local_238;
    local_16c = local_234;
    FUN_0040f7d0(3,0x1b,&local_240);
    local_168 = local_240;
    local_164 = local_23c;
    FUN_0040f7d0(3,0x1c,&local_248);
    local_160 = local_248;
    local_15c = local_244;
    FUN_0040f7d0(5,0x1c,&local_250);
    local_158 = local_250;
    local_154 = local_24c;
    FUN_0040f7d0(5,0x1d,&local_258);
    local_150 = local_258;
    local_14c = local_254;
    FUN_0040f7d0(7,0x1d,&local_260);
    local_148 = local_260;
    local_144 = local_25c;
    FUN_0040f7d0(7,0x1e,&local_268);
    local_140 = local_268;
    local_13c = local_264;
    FUN_0040f7d0(8,0x1e,&local_270);
    local_138 = local_270;
    local_134 = local_26c;
    FUN_0040f7d0(8,0x1f,&local_278);
    local_130 = local_278;
    local_12c = local_274;
    FUN_0040f7d0(10,0x1f,&local_280);
    local_128 = local_280;
    local_124 = local_27c;
    FUN_0040f7d0(10,0x20,&local_288);
    local_120 = local_288;
    local_11c = local_284;
    FUN_0040f7d0(0xb,0x20,&local_290);
    local_118 = local_290;
    local_114 = local_28c;
    FUN_0040f7d0(0xb,0x21,&local_298);
    local_110 = local_298;
    local_10c = local_294;
    FUN_0040f7d0(0xd,0x21,&local_2a0);
    local_108 = local_2a0;
    local_104 = local_29c;
    FUN_0040f7d0(0xd,0x22,&local_2a8);
    local_100 = local_2a8;
    local_fc = local_2a4;
    FUN_0040f7d0(0xf,0x22,&local_2b0);
    local_f8 = local_2b0;
    local_f4 = local_2ac;
    FUN_0040f7d0(0xf,0x23,&local_2b8);
    local_f0 = local_2b8;
    local_ec = local_2b4;
    FUN_0040f7d0(0x10,0x23,&local_2c0);
    local_e8 = local_2c0;
    local_e4 = local_2bc;
    puVar4 = &local_2c8;
    iVar7 = local_14 + -4;
    if (SBORROW4(iVar6,5)) {
      thunk_FUN_00402808(local_2bc);
      puVar4 = extraout_ECX_x00310;
      iVar7 = extraout_EDX_x00264;
    }
    FUN_0040f7d0(0x10,iVar7,puVar4);
    local_e0 = local_2c8;
    local_dc = local_2c4;
    puVar4 = &local_2d0;
    iVar7 = local_14 + -4;
    if (SBORROW4(iVar6,5)) {
      thunk_FUN_00402808(local_2c4);
      puVar4 = extraout_ECX_x00311;
      iVar7 = extraout_EDX_x00265;
    }
    FUN_0040f7d0(0x11,iVar7,puVar4);
    local_d8 = local_2d0;
    local_d4 = local_2cc;
    puVar4 = &local_2d8;
    iVar7 = local_14 + -2;
    if (SBORROW4(iVar6,3)) {
      thunk_FUN_00402808(local_2cc);
      puVar4 = extraout_ECX_x00312;
      iVar7 = extraout_EDX_x00266;
    }
    FUN_0040f7d0(0x11,iVar7,puVar4);
    local_d0 = local_2d8;
    local_cc = local_2d4;
    puVar4 = &local_2e0;
    iVar7 = local_14 + -2;
    if (SBORROW4(iVar6,3)) {
      thunk_FUN_00402808(local_2d4);
      puVar4 = extraout_ECX_x00313;
      iVar7 = extraout_EDX_x00267;
    }
    FUN_0040f7d0(0x12,iVar7,puVar4);
    local_c8 = local_2e0;
    local_c4 = local_2dc;
    puVar4 = &local_2e8;
    iVar7 = local_14 + -1;
    if (SBORROW4(iVar6,2)) {
      thunk_FUN_00402808(local_2dc);
      puVar4 = extraout_ECX_x00314;
      iVar7 = extraout_EDX_x00268;
    }
    FUN_0040f7d0(0x12,iVar7,puVar4);
    local_c0 = local_2e8;
    local_bc = local_2e4;
    puVar4 = &local_2f0;
    iVar7 = local_14 + -1;
    if (SBORROW4(iVar6,2)) {
      thunk_FUN_00402808(local_2e4);
      puVar4 = extraout_ECX_x00315;
      iVar7 = extraout_EDX_x00269;
    }
    FUN_0040f7d0(0x14,iVar7,puVar4);
    local_b8 = local_2f0;
    local_b4 = local_2ec;
    puVar4 = &local_2f8;
    iVar7 = local_14;
    if (SBORROW4(iVar6,1)) {
      thunk_FUN_00402808(local_2ec);
      puVar4 = extraout_ECX_x00316;
      iVar7 = extraout_EDX_x00270;
    }
    FUN_0040f7d0(0x14,iVar7,puVar4);
    local_b0 = local_2f8;
    local_ac = local_2f4;
    puVar4 = &local_300;
    iVar7 = local_14;
    if (SBORROW4(iVar6,1)) {
      thunk_FUN_00402808(local_2f4);
      puVar4 = extraout_ECX_x00317;
      iVar7 = extraout_EDX_x00271;
    }
    uVar2 = local_18 - 4;
    if (SBORROW4(iVar8,5)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00318;
      iVar7 = extraout_EDX_x00272;
    }
    FUN_0040f7d0(uVar2,iVar7,puVar4);
    local_a8 = local_300;
    local_a4 = local_2fc;
    puVar4 = &local_308;
    iVar7 = local_14 + -1;
    if (SBORROW4(iVar6,2)) {
      thunk_FUN_00402808(local_2fc);
      puVar4 = extraout_ECX_x00319;
      iVar7 = extraout_EDX_x00273;
    }
    uVar2 = local_18 - 4;
    if (SBORROW4(iVar8,5)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00320;
      iVar7 = extraout_EDX_x00274;
    }
    FUN_0040f7d0(uVar2,iVar7,puVar4);
    local_a0 = local_308;
    local_9c = local_304;
    puVar4 = &local_310;
    iVar7 = local_14 + -1;
    if (SBORROW4(iVar6,2)) {
      thunk_FUN_00402808(local_304);
      puVar4 = extraout_ECX_x00321;
      iVar7 = extraout_EDX_x00275;
    }
    uVar2 = local_18 - 2;
    if (SBORROW4(iVar8,3)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00322;
      iVar7 = extraout_EDX_x00276;
    }
    FUN_0040f7d0(uVar2,iVar7,puVar4);
    local_98 = local_310;
    local_94 = local_30c;
    puVar4 = &local_318;
    iVar7 = local_14 + -2;
    if (SBORROW4(iVar6,3)) {
      thunk_FUN_00402808(local_30c);
      puVar4 = extraout_ECX_x00323;
      iVar7 = extraout_EDX_x00277;
    }
    uVar2 = local_18 - 2;
    if (SBORROW4(iVar8,3)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00324;
      iVar7 = extraout_EDX_x00278;
    }
    FUN_0040f7d0(uVar2,iVar7,puVar4);
    local_90 = local_318;
    local_8c = local_314;
    puVar4 = &local_320;
    iVar7 = local_14 + -2;
    if (SBORROW4(iVar6,3)) {
      thunk_FUN_00402808(local_314);
      puVar4 = extraout_ECX_x00325;
      iVar7 = extraout_EDX_x00279;
    }
    uVar2 = local_18 - 1;
    if (SBORROW4(iVar8,2)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00326;
      iVar7 = extraout_EDX_x00280;
    }
    FUN_0040f7d0(uVar2,iVar7,puVar4);
    local_88 = local_320;
    local_84 = local_31c;
    puVar4 = &local_328;
    iVar7 = local_14 + -4;
    if (SBORROW4(iVar6,5)) {
      thunk_FUN_00402808(local_31c);
      puVar4 = extraout_ECX_x00327;
      iVar7 = extraout_EDX_x00281;
    }
    uVar2 = local_18 - 1;
    if (SBORROW4(iVar8,2)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00328;
      iVar7 = extraout_EDX_x00282;
    }
    FUN_0040f7d0(uVar2,iVar7,puVar4);
    local_80 = local_328;
    local_7c = local_324;
    puVar4 = &local_330;
    local_14 = local_14 + -4;
    if (SBORROW4(iVar6,5)) {
      thunk_FUN_00402808(local_324);
      puVar4 = extraout_ECX_x00329;
      local_14 = extraout_EDX_x00283;
    }
    uVar2 = local_18;
    if (SBORROW4(iVar8,1)) {
      uVar2 = thunk_FUN_00402808(local_18);
      puVar4 = extraout_ECX_x00330;
      local_14 = extraout_EDX_x00284;
    }
    FUN_0040f7d0(uVar2,local_14,puVar4);
    local_78 = local_330;
    local_74 = local_32c;
    puVar4 = &local_338;
    uVar2 = local_18;
    if (SBORROW4(iVar8,1)) {
      uVar2 = thunk_FUN_00402808(local_18);
      puVar4 = extraout_ECX_x00331;
    }
    FUN_0040f7d0(uVar2,5,puVar4);
    local_70 = local_338;
    local_6c = local_334;
    puVar4 = &local_340;
    uVar2 = local_18 - 1;
    if (SBORROW4(iVar8,2)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00332;
    }
    FUN_0040f7d0(uVar2,5,puVar4);
    local_68 = local_340;
    local_64 = local_33c;
    puVar4 = &local_348;
    uVar2 = local_18 - 1;
    if (SBORROW4(iVar8,2)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00333;
    }
    FUN_0040f7d0(uVar2,3,puVar4);
    local_60 = local_348;
    local_5c = local_344;
    puVar4 = &local_350;
    uVar2 = local_18 - 2;
    if (SBORROW4(iVar8,3)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00334;
    }
    FUN_0040f7d0(uVar2,3,puVar4);
    local_58 = local_350;
    local_54 = local_34c;
    puVar4 = &local_358;
    uVar2 = local_18 - 2;
    if (SBORROW4(iVar8,3)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00335;
    }
    FUN_0040f7d0(uVar2,2,puVar4);
    local_50 = local_358;
    local_4c = local_354;
    puVar4 = &local_360;
    uVar2 = local_18 - 3;
    if (SBORROW4(iVar8,4)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00336;
    }
    FUN_0040f7d0(uVar2,2,puVar4);
    local_48 = local_360;
    local_44 = local_35c;
    puVar4 = &local_368;
    uVar2 = local_18 - 3;
    if (SBORROW4(iVar8,4)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00337;
    }
    FUN_0040f7d0(uVar2,1,puVar4);
    local_40 = local_368;
    local_3c = local_364;
    puVar4 = &local_370;
    uVar2 = local_18 - 5;
    if (SBORROW4(iVar8,6)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00338;
    }
    FUN_0040f7d0(uVar2,1,puVar4);
    local_38 = local_370;
    local_34 = local_36c;
    puVar4 = &local_378;
    local_18 = local_18 - 5;
    if (SBORROW4(iVar8,6)) {
      local_18 = thunk_FUN_00402808(local_18);
      puVar4 = extraout_ECX_x00339;
    }
    FUN_0040f7d0(local_18,0,puVar4);
    local_30 = local_378;
    local_2c = local_374;
    FUN_0040f7d0(0x15,0,&local_380);
    local_28 = local_380;
    local_24 = local_37c;
    FUN_0047d49c(local_8,&point,0x35);
  }
  else if (cVar1 == '\x03') {
    FUN_0040f7d0(5,0,&local_1d8);
    point.x = local_1d8;
    point.y = local_1d4;
    FUN_0040f7d0(5,1,&local_1e0);
    local_1c8 = local_1e0;
    local_1c4 = local_1dc;
    FUN_0040f7d0(3,1,&local_1e8);
    local_1c0 = local_1e8;
    local_1bc = local_1e4;
    FUN_0040f7d0(3,2,&local_1f0);
    local_1b8 = local_1f0;
    local_1b4 = local_1ec;
    FUN_0040f7d0(2,2,&local_1f8);
    local_1b0 = local_1f8;
    local_1ac = local_1f4;
    FUN_0040f7d0(2,3,&local_200);
    local_1a8 = local_200;
    local_1a4 = local_1fc;
    FUN_0040f7d0(1,3,&local_208);
    local_1a0 = local_208;
    local_19c = local_204;
    FUN_0040f7d0(1,5,&local_210);
    local_198 = local_210;
    local_194 = local_20c;
    FUN_0040f7d0(local_10,5,&local_218);
    local_190 = local_218;
    local_18c = local_214;
    puVar4 = &local_220;
    iVar6 = local_14 + -5;
    if (SBORROW4(local_14,5)) {
      thunk_FUN_00402808(local_214);
      puVar4 = extraout_ECX_x00340;
      iVar6 = extraout_EDX_x00285;
    }
    FUN_0040f7d0(local_10,iVar6,puVar4);
    local_188 = local_220;
    local_184 = local_21c;
    puVar4 = &local_228;
    iVar6 = local_14 + -5;
    if (SBORROW4(local_14,5)) {
      thunk_FUN_00402808(local_21c);
      puVar4 = extraout_ECX_x00341;
      iVar6 = extraout_EDX_x00286;
    }
    FUN_0040f7d0(1,iVar6,puVar4);
    local_180 = local_228;
    local_17c = local_224;
    puVar4 = &local_230;
    iVar6 = local_14 + -3;
    if (SBORROW4(local_14,3)) {
      thunk_FUN_00402808(local_224);
      puVar4 = extraout_ECX_x00342;
      iVar6 = extraout_EDX_x00287;
    }
    FUN_0040f7d0(1,iVar6,puVar4);
    local_178 = local_230;
    local_174 = local_22c;
    puVar4 = &local_238;
    iVar6 = local_14 + -3;
    if (SBORROW4(local_14,3)) {
      thunk_FUN_00402808(local_22c);
      puVar4 = extraout_ECX_x00343;
      iVar6 = extraout_EDX_x00288;
    }
    FUN_0040f7d0(2,iVar6,puVar4);
    local_170 = local_238;
    local_16c = local_234;
    puVar4 = &local_240;
    iVar6 = local_14 + -2;
    if (SBORROW4(local_14,2)) {
      thunk_FUN_00402808(local_234);
      puVar4 = extraout_ECX_x00344;
      iVar6 = extraout_EDX_x00289;
    }
    FUN_0040f7d0(2,iVar6,puVar4);
    local_168 = local_240;
    local_164 = local_23c;
    puVar4 = &local_248;
    iVar6 = local_14 + -2;
    if (SBORROW4(local_14,2)) {
      thunk_FUN_00402808(local_23c);
      puVar4 = extraout_ECX_x00345;
      iVar6 = extraout_EDX_x00290;
    }
    FUN_0040f7d0(4,iVar6,puVar4);
    local_160 = local_248;
    local_15c = local_244;
    puVar4 = &local_250;
    iVar6 = local_14 + -1;
    if (SBORROW4(local_14,1)) {
      thunk_FUN_00402808(local_244);
      puVar4 = extraout_ECX_x00346;
      iVar6 = extraout_EDX_x00291;
    }
    FUN_0040f7d0(4,iVar6,puVar4);
    local_158 = local_250;
    local_154 = local_24c;
    puVar4 = &local_258;
    iVar6 = local_14 + -1;
    if (SBORROW4(local_14,1)) {
      thunk_FUN_00402808(local_24c);
      puVar4 = extraout_ECX_x00347;
      iVar6 = extraout_EDX_x00292;
    }
    uVar2 = local_18 - 0x15;
    if (SBORROW4(local_18,0x15)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00348;
      iVar6 = extraout_EDX_x00293;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_150 = local_258;
    local_14c = local_254;
    puVar4 = &local_260;
    iVar6 = local_14 + -2;
    if (SBORROW4(local_14,2)) {
      thunk_FUN_00402808(local_254);
      puVar4 = extraout_ECX_x00349;
      iVar6 = extraout_EDX_x00294;
    }
    uVar2 = local_18 - 0x15;
    if (SBORROW4(local_18,0x15)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00350;
      iVar6 = extraout_EDX_x00295;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_148 = local_260;
    local_144 = local_25c;
    puVar4 = &local_268;
    iVar6 = local_14 + -2;
    if (SBORROW4(local_14,2)) {
      thunk_FUN_00402808(local_25c);
      puVar4 = extraout_ECX_x00351;
      iVar6 = extraout_EDX_x00296;
    }
    uVar2 = local_18 - 0x13;
    if (SBORROW4(local_18,0x13)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00352;
      iVar6 = extraout_EDX_x00297;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_140 = local_268;
    local_13c = local_264;
    puVar4 = &local_270;
    iVar6 = local_14 + -3;
    if (SBORROW4(local_14,3)) {
      thunk_FUN_00402808(local_264);
      puVar4 = extraout_ECX_x00353;
      iVar6 = extraout_EDX_x00298;
    }
    uVar2 = local_18 - 0x13;
    if (SBORROW4(local_18,0x13)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00354;
      iVar6 = extraout_EDX_x00299;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_138 = local_270;
    local_134 = local_26c;
    puVar4 = &local_278;
    iVar6 = local_14 + -3;
    if (SBORROW4(local_14,3)) {
      thunk_FUN_00402808(local_26c);
      puVar4 = extraout_ECX_x00355;
      iVar6 = extraout_EDX_x00300;
    }
    uVar2 = local_18 - 0x12;
    if (SBORROW4(local_18,0x12)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00356;
      iVar6 = extraout_EDX_x00301;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_130 = local_278;
    local_12c = local_274;
    puVar4 = &local_280;
    iVar6 = local_14 + -5;
    if (SBORROW4(local_14,5)) {
      thunk_FUN_00402808(local_274);
      puVar4 = extraout_ECX_x00357;
      iVar6 = extraout_EDX_x00302;
    }
    uVar2 = local_18 - 0x12;
    if (SBORROW4(local_18,0x12)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00358;
      iVar6 = extraout_EDX_x00303;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_128 = local_280;
    local_124 = local_27c;
    puVar4 = &local_288;
    iVar6 = local_14 + -5;
    if (SBORROW4(local_14,5)) {
      thunk_FUN_00402808(local_27c);
      puVar4 = extraout_ECX_x00359;
      iVar6 = extraout_EDX_x00304;
    }
    uVar2 = local_18 - 0x11;
    if (SBORROW4(local_18,0x11)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00360;
      iVar6 = extraout_EDX_x00305;
    }
    FUN_0040f7d0(uVar2,iVar6,puVar4);
    local_120 = local_288;
    local_11c = local_284;
    puVar4 = &local_290;
    uVar2 = local_18 - 0x11;
    if (SBORROW4(local_18,0x11)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00361;
    }
    FUN_0040f7d0(uVar2,0x23,puVar4);
    local_118 = local_290;
    local_114 = local_28c;
    puVar4 = &local_298;
    uVar2 = local_18 - 0x10;
    if (SBORROW4(local_18,0x10)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00362;
    }
    FUN_0040f7d0(uVar2,0x23,puVar4);
    local_110 = local_298;
    local_10c = local_294;
    puVar4 = &local_2a0;
    uVar2 = local_18 - 0x10;
    if (SBORROW4(local_18,0x10)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00363;
    }
    FUN_0040f7d0(uVar2,0x22,puVar4);
    local_108 = local_2a0;
    local_104 = local_29c;
    puVar4 = &local_2a8;
    uVar2 = local_18 - 0xe;
    if (SBORROW4(local_18,0xe)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00364;
    }
    FUN_0040f7d0(uVar2,0x22,puVar4);
    local_100 = local_2a8;
    local_fc = local_2a4;
    puVar4 = &local_2b0;
    uVar2 = local_18 - 0xe;
    if (SBORROW4(local_18,0xe)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00365;
    }
    FUN_0040f7d0(uVar2,0x21,puVar4);
    local_f8 = local_2b0;
    local_f4 = local_2ac;
    puVar4 = &local_2b8;
    uVar2 = local_18 - 0xc;
    if (SBORROW4(local_18,0xc)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00366;
    }
    FUN_0040f7d0(uVar2,0x21,puVar4);
    local_f0 = local_2b8;
    local_ec = local_2b4;
    puVar4 = &local_2c0;
    uVar2 = local_18 - 0xc;
    if (SBORROW4(local_18,0xc)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00367;
    }
    FUN_0040f7d0(uVar2,0x20,puVar4);
    local_e8 = local_2c0;
    local_e4 = local_2bc;
    puVar4 = &local_2c8;
    uVar2 = local_18 - 0xb;
    if (SBORROW4(local_18,0xb)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00368;
    }
    FUN_0040f7d0(uVar2,0x20,puVar4);
    local_e0 = local_2c8;
    local_dc = local_2c4;
    puVar4 = &local_2d0;
    uVar2 = local_18 - 0xb;
    if (SBORROW4(local_18,0xb)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00369;
    }
    FUN_0040f7d0(uVar2,0x1f,puVar4);
    local_d8 = local_2d0;
    local_d4 = local_2cc;
    puVar4 = &local_2d8;
    uVar2 = local_18 - 9;
    if (SBORROW4(local_18,9)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00370;
    }
    FUN_0040f7d0(uVar2,0x1f,puVar4);
    local_d0 = local_2d8;
    local_cc = local_2d4;
    puVar4 = &local_2e0;
    uVar2 = local_18 - 9;
    if (SBORROW4(local_18,9)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00371;
    }
    FUN_0040f7d0(uVar2,0x1e,puVar4);
    local_c8 = local_2e0;
    local_c4 = local_2dc;
    puVar4 = &local_2e8;
    uVar2 = local_18 - 8;
    if (SBORROW4(local_18,8)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00372;
    }
    FUN_0040f7d0(uVar2,0x1e,puVar4);
    local_c0 = local_2e8;
    local_bc = local_2e4;
    puVar4 = &local_2f0;
    uVar2 = local_18 - 8;
    if (SBORROW4(local_18,8)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00373;
    }
    FUN_0040f7d0(uVar2,0x1d,puVar4);
    local_b8 = local_2f0;
    local_b4 = local_2ec;
    puVar4 = &local_2f8;
    uVar2 = local_18 - 6;
    if (SBORROW4(local_18,6)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00374;
    }
    FUN_0040f7d0(uVar2,0x1d,puVar4);
    local_b0 = local_2f8;
    local_ac = local_2f4;
    puVar4 = &local_300;
    uVar2 = local_18 - 6;
    if (SBORROW4(local_18,6)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00375;
    }
    FUN_0040f7d0(uVar2,0x1c,puVar4);
    local_a8 = local_300;
    local_a4 = local_2fc;
    puVar4 = &local_308;
    uVar2 = local_18 - 4;
    if (SBORROW4(local_18,4)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00376;
    }
    FUN_0040f7d0(uVar2,0x1c,puVar4);
    local_a0 = local_308;
    local_9c = local_304;
    puVar4 = &local_310;
    uVar2 = local_18 - 4;
    if (SBORROW4(local_18,4)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00377;
    }
    FUN_0040f7d0(uVar2,0x1b,puVar4);
    local_98 = local_310;
    local_94 = local_30c;
    puVar4 = &local_318;
    uVar2 = local_18 - 3;
    if (SBORROW4(local_18,3)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00378;
    }
    FUN_0040f7d0(uVar2,0x1b,puVar4);
    local_90 = local_318;
    local_8c = local_314;
    puVar4 = &local_320;
    uVar2 = local_18 - 2;
    if (SBORROW4(local_18,2)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00379;
    }
    FUN_0040f7d0(uVar2,0x1a,puVar4);
    local_88 = local_320;
    local_84 = local_31c;
    puVar4 = &local_328;
    uVar2 = local_18 - 1;
    if (SBORROW4(local_18,1)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00380;
    }
    FUN_0040f7d0(uVar2,0x1a,puVar4);
    local_80 = local_328;
    local_7c = local_324;
    puVar4 = &local_330;
    uVar2 = local_18 - 0x11;
    if (SBORROW4(local_18,0x11)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00381;
    }
    FUN_0040f7d0(uVar2,0x1a,puVar4);
    local_78 = local_330;
    local_74 = local_32c;
    puVar4 = &local_338;
    uVar2 = local_18 - 0x11;
    if (SBORROW4(local_18,0x11)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00382;
    }
    FUN_0040f7d0(uVar2,5,puVar4);
    local_70 = local_338;
    local_6c = local_334;
    puVar4 = &local_340;
    uVar2 = local_18 - 0x12;
    if (SBORROW4(local_18,0x12)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00383;
    }
    FUN_0040f7d0(uVar2,5,puVar4);
    local_68 = local_340;
    local_64 = local_33c;
    puVar4 = &local_348;
    uVar2 = local_18 - 0x12;
    if (SBORROW4(local_18,0x12)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00384;
    }
    FUN_0040f7d0(uVar2,3,puVar4);
    local_60 = local_348;
    local_5c = local_344;
    puVar4 = &local_350;
    uVar2 = local_18 - 0x13;
    if (SBORROW4(local_18,0x13)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00385;
    }
    FUN_0040f7d0(uVar2,3,puVar4);
    local_58 = local_350;
    local_54 = local_34c;
    puVar4 = &local_358;
    uVar2 = local_18 - 0x13;
    if (SBORROW4(local_18,0x13)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00386;
    }
    FUN_0040f7d0(uVar2,2,puVar4);
    local_50 = local_358;
    local_4c = local_354;
    puVar4 = &local_360;
    uVar2 = local_18 - 0x14;
    if (SBORROW4(local_18,0x14)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00387;
    }
    FUN_0040f7d0(uVar2,2,puVar4);
    local_48 = local_360;
    local_44 = local_35c;
    puVar4 = &local_368;
    uVar2 = local_18 - 0x14;
    if (SBORROW4(local_18,0x14)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00388;
    }
    FUN_0040f7d0(uVar2,1,puVar4);
    local_40 = local_368;
    local_3c = local_364;
    puVar4 = &local_370;
    uVar2 = local_18 - 0x16;
    if (SBORROW4(local_18,0x16)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00389;
    }
    FUN_0040f7d0(uVar2,1,puVar4);
    local_38 = local_370;
    local_34 = local_36c;
    puVar4 = &local_378;
    uVar2 = local_18 - 0x16;
    if (SBORROW4(local_18,0x16)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00390;
    }
    FUN_0040f7d0(uVar2,0,puVar4);
    local_30 = local_378;
    local_2c = local_374;
    FUN_0040f7d0(5,0,&local_380);
    local_28 = local_380;
    local_24 = local_37c;
    uVar2 = FUN_00419180(local_c,&point,0x35);
    iVar6 = local_14 + 1;
    if (SCARRY4(local_14,1)) {
      uVar2 = thunk_FUN_00402808(uVar2);
    }
    iVar8 = local_18 + 1;
    if (SCARRY4(local_18,1)) {
      thunk_FUN_00402808(uVar2);
    }
    FUN_0040f7d0(5,0,&local_1d8);
    point.x = local_1d8;
    point.y = local_1d4;
    FUN_0040f7d0(5,1,&local_1e0);
    local_1c8 = local_1e0;
    local_1c4 = local_1dc;
    FUN_0040f7d0(3,1,&local_1e8);
    local_1c0 = local_1e8;
    local_1bc = local_1e4;
    FUN_0040f7d0(3,2,&local_1f0);
    local_1b8 = local_1f0;
    local_1b4 = local_1ec;
    FUN_0040f7d0(2,2,&local_1f8);
    local_1b0 = local_1f8;
    local_1ac = local_1f4;
    FUN_0040f7d0(2,3,&local_200);
    local_1a8 = local_200;
    local_1a4 = local_1fc;
    FUN_0040f7d0(1,3,&local_208);
    local_1a0 = local_208;
    local_19c = local_204;
    FUN_0040f7d0(1,5,&local_210);
    local_198 = local_210;
    local_194 = local_20c;
    FUN_0040f7d0(local_10,5,&local_218);
    local_190 = local_218;
    local_18c = local_214;
    puVar4 = &local_220;
    iVar7 = local_14 + -4;
    if (SBORROW4(iVar6,5)) {
      thunk_FUN_00402808(local_214);
      puVar4 = extraout_ECX_x00391;
      iVar7 = extraout_EDX_x00306;
    }
    FUN_0040f7d0(local_10,iVar7,puVar4);
    local_188 = local_220;
    local_184 = local_21c;
    puVar4 = &local_228;
    iVar7 = local_14 + -4;
    if (SBORROW4(iVar6,5)) {
      thunk_FUN_00402808(local_21c);
      puVar4 = extraout_ECX_x00392;
      iVar7 = extraout_EDX_x00307;
    }
    FUN_0040f7d0(1,iVar7,puVar4);
    local_180 = local_228;
    local_17c = local_224;
    puVar4 = &local_230;
    iVar7 = local_14 + -2;
    if (SBORROW4(iVar6,3)) {
      thunk_FUN_00402808(local_224);
      puVar4 = extraout_ECX_x00393;
      iVar7 = extraout_EDX_x00308;
    }
    FUN_0040f7d0(1,iVar7,puVar4);
    local_178 = local_230;
    local_174 = local_22c;
    puVar4 = &local_238;
    iVar7 = local_14 + -2;
    if (SBORROW4(iVar6,3)) {
      thunk_FUN_00402808(local_22c);
      puVar4 = extraout_ECX_x00394;
      iVar7 = extraout_EDX_x00309;
    }
    FUN_0040f7d0(2,iVar7,puVar4);
    local_170 = local_238;
    local_16c = local_234;
    puVar4 = &local_240;
    iVar7 = local_14 + -1;
    if (SBORROW4(iVar6,2)) {
      thunk_FUN_00402808(local_234);
      puVar4 = extraout_ECX_x00395;
      iVar7 = extraout_EDX_x00310;
    }
    FUN_0040f7d0(2,iVar7,puVar4);
    local_168 = local_240;
    local_164 = local_23c;
    puVar4 = &local_248;
    iVar7 = local_14 + -1;
    if (SBORROW4(iVar6,2)) {
      thunk_FUN_00402808(local_23c);
      puVar4 = extraout_ECX_x00396;
      iVar7 = extraout_EDX_x00311;
    }
    FUN_0040f7d0(4,iVar7,puVar4);
    local_160 = local_248;
    local_15c = local_244;
    puVar4 = &local_250;
    iVar7 = local_14;
    if (SBORROW4(iVar6,1)) {
      thunk_FUN_00402808(local_244);
      puVar4 = extraout_ECX_x00397;
      iVar7 = extraout_EDX_x00312;
    }
    FUN_0040f7d0(4,iVar7,puVar4);
    local_158 = local_250;
    local_154 = local_24c;
    puVar4 = &local_258;
    iVar7 = local_14;
    if (SBORROW4(iVar6,1)) {
      thunk_FUN_00402808(local_24c);
      puVar4 = extraout_ECX_x00398;
      iVar7 = extraout_EDX_x00313;
    }
    uVar2 = local_18 - 0x14;
    if (SBORROW4(iVar8,0x15)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00399;
      iVar7 = extraout_EDX_x00314;
    }
    FUN_0040f7d0(uVar2,iVar7,puVar4);
    local_150 = local_258;
    local_14c = local_254;
    puVar4 = &local_260;
    iVar7 = local_14 + -1;
    if (SBORROW4(iVar6,2)) {
      thunk_FUN_00402808(local_254);
      puVar4 = extraout_ECX_x00400;
      iVar7 = extraout_EDX_x00315;
    }
    uVar2 = local_18 - 0x14;
    if (SBORROW4(iVar8,0x15)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00401;
      iVar7 = extraout_EDX_x00316;
    }
    FUN_0040f7d0(uVar2,iVar7,puVar4);
    local_148 = local_260;
    local_144 = local_25c;
    puVar4 = &local_268;
    iVar7 = local_14 + -1;
    if (SBORROW4(iVar6,2)) {
      thunk_FUN_00402808(local_25c);
      puVar4 = extraout_ECX_x00402;
      iVar7 = extraout_EDX_x00317;
    }
    uVar2 = local_18 - 0x12;
    if (SBORROW4(iVar8,0x13)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00403;
      iVar7 = extraout_EDX_x00318;
    }
    FUN_0040f7d0(uVar2,iVar7,puVar4);
    local_140 = local_268;
    local_13c = local_264;
    puVar4 = &local_270;
    iVar7 = local_14 + -2;
    if (SBORROW4(iVar6,3)) {
      thunk_FUN_00402808(local_264);
      puVar4 = extraout_ECX_x00404;
      iVar7 = extraout_EDX_x00319;
    }
    uVar2 = local_18 - 0x12;
    if (SBORROW4(iVar8,0x13)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00405;
      iVar7 = extraout_EDX_x00320;
    }
    FUN_0040f7d0(uVar2,iVar7,puVar4);
    local_138 = local_270;
    local_134 = local_26c;
    puVar4 = &local_278;
    iVar7 = local_14 + -2;
    if (SBORROW4(iVar6,3)) {
      thunk_FUN_00402808(local_26c);
      puVar4 = extraout_ECX_x00406;
      iVar7 = extraout_EDX_x00321;
    }
    uVar2 = local_18 - 0x11;
    if (SBORROW4(iVar8,0x12)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00407;
      iVar7 = extraout_EDX_x00322;
    }
    FUN_0040f7d0(uVar2,iVar7,puVar4);
    local_130 = local_278;
    local_12c = local_274;
    puVar4 = &local_280;
    iVar7 = local_14 + -4;
    if (SBORROW4(iVar6,5)) {
      thunk_FUN_00402808(local_274);
      puVar4 = extraout_ECX_x00408;
      iVar7 = extraout_EDX_x00323;
    }
    uVar2 = local_18 - 0x11;
    if (SBORROW4(iVar8,0x12)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00409;
      iVar7 = extraout_EDX_x00324;
    }
    FUN_0040f7d0(uVar2,iVar7,puVar4);
    local_128 = local_280;
    local_124 = local_27c;
    puVar4 = &local_288;
    local_14 = local_14 + -4;
    if (SBORROW4(iVar6,5)) {
      thunk_FUN_00402808(local_27c);
      puVar4 = extraout_ECX_x00410;
      local_14 = extraout_EDX_x00325;
    }
    uVar2 = local_18 - 0x10;
    if (SBORROW4(iVar8,0x11)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00411;
      local_14 = extraout_EDX_x00326;
    }
    FUN_0040f7d0(uVar2,local_14,puVar4);
    local_120 = local_288;
    local_11c = local_284;
    puVar4 = &local_290;
    uVar2 = local_18 - 0x10;
    if (SBORROW4(iVar8,0x11)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00412;
    }
    FUN_0040f7d0(uVar2,0x23,puVar4);
    local_118 = local_290;
    local_114 = local_28c;
    puVar4 = &local_298;
    uVar2 = local_18 - 0xf;
    if (SBORROW4(iVar8,0x10)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00413;
    }
    FUN_0040f7d0(uVar2,0x23,puVar4);
    local_110 = local_298;
    local_10c = local_294;
    puVar4 = &local_2a0;
    uVar2 = local_18 - 0xf;
    if (SBORROW4(iVar8,0x10)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00414;
    }
    FUN_0040f7d0(uVar2,0x22,puVar4);
    local_108 = local_2a0;
    local_104 = local_29c;
    puVar4 = &local_2a8;
    uVar2 = local_18 - 0xd;
    if (SBORROW4(iVar8,0xe)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00415;
    }
    FUN_0040f7d0(uVar2,0x22,puVar4);
    local_100 = local_2a8;
    local_fc = local_2a4;
    puVar4 = &local_2b0;
    uVar2 = local_18 - 0xd;
    if (SBORROW4(iVar8,0xe)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00416;
    }
    FUN_0040f7d0(uVar2,0x21,puVar4);
    local_f8 = local_2b0;
    local_f4 = local_2ac;
    puVar4 = &local_2b8;
    uVar2 = local_18 - 0xb;
    if (SBORROW4(iVar8,0xc)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00417;
    }
    FUN_0040f7d0(uVar2,0x21,puVar4);
    local_f0 = local_2b8;
    local_ec = local_2b4;
    puVar4 = &local_2c0;
    uVar2 = local_18 - 0xb;
    if (SBORROW4(iVar8,0xc)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00418;
    }
    FUN_0040f7d0(uVar2,0x20,puVar4);
    local_e8 = local_2c0;
    local_e4 = local_2bc;
    puVar4 = &local_2c8;
    uVar2 = local_18 - 10;
    if (SBORROW4(iVar8,0xb)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00419;
    }
    FUN_0040f7d0(uVar2,0x20,puVar4);
    local_e0 = local_2c8;
    local_dc = local_2c4;
    puVar4 = &local_2d0;
    uVar2 = local_18 - 10;
    if (SBORROW4(iVar8,0xb)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00420;
    }
    FUN_0040f7d0(uVar2,0x1f,puVar4);
    local_d8 = local_2d0;
    local_d4 = local_2cc;
    puVar4 = &local_2d8;
    uVar2 = local_18 - 8;
    if (SBORROW4(iVar8,9)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00421;
    }
    FUN_0040f7d0(uVar2,0x1f,puVar4);
    local_d0 = local_2d8;
    local_cc = local_2d4;
    puVar4 = &local_2e0;
    uVar2 = local_18 - 8;
    if (SBORROW4(iVar8,9)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00422;
    }
    FUN_0040f7d0(uVar2,0x1e,puVar4);
    local_c8 = local_2e0;
    local_c4 = local_2dc;
    puVar4 = &local_2e8;
    uVar2 = local_18 - 7;
    if (SBORROW4(iVar8,8)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00423;
    }
    FUN_0040f7d0(uVar2,0x1e,puVar4);
    local_c0 = local_2e8;
    local_bc = local_2e4;
    puVar4 = &local_2f0;
    uVar2 = local_18 - 7;
    if (SBORROW4(iVar8,8)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00424;
    }
    FUN_0040f7d0(uVar2,0x1d,puVar4);
    local_b8 = local_2f0;
    local_b4 = local_2ec;
    puVar4 = &local_2f8;
    uVar2 = local_18 - 5;
    if (SBORROW4(iVar8,6)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00425;
    }
    FUN_0040f7d0(uVar2,0x1d,puVar4);
    local_b0 = local_2f8;
    local_ac = local_2f4;
    puVar4 = &local_300;
    uVar2 = local_18 - 5;
    if (SBORROW4(iVar8,6)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00426;
    }
    FUN_0040f7d0(uVar2,0x1c,puVar4);
    local_a8 = local_300;
    local_a4 = local_2fc;
    puVar4 = &local_308;
    uVar2 = local_18 - 3;
    if (SBORROW4(iVar8,4)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00427;
    }
    FUN_0040f7d0(uVar2,0x1c,puVar4);
    local_a0 = local_308;
    local_9c = local_304;
    puVar4 = &local_310;
    uVar2 = local_18 - 3;
    if (SBORROW4(iVar8,4)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00428;
    }
    FUN_0040f7d0(uVar2,0x1b,puVar4);
    local_98 = local_310;
    local_94 = local_30c;
    puVar4 = &local_318;
    uVar2 = local_18 - 2;
    if (SBORROW4(iVar8,3)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00429;
    }
    FUN_0040f7d0(uVar2,0x1b,puVar4);
    local_90 = local_318;
    local_8c = local_314;
    puVar4 = &local_320;
    uVar2 = local_18 - 1;
    if (SBORROW4(iVar8,2)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00430;
    }
    FUN_0040f7d0(uVar2,0x1a,puVar4);
    local_88 = local_320;
    local_84 = local_31c;
    puVar4 = &local_328;
    uVar2 = local_18;
    if (SBORROW4(iVar8,1)) {
      uVar2 = thunk_FUN_00402808(local_18);
      puVar4 = extraout_ECX_x00431;
    }
    FUN_0040f7d0(uVar2,0x1a,puVar4);
    local_80 = local_328;
    local_7c = local_324;
    puVar4 = &local_330;
    uVar2 = local_18 - 0x10;
    if (SBORROW4(iVar8,0x11)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00432;
    }
    FUN_0040f7d0(uVar2,0x1a,puVar4);
    local_78 = local_330;
    local_74 = local_32c;
    puVar4 = &local_338;
    uVar2 = local_18 - 0x10;
    if (SBORROW4(iVar8,0x11)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00433;
    }
    FUN_0040f7d0(uVar2,5,puVar4);
    local_70 = local_338;
    local_6c = local_334;
    puVar4 = &local_340;
    uVar2 = local_18 - 0x11;
    if (SBORROW4(iVar8,0x12)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00434;
    }
    FUN_0040f7d0(uVar2,5,puVar4);
    local_68 = local_340;
    local_64 = local_33c;
    puVar4 = &local_348;
    uVar2 = local_18 - 0x11;
    if (SBORROW4(iVar8,0x12)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00435;
    }
    FUN_0040f7d0(uVar2,3,puVar4);
    local_60 = local_348;
    local_5c = local_344;
    puVar4 = &local_350;
    uVar2 = local_18 - 0x12;
    if (SBORROW4(iVar8,0x13)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00436;
    }
    FUN_0040f7d0(uVar2,3,puVar4);
    local_58 = local_350;
    local_54 = local_34c;
    puVar4 = &local_358;
    uVar2 = local_18 - 0x12;
    if (SBORROW4(iVar8,0x13)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00437;
    }
    FUN_0040f7d0(uVar2,2,puVar4);
    local_50 = local_358;
    local_4c = local_354;
    puVar4 = &local_360;
    uVar2 = local_18 - 0x13;
    if (SBORROW4(iVar8,0x14)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00438;
    }
    FUN_0040f7d0(uVar2,2,puVar4);
    local_48 = local_360;
    local_44 = local_35c;
    puVar4 = &local_368;
    uVar2 = local_18 - 0x13;
    if (SBORROW4(iVar8,0x14)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00439;
    }
    FUN_0040f7d0(uVar2,1,puVar4);
    local_40 = local_368;
    local_3c = local_364;
    puVar4 = &local_370;
    uVar2 = local_18 - 0x15;
    if (SBORROW4(iVar8,0x16)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      puVar4 = extraout_ECX_x00440;
    }
    FUN_0040f7d0(uVar2,1,puVar4);
    local_38 = local_370;
    local_34 = local_36c;
    puVar4 = &local_378;
    local_18 = local_18 - 0x15;
    if (SBORROW4(iVar8,0x16)) {
      local_18 = thunk_FUN_00402808(local_18);
      puVar4 = extraout_ECX_x00441;
    }
    FUN_0040f7d0(local_18,0,puVar4);
    local_30 = local_378;
    local_2c = local_374;
    FUN_0040f7d0(5,0,&local_380);
    local_28 = local_380;
    local_24 = local_37c;
    FUN_0047d49c(local_8,&point,0x35);
  }
  return;
}


/* ==== 0047d480 TBalloonForm.GetBalloonCaption ==== */

void TBalloonForm_GetBalloonCaption(int param_1,int *param_2)

{
  TGroupBox_GetCaption(*(int *)(param_1 + 0x2d4),param_2);
  return;
}


/* ==== 0047d49c FUN_0047d49c ==== */

void FUN_0047d49c(int *param_1,POINT *pptl_val,int param_3)

{
  HRGN hRgn;
  HWND hWnd;
  int iMode;
  BOOL bRedraw;
  
  bRedraw = -1;
  iMode = 2;
  if (SCARRY4(param_3,1)) {
    thunk_FUN_00402808((uint)param_1);
  }
  hRgn = CreatePolygonRgn(pptl_val,param_3 + 1,iMode);
  hWnd = (HWND)FUN_004349e0(param_1);
  SetWindowRgn(hWnd,hRgn,bRedraw);
  return;
}


/* ==== 0047d4d0 FUN_0047d4d0 ==== */

void FUN_0047d4d0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if (*(char *)((int)param_1 + 0x2d9) == '\0') {
    TForm_SetPosition((int)param_1,'\x04');
  }
  else {
    iVar1 = param_1[0xb9];
    uVar2 = iVar1 + 0x1e;
    if (SCARRY4(iVar1,0x1e)) {
      uVar2 = thunk_FUN_00402808(uVar2);
    }
    if (SCARRY4(iVar1,0x24)) {
      uVar2 = thunk_FUN_00402808(uVar2);
    }
    if (SBORROW4(param_3,iVar1 + 0x24)) {
      thunk_FUN_00402808(uVar2);
    }
    (**(code **)(*param_1 + 0x7c))();
    piVar3 = (int *)FUN_00447524((int)param_1);
    FUN_00477d64(param_1,piVar3);
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


/* ==== 0047d544 FUN_0047d544 ==== */

void FUN_0047d544(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  int i_val;
  
  uVar1 = FUN_004317bc(param_1);
  i_val = uVar1 - 1;
  if (SBORROW4(uVar1,1)) {
    thunk_FUN_00402808(uVar1);
  }
  if (-1 < i_val) {
    do {
      piVar2 = (int *)FUN_00431780(param_1,i_val);
      uVar3 = FUN_00403114(piVar2,(int)&PTR_TControl_virtual_000_00476b74);
      if ((char)uVar3 != '\0') {
        piVar2 = (int *)FUN_00431780(param_1,i_val);
        FUN_00402f9c(piVar2);
      }
      i_val = i_val + -1;
    } while (i_val != -1);
  }
  *(undefined4 *)(param_1 + 0x2e4) = 0x2a;
  return;
}


/* ==== 0047d5a0 FUN_0047d5a0 ==== */

void FUN_0047d5a0(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 extraout_EDX_01;
  int i_val;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  uint *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (uint *)0x0;
  puStack_18 = &LAB_0047d6ec;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  TForm_SetBorderStyle((int)param_1,'\0');
  TForm_SetBorderWidth((int)param_1,0);
  TForm_SetBorderIcons((int)param_1,'\0');
  uVar1 = FUN_004317bc((int)param_1);
  i_val = uVar1 - 1;
  if (SBORROW4(uVar1,1)) {
    thunk_FUN_00402808(uVar1);
  }
  if (-1 < i_val) {
    do {
      iVar2 = FUN_00431780((int)param_1,i_val);
      if (iVar2 != param_1[0xb5]) {
        iVar2 = FUN_00431780((int)param_1,i_val);
        if (iVar2 != param_1[0xb4]) {
          iVar2 = FUN_00431780((int)param_1,i_val);
          if (*(char *)(iVar2 + 0x47) != '\0') {
            piVar3 = (int *)FUN_00431780((int)param_1,i_val);
            FUN_00402f9c(piVar3);
          }
        }
      }
      i_val = i_val + -1;
    } while (i_val != -1);
  }
  TForm_SetClientWidth(param_1,0x1b8);
  iVar2 = TForm_GetClientWidth(param_1);
  uVar1 = param_1[0xb4];
  i_val = iVar2 - *(int *)(uVar1 + 0x38);
  if (SBORROW4(iVar2,*(int *)(uVar1 + 0x38))) {
    uVar1 = thunk_FUN_00402808(uVar1);
    i_val = extraout_EDX;
  }
  iVar2 = i_val + -6;
  if (SBORROW4(i_val,6)) {
    thunk_FUN_00402808(uVar1);
    iVar2 = extraout_EDX_00;
  }
  TControl_SetLeft((int *)param_1[0xb4],iVar2);
  TControl_SetTop((int *)param_1[0xb4],6);
  TControl_SetLeft((int *)param_1[0xb5],6);
  TControl_SetTop((int *)param_1[0xb5],6);
  if (*(char *)((int)param_1 + 0x2d9) == '\0') {
    TGroupBox_SetVisible
              ((int *)param_1[0xb5],CONCAT31((int3)((uint)extraout_EDX_01 >> 8),1),extraout_ECX);
  }
  else {
    TGroupBox_SetVisible((int *)param_1[0xb5],0,extraout_ECX);
  }
  TBalloonForm_GetBalloonCaption((int)param_1,(int *)&local_8);
  TBalloonForm_SetBalloonCaption(param_1,local_8);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0047d6f3;
  puStack_18 = (undefined1 *)0x47d6eb;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 0047d6fc TBalloonForm.SetBalloonCaption ==== */

void TBalloonForm_SetBalloonCaption(int *param_1,uint *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int iVar4;
  int extraout_EDX_00;
  int i_val;
  int extraout_EDX_01;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  uint *local_8;
  
  puStack_18 = (undefined1 *)0x47d710;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  puStack_1c = &LAB_0047d829;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  i_val = *(int *)(param_1[0xb5] + 0x3c);
  puStack_18 = &stack0xfffffffc;
  TGroupBox_SetCaption(param_1[0xb5],local_8);
  TLabel_SetWordWrap((int *)param_1[0xb5],CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX);
  (**(code **)(*(int *)param_1[0xb5] + 0x8c))((int *)param_1[0xb5],0);
  piVar1 = (int *)param_1[0xb5];
  iVar4 = *(int *)(param_1[0xb4] + 0x30) - piVar1[0xc];
  if (SBORROW4(*(int *)(param_1[0xb4] + 0x30),piVar1[0xc])) {
    piVar1 = (int *)thunk_FUN_00402808((uint)piVar1);
    iVar4 = extraout_EDX_00;
  }
  TControl_SetWidth(piVar1,iVar4);
  uVar2 = *(int *)(param_1[0xb5] + 0x3c) - i_val;
  if (SBORROW4(*(int *)(param_1[0xb5] + 0x3c),i_val)) {
    uVar2 = thunk_FUN_00402808(uVar2);
  }
  if (uVar2 != 0) {
    uVar3 = TForm_GetClientHeight(param_1);
    i_val = uVar3 + uVar2;
    if (SCARRY4(uVar3,uVar2)) {
      thunk_FUN_00402808(uVar3);
      i_val = extraout_EDX_01;
    }
    TForm_SetClientHeight(param_1,i_val);
    uVar3 = FUN_004317bc((int)param_1);
    i_val = uVar3 - 1;
    if (SBORROW4(uVar3,1)) {
      thunk_FUN_00402808(uVar3);
    }
    if (-1 < i_val) {
      do {
        iVar4 = FUN_00431780((int)param_1,i_val);
        if (iVar4 != param_1[0xb5]) {
          iVar4 = FUN_00431780((int)param_1,i_val);
          if (iVar4 != param_1[0xb4]) {
            iVar4 = FUN_00431780((int)param_1,i_val);
            if (*(char *)(iVar4 + 0x47) != '\0') {
              iVar4 = FUN_00431780((int)param_1,i_val);
              uVar3 = *(int *)(iVar4 + 0x34) + uVar2;
              if (SCARRY4(*(int *)(iVar4 + 0x34),uVar2)) {
                uVar3 = thunk_FUN_00402808(uVar3);
              }
              piVar1 = (int *)FUN_00431780((int)param_1,i_val);
              TControl_SetTop(piVar1,uVar3);
            }
          }
        }
        i_val = i_val + -1;
      } while (i_val != -1);
    }
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0047d830;
  puStack_1c = (undefined1 *)0x47d828;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 0047d838 TBalloonForm.SetBalloonPosition ==== */

void TBalloonForm_SetBalloonPosition(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0xb6]) {
    *(char *)(param_1 + 0xb6) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


/* ==== 0047d850 TBalloonForm.SetBalloonStyle ==== */

void TBalloonForm_SetBalloonStyle(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x2d9)) {
    *(char *)((int)param_1 + 0x2d9) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


/* ==== 0047d868 TBalloonForm.SetFrameColor ==== */

void TBalloonForm_SetFrameColor(int *param_1,int param_2)

{
  if (param_2 != param_1[0xb7]) {
    param_1[0xb7] = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


/* ==== 0047d880 TBalloonForm.SetHideOnClick ==== */

void TBalloonForm_SetHideOnClick(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0xb8]) {
    *(char *)(param_1 + 0xb8) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


/* ==== 0047d898 TBalloonForm.FormClose ==== */

void TBalloonForm_FormClose(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  *param_3 = 1;
  return;
}


/* ==== 0047d89c TBalloonForm.FormDeactivate ==== */

void TBalloonForm_FormDeactivate(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((char)param_1[0xb8] != '\0') {
    FUN_00449c70(param_1,param_2,param_3);
  }
  return;
}


/* ==== 0047d8b0 TBalloonForm.FormPaint ==== */

void TBalloonForm_FormPaint(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint x_val;
  RECT local_14;
  
  if (*(char *)((int)param_1 + 0x2d9) == '\0') {
    piVar2 = (int *)FUN_00447524((int)param_1);
    FUN_00419154(piVar2,0,0);
    iVar1 = TForm_GetClientWidth(param_1);
    uVar3 = iVar1 - 1;
    if (SBORROW4(iVar1,1)) {
      uVar3 = thunk_FUN_00402808(uVar3);
    }
    piVar2 = (int *)FUN_00447524((int)param_1);
    FUN_004190f4(piVar2,uVar3,0);
    iVar1 = TForm_GetClientHeight(param_1);
    uVar3 = iVar1 - 1;
    if (SBORROW4(iVar1,1)) {
      uVar3 = thunk_FUN_00402808(uVar3);
    }
    iVar1 = TForm_GetClientWidth(param_1);
    x_val = iVar1 - 1;
    if (SBORROW4(iVar1,1)) {
      x_val = thunk_FUN_00402808(x_val);
    }
    piVar2 = (int *)FUN_00447524((int)param_1);
    FUN_004190f4(piVar2,x_val,uVar3);
    iVar1 = TForm_GetClientHeight(param_1);
    uVar3 = iVar1 - 1;
    if (SBORROW4(iVar1,1)) {
      uVar3 = thunk_FUN_00402808(uVar3);
    }
    piVar2 = (int *)FUN_00447524((int)param_1);
    FUN_004190f4(piVar2,0,uVar3);
    piVar2 = (int *)FUN_00447524((int)param_1);
    FUN_004190f4(piVar2,0,0);
  }
  else {
    iVar1 = FUN_00447524((int)param_1);
    TBrush_SetColor(*(int **)(iVar1 + 0x14),param_1[0x18]);
    iVar1 = FUN_00447524((int)param_1);
    TBrush_SetStyle(*(int **)(iVar1 + 0x14),'\0');
    (**(code **)(*param_1 + 0x40))(param_1,&local_14);
    piVar2 = (int *)FUN_00447524((int)param_1);
    FUN_0041907c(piVar2,&local_14);
    piVar2 = (int *)FUN_00447524((int)param_1);
    FUN_00477d64(param_1,piVar2);
  }
  return;
}


/* ==== 0047d9b0 TBalloonForm.btnCloseClick ==== */

void TBalloonForm_btnCloseClick(int *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00449c70(param_1,param_2,param_3);
  if (*(short *)((int)param_1 + 0x2ea) != 0) {
    (*(code *)param_1[0xba])(param_1[0xbb],param_1);
  }
  return;
}


/* ==== 0047d9d8 TBalloonForm.WMEnable ==== */

void TBalloonForm_WMEnable(int *param_1,int param_2)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  if (*(int *)(param_2 + 4) == 0) {
    lParam = 0;
    wParam = 0;
    Msg = 0x6643;
    hWnd = (HWND)FUN_004349e0(param_1);
    PostMessageA(hWnd,Msg,wParam,lParam);
  }
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  return;
}


/* ==== 0047da0c TBalloonForm.WMReable ==== */

void TBalloonForm_WMReable(int *param_1)

{
  HWND hWnd;
  BOOL bEnable;
  
  bEnable = -1;
  hWnd = (HWND)FUN_004349e0(param_1);
  EnableWindow(hWnd,bEnable);
  return;
}


/* ==== 0047da24 FUN_0047da24 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047da24(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad2b0 = _DAT_004ad2b0 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


/* ==== 0047dac8 FUN_0047dac8 ==== */

void FUN_0047dac8(int *param_1,char param_2,undefined4 param_3,LPCSTR multi_byte_str,
                 LPCSTR multi_byte_str_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined1 extraout_DL;
  undefined1 uVar5;
  undefined4 unaff_EBX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  int *local_34;
  undefined4 in_stack_ffffffd0;
  undefined4 in_stack_ffffffd4;
  char *local_14;
  undefined1 local_10;
  int local_c;
  undefined4 local_8;
  
  local_14 = (char *)0x5;
  do {
    local_c = 0;
    local_14 = local_14 + -1;
  } while (local_14 != (char *)0x0);
  LOCK();
  piVar3 = (int *)0x0;
  UNLOCK();
  uVar5 = 0;
  local_8 = local_14;
  if (param_2 != '\0') {
    local_34 = (int *)0x47daeb;
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,0,in_stack_ffffffd0,in_stack_ffffffd4);
    piVar3 = extraout_ECX;
    uVar5 = extraout_DL;
  }
  local_8 = (char *)CONCAT13(uVar5,(undefined3)local_8);
  local_34 = (int *)0x47dafa;
  FUN_00404090((int)multi_byte_str_2);
  local_34 = (int *)0x47db02;
  FUN_00404090((int)multi_byte_str);
  puStack_38 = &LAB_0047dcdd;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_34 = (int *)&stack0xfffffffc;
  FUN_00402f6c(param_1,'\0',extraout_ECX_00);
  if (multi_byte_str_2 == (LPCSTR)0x0) {
    local_14 = "aCharacterName";
    local_10 = 0xb;
    FUN_00409254((byte *)" Parameter \'%s\' cannot be empty",&local_14,0,&local_c);
    FUN_00403c40(local_c);
  }
  if (multi_byte_str == (LPCSTR)0x0) {
    local_14 = "aCharacterFileName";
    local_10 = 0xb;
    FUN_00409254((byte *)" Parameter \'%s\' cannot be empty",&local_14,0,(int *)&stack0xffffffe8);
    FUN_00403c40(unaff_EBX);
  }
  FUN_00403cb0(param_1 + 3,(undefined4 *)multi_byte_str_2);
  param_1[4] = 200;
  param_1[5] = 0xaa;
  piVar1 = TOleControl_virtual_02c((int *)&PTR_TWinControl_virtual_000_004722b8,'\x01',piVar3);
  param_1[1] = (int)piVar1;
  uVar2 = FUN_0040312c(piVar3,(int)&PTR_TWinControl_virtual_000_0042ac0c);
  (**(code **)(*piVar1 + 0x60))(piVar1,uVar2);
  piVar3 = TBalloonForm_virtual_02c((int *)&PTR_TWinControl_virtual_000_004776e8,'\x01',param_1[1]);
  param_1[2] = (int)piVar3;
  TBalloonForm_SetBalloonStyle(piVar3,'\x01');
  FUN_00477c98((int *)param_1[2],(uint *)0x0);
  FUN_0047d4d0((int *)param_1[2],200,0xaa);
  iVar4 = param_1[1];
  *(int **)(iVar4 + 0x294) = param_1;
  *(code **)(iVar4 + 0x290) = FUN_0047df80;
  *(int **)(iVar4 + 0x2dc) = param_1;
  *(code **)(iVar4 + 0x2d8) = FUN_0047df90;
  iVar4 = param_1[2];
  *(int **)(iVar4 + 0x2ec) = param_1;
  *(undefined **)(iVar4 + 0x2e8) = &DAT_0047de80;
  iVar4 = param_1[1];
  *(int **)(iVar4 + 0x284) = param_1;
  *(code **)(iVar4 + 0x280) = FUN_0047df98;
  FUN_00405860((int *)&stack0xffffffe4);
  FUN_00404f74((VARIANTARG *)&stack0xffffffd4,multi_byte_str);
  FUN_004043f8((BSTR)&stack0xffffffd0,multi_byte_str_2);
  FUN_00472904(iVar4,(int *)&local_34);
  piVar3 = local_34;
  iVar4 = (**(code **)(*local_34 + 0x2c))();
  FUN_0040595c(iVar4);
  *in_FS_OFFSET = piVar3;
  FUN_00405860((int *)&local_34);
  FUN_004042b4((undefined4 *)&stack0xffffffd0);
  FUN_00405038((VARIANTARG *)&stack0xffffffd4);
  FUN_00405860((int *)&stack0xffffffe4);
  FUN_00403c5c((int *)&stack0xffffffe8);
  FUN_00403c5c(&local_c);
  FUN_00403c80((int *)&multi_byte_str,2);
  return;
}


/* ==== 0047dd8c TDaviAgent.Destroy ==== */

void TDaviAgent_Destroy(int *param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  byte extraout_DL;
  
  piVar2 = FUN_004032fc(param_1,param_2);
  iVar1 = piVar2[2];
  *(undefined4 *)(iVar1 + 0x2e8) = 0;
  *(undefined4 *)(iVar1 + 0x2ec) = 0;
  FUN_0040c968(piVar2 + 2);
  iVar1 = piVar2[1];
  *(undefined4 *)(iVar1 + 0x2d8) = 0;
  *(undefined4 *)(iVar1 + 0x2dc) = 0;
  *(undefined4 *)(iVar1 + 0x290) = 0;
  *(undefined4 *)(iVar1 + 0x294) = 0;
  FUN_0040c968(piVar2 + 1);
  TObject_Destroy(piVar2,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar2);
  }
  return;
}


/* ==== 0047ddf8 FUN_0047ddf8 ==== */

void FUN_0047ddf8(int param_1,uint *param_2,int param_3,undefined1 *param_4,int param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  uint *local_8;
  
  puStack_14 = (undefined1 *)0x47de0d;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  puStack_18 = &LAB_0047de60;
  puStack_1c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_1c;
  if (param_4._2_2_ == 0) {
    param_4 = &LAB_0047df44;
    puStack_14 = &stack0xfffffffc;
    FUN_00477ab0(*(int **)(param_1 + 8),local_8,param_3,0x47df44,param_1);
  }
  else {
    puStack_14 = &stack0xfffffffc;
    FUN_00477ab0(*(int **)(param_1 + 8),local_8,param_3,(int)param_4,param_5);
  }
  *in_FS_OFFSET = param_4;
  puStack_1c = &LAB_0047de67;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 0047de70 FUN_0047de70 ==== */

void FUN_0047de70(int param_1)

{
  FUN_0047d544(*(int *)(param_1 + 8));
  return;
}


/* ==== 0047df80 FUN_0047df80 ==== */

void FUN_0047df80(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00449c70(*(int **)(param_1 + 8),param_2,param_3);
  return;
}


/* ==== 0047df90 FUN_0047df90 ==== */

void FUN_0047df90(void)

{
  return;
}


/* ==== 0047df98 FUN_0047df98 ==== */

void FUN_0047df98(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int *local_1c;
  OLECHAR local_18 [2];
  int *local_14;
  int *local_10;
  OLECHAR local_c [2];
  int *local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  local_c[0] = L'\0';
  local_c[1] = L'\0';
  local_10 = (int *)0x0;
  local_14 = (int *)0x0;
  local_18[0] = L'\0';
  local_18[1] = L'\0';
  local_1c = (int *)0x0;
  puStack_28 = &LAB_0047e0a8;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  uVar3 = *(int *)(param_1 + 0x10) + 0x8000;
  puVar2 = &stack0xfffffffc;
  if (0xffff < uVar3) {
    thunk_FUN_00402808(uVar3);
    puVar2 = puStack_24;
  }
  puStack_24 = puVar2;
  FUN_00405860((int *)&local_8);
  FUN_004043f8(local_c,*(LPCSTR *)(param_1 + 0xc));
  FUN_00472904(*(int *)(param_1 + 4),(int *)&local_10);
  iVar4 = (**(code **)(*local_10 + 0x1c))();
  FUN_0040595c(iVar4);
  iVar4 = (**(code **)(*local_8 + 0x30))();
  FUN_0040595c(iVar4);
  uVar3 = *(int *)(param_1 + 0x14) + 0x8000;
  if (0xffff < uVar3) {
    thunk_FUN_00402808(uVar3);
  }
  FUN_00405860((int *)&local_14);
  FUN_004043f8(local_18,*(LPCSTR *)(param_1 + 0xc));
  FUN_00472904(*(int *)(param_1 + 4),(int *)&local_1c);
  iVar4 = (**(code **)(*local_1c + 0x1c))();
  FUN_0040595c(iVar4);
  piVar1 = local_14;
  iVar4 = (**(code **)(*local_14 + 0x38))();
  FUN_0040595c(iVar4);
  *in_FS_OFFSET = piVar1;
  FUN_00405860((int *)&local_1c);
  FUN_004042b4((undefined4 *)local_18);
  FUN_00405860((int *)&local_14);
  FUN_00405860((int *)&local_10);
  FUN_004042b4((undefined4 *)local_c);
  FUN_00405860((int *)&local_8);
  return;
}


/* ==== 0047e0b8 FUN_0047e0b8 ==== */

void FUN_0047e0b8(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  int *local_24;
  OLECHAR local_20 [2];
  int *local_1c;
  _union_2683 union_2683;
  int local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_8 = 0;
  union_2683._12_4_ = 0;
  union_2683._8_4_ = 0;
  union_2683.decVal.Hi32 = 0;
  union_2683._0_4_ = 0;
  local_1c = (int *)0x0;
  local_20[0] = L'\0';
  local_20[1] = L'\0';
  local_24 = (int *)0x0;
  puStack_30 = &LAB_0047e16d;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  FUN_00405860(&local_8);
  FUN_00404ea4((VARIANTARG *)&union_2683.n2,0);
  FUN_00405860((int *)&local_1c);
  FUN_004043f8(local_20,*(LPCSTR *)(param_1 + 0xc));
  FUN_00472904(*(int *)(param_1 + 4),(int *)&local_24);
  iVar2 = (**(code **)(*local_24 + 0x1c))();
  FUN_0040595c(iVar2);
  piVar1 = local_1c;
  iVar2 = (**(code **)(*local_1c + 0x84))();
  FUN_0040595c(iVar2);
  *in_FS_OFFSET = piVar1;
  FUN_00405860((int *)&local_24);
  FUN_004042b4((undefined4 *)local_20);
  FUN_00405860((int *)&local_1c);
  FUN_00405038((VARIANTARG *)&union_2683.n2);
  FUN_00405860(&local_8);
  return;
}


