/* spel.dat — dx3d/Tga.cpp: 2 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004bfc00 FUN_004bfc00 ==== */

void __thiscall FUN_004bfc00(void *this,undefined4 *param_2,int param_3)

{
  int i;
  undefined4 *puVar1;
  
  if (*(int *)this != 2) {
    FUN_004c4150(s__s__d____mesh_is_not_of_requeste_00597c74,s___mesh_inl_005b24a8,0xe1);
  }
  if (*(int *)((int)this + 4) != 2) {
    FUN_004c4150(s__s__d____vertices_were_not__yet__00597c44,s___mesh_inl_005b24a8,0xe4);
  }
  if ((param_3 < 0) || (*(int *)((int)this + 0x84) <= param_3)) {
    FUN_004c4150(s__s__d____index__d_is_out_of_LVER_00597c0c,s___mesh_inl_005b24a8,0xe7,param_3,
                 *(undefined4 *)((int)this + 0x7c));
  }
  puVar1 = (undefined4 *)(*(int *)((int)this + 0x80) + param_3 * 0x20);
  for (i = 8; i != 0; i = i + -1) {
    *param_2 = *puVar1;
    puVar1 = puVar1 + 1;
    param_2 = param_2 + 1;
  }
  return;
}


/* ==== 004c00b0 FUN_004c00b0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FILE * FUN_004c00b0(char *str2,uint *param_2,uint *param_3,FILE *file_2,undefined4 *param_5)

{
  undefined2 uVar1;
  FILE *file;
  FILE *pFVar2;
  undefined1 *puVar3;
  uint uVar4;
  int i;
  undefined1 *puVar5;
  undefined4 *puVar6;
  uint **ppuVar7;
  undefined2 *puVar8;
  uint *puStack_5c;
  uint uStack_58;
  FILE *pFStack_54;
  FILE *pFStack_50;
  uint *puStack_4c;
  char local_29;
  undefined1 uStack_28;
  byte bStack_27;
  undefined1 uStack_26;
  undefined1 local_25;
  uint uStack_24;
  char cStack_20;
  uint uStack_1c;
  undefined1 auStack_18 [4];
  uint uStack_14;
  undefined1 auStack_10 [4];
  char local_c [4];
  int iStack_8;
  undefined1 *puStack_4;
  
  puStack_4c = (uint *)0x4c00ce;
  FUN_004c3fa0();
  puStack_4c = (uint *)DAT_007409c0;
  pFStack_50 = (FILE *)_DAT_007409b0;
  pFStack_54 = (FILE *)s_Gshift___d__Gpos___d_005b2838;
  uStack_58 = 0x4c00e5;
  FUN_004c3fa0();
  uStack_58 = DAT_007409c4;
  puStack_5c = _DAT_007409b4;
  FUN_004c3fa0(s_Bshift___d__Bpos___d_005b2820);
  puVar6 = param_5;
  ppuVar7 = &puStack_5c;
  for (i = 8; i != 0; i = i + -1) {
    *ppuVar7 = (uint *)*puVar6;
    puVar6 = puVar6 + 1;
    ppuVar7 = ppuVar7 + 1;
  }
  FUN_004c8690();
  file = (FILE *)FUN_004c62c0(str2);
  if (file == (FILE *)0x0) {
    return file_2;
  }
  FUN_004c3fa0();
  pFStack_50 = (FILE *)&local_25;
  puStack_4c = (uint *)0x1;
  pFStack_54 = (FILE *)0x4c0144;
  FUN_00558b35();
  uStack_58 = 1;
  puStack_5c = (uint *)0x1;
  pFStack_54 = file;
  FUN_00558b35();
  if (local_29 != '\0') {
    puStack_4c = (uint *)0x4c016f;
    FUN_004c4150();
  }
  puStack_4c = (uint *)local_c;
  pFStack_50 = (FILE *)0x4c0181;
  FUN_00558b35();
  if (local_c[0] != '\x02') {
    puStack_4c = (uint *)s__s__d____No_RGB_uncompressed_TGA_005b27a8;
    pFStack_50 = (FILE *)0x4c01a3;
    FUN_004c4150();
  }
  i = 5;
  do {
    puStack_4c = (uint *)&uStack_28;
    pFStack_50 = (FILE *)0x4c01ba;
    FUN_00558b35();
    i = i + -1;
  } while (i != 0);
  i = 4;
  do {
    puStack_4c = (uint *)&uStack_28;
    pFStack_50 = (FILE *)0x4c01d4;
    FUN_00558b35();
    i = i + -1;
  } while (i != 0);
  puStack_4c = &uStack_1c;
  pFStack_50 = (FILE *)0x4c01e9;
  FUN_00558b35();
  pFStack_54 = (FILE *)0x1;
  puStack_5c = &uStack_24;
  uStack_58 = 2;
  pFStack_50 = file;
  FUN_00558b35();
  FUN_00558b35();
  FUN_00558b35();
  if (((char)_cStack_20 != ' ') && ((char)_cStack_20 != '\x18')) {
    FUN_004c3fa0();
    return (FILE *)0x0;
  }
  *param_2 = uStack_1c & 0xffff;
  *param_3 = uStack_24 & 0xffff;
  puStack_4c = (uint *)0x4c0270;
  FUN_004c3fa0();
  pFStack_54 = (FILE *)*param_3;
  uStack_58 = *param_2;
  puStack_4c = param_5;
  pFStack_50 = file_2;
  puStack_5c = (uint *)0x4c0282;
  pFVar2 = (FILE *)FUN_004c4b90();
  if ((bStack_27 & 0x20) == 0x20) {
    param_2 = (uint *)0x1;
    str2 = (char *)0x0;
  }
  else {
    param_2 = (uint *)0xffffffff;
    str2 = (char *)((uStack_24 & 0xffff) - 1);
  }
  FUN_004c4a60();
  puStack_4c = (uint *)0x4c02ce;
  puVar3 = (undefined1 *)FUN_004c48f0();
  param_3 = (uint *)0x0;
  uVar4 = uStack_1c;
  puStack_4 = puVar3;
  if ((short)uStack_24 != 0) {
    do {
      i = 0;
      puVar8 = (undefined2 *)(puVar3 + iStack_8 * (int)str2);
      puVar5 = puVar3;
      if ((short)uVar4 != 0) {
        do {
          puStack_4c = (uint *)auStack_18;
          pFStack_50 = (FILE *)0x4c0316;
          FUN_00558b35();
          pFStack_54 = (FILE *)0x1;
          puStack_5c = &uStack_14;
          uStack_58 = 1;
          pFStack_50 = file;
          FUN_00558b35();
          FUN_00558b35(auStack_10,auStack_10,1,1,file);
          if (cStack_20 == ' ') {
            puStack_4c = (uint *)&uStack_26;
            pFStack_50 = (FILE *)0x4c034e;
            FUN_00558b35();
          }
          if (DAT_005b37a0 == 8) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          if (DAT_005b37a0 == 0x10) {
            uVar1 = FUN_004c81b0();
            *puVar8 = uVar1;
            puVar8 = puVar8 + 1;
          }
          i = i + 1;
          uVar4 = uStack_1c;
          puVar3 = puStack_4;
        } while (i < (int)(uStack_1c & 0xffff));
      }
      str2 = str2 + (int)param_2;
      param_3 = (uint *)((int)param_3 + 1);
    } while ((int)param_3 < (int)(uStack_24 & 0xffff));
  }
  FUN_004c4a20();
  puStack_4c = (uint *)0x4c0421;
  FUN_004c6430(file);
  FUN_004c8540();
  return pFVar2;
}


