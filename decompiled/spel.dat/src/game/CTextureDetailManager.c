/* spel.dat — game/CTextureDetailManager.cpp: 61 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00497780 FUN_00497780 ==== */

void FUN_00497780(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00497790 FUN_00497790 ==== */

void FUN_00497790(void)

{
  FUN_005584e0(&LAB_004977a0);
  return;
}


/* ==== 004977c0 FUN_004977c0 ==== */

void FUN_004977c0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004977d0 FUN_004977d0 ==== */

void FUN_004977d0(void)

{
  FUN_005584e0(&LAB_004977e0);
  return;
}


/* ==== 004977f0 thunk_FUN_004925f0 ==== */

void __thiscall thunk_FUN_004925f0(void *this)

{
  char cVar1;
  int iVar2;
  
  *(undefined ***)this = &PTR_FUN_00576ff4;
  iVar2 = *(int *)((int)this + 0xc);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return;
}


/* ==== 00497800 FUN_00497800 ==== */

void * __thiscall FUN_00497800(void *this)

{
  void *operator_new_result;
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e46b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)((int)this + 4) = &PTR_LAB_005767b0;
  *(undefined1 *)((int)this + 8) = local_11;
  operator_new_result = operator_new(0xc);
  *(void **)operator_new_result = operator_new_result;
  *(void **)((int)operator_new_result + 4) = operator_new_result;
  *(void **)((int)this + 0xc) = operator_new_result;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined ***)((int)this + 4) = &PTR_LAB_005767a0;
  *(undefined ***)((int)this + 0x18) = &PTR_LAB_005767b0;
  local_4 = 0;
  *(undefined1 *)((int)this + 0x1c) = local_11;
  operator_new_result = operator_new(0xc);
  *(void **)operator_new_result = operator_new_result;
  *(void **)((int)operator_new_result + 4) = operator_new_result;
  *(void **)((int)this + 0x20) = operator_new_result;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined ***)((int)this + 0x18) = &PTR_LAB_005767a0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  DAT_007127f0 = 0;
  ExceptionList = local_c;
  return this;
}


/* ==== 004978a0 FUN_004978a0 ==== */

void __thiscall FUN_004978a0(void *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  void **ppvVar7;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056e480;
  puVar1 = *(undefined4 **)((int)this + 0x20);
  local_4 = 0;
  ppvVar7 = &local_c;
  puVar5 = (undefined4 *)*puVar1;
  local_c = ExceptionList;
  while (ExceptionList = ppvVar7, puVar5 != puVar1) {
    puVar2 = (undefined4 *)*puVar5;
    FUN_00448f90((int)this + 0x1c,local_10,puVar5);
    ppvVar7 = ExceptionList;
    puVar5 = puVar2;
  }
  FUN_0054b339(*(undefined4 *)((int)this + 0x20));
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  piVar3 = *(int **)((int)this + 0xc);
  piVar6 = (int *)*piVar3;
  while (piVar6 != piVar3) {
    piVar4 = (int *)*piVar6;
    *(int *)piVar6[1] = *piVar6;
    *(int *)(*piVar6 + 4) = piVar6[1];
    FUN_0054b339(piVar6);
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
    piVar6 = piVar4;
  }
  FUN_0054b339(*(undefined4 *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 00497960 FUN_00497960 ==== */

int __thiscall FUN_00497960(void)

{
  void *this_val;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e495;
  local_c = ExceptionList;
  if (DAT_007127f0 == 0) {
    ExceptionList = &local_c;
    this_val = operator_new(0x28);
    local_4 = 0;
    if (this_val == (void *)0x0) {
      DAT_007127f0 = 0;
    }
    else {
      DAT_007127f0 = FUN_00497800(this_val,this_val);
    }
    local_4 = 0xffffffff;
    if (DAT_007127f0 == 0) {
      FUN_004c4150(s___s___d_Could_not_get_instance_o_005ade78,
                   s_C__Work_A2IV_Game_prog_CTextureD_005ade44,0x60);
    }
  }
  ExceptionList = local_c;
  return DAT_007127f0;
}


/* ==== 004979e0 FUN_004979e0 ==== */

void FUN_004979e0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int i;
  
  if (DAT_007127f0 != (int *)0x0) {
    FUN_0054b339(DAT_007127f0[5]);
    i = 0;
    DAT_007127f0[5] = 0;
    if (0 < *DAT_007127f0) {
      do {
        piVar4 = DAT_007127f0;
        piVar5 = (int *)(**(code **)(DAT_007127f0[1] + 8))();
        iVar2 = *piVar5;
        piVar5 = *(int **)(piVar4[3] + 4);
        *(int *)piVar5[1] = *piVar5;
        *(int *)(*piVar5 + 4) = piVar5[1];
        FUN_0054b339(piVar5);
        piVar4[4] = piVar4[4] + -1;
        if (iVar2 != 0) {
          iVar3 = *(int *)(iVar2 + 4);
          if (iVar3 != 0) {
            cVar1 = *(char *)(iVar3 + -1);
            if ((cVar1 == '\0') || (cVar1 == -1)) {
              FUN_0054b339((char *)(iVar3 + -1));
            }
            else {
              *(char *)(iVar3 + -1) = cVar1 + -1;
            }
          }
          *(undefined4 *)(iVar2 + 4) = 0;
          *(undefined4 *)(iVar2 + 8) = 0;
          *(undefined4 *)(iVar2 + 0xc) = 0;
          FUN_0054b339(iVar2);
        }
        i = i + 1;
      } while (i < *DAT_007127f0);
    }
    piVar5 = DAT_007127f0;
    if (DAT_007127f0 != (int *)0x0) {
      FUN_004978a0(DAT_007127f0);
      FUN_0054b339(piVar5);
    }
    DAT_007127f0 = (int *)0x0;
  }
  return;
}


/* ==== 00497ab0 FUN_00497ab0 ==== */

void __thiscall FUN_00497ab0(void *this)

{
  char cVar1;
  uint i;
  uint j;
  int k;
  char *pcVar2;
  char *pcVar3;
  char local_20 [32];
  
  i = 0xffffffff;
  pcVar2 = &DAT_006fa59e + DAT_006fb898 * 0x94;
  do {
    pcVar3 = pcVar2;
    if (i == 0) break;
    i = i - 1;
    pcVar3 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar3;
  } while (cVar1 != '\0');
  i = ~i;
  pcVar2 = pcVar3 + -i;
  pcVar3 = local_20;
  for (j = i >> 2; j != 0; j = j - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (i = i & 3; i != 0; i = i - 1) {
    *pcVar3 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  }
  if (DAT_006fb8d0 != 0) {
    i = 0xffffffff;
    pcVar2 = local_20;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    local_20[~i - 5] = '\0';
    k = -1;
    pcVar2 = local_20;
    do {
      pcVar3 = pcVar2;
      if (k == 0) break;
      k = k + -1;
      pcVar3 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar3;
    } while (cVar1 != '\0');
    *(undefined4 *)(pcVar3 + -1) = DAT_005adec0;
    pcVar3[3] = DAT_005adec4;
  }
  FUN_00498340(this,local_20);
  i = 0xffffffff;
  pcVar2 = &DAT_006fa5ac + DAT_006fb898 * 0x94;
  do {
    pcVar3 = pcVar2;
    if (i == 0) break;
    i = i - 1;
    pcVar3 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar3;
  } while (cVar1 != '\0');
  i = ~i;
  pcVar2 = pcVar3 + -i;
  pcVar3 = local_20;
  for (j = i >> 2; j != 0; j = j - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (i = i & 3; i != 0; i = i - 1) {
    *pcVar3 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  }
  if (DAT_006fb8d0 != 0) {
    i = 0xffffffff;
    pcVar2 = local_20;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    local_20[~i - 5] = '\0';
    k = -1;
    pcVar2 = local_20;
    do {
      pcVar3 = pcVar2;
      if (k == 0) break;
      k = k + -1;
      pcVar3 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar3;
    } while (cVar1 != '\0');
    *(undefined4 *)(pcVar3 + -1) = DAT_005adec8;
    pcVar3[3] = DAT_005adecc;
  }
  FUN_00498340(this,local_20);
  i = 0xffffffff;
  pcVar2 = &DAT_006fa5c8 + DAT_006fb898 * 0x94;
  do {
    pcVar3 = pcVar2;
    if (i == 0) break;
    i = i - 1;
    pcVar3 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar3;
  } while (cVar1 != '\0');
  i = ~i;
  pcVar2 = pcVar3 + -i;
  pcVar3 = local_20;
  for (j = i >> 2; j != 0; j = j - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (i = i & 3; i != 0; i = i - 1) {
    *pcVar3 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  }
  if (DAT_006fb8d0 != 0) {
    i = 0xffffffff;
    pcVar2 = local_20;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    local_20[~i - 5] = '\0';
    k = -1;
    pcVar2 = local_20;
    do {
      pcVar3 = pcVar2;
      if (k == 0) break;
      k = k + -1;
      pcVar3 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar3;
    } while (cVar1 != '\0');
    *(undefined4 *)(pcVar3 + -1) = DAT_005aded0;
    pcVar3[3] = DAT_005aded4;
  }
  FUN_00498340(this,local_20);
  i = 0xffffffff;
  pcVar2 = &DAT_006fa5ba + DAT_006fb898 * 0x94;
  do {
    pcVar3 = pcVar2;
    if (i == 0) break;
    i = i - 1;
    pcVar3 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar3;
  } while (cVar1 != '\0');
  i = ~i;
  pcVar2 = pcVar3 + -i;
  pcVar3 = local_20;
  for (j = i >> 2; j != 0; j = j - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (i = i & 3; i != 0; i = i - 1) {
    *pcVar3 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  }
  if (DAT_006fb8d0 != 0) {
    i = 0xffffffff;
    pcVar2 = local_20;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    local_20[~i - 5] = '\0';
    k = -1;
    pcVar2 = local_20;
    do {
      pcVar3 = pcVar2;
      if (k == 0) break;
      k = k + -1;
      pcVar3 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar3;
    } while (cVar1 != '\0');
    *(undefined4 *)(pcVar3 + -1) = DAT_005aded8;
    pcVar3[3] = DAT_005adedc;
  }
  FUN_00498340(this,local_20);
  return;
}


/* ==== 00497cb0 FUN_00497cb0 ==== */

int __thiscall FUN_00497cb0(void *this)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int j;
  int i;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  FUN_004c3fa0(s_Calculating_the_bytes_used_by_si_005adee0);
  i = 0;
  if (0 < *(int *)this) {
    iVar4 = 0;
    do {
      j = *(int *)(iVar4 + *(int *)((int)this + 0x14));
      if (j != -1) {
        puVar1 = (undefined4 *)**(undefined4 **)((int)this + 0xc);
        iVar3 = iVar3 + j * j;
        j = i;
        if (0 < iVar4) {
          do {
            puVar1 = (undefined4 *)*puVar1;
            j = j + -1;
          } while (j != 0);
        }
        puVar2 = *(undefined1 **)(puVar1[2] + 4);
        if (puVar2 == (undefined1 *)0x0) {
          puVar2 = &DAT_0057629c;
        }
        FUN_004c3fa0(s_Single_size_texture__s_005adf14,puVar2);
      }
      i = i + 1;
      iVar4 = iVar4 + 4;
    } while (i < *(int *)this);
  }
  iVar3 = (DAT_00740974 >> 3) * iVar3;
  FUN_004c3fa0(s_Total_bytes_used___d_005adf2c,iVar3);
  return iVar3;
}


/* ==== 00497d40 FUN_00497d40 ==== */

int __thiscall FUN_00497d40(void *this)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int k;
  int j;
  int i;
  int iVar3;
  
  i = 0;
  FUN_004c3fa0(s_Now_get_the_total_of_multisize_t_005adf44);
  j = 0;
  if (0 < *(int *)this) {
    iVar3 = 0;
    do {
      if (*(int *)(iVar3 + *(int *)((int)this + 0x14)) == -1) {
        puVar1 = (undefined4 *)**(undefined4 **)((int)this + 0xc);
        k = j;
        if (0 < iVar3) {
          do {
            puVar1 = (undefined4 *)*puVar1;
            k = k + -1;
          } while (k != 0);
        }
        puVar2 = *(undefined1 **)(puVar1[2] + 4);
        if (puVar2 == (undefined1 *)0x0) {
          puVar2 = &DAT_0057629c;
        }
        FUN_004c3fa0(s_Multisize_texture___s_005adf90,puVar2);
        i = i + 1;
      }
      j = j + 1;
      iVar3 = iVar3 + 4;
    } while (j < *(int *)this);
  }
  FUN_004c3fa0(s_Found__d_multi_size_textures_005adfa8,i);
  return i;
}


/* ==== 00497dc0 FUN_00497dc0 ==== */

void __thiscall FUN_00497dc0(void *this)

{
  byte bVar1;
  char cVar2;
  int i;
  undefined1 *this_val;
  byte *pbVar3;
  undefined1 *operator_new_result;
  int iVar4;
  uint k;
  uint uVar5;
  byte *pbVar6;
  bool bVar7;
  undefined1 local_61;
  int j;
  undefined1 *local_58;
  int local_54;
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  byte local_40 [32];
  undefined1 local_20 [32];
  
  i = FUN_00448c90(&DAT_006fa558,s_System_Settings_005adfc8);
  this_val = *(undefined1 **)(i + 4);
  if (this_val == (undefined1 *)0x0) {
    this_val = &DAT_0057629c;
  }
  FUN_004c3b60();
  FUN_005587a3(local_50,s__d_005adfd8,DAT_006fb898,this_val);
  FUN_004c3d10(PTR_s_3D_Anims_005addec,local_50,local_20,0x1f);
  this_val = local_20;
  FUN_004c3b60();
  local_54 = FUN_004c3cd0(PTR_s_PRIORITY_LIST_005adde4,PTR_s_COUNT_005adde8,this_val);
  j = 0;
  if (0 < local_54) {
    do {
      FUN_005587a3(local_48,s__d_005adfdc,j);
      FUN_004c3d10(PTR_s_PRIORITY_LIST_005adde4,local_48,local_40,0x1f);
      pbVar3 = local_40;
      pbVar6 = PTR_s_CACHED_PIPELINE_1_005addd8;
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_00497eb3:
          i = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_00497eb8;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00497eb3;
        pbVar3 = pbVar3 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      i = 0;
LAB_00497eb8:
      if (i != 0) {
        pbVar3 = local_40;
        pbVar6 = PTR_s_CACHED_PIPELINE_2_005adddc;
        do {
          bVar1 = *pbVar3;
          bVar7 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_00497eee:
            i = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
            goto LAB_00497ef3;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar7 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_00497eee;
          pbVar3 = pbVar3 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        i = 0;
LAB_00497ef3:
        if (i != 0) {
          i = -1;
          pbVar3 = local_40;
          do {
            pbVar6 = pbVar3;
            if (i == 0) break;
            i = i + -1;
            pbVar6 = pbVar3 + 1;
            bVar1 = *pbVar3;
            pbVar3 = pbVar6;
          } while (bVar1 != 0);
          *(undefined4 *)(pbVar6 + -1) = DAT_005adfe0;
          pbVar6[3] = DAT_005adfe4;
        }
      }
      operator_new_result = operator_new(0x10);
      this_val = (undefined1 *)0x0;
      if (operator_new_result != (undefined1 *)0x0) {
        *(undefined4 *)(operator_new_result + 4) = 0;
        *(undefined4 *)(operator_new_result + 8) = 0;
        *(undefined4 *)(operator_new_result + 0xc) = 0;
        *operator_new_result = local_61;
        this_val = operator_new_result;
      }
      k = 0xffffffff;
      pbVar3 = local_40;
      do {
        if (k == 0) break;
        k = k - 1;
        bVar1 = *pbVar3;
        pbVar3 = pbVar3 + 1;
      } while (bVar1 != 0);
      uVar5 = ~k - 1;
      local_58 = this_val;
      k = FUN_004095c0();
      if (k < uVar5) {
        FUN_0054b1b4();
      }
      i = *(int *)(this_val + 4);
      if (((i == 0) || (cVar2 = *(char *)(i + -1), cVar2 == '\0')) || (cVar2 == -1)) {
        if (uVar5 != 0) {
          if ((0x1f < *(uint *)(this_val + 0xc)) || (*(uint *)(this_val + 0xc) < uVar5)) {
            FUN_004028f0(this_val,1);
            goto LAB_00497f9f;
          }
          goto LAB_00497fa7;
        }
        FUN_004028f0(this_val,1);
      }
      else if (uVar5 == 0) {
        *(char *)(i + -1) = cVar2 + -1;
        FUN_004028f0(this_val,0);
      }
      else {
LAB_00497f9f:
        FUN_00402b20(this_val,uVar5);
LAB_00497fa7:
        pbVar3 = local_40;
        pbVar6 = *(byte **)(this_val + 4);
        for (k = uVar5 >> 2; k != 0; k = k - 1) {
          *(undefined4 *)pbVar6 = *(undefined4 *)pbVar3;
          pbVar3 = pbVar3 + 4;
          pbVar6 = pbVar6 + 4;
        }
        for (k = uVar5 & 3; k != 0; k = k - 1) {
          *pbVar6 = *pbVar3;
          pbVar3 = pbVar3 + 1;
          pbVar6 = pbVar6 + 1;
        }
        FUN_004029e0(this_val,uVar5);
      }
      i = *(int *)((int)this + 0x20);
      iVar4 = FUN_00449050(i,*(undefined4 *)(i + 4));
      *(int *)(i + 4) = iVar4;
      **(int **)(iVar4 + 4) = iVar4;
      FUN_004d2770(iVar4 + 8,&local_58);
      *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 1;
      FUN_004c3fa0(s_Texture__s_added_to_the_priority_005adfe8,local_40);
      j = j + 1;
    } while (j < local_54);
  }
  return;
}


/* ==== 00498030 FUN_00498030 ==== */

undefined4 __thiscall
FUN_00498030(void *this,int *param_2,int param_3,int param_4,int param_5,int param_6)

{
  int *operator_new_result;
  int k;
  int j;
  int iVar1;
  int i;
  char *_Str1;
  undefined4 *puVar2;
  int *piVar3;
  undefined1 *puVar4;
  char *_Str2;
  int m;
  int *piVar5;
  
  i = param_5;
  if (param_4 < 0) {
    FUN_004c4150(s___s___d_Not_enough_texture_memor_005ae044,
                 s_C__Work_A2IV_Game_prog_CTextureD_005ae010,0x15f,
                 (DAT_00740974 >> 3) * (int)param_2 * (int)param_2 * param_5 - param_4);
  }
  j = param_3;
  operator_new_result = operator_new(param_3 * i * 4);
  if (operator_new_result == (int *)0x0) {
    FUN_004c4150(s___s___d_Could_not_create_detail_t_005ae0bc,
                 s_C__Work_A2IV_Game_prog_CTextureD_005ae088,0x167);
  }
  k = (int)param_2;
  if (0 < j) {
    param_2 = (int *)j;
    piVar3 = operator_new_result;
    do {
      m = i;
      piVar5 = piVar3;
      if (0 < i) {
        for (; j = param_3, m != 0; m = m + -1) {
          *piVar5 = k;
          piVar5 = piVar5 + 1;
        }
      }
      piVar3 = piVar3 + i;
      k = k << 1;
      param_2 = (int *)((int)param_2 + -1);
    } while (param_2 != (int *)0x0);
  }
  k = 0;
  j = (j + -1) * i;
  param_2 = operator_new_result;
  do {
    if (j < k) {
LAB_004981a1:
      k = k + -1;
      param_6 = k;
      i = (*(code *)**(undefined4 **)((int)this + 0x18))();
      param_4 = 0;
      param_3 = i;
      if (0 < i) {
        do {
          j = 0;
          if (0 < *(int *)this) {
            piVar3 = operator_new_result + k;
            do {
              param_2 = (int *)**(undefined4 **)((int)this + 0xc);
              i = j;
              if (0 < j) {
                do {
                  FUN_00448fd0(&param_2,&param_5,0);
                  i = i + -1;
                } while (i != 0);
              }
              _Str2 = "";
              if (*(char **)(param_2[2] + 4) != (char *)0x0) {
                _Str2 = *(char **)(param_2[2] + 4);
              }
              puVar2 = (undefined4 *)**(undefined4 **)((int)this + 0x20);
              i = param_4;
              if (0 < param_4) {
                do {
                  puVar2 = (undefined4 *)*puVar2;
                  i = i + -1;
                } while (i != 0);
              }
              _Str1 = *(char **)(puVar2[2] + 4);
              if (_Str1 == (char *)0x0) {
                _Str1 = "";
              }
              i = __strcmpi(_Str1,_Str2);
              if (i == 0) {
                *(int *)(*(int *)((int)this + 0x14) + j * 4) = *piVar3;
                j = *(int *)this;
                param_6 = param_6 + 1;
                piVar3 = piVar3 + 1;
              }
              j = j + 1;
              i = param_3;
              k = param_6;
            } while (j < *(int *)this);
          }
          param_4 = param_4 + 1;
        } while (param_4 < i);
      }
      i = 0;
      if (0 < *(int *)this) {
        piVar3 = operator_new_result + k;
        do {
          if (*(int *)(*(int *)((int)this + 0x14) + i * 4) == -1) {
            *(int *)(*(int *)((int)this + 0x14) + i * 4) = *piVar3;
            FUN_004c3fa0(s_Assigning__d_005ae124,*piVar3);
            piVar3 = piVar3 + 1;
          }
          i = i + 1;
        } while (i < *(int *)this);
      }
      i = 0;
      j = 0;
      if (0 < *(int *)this) {
        k = 0;
        do {
          puVar2 = (undefined4 *)**(undefined4 **)((int)this + 0xc);
          m = j;
          if (0 < k) {
            do {
              puVar2 = (undefined4 *)*puVar2;
              m = m + -1;
            } while (m != 0);
          }
          puVar4 = *(undefined1 **)(puVar2[2] + 4);
          if (puVar4 == (undefined1 *)0x0) {
            puVar4 = &DAT_0057629c;
          }
          m = *(int *)(k + *(int *)((int)this + 0x14));
          FUN_004c3fa0(s_Texture__s_used__d__d_with_bytes_005ae134,puVar4,m,m,m * m * 2);
          m = *(int *)(k + *(int *)((int)this + 0x14));
          k = k + 4;
          i = i + m * m;
          j = j + 1;
        } while (j < *(int *)this);
      }
      FUN_004c3fa0(s_Total_bytes___d_005ae15c,i * 2);
      FUN_0054b339(operator_new_result);
      return 1;
    }
    m = 0;
    param_3 = 0;
    if (k < k + i) {
      piVar3 = param_2;
      iVar1 = (k + i) - k;
      do {
        param_3 = iVar1;
        m = m + (DAT_00740974 >> 3) * *piVar3 * *piVar3;
        piVar3 = piVar3 + 1;
        iVar1 = param_3 + -1;
        i = param_5;
        param_3 = m;
      } while (iVar1 != 0);
    }
    m = param_3;
    if ((char)param_6 != '\0') {
      iVar1 = __ftol();
      m = m + iVar1;
    }
    FUN_004c3fa0(s_Checking_config_using__d_with__d_005ae100,m,param_4);
    if (param_4 < m) {
      if (k == 0) {
        FUN_0054b339(operator_new_result);
        return 0;
      }
      goto LAB_004981a1;
    }
    k = k + 1;
    param_2 = param_2 + 1;
  } while( true );
}


/* ==== 00498340 FUN_00498340 ==== */

void __thiscall FUN_00498340(void *this,char *str2)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  char *str1;
  undefined1 *this_val;
  int *operator_new_result;
  uint k;
  uint m;
  int *piVar4;
  int *piVar5;
  int j;
  int i;
  int local_10;
  int *local_c;
  undefined1 *local_8;
  undefined1 local_4 [4];
  
  bVar2 = false;
  if (str2 != (char *)0x0) {
    i = 0;
    local_c = this;
    if (0 < *(int *)this) {
      do {
        local_10 = **(int **)((int)this + 0xc);
        j = i;
        if (0 < i) {
          do {
            FUN_00448fd0(&local_10,local_4,0);
            j = j + -1;
          } while (j != 0);
        }
        str1 = *(char **)(*(int *)(local_10 + 8) + 4);
        if (str1 == (char *)0x0) {
          str1 = "";
        }
        j = __strcmpi(str1,str2);
        if (j == 0) {
          i = *(int *)this;
          bVar2 = true;
        }
        i = i + 1;
      } while (i < *(int *)this);
      if (bVar2) {
        return;
      }
    }
    this_val = operator_new(0x10);
    if (this_val == (undefined1 *)0x0) {
      this_val = (undefined1 *)0x0;
    }
    else {
      *(undefined4 *)(this_val + 4) = 0;
      *this_val = str2._0_1_;
      *(undefined4 *)(this_val + 8) = 0;
      *(undefined4 *)(this_val + 0xc) = 0;
    }
    k = 0xffffffff;
    str1 = str2;
    do {
      if (k == 0) break;
      k = k - 1;
      cVar3 = *str1;
      str1 = str1 + 1;
    } while (cVar3 != '\0');
    k = ~k - 1;
    local_8 = this_val;
    cVar3 = FUN_00402a00(this_val,k,1);
    if (cVar3 != '\0') {
      str1 = *(char **)(this_val + 4);
      for (m = k >> 2; m != 0; m = m - 1) {
        *(undefined4 *)str1 = *(undefined4 *)str2;
        str2 = str2 + 4;
        str1 = str1 + 4;
      }
      for (m = k & 3; m != 0; m = m - 1) {
        *str1 = *str2;
        str2 = str2 + 1;
        str1 = str1 + 1;
      }
      *(uint *)(this_val + 8) = k;
      *(undefined1 *)(*(int *)(this_val + 4) + k) = 0;
      this = local_c;
    }
    piVar1 = *(int **)((int)this + 0xc);
    piVar5 = (int *)piVar1[1];
    operator_new_result = operator_new(0xc);
    piVar4 = piVar1;
    if (piVar1 == (int *)0x0) {
      piVar4 = operator_new_result;
    }
    *operator_new_result = (int)piVar4;
    if (piVar5 == (int *)0x0) {
      piVar5 = operator_new_result;
    }
    operator_new_result[1] = (int)piVar5;
    piVar1[1] = (int)operator_new_result;
    *(int **)operator_new_result[1] = operator_new_result;
    FUN_004d2770(operator_new_result + 2,&local_8);
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
    *(int *)this = *(int *)this + 1;
  }
  return;
}


/* ==== 00498490 FUN_00498490 ==== */

void __thiscall FUN_00498490(void *this)

{
  byte bVar1;
  void *operator_new_result;
  int *piVar2;
  byte *pbVar3;
  char *str2;
  undefined4 uVar4;
  undefined4 *puVar5;
  int i;
  int j;
  byte *pbVar6;
  undefined1 *puVar7;
  int iVar8;
  bool bVar9;
  uint uStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  uint uStack_20;
  undefined1 local_1c [4];
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  undefined1 auStack_c [4];
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  FUN_004c3fa0(s_Creating_the_texture_detail_list_005ae170);
  operator_new_result = operator_new(*(int *)this << 2);
  *(void **)((int)this + 0x14) = operator_new_result;
  if (operator_new_result == (void *)0x0) {
    FUN_004c4150(s___s___d_Could_not_allocate_textu_005ae1f8,
                 s_C__Work_A2IV_Game_prog_CTextureD_005ae1c4,0x21b);
  }
  i = 0;
  if (0 < *(int *)this) {
    iVar8 = 0;
    do {
      *(undefined4 *)(*(int *)((int)this + 0x14) + iVar8) = 0xffffffff;
      piVar2 = (int *)FUN_00468530((int)this + 8,local_1c);
      iStack_30 = *piVar2;
      j = i;
      if (0 < iVar8) {
        do {
          FUN_00448fd0(&iStack_30,auStack_18,0);
          j = j + -1;
        } while (j != 0);
      }
      pbVar3 = *(byte **)(*(int *)(iStack_30 + 8) + 4);
      pbVar6 = PTR_s_CACHED_PIPELINE_1_005addd8;
      if (pbVar3 == (byte *)0x0) {
        pbVar3 = &DAT_0057629c;
      }
      do {
        bVar1 = *pbVar3;
        bVar9 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_00498552:
          j = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_00498557;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar9 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00498552;
        pbVar3 = pbVar3 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      j = 0;
LAB_00498557:
      if (j == 0) {
LAB_00498737:
        *(undefined4 *)(*(int *)((int)this + 0x14) + iVar8) = 0x100;
      }
      else {
        piVar2 = (int *)FUN_00468530((int)this + 8,auStack_14);
        iStack_2c = *piVar2;
        j = i;
        if (0 < iVar8) {
          do {
            FUN_00448fd0(&iStack_2c,auStack_10,0);
            j = j + -1;
          } while (j != 0);
        }
        pbVar3 = *(byte **)(*(int *)(iStack_2c + 8) + 4);
        pbVar6 = PTR_s_CACHED_PIPELINE_2_005adddc;
        if (pbVar3 == (byte *)0x0) {
          pbVar3 = &DAT_0057629c;
        }
        do {
          bVar1 = *pbVar3;
          bVar9 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_004985c8:
            j = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_004985cd;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar9 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_004985c8;
          pbVar3 = pbVar3 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        j = 0;
LAB_004985cd:
        if (j == 0) goto LAB_00498737;
        piVar2 = (int *)FUN_00468530((int)this + 8,auStack_c);
        iStack_28 = *piVar2;
        j = i;
        if (0 < iVar8) {
          do {
            FUN_00448fd0(&iStack_28,auStack_8,0);
            j = j + -1;
          } while (j != 0);
        }
        str2 = *(char **)(*(int *)(iStack_28 + 8) + 4);
        if (str2 == (char *)0x0) {
          str2 = "";
        }
        uVar4 = FUN_004c62c0(str2);
        FUN_004c6160(uVar4,0xc,0);
        FUN_00558b35(&uStack_34,&uStack_34,2,1,uVar4);
        FUN_00558b35();
        if ((short)uStack_34 == (short)uStack_20) {
          j = FUN_004c1080(&DAT_0073b258);
          if ((j != 0) && (j = FUN_004c1080(&DAT_0073b258), j < (int)(uStack_34 & 0xffff))) {
            iStack_24 = **(int **)((int)this + 0xc);
            j = i;
            if (0 < iVar8) {
              do {
                FUN_00448fd0(&iStack_24,auStack_4,0);
                j = j + -1;
              } while (j != 0);
            }
            puVar7 = *(undefined1 **)(*(int *)(iStack_24 + 8) + 4);
            if (puVar7 == (undefined1 *)0x0) {
              puVar7 = &DAT_0057629c;
            }
            uVar4 = FUN_004c1080(&DAT_0073b258,uStack_34 & 0xffff,uStack_20 & 0xffff);
            FUN_004c4150(s___s___d_The_texture__s_violates_t_005ae25c,
                         s_C__Work_A2IV_Game_prog_CTextureD_005ae228,0x235,puVar7,uVar4);
          }
          puVar5 = (undefined4 *)**(undefined4 **)((int)this + 0xc);
          j = i;
          if (0 < iVar8) {
            do {
              puVar5 = (undefined4 *)*puVar5;
              j = j + -1;
            } while (j != 0);
          }
          puVar7 = *(undefined1 **)(puVar5[2] + 4);
          if (puVar7 == (undefined1 *)0x0) {
            puVar7 = &DAT_0057629c;
          }
          FUN_004c3fa0(s_Added_single_size_texture__s_wit_005ae2b8,puVar7,uStack_34 & 0xffff,
                       uStack_34 & 0xffff);
          *(uint *)(*(int *)((int)this + 0x14) + iVar8) = uStack_34 & 0xffff;
        }
      }
      i = i + 1;
      iVar8 = iVar8 + 4;
    } while (i < *(int *)this);
  }
  return;
}


/* ==== 00498760 FUN_00498760 ==== */

void __thiscall FUN_00498760(void *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int i;
  
  if (DAT_006fb8d0 != 0) {
    FUN_00497ab0();
    FUN_00498490(this);
    iVar2 = FUN_00497cb0(this);
    FUN_004c3fa0(s_Space_left_for_the_other_texture_005ae2f0,DAT_006fb978 - iVar2);
    uVar3 = FUN_00497d40(this);
    FUN_004c3fa0(s_Loading_the_priority_list_005ae32c);
    FUN_00497dc0(this);
    i = 0;
    iVar4 = FUN_004c1080(&DAT_0073b258);
    if (iVar4 != 0x20) {
      iVar4 = 0x20;
      do {
        uVar5 = FUN_004c1080(&DAT_0073b258);
        FUN_004c3fa0(s_Tested_texture_dimension__d_to_m_005ae348,iVar4,uVar5);
        i = i + 1;
        iVar4 = 0x20 << ((byte)i & 0x1f);
        iVar6 = FUN_004c1080(&DAT_0073b258);
      } while (iVar4 != iVar6);
    }
    FUN_004c3fa0(s_Found_a_total_of__d_supported_te_005ae370,i + 1,0x20 << ((byte)i & 0x1f));
    cVar1 = FUN_00498030(this,0x20,i + 1,DAT_006fb978 - iVar2,uVar3,DAT_0073b4f8);
    if (cVar1 == '\0') {
      FUN_004c4150(s__s__d___Error_subdividing_textur_005ae3e0,
                   s_C__Work_A2IV_Game_prog_CTextureD_005ae3ac,0x27c);
    }
  }
  return;
}


/* ==== 00498870 FUN_00498870 ==== */

undefined4 __thiscall FUN_00498870(void *this,byte *param_2)

{
  char cVar1;
  byte bVar2;
  int i;
  byte *pbVar3;
  undefined4 *puVar4;
  char *str1;
  uint j;
  uint k;
  int m;
  byte *pbVar5;
  char *pcVar6;
  bool bVar7;
  byte local_48 [8];
  byte local_40 [8];
  byte local_38 [8];
  char local_30 [16];
  byte local_20 [32];
  
  pbVar3 = param_2;
  pbVar5 = PTR_s_CACHED_PIPELINE_1_005addd8;
  if (DAT_006fb8d0 == 0) {
    return 0xffffffff;
  }
  do {
    bVar2 = *pbVar3;
    bVar7 = bVar2 < *pbVar5;
    if (bVar2 != *pbVar5) {
LAB_004988ba:
      i = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_004988bf;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar3[1];
    bVar7 = bVar2 < pbVar5[1];
    if (bVar2 != pbVar5[1]) goto LAB_004988ba;
    pbVar3 = pbVar3 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar2 != 0);
  i = 0;
LAB_004988bf:
  pbVar3 = param_2;
  pbVar5 = PTR_s_CACHED_PIPELINE_2_005adddc;
  if (i != 0) {
    do {
      bVar2 = *pbVar3;
      bVar7 = bVar2 < *pbVar5;
      if (bVar2 != *pbVar5) {
LAB_004988f7:
        i = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_004988fc;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar3[1];
      bVar7 = bVar2 < pbVar5[1];
      if (bVar2 != pbVar5[1]) goto LAB_004988f7;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar2 != 0);
    i = 0;
LAB_004988fc:
    if (i != 0) {
      FUN_0055942f(local_30,param_2,local_38,local_40,(byte *)local_30,local_48);
      j = 0xffffffff;
      str1 = local_30;
      do {
        pcVar6 = str1;
        if (j == 0) break;
        j = j - 1;
        pcVar6 = str1 + 1;
        cVar1 = *str1;
        str1 = pcVar6;
      } while (cVar1 != '\0');
      j = ~j;
      pbVar3 = (byte *)(pcVar6 + -j);
      pbVar5 = local_20;
      for (k = j >> 2; k != 0; k = k - 1) {
        *(undefined4 *)pbVar5 = *(undefined4 *)pbVar3;
        pbVar3 = pbVar3 + 4;
        pbVar5 = pbVar5 + 4;
      }
      for (j = j & 3; j != 0; j = j - 1) {
        *pbVar5 = *pbVar3;
        pbVar3 = pbVar3 + 1;
        pbVar5 = pbVar5 + 1;
      }
      i = -1;
      pbVar3 = local_20;
      do {
        pbVar5 = pbVar3;
        if (i == 0) break;
        i = i + -1;
        pbVar5 = pbVar3 + 1;
        bVar2 = *pbVar3;
        pbVar3 = pbVar5;
      } while (bVar2 != 0);
      *(undefined4 *)(pbVar5 + -1) = DAT_005ae430;
      pbVar5[3] = DAT_005ae434;
      goto LAB_00498982;
    }
  }
  j = 0xffffffff;
  do {
    pbVar3 = param_2;
    if (j == 0) break;
    j = j - 1;
    pbVar3 = param_2 + 1;
    bVar2 = *param_2;
    param_2 = pbVar3;
  } while (bVar2 != 0);
  j = ~j;
  pbVar3 = pbVar3 + -j;
  pbVar5 = local_20;
  for (k = j >> 2; k != 0; k = k - 1) {
    *(undefined4 *)pbVar5 = *(undefined4 *)pbVar3;
    pbVar3 = pbVar3 + 4;
    pbVar5 = pbVar5 + 4;
  }
  for (j = j & 3; j != 0; j = j - 1) {
    *pbVar5 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    pbVar5 = pbVar5 + 1;
  }
LAB_00498982:
  i = 0;
  if (0 < *(int *)this) {
    do {
      puVar4 = (undefined4 *)**(undefined4 **)((int)this + 0xc);
      m = i;
      if (0 < i) {
        do {
          puVar4 = (undefined4 *)*puVar4;
          m = m + -1;
        } while (m != 0);
      }
      str1 = *(char **)(puVar4[2] + 4);
      if (str1 == (char *)0x0) {
        str1 = "";
      }
      m = __strcmpi(str1,(char *)local_20);
      if (m == 0) {
        return *(undefined4 *)(*(int *)((int)this + 0x14) + i * 4);
      }
      i = i + 1;
    } while (i < *(int *)this);
  }
  return 0xffffffff;
}


/* ==== 00498a20 FUN_00498a20 ==== */

void FUN_00498a20(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00498a30 FUN_00498a30 ==== */

void FUN_00498a30(void)

{
  FUN_005584e0(&LAB_00498a40);
  return;
}


/* ==== 00498a60 FUN_00498a60 ==== */

void FUN_00498a60(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00498a70 FUN_00498a70 ==== */

void FUN_00498a70(void)

{
  FUN_005584e0(&LAB_00498a80);
  return;
}


/* ==== 00498a90 FUN_00498a90 ==== */

void __thiscall FUN_00498a90(void *this)

{
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)this >> 0x18);
  *(undefined1 *)((int)this + 4) = local_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)((int)this + 0x14) = local_1;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined1 *)((int)this + 0x24) = local_1;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined ***)this = &PTR_FUN_00577134;
  *(undefined4 *)((int)this + 0x38) = 0;
  return;
}


/* ==== 00498ad0 FUN_00498ad0 ==== */

void * __thiscall
FUN_00498ad0(void *this,void *this_val,int this_val_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056e4c1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)((int)this + 4) = param_5;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)((int)this + 0x14) = param_5;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x24) = param_5;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  local_4 = 2;
  *(undefined ***)this = &PTR_FUN_00577134;
  FUN_00498d00(this,this_val,this_val_2,param_3,param_4,param_5);
  ExceptionList = local_c;
  return this;
}


/* ==== 00498b70 FUN_00498b70 ==== */

void * __thiscall
FUN_00498b70(void *this,void *this_val,int this_val_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056e4ec;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)((int)this + 4) = param_5;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)((int)this + 0x14) = param_5;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x24) = param_5;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  local_4 = 2;
  *(undefined ***)this = &PTR_FUN_00577134;
  FUN_00498d00(this,this_val,this_val_2,param_3,param_4,param_5);
  ExceptionList = local_c;
  return this;
}


/* ==== 00498c10 FUN_00498c10 ==== */

void __thiscall FUN_00498c10(void *this)

{
  char cVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056e517;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00577134;
  local_4 = 2;
  FUN_00498ce0(this,this);
  iVar2 = *(int *)((int)this + 0x28);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  iVar2 = *(int *)((int)this + 0x18);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  iVar2 = *(int *)((int)this + 8);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 00498ce0 FUN_00498ce0 ==== */

void __thiscall FUN_00498ce0(void *this,undefined4 this_val)

{
  if (*(int *)((int)this + 0x38) != 0) {
    FUN_0049bdf0(*(int *)((int)this + 0x38),this_val);
    FUN_00499380(this_val,0);
  }
  return;
}


/* ==== 00498d00 FUN_00498d00 ==== */

/* WARNING: Removing unreachable block (ram,0x00498e2f) */

void __thiscall
FUN_00498d00(void *this,void *this_val,int this_val_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5)

{
  bool bVar1;
  char cVar2;
  int this_val_3;
  char *pcVar3;
  undefined1 *puVar4;
  uint i;
  uint j;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined1 local_2c [4];
  char *local_28;
  uint local_24;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e531;
  pvStack_c = ExceptionList;
  i = 0xffffffff;
  pcVar3 = &DAT_007127f4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  bVar1 = false;
  ExceptionList = &pvStack_c;
  this_val_3 = FUN_0040fc80(this_val_2,0,*(undefined4 *)(this_val_2 + 8),&DAT_007127f4,~i - 1);
  if (this_val_3 == 0) {
    local_2c[0] = param_5;
    FUN_004028f0(local_2c,0);
    i = 0xffffffff;
    pcVar3 = s_Sorry__CRegVar_variable_needs_to_005ae458;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    i = ~i - 1;
    cVar2 = FUN_00402a00(local_2c,i,1);
    if (cVar2 != '\0') {
      pcVar3 = s_Sorry__CRegVar_variable_needs_to_005ae458;
      pcVar8 = local_28;
      for (j = i >> 2; j != 0; j = j - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (j = i & 3; j != 0; j = j - 1) {
        *pcVar8 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar8 = pcVar8 + 1;
      }
      local_28[i] = '\0';
      local_24 = i;
    }
    local_1c[0] = param_5;
    local_4 = 0;
    FUN_004028f0(local_1c,0);
    local_4._0_1_ = 1;
    FUN_004093c0(local_1c,local_2c,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_1c,&DAT_005828d8);
  }
  i = *(uint *)(this_val_2 + 8);
  j = 0;
  if (i != 0) {
    do {
      pcVar3 = "";
      if (*(int *)(this_val_2 + 4) != 0) {
        pcVar3 = (char *)(*(int *)(this_val_2 + 4) + j);
      }
      if (*pcVar3 == '.') {
        bVar1 = true;
        break;
      }
      j = j + 1;
    } while (j < i);
  }
  this_val_3 = (int)this + 4;
  if (this_val_3 == this_val_2) {
    FUN_0040f800(this_val_3,i,0xffffffff);
    FUN_0040f800(this_val_3,0,0);
  }
  else {
    if (i != 0) {
      puVar4 = *(undefined1 **)(this_val_2 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004028f0(this_val_3,1);
        puVar4 = *(undefined1 **)(this_val_2 + 4);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0057629c;
        }
        *(undefined1 **)((int)this + 8) = puVar4;
        *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(this_val_2 + 8);
        *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(this_val_2 + 0xc);
        puVar4[-1] = puVar4[-1] + '\x01';
        goto LAB_00498ec8;
      }
    }
    cVar2 = FUN_00402a00(this_val_3,i,1);
    if (cVar2 != '\0') {
      puVar6 = *(undefined4 **)(this_val_2 + 4);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0057629c;
      }
      puVar7 = *(undefined4 **)((int)this + 8);
      for (j = i >> 2; j != 0; j = j - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (j = i & 3; j != 0; j = j - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      FUN_004029e0(this_val_3,i);
    }
  }
LAB_00498ec8:
  if (!bVar1) {
    i = 0xffffffff;
    pcVar3 = s__ini_005ae48c;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    i = ~i - 1;
    if (-*(int *)((int)this + 0xc) - 1U <= i) {
      FUN_0054b1b4();
    }
    if (i != 0) {
      iVar5 = *(int *)((int)this + 0xc) + i;
      cVar2 = FUN_00402a00(this_val_3,iVar5,0);
      if (cVar2 != '\0') {
        pcVar3 = s__ini_005ae48c;
        pcVar8 = (char *)(*(int *)((int)this + 0xc) + *(int *)((int)this + 8));
        for (j = i >> 2; j != 0; j = j - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar8 = pcVar8 + 4;
        }
        for (i = i & 3; i != 0; i = i - 1) {
          *pcVar8 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar8 = pcVar8 + 1;
        }
        *(int *)((int)this + 0xc) = iVar5;
        *(undefined1 *)(*(int *)((int)this + 8) + iVar5) = 0;
      }
    }
  }
  FUN_00499220(this,param_4);
  FUN_004990d0(this,param_3);
  *(undefined1 *)((int)this + 0x35) = param_5;
  *(void **)((int)this + 0x38) = this_val;
  FUN_0049bd30(this_val,this);
  ExceptionList = pvStack_c;
  return;
}


/* ==== 00498f80 FUN_00498f80 ==== */

/* WARNING: Removing unreachable block (ram,0x00498f9a) */

void __thiscall FUN_00498f80(void *this,int param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  uint i;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int this_val;
  
  this_val = (int)this + 4;
  uVar1 = *(uint *)(param_2 + 8);
  if (this_val == param_2) {
    if (*(uint *)((int)this + 0xc) < uVar1) {
      FUN_0054b29c();
    }
    FUN_00402c30(this_val);
    iVar3 = *(int *)((int)this + 0xc) - uVar1;
    iVar7 = -1;
    if (iVar3 != -1) {
      iVar7 = iVar3;
    }
    if (iVar7 != 0) {
      iVar5 = uVar1 + *(int *)((int)this + 8);
      FUN_005580e0(iVar5,iVar5 + iVar7,iVar3 - iVar7);
      iVar7 = *(int *)((int)this + 0xc) - iVar7;
      cVar2 = FUN_00402a00(this_val,iVar7,0);
      if (cVar2 != '\0') {
        FUN_004029e0(this_val,iVar7);
      }
    }
    FUN_00402c30(this_val);
    return;
  }
  if (uVar1 != 0) {
    puVar4 = *(undefined1 **)(param_2 + 4);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0057629c;
    }
    if ((byte)puVar4[-1] < 0xfe) {
      this_val = *(int *)((int)this + 8);
      if (this_val != 0) {
        cVar2 = *(char *)(this_val + -1);
        if ((cVar2 == '\0') || (cVar2 == -1)) {
          FUN_0054b339((char *)(this_val + -1));
        }
        else {
          *(char *)(this_val + -1) = cVar2 + -1;
        }
      }
      *(undefined4 *)((int)this + 8) = 0;
      *(undefined4 *)((int)this + 0xc) = 0;
      *(undefined4 *)((int)this + 0x10) = 0;
      puVar4 = *(undefined1 **)(param_2 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      *(undefined1 **)((int)this + 8) = puVar4;
      *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_2 + 0xc);
      puVar4[-1] = puVar4[-1] + '\x01';
      return;
    }
  }
  cVar2 = FUN_00402a00(this_val,uVar1,1);
  if (cVar2 != '\0') {
    puVar6 = (undefined4 *)&DAT_0057629c;
    if (*(undefined4 **)(param_2 + 4) != (undefined4 *)0x0) {
      puVar6 = *(undefined4 **)(param_2 + 4);
    }
    puVar8 = *(undefined4 **)((int)this + 8);
    for (i = uVar1 >> 2; i != 0; i = i - 1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    for (i = uVar1 & 3; i != 0; i = i - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    *(uint *)((int)this + 0xc) = uVar1;
    *(undefined1 *)(*(int *)((int)this + 8) + uVar1) = 0;
  }
  return;
}


/* ==== 004990c0 FUN_004990c0 ==== */

int __thiscall FUN_004990c0(void *this)

{
  return (int)this + 4;
}


/* ==== 004990d0 FUN_004990d0 ==== */

/* WARNING: Removing unreachable block (ram,0x004990ea) */

void __thiscall FUN_004990d0(void *this,int param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  uint i;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int this_val;
  
  this_val = (int)this + 0x14;
  uVar1 = *(uint *)(param_2 + 8);
  if (this_val == param_2) {
    if (*(uint *)((int)this + 0x1c) < uVar1) {
      FUN_0054b29c();
    }
    FUN_00402c30(this_val);
    iVar3 = *(int *)((int)this + 0x1c) - uVar1;
    iVar7 = -1;
    if (iVar3 != -1) {
      iVar7 = iVar3;
    }
    if (iVar7 != 0) {
      iVar5 = uVar1 + *(int *)((int)this + 0x18);
      FUN_005580e0(iVar5,iVar5 + iVar7,iVar3 - iVar7);
      iVar7 = *(int *)((int)this + 0x1c) - iVar7;
      cVar2 = FUN_00402a00(this_val,iVar7,0);
      if (cVar2 != '\0') {
        FUN_004029e0(this_val,iVar7);
      }
    }
    FUN_00402c30(this_val);
    return;
  }
  if (uVar1 != 0) {
    puVar4 = *(undefined1 **)(param_2 + 4);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0057629c;
    }
    if ((byte)puVar4[-1] < 0xfe) {
      this_val = *(int *)((int)this + 0x18);
      if (this_val != 0) {
        cVar2 = *(char *)(this_val + -1);
        if ((cVar2 == '\0') || (cVar2 == -1)) {
          FUN_0054b339((char *)(this_val + -1));
        }
        else {
          *(char *)(this_val + -1) = cVar2 + -1;
        }
      }
      *(undefined4 *)((int)this + 0x18) = 0;
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined4 *)((int)this + 0x20) = 0;
      puVar4 = *(undefined1 **)(param_2 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      *(undefined1 **)((int)this + 0x18) = puVar4;
      *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_2 + 0xc);
      puVar4[-1] = puVar4[-1] + '\x01';
      return;
    }
  }
  cVar2 = FUN_00402a00(this_val,uVar1,1);
  if (cVar2 != '\0') {
    puVar6 = (undefined4 *)&DAT_0057629c;
    if (*(undefined4 **)(param_2 + 4) != (undefined4 *)0x0) {
      puVar6 = *(undefined4 **)(param_2 + 4);
    }
    puVar8 = *(undefined4 **)((int)this + 0x18);
    for (i = uVar1 >> 2; i != 0; i = i - 1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    for (i = uVar1 & 3; i != 0; i = i - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    *(uint *)((int)this + 0x1c) = uVar1;
    *(undefined1 *)(*(int *)((int)this + 0x18) + uVar1) = 0;
  }
  return;
}


/* ==== 00499220 FUN_00499220 ==== */

/* WARNING: Removing unreachable block (ram,0x0049923a) */

void __thiscall FUN_00499220(void *this,int param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  uint i;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int this_val;
  
  this_val = (int)this + 0x24;
  uVar1 = *(uint *)(param_2 + 8);
  if (this_val == param_2) {
    if (*(uint *)((int)this + 0x2c) < uVar1) {
      FUN_0054b29c();
    }
    FUN_00402c30(this_val);
    iVar3 = *(int *)((int)this + 0x2c) - uVar1;
    iVar7 = -1;
    if (iVar3 != -1) {
      iVar7 = iVar3;
    }
    if (iVar7 != 0) {
      iVar5 = uVar1 + *(int *)((int)this + 0x28);
      FUN_005580e0(iVar5,iVar5 + iVar7,iVar3 - iVar7);
      iVar7 = *(int *)((int)this + 0x2c) - iVar7;
      cVar2 = FUN_00402a00(this_val,iVar7,0);
      if (cVar2 != '\0') {
        FUN_004029e0(this_val,iVar7);
      }
    }
    FUN_00402c30(this_val);
    return;
  }
  if (uVar1 != 0) {
    puVar4 = *(undefined1 **)(param_2 + 4);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0057629c;
    }
    if ((byte)puVar4[-1] < 0xfe) {
      this_val = *(int *)((int)this + 0x28);
      if (this_val != 0) {
        cVar2 = *(char *)(this_val + -1);
        if ((cVar2 == '\0') || (cVar2 == -1)) {
          FUN_0054b339((char *)(this_val + -1));
        }
        else {
          *(char *)(this_val + -1) = cVar2 + -1;
        }
      }
      *(undefined4 *)((int)this + 0x28) = 0;
      *(undefined4 *)((int)this + 0x2c) = 0;
      *(undefined4 *)((int)this + 0x30) = 0;
      puVar4 = *(undefined1 **)(param_2 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      *(undefined1 **)((int)this + 0x28) = puVar4;
      *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_2 + 0xc);
      puVar4[-1] = puVar4[-1] + '\x01';
      return;
    }
  }
  cVar2 = FUN_00402a00(this_val,uVar1,1);
  if (cVar2 != '\0') {
    puVar6 = (undefined4 *)&DAT_0057629c;
    if (*(undefined4 **)(param_2 + 4) != (undefined4 *)0x0) {
      puVar6 = *(undefined4 **)(param_2 + 4);
    }
    puVar8 = *(undefined4 **)((int)this + 0x28);
    for (i = uVar1 >> 2; i != 0; i = i - 1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    for (i = uVar1 & 3; i != 0; i = i - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    *(uint *)((int)this + 0x2c) = uVar1;
    *(undefined1 *)(*(int *)((int)this + 0x28) + uVar1) = 0;
  }
  return;
}


/* ==== 00499360 FUN_00499360 ==== */

int __thiscall FUN_00499360(void *this)

{
  return (int)this + 0x24;
}


/* ==== 00499370 FUN_00499370 ==== */

undefined4 __thiscall FUN_00499370(void *this)

{
  return *(undefined4 *)((int)this + 0x38);
}


/* ==== 00499380 FUN_00499380 ==== */

void __thiscall FUN_00499380(void *this,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x38) = param_2;
  return;
}


/* ==== 00499390 FUN_00499390 ==== */

void __thiscall FUN_00499390(void *this,undefined1 *param_2)

{
  *(undefined1 *)((int)this + 0x34) = *param_2;
  return;
}


/* ==== 004993a0 FUN_004993a0 ==== */

undefined1 __thiscall FUN_004993a0(void *this)

{
  return *(undefined1 *)((int)this + 0x34);
}


/* ==== 004993b0 FUN_004993b0 ==== */

undefined1 __thiscall FUN_004993b0(void *this)

{
  return *(undefined1 *)((int)this + 0x35);
}


/* ==== 004993d0 FUN_004993d0 ==== */

/* WARNING: Removing unreachable block (ram,0x00499473) */

void __thiscall FUN_004993d0(void *this)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint i;
  uint j;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e543;
  local_c = ExceptionList;
  i = 0xffffffff;
  pcVar5 = (char *)&DAT_007127f8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = 0;
  ExceptionList = &local_c;
  cVar1 = FUN_00402a00(local_1c,i,1);
  if (cVar1 != '\0') {
    puVar4 = &DAT_007127f8;
    puVar6 = local_18;
    for (j = i >> 2; j != 0; j = j - 1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(undefined1 *)((int)local_18 + i) = 0;
    local_14 = i;
  }
  local_4 = 0;
  if (*(int *)((int)this + 0x38) != 0) {
    puVar2 = (undefined1 *)FUN_0049bef0();
    i = *(uint *)(puVar2 + 8);
    if (local_1c == puVar2) {
      FUN_0040f800(local_1c,i,0xffffffff);
      FUN_0040f800(local_1c,0,0);
    }
    else {
      if (i != 0) {
        puVar3 = *(undefined1 **)(puVar2 + 4);
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_0057629c;
        }
        if ((byte)puVar3[-1] < 0xfe) {
          FUN_004028f0(local_1c,1);
          local_18 = *(undefined4 **)(puVar2 + 4);
          if (local_18 == (undefined4 *)0x0) {
            local_18 = (undefined4 *)&DAT_0057629c;
          }
          local_14 = *(uint *)(puVar2 + 8);
          local_10 = *(undefined4 *)(puVar2 + 0xc);
          *(char *)((int)local_18 + -1) = *(char *)((int)local_18 + -1) + '\x01';
          goto LAB_0049951f;
        }
      }
      cVar1 = FUN_00402a00(local_1c,i,1);
      if (cVar1 != '\0') {
        puVar4 = *(undefined4 **)(puVar2 + 4);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)&DAT_0057629c;
        }
        puVar6 = local_18;
        for (j = i >> 2; j != 0; j = j - 1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        }
        for (j = i & 3; j != 0; j = j - 1) {
          *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        FUN_004029e0(local_1c,i);
      }
    }
  }
LAB_0049951f:
  FUN_00499580(this,local_1c);
  if (local_18 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)local_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)((int)local_18 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339((undefined1 *)((int)local_18 + -1));
  }
  ExceptionList = local_c;
  return;
}


/* ==== 00499580 FUN_00499580 ==== */

void __thiscall FUN_00499580(void *this,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  int this_val;
  LPCSTR lpAppName;
  BOOL BVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint i;
  LPCSTR lpKeyName;
  LPCSTR lpString;
  undefined4 unaff_EBX;
  char *pcVar6;
  LPCSTR lpFileName;
  int iStack_a4;
  int local_a0 [5];
  undefined1 local_8c [16];
  undefined1 local_7c [16];
  undefined1 auStack_6c [12];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e590;
  local_c = ExceptionList;
  this_val = (int)this + 4;
  ExceptionList = &local_c;
  local_a0[0] = this_val;
  iVar2 = FUN_00483e70(this_val,&DAT_007127fc);
  if (iVar2 != 0) {
    iVar2 = FUN_00483e70((int)this + 0x24,&DAT_00712800);
    if (iVar2 == 0) {
      i = 0xffffffff;
      pcVar6 = s_Undefined_005ae494;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_00402940((int)this + 0x24,s_Undefined_005ae494,~i - 1);
    }
    i = 0xffffffff;
    pcVar6 = &DAT_00712804;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar2 = FUN_0040fc80((int)this + 0x14,0,*(undefined4 *)((int)this + 0x1c),&DAT_00712804,~i - 1);
    if (iVar2 == 0) {
      i = 0xffffffff;
      pcVar6 = s_Undefined_005ae4a0;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_00402940((int)this + 0x14,s_Undefined_005ae4a0,~i - 1);
    }
    this_val = FUN_0047c9a0(local_7c,param_2,this_val);
    local_4 = 0;
    lpFileName = "";
    if (*(LPCSTR *)(this_val + 4) != (LPCSTR)0x0) {
      lpFileName = *(LPCSTR *)(this_val + 4);
    }
    this_val = (**(code **)(*(int *)this + 8))(local_8c);
    lpString = "";
    if (*(LPCSTR *)(this_val + 4) != (LPCSTR)0x0) {
      lpString = *(LPCSTR *)(this_val + 4);
    }
    lpKeyName = *(LPCSTR *)((int)this + 0x28);
    if (lpKeyName == (LPCSTR)0x0) {
      lpKeyName = "";
    }
    lpAppName = *(LPCSTR *)((int)this + 0x18);
    if (lpAppName == (LPCSTR)0x0) {
      lpAppName = "";
    }
    BVar3 = WritePrivateProfileStringA(lpAppName,lpKeyName,lpString,lpFileName);
    FUN_004028f0(local_8c,1);
    local_4 = 0xffffffff;
    FUN_004028f0(local_7c,1);
    if (BVar3 == 0) {
      this_val = (**(code **)(*(int *)this + 8))(auStack_6c);
      puStack_8 = (undefined1 *)0x1;
      puVar4 = (undefined1 *)
               FUN_004797e0(auStack_50,auStack_50,s_Couldn_t_write_>_005ae4c8,this_val);
      puStack_8._0_1_ = 2;
      puVar4 = (undefined1 *)FUN_004796b0(auStack_30,puVar4,s_<_to_file_005ae4bc);
      puStack_8._0_1_ = 3;
      puVar4 = (undefined1 *)FUN_0047c9a0(auStack_60,puVar4,(int)param_2);
      puStack_8._0_1_ = 4;
      puVar4 = (undefined1 *)FUN_0047c9a0(auStack_40,puVar4,iStack_a4);
      puStack_8._0_1_ = 5;
      uVar5 = FUN_004796b0(auStack_20,puVar4,s_in_WriteToIni_005ae4ac);
      local_a0[0] = CONCAT31(local_a0[0]._1_3_,(char)((uint)unaff_EBX >> 0x18));
      puStack_8._0_1_ = 6;
      FUN_004028f0(local_a0,0);
      puStack_8._0_1_ = 7;
      FUN_004093c0(local_a0,uVar5,0,0xffffffff);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,6);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_a0,&DAT_005828d8);
    }
  }
  ExceptionList = local_c;
  return;
}


/* ==== 004997c0 FUN_004997c0 ==== */

/* WARNING: Removing unreachable block (ram,0x00499863) */

undefined4 __thiscall FUN_004997c0(void *this)

{
  char cVar1;
  undefined1 extraout_AL;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 uVar4;
  uint i;
  uint j;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e5a2;
  local_c = ExceptionList;
  i = 0xffffffff;
  pcVar6 = (char *)&DAT_00712808;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = 0;
  ExceptionList = &local_c;
  cVar1 = FUN_00402a00(local_1c,i,1);
  if (cVar1 != '\0') {
    puVar5 = &DAT_00712808;
    puVar7 = local_18;
    for (j = i >> 2; j != 0; j = j - 1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    *(undefined1 *)((int)local_18 + i) = 0;
    local_14 = i;
  }
  local_4 = 0;
  if (*(int *)((int)this + 0x38) != 0) {
    puVar2 = (undefined1 *)FUN_0049bef0();
    i = *(uint *)(puVar2 + 8);
    if (local_1c == puVar2) {
      FUN_0040f800(local_1c,i,0xffffffff);
      FUN_0040f800(local_1c,0,0);
    }
    else {
      if (i != 0) {
        puVar3 = *(undefined1 **)(puVar2 + 4);
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_0057629c;
        }
        if ((byte)puVar3[-1] < 0xfe) {
          FUN_004028f0(local_1c,1);
          local_18 = *(undefined4 **)(puVar2 + 4);
          if (local_18 == (undefined4 *)0x0) {
            local_18 = (undefined4 *)&DAT_0057629c;
          }
          local_14 = *(uint *)(puVar2 + 8);
          local_10 = *(undefined4 *)(puVar2 + 0xc);
          *(char *)((int)local_18 + -1) = *(char *)((int)local_18 + -1) + '\x01';
          goto LAB_0049990f;
        }
      }
      cVar1 = FUN_00402a00(local_1c,i,1);
      if (cVar1 != '\0') {
        puVar5 = *(undefined4 **)(puVar2 + 4);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)&DAT_0057629c;
        }
        puVar7 = local_18;
        for (j = i >> 2; j != 0; j = j - 1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        for (j = i & 3; j != 0; j = j - 1) {
          *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        FUN_004029e0(local_1c,i);
      }
    }
  }
LAB_0049990f:
  FUN_00499960(this,local_1c);
  uVar4 = extraout_var;
  if (local_18 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((undefined1 *)((int)local_18 + -1));
      uVar4 = extraout_var_00;
    }
    else {
      *(char *)((int)local_18 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return CONCAT31(uVar4,extraout_AL);
}


/* ==== 00499960 FUN_00499960 ==== */

undefined4 __thiscall FUN_00499960(void *this,undefined1 *param_2)

{
  char cVar1;
  int j;
  LPCSTR lpAppName;
  DWORD DVar2;
  uint i;
  LPCSTR lpKeyName;
  uint k;
  LPCSTR lpFileName;
  CHAR *pCVar3;
  char *pcVar4;
  CHAR *pCVar5;
  undefined1 local_160 [4];
  CHAR *local_15c;
  uint local_158;
  undefined4 local_154;
  int *local_150;
  undefined1 local_14c [4];
  int local_148;
  CHAR local_13c [304];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e5b7;
  local_c = ExceptionList;
  i = 0xffffffff;
  pcVar4 = &DAT_0071280c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  local_150 = this;
  j = FUN_0040fc80((int)this + 4,0,*(undefined4 *)((int)this + 0xc),&DAT_0071280c,~i - 1);
  if (j != 0) {
    j = FUN_0047c9a0(local_14c,param_2,(int)this + 4);
    lpFileName = "";
    if (*(LPCSTR *)(j + 4) != (LPCSTR)0x0) {
      lpFileName = *(LPCSTR *)(j + 4);
    }
    lpKeyName = *(LPCSTR *)((int)this + 0x28);
    if (lpKeyName == (LPCSTR)0x0) {
      lpKeyName = "";
    }
    lpAppName = *(LPCSTR *)((int)this + 0x18);
    if (lpAppName == (LPCSTR)0x0) {
      lpAppName = "";
    }
    DVar2 = GetPrivateProfileStringA(lpAppName,lpKeyName,&DAT_00712810,local_13c,300,lpFileName);
    if (local_148 != 0) {
      cVar1 = *(char *)(local_148 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(local_148 + -1));
      }
      else {
        *(char *)(local_148 + -1) = cVar1 + -1;
      }
    }
    if (DVar2 != 0) {
      if (*(char *)((int)this + 0x34) != '\0') {
        FUN_005690b0();
      }
      j = 0;
      do {
        if (local_13c[j] == '\0') break;
        if (local_13c[j] == ';') {
          local_13c[j] = '\0';
          break;
        }
        j = j + 1;
      } while (j < 300);
      if (0 < j) {
        i = 0xffffffff;
        pcVar4 = local_13c;
        do {
          if (i == 0) break;
          i = i - 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        i = ~i - 1;
        local_15c = (CHAR *)0x0;
        local_158 = 0;
        local_154 = 0;
        cVar1 = FUN_00402a00(local_160,i,1);
        if (cVar1 != '\0') {
          pCVar3 = local_13c;
          pCVar5 = local_15c;
          for (k = i >> 2; k != 0; k = k - 1) {
            *(undefined4 *)pCVar5 = *(undefined4 *)pCVar3;
            pCVar3 = pCVar3 + 4;
            pCVar5 = pCVar5 + 4;
          }
          for (k = i & 3; k != 0; k = k - 1) {
            *pCVar5 = *pCVar3;
            pCVar3 = pCVar3 + 1;
            pCVar5 = pCVar5 + 1;
          }
          local_15c[i] = '\0';
          local_158 = i;
        }
        local_4 = 0;
        (**(code **)(*local_150 + 4))(local_160);
        if (local_15c != (CHAR *)0x0) {
          cVar1 = local_15c[-1];
          if ((cVar1 != '\0') && (cVar1 != -1)) {
            local_15c[-1] = cVar1 + -1;
            ExceptionList = local_c;
            return 1;
          }
          FUN_0054b339(local_15c + -1);
        }
        ExceptionList = local_c;
        return 1;
      }
    }
  }
  ExceptionList = local_c;
  return 0;
}


/* ==== 00499b60 FUN_00499b60 ==== */

void * __thiscall FUN_00499b60(void *this,byte param_2)

{
  FUN_00498c10();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 00499b80 FUN_00499b80 ==== */

/* WARNING: Removing unreachable block (ram,0x00499ba8) */

void * __thiscall FUN_00499b80(void *this,undefined1 *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  uint i;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  *(undefined1 *)this = *param_2;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar1 = *(uint *)(param_2 + 8);
  if (this == param_2) {
    if (uVar1 != 0) {
      FUN_0054b29c();
    }
    FUN_00402c30(this);
    iVar3 = *(int *)((int)this + 8) - uVar1;
    iVar6 = -1;
    if (iVar3 != -1) {
      iVar6 = iVar3;
    }
    if (iVar6 != 0) {
      iVar5 = uVar1 + *(int *)((int)this + 4);
      FUN_005580e0(iVar5,iVar5 + iVar6,iVar3 - iVar6);
      iVar6 = *(int *)((int)this + 8) - iVar6;
      cVar2 = FUN_00402a00(this,iVar6,0);
      if (cVar2 != '\0') {
        FUN_004029e0(this,iVar6);
      }
    }
    FUN_00402c30(this);
    return this;
  }
  if (uVar1 != 0) {
    puVar4 = *(undefined1 **)(param_2 + 4);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0057629c;
    }
    if ((byte)puVar4[-1] < 0xfe) {
      FUN_004028f0(this,1);
      puVar4 = *(undefined1 **)(param_2 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      *(undefined1 **)((int)this + 4) = puVar4;
      *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_2 + 0xc);
      puVar4[-1] = puVar4[-1] + '\x01';
      return this;
    }
  }
  cVar2 = FUN_00402a00(this,uVar1,1);
  if (cVar2 != '\0') {
    puVar7 = *(undefined4 **)(param_2 + 4);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)&DAT_0057629c;
    }
    puVar8 = *(undefined4 **)((int)this + 4);
    for (i = uVar1 >> 2; i != 0; i = i - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (i = uVar1 & 3; i != 0; i = i - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    *(uint *)((int)this + 8) = uVar1;
    *(undefined1 *)(*(int *)((int)this + 4) + uVar1) = 0;
  }
  return this;
}


/* ==== 00499ca0 FUN_00499ca0 ==== */

void * __thiscall FUN_00499ca0(void *this)

{
  FUN_00498a90();
  *(undefined ***)this = &PTR_FUN_00577140;
  return this;
}


/* ==== 00499cc0 FUN_00499cc0 ==== */

void * __thiscall
FUN_00499cc0(void *this,void *this_val,int this_val_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined1 param_6)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e5d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00498ad0(this,this_val,this_val_2,param_3,param_4,param_6);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00577140;
  FUN_00499da0(this,param_5);
  ExceptionList = local_c;
  return this;
}


/* ==== 00499d30 FUN_00499d30 ==== */

void * __thiscall
FUN_00499d30(void *this,void *this_val,int this_val_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined1 param_6)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e5ea;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00498b70(this,this_val,this_val_2,param_3,param_4,param_6);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00577140;
  FUN_00499da0(this,param_5);
  ExceptionList = local_c;
  return this;
}


/* ==== 00499da0 FUN_00499da0 ==== */

void __thiscall FUN_00499da0(void *this,undefined4 param_2)

{
  undefined4 this_val;
  undefined1 local_11;
  void *this_val_2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e5ff;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_val_2 = operator_new(0x20);
  local_4 = 0;
  if (this_val_2 == (void *)0x0) {
    this_val = 0;
  }
  else {
    this_val = FUN_0049bae0(this_val_2);
  }
  local_4 = 0xffffffff;
  *(undefined4 *)((int)this + 0x3c) = this_val;
  this_val = FUN_00499370(this);
  this_val = FUN_0049bef0(this_val);
  FUN_0049be30(*(undefined4 *)((int)this + 0x3c),this_val);
  local_11 = 0;
  FUN_00499390(this,&local_11);
  CRegVarArray_Parse(this,param_2);
  ExceptionList = local_c;
  return;
}


/* ==== 00499e40 FUN_00499e40 ==== */

void __thiscall FUN_00499e40(void *this)

{
  char cVar1;
  uint uVar2;
  int this_val;
  int iVar3;
  uint j;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  byte *pbVar8;
  bool bVar9;
  bool bVar10;
  int i;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056e611;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &PTR_FUN_00577140;
  local_4 = 0;
  i = 0;
  this_val = FUN_0049bf00(*(undefined4 *)((int)this + 0x3c));
  if (0 < this_val) {
    do {
      this_val = FUN_0049bd10(i);
      if (this_val != 0) {
        iVar3 = FUN_004990c0(this_val);
        j = 0xffffffff;
        pcVar7 = &DAT_00712814;
        do {
          if (j == 0) break;
          j = j - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar2 = *(uint *)(iVar3 + 8);
        uVar4 = ~j - 1;
        j = uVar2;
        if (uVar4 <= uVar2) {
          j = uVar4;
        }
        bVar9 = false;
        iVar5 = 0;
        bVar10 = true;
        pbVar6 = *(byte **)(iVar3 + 4);
        pbVar8 = &DAT_00712814;
        do {
          if (j == 0) break;
          j = j - 1;
          bVar9 = *pbVar6 < *pbVar8;
          bVar10 = *pbVar6 == *pbVar8;
          pbVar6 = pbVar6 + 1;
          pbVar8 = pbVar8 + 1;
        } while (bVar10);
        if (!bVar10) {
          iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        }
        if (((iVar5 == 0) && (uVar4 <= uVar2)) && (uVar2 == uVar4)) {
          FUN_0049bda0(*(undefined4 *)((int)this + 0x3c),this_val);
        }
        else {
          FUN_00499380(this_val,0);
        }
      }
      i = i + 1;
      this_val = FUN_0049bf00(*(undefined4 *)((int)this + 0x3c));
    } while (i < this_val);
  }
  if (*(undefined4 **)((int)this + 0x3c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x3c))(1);
  }
  *(undefined4 *)((int)this + 0x3c) = 0;
  local_4 = 0xffffffff;
  FUN_00498c10(this);
  ExceptionList = pvStack_c;
  return;
}


/* ==== 00499f50 CRegVarArray_Parse ==== */

void __thiscall CRegVarArray_Parse(void *this,void *param_2)

{
  char cVar1;
  undefined1 *this_val;
  undefined4 this_val_2;
  void *this_val_3;
  int i;
  uint uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined1 *in_stack_fffffe88;
  undefined4 *in_stack_fffffe8c;
  undefined1 local_151;
  uint local_150;
  void *this_val_4;
  void *local_148;
  void *local_144;
  undefined1 local_140 [4];
  undefined4 *local_13c;
  undefined1 local_130 [4];
  undefined4 *local_12c;
  undefined4 local_120;
  undefined4 *local_11c;
  undefined1 local_110 [4];
  undefined4 *local_10c;
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined4 local_b0 [4];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined4 local_60 [4];
  undefined1 local_50 [16];
  undefined1 *local_40;
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  uint j;
  uint k;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e7f1;
  local_c = ExceptionList;
  uVar2 = 0;
  local_150 = 0;
  local_148 = (void *)0x0;
  pvVar3 = this;
  ExceptionList = &local_c;
  local_144 = this;
  if (*(int *)((int)param_2 + 8) != 0) {
    do {
      if (*(int *)((int)param_2 + 4) == 0) {
        this_val = &DAT_0057629c;
      }
      else {
        this_val = (undefined1 *)(*(int *)((int)param_2 + 4) + (int)local_148);
        this = local_148;
      }
      switch(*this_val) {
      case 0x42:
      case 0x62:
        this_val_4 = operator_new(0x40);
        local_4 = 0x18;
        if (this_val_4 == (void *)0x0) {
          this_val_4 = (void *)0x0;
        }
        else {
          local_130[0] = local_151;
          FUN_004028f0(local_130);
          j = 0xffffffff;
          pcVar5 = (char *)&DAT_00712840;
          do {
            if (j == 0) break;
            j = j - 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          cVar1 = FUN_00402a00(local_130);
          if (cVar1 != '\0') {
            puVar4 = &DAT_00712840;
            puVar6 = local_12c;
            for (k = ~j - 1 >> 2; k != 0; k = k - 1) {
              *puVar6 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar6 = puVar6 + 1;
            }
            for (j = ~j - 1 & 3; j != 0; j = j - 1) {
              *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
              puVar4 = (undefined4 *)((int)puVar4 + 1);
              puVar6 = (undefined4 *)((int)puVar6 + 1);
            }
            FUN_004029e0(local_130);
          }
          local_120._0_1_ = local_151;
          local_4 = CONCAT31(local_4._1_3_,0x19);
          local_150 = uVar2 | 0x200;
          FUN_004028f0(&local_120);
          j = 0xffffffff;
          pcVar5 = (char *)&DAT_00712844;
          do {
            if (j == 0) break;
            j = j - 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          cVar1 = FUN_00402a00(&local_120);
          if (cVar1 != '\0') {
            puVar4 = &DAT_00712844;
            puVar6 = local_11c;
            for (k = ~j - 1 >> 2; k != 0; k = k - 1) {
              *puVar6 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar6 = puVar6 + 1;
            }
            for (j = ~j - 1 & 3; j != 0; j = j - 1) {
              *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
              puVar4 = (undefined4 *)((int)puVar4 + 1);
              puVar6 = (undefined4 *)((int)puVar6 + 1);
            }
            FUN_004029e0(&local_120);
          }
          j = CONCAT11((char)((uVar2 | 0x200) >> 8),(char)uVar2) | 0x400;
          local_4 = 0x1a;
          local_80[0] = local_151;
          local_150 = j;
          FUN_004028f0(local_80);
          i = -1;
          pcVar5 = &DAT_005ae4f4;
          do {
            if (i == 0) break;
            i = i + -1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          FUN_00402940(local_80);
          uVar2 = CONCAT11((char)(j >> 8),(char)uVar2) | 0x800;
          in_stack_fffffe8c = &local_120;
          in_stack_fffffe88 = local_80;
          local_4 = 0x1b;
          local_150 = uVar2;
          this_val_4 = (void *)FUN_0049b370(this_val_4,*(void **)((int)local_144 + 0x3c),
                                            (int)in_stack_fffffe88,in_stack_fffffe8c,local_130,0,1);
        }
        local_4 = 0x1d;
        if ((uVar2 & 0x800) != 0) {
          uVar2 = uVar2 & 0xfffff7ff;
          local_150 = uVar2;
          FUN_004028f0(local_80);
        }
        local_4 = 0x1c;
        if ((uVar2 & 0x400) != 0) {
          uVar2 = uVar2 & 0xfffffbff;
          local_150 = uVar2;
          FUN_004028f0(&local_120);
        }
        local_4 = 0xffffffff;
        if ((uVar2 & 0x200) != 0) {
          uVar2 = uVar2 & 0xfffffdff;
          FUN_004028f0(local_130);
        }
        local_110[0] = local_151;
        FUN_004028f0(local_110);
        j = 0xffffffff;
        pcVar5 = (char *)&DAT_00712848;
        do {
          if (j == 0) break;
          j = j - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        cVar1 = FUN_00402a00(local_110);
        if (cVar1 != '\0') {
          puVar4 = &DAT_00712848;
          puVar6 = local_10c;
          for (k = ~j - 1 >> 2; k != 0; k = k - 1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar6 = puVar6 + 1;
          }
          for (j = ~j - 1 & 3; j != 0; j = j - 1) {
            *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
            puVar4 = (undefined4 *)((int)puVar4 + 1);
            puVar6 = (undefined4 *)((int)puVar6 + 1);
          }
          FUN_004029e0(local_110);
        }
        local_4 = 0x1f;
        FUN_00498f80(this_val_4);
        this_val = local_110;
        goto LAB_0049a856;
      default:
        this_val = (undefined1 *)
                   FUN_004797e0(this,local_2c,s_Unknown_element_in_>_005ae524,(int)param_2);
        local_4 = 0x20;
        FUN_004796b0(local_1c,this_val,s_<_while_parsing_in_CRegVarArray:_005ae4fc);
        local_3c[0] = local_151;
        local_4._0_1_ = 0x21;
        FUN_004028f0(local_3c);
        local_4._0_1_ = 0x22;
        FUN_004093c0(local_3c);
        local_4 = CONCAT31(local_4._1_3_,0x21);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8();
      case 0x46:
      case 0x66:
        this_val_3 = operator_new(0x40);
        local_4 = 8;
        this_val_4 = this_val_3;
        if (this_val_3 == (void *)0x0) {
          this_val_2 = 0;
        }
        else {
          local_c0[0] = local_151;
          FUN_004028f0(local_c0);
          i = -1;
          pcVar5 = &DAT_00712824;
          do {
            if (i == 0) break;
            i = i + -1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          FUN_00402940(local_c0);
          local_150 = uVar2 | 8;
          local_60[0]._0_1_ = local_151;
          local_4 = CONCAT31(local_4._1_3_,9);
          FUN_004028f0(local_60);
          i = -1;
          pcVar5 = &DAT_00712828;
          do {
            if (i == 0) break;
            i = i + -1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          FUN_00402940(local_60);
          local_150 = uVar2 | 0x18;
          local_4 = 10;
          local_a0[0] = local_151;
          FUN_004028f0(local_a0);
          i = -1;
          pcVar5 = &DAT_005ae4e4;
          do {
            if (i == 0) break;
            i = i + -1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          FUN_00402940(local_a0);
          uVar2 = uVar2 | 0x38;
          in_stack_fffffe8c = local_60;
          in_stack_fffffe88 = local_a0;
          local_4 = 0xb;
          local_150 = uVar2;
          this_val_2 = FUN_0049b700(this_val_3,*(void **)((int)pvVar3 + 0x3c),(int)in_stack_fffffe88
                                    ,in_stack_fffffe8c,local_c0,0,1);
        }
        local_4 = 0xd;
        if ((uVar2 & 0x20) != 0) {
          uVar2 = uVar2 & 0xffffffdf;
          local_150 = uVar2;
          FUN_004028f0(local_a0);
        }
        local_4 = 0xc;
        if ((uVar2 & 0x10) != 0) {
          uVar2 = uVar2 & 0xffffffef;
          local_150 = uVar2;
          FUN_004028f0(local_60);
        }
        local_4 = 0xffffffff;
        if ((uVar2 & 8) != 0) {
          uVar2 = uVar2 & 0xfffffff7;
          FUN_004028f0(local_c0);
        }
        local_f0[0] = local_151;
        FUN_004028f0(local_f0);
        i = -1;
        pcVar5 = &DAT_0071282c;
        do {
          if (i == 0) break;
          i = i + -1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FUN_00402940(local_f0);
        local_4 = 0xf;
        FUN_00498f80(this_val_2);
        local_4 = 0xffffffff;
        FUN_004028f0(local_f0);
        break;
      case 0x49:
      case 0x69:
        this_val_3 = operator_new(0x40);
        local_4 = 0;
        this_val_4 = this_val_3;
        if (this_val_3 == (void *)0x0) {
          this_val_2 = 0;
        }
        else {
          local_100[0] = local_151;
          FUN_004028f0(local_100);
          i = -1;
          pcVar5 = &DAT_00712818;
          do {
            if (i == 0) break;
            i = i + -1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          FUN_00402940(local_100);
          local_150 = uVar2 | 1;
          local_b0[0]._0_1_ = local_151;
          local_4 = CONCAT31(local_4._1_3_,1);
          FUN_004028f0(local_b0);
          i = -1;
          pcVar5 = &DAT_0071281c;
          do {
            if (i == 0) break;
            i = i + -1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          FUN_00402940(local_b0);
          local_150 = uVar2 | 3;
          local_4 = 2;
          local_e0[0] = local_151;
          FUN_004028f0(local_e0);
          i = -1;
          pcVar5 = &DAT_005ae4dc;
          do {
            if (i == 0) break;
            i = i + -1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          FUN_00402940(local_e0);
          uVar2 = uVar2 | 7;
          in_stack_fffffe8c = local_b0;
          in_stack_fffffe88 = local_e0;
          local_4 = 3;
          local_150 = uVar2;
          this_val_2 = FUN_0049b940(this_val_3,*(void **)((int)pvVar3 + 0x3c),(int)in_stack_fffffe88
                                    ,in_stack_fffffe8c,local_100,0,1);
        }
        local_4 = 5;
        if ((uVar2 & 4) != 0) {
          uVar2 = uVar2 & 0xfffffffb;
          local_150 = uVar2;
          FUN_004028f0(local_e0);
        }
        local_4 = 4;
        if ((uVar2 & 2) != 0) {
          uVar2 = uVar2 & 0xfffffffd;
          local_150 = uVar2;
          FUN_004028f0(local_b0);
        }
        local_4 = 0xffffffff;
        if ((uVar2 & 1) != 0) {
          uVar2 = uVar2 & 0xfffffffe;
          FUN_004028f0(local_100);
        }
        local_90[0] = local_151;
        FUN_004028f0(local_90);
        i = -1;
        pcVar5 = &DAT_00712820;
        do {
          if (i == 0) break;
          i = i + -1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FUN_00402940(local_90);
        local_4 = 7;
        FUN_00498f80(this_val_2);
        local_4 = 0xffffffff;
        FUN_004028f0(local_90);
        break;
      case 0x53:
      case 0x73:
        this_val_3 = operator_new(0x4c);
        local_4 = 0x10;
        if (this_val_3 == (void *)0x0) {
          this_val_4 = (void *)0x0;
        }
        else {
          local_50[0] = local_151;
          this_val_4 = this_val_3;
          FUN_004028f0(local_50);
          i = -1;
          pcVar5 = &DAT_00712834;
          do {
            if (i == 0) break;
            i = i + -1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          FUN_00402940(local_50);
          local_70[0] = local_151;
          local_4 = CONCAT31(local_4._1_3_,0x11);
          local_150 = uVar2 | 0x40;
          FUN_004028f0(local_70);
          i = -1;
          pcVar5 = &DAT_00712838;
          do {
            if (i == 0) break;
            i = i + -1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          FUN_00402940(local_70);
          j = CONCAT31((int3)(uVar2 >> 8),(char)(uVar2 | 0x40)) | 0x80;
          local_4 = 0x12;
          local_d0[0] = local_151;
          local_150 = j;
          FUN_004028f0(local_d0);
          i = -1;
          pcVar5 = &DAT_005ae4ec;
          do {
            if (i == 0) break;
            i = i + -1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          this_val = &DAT_005ae4ec;
          k = 0x49a4b7;
          FUN_00402940(local_d0);
          uVar2 = CONCAT11((char)(uVar2 >> 8),(char)j) | 0x100;
          j = 1;
          local_40 = &stack0xfffffe88;
          local_4 = 0x13;
          local_150 = uVar2;
          FUN_004900f0(&stack0xfffffe88,&DAT_00712830,&local_151);
          this_val_4 = (void *)FUN_0049c1b0(this_val_3,*(void **)((int)pvVar3 + 0x3c),(int)local_d0,
                                            local_70,local_50,in_stack_fffffe88,in_stack_fffffe8c,k,
                                            this_val,j);
        }
        local_4 = 0x15;
        if ((uVar2 & 0x100) != 0) {
          uVar2 = uVar2 & 0xfffffeff;
          local_150 = uVar2;
          FUN_004028f0(local_d0);
        }
        local_4 = 0x14;
        if ((uVar2 & 0x80) != 0) {
          uVar2 = uVar2 & 0xffffff7f;
          local_150 = uVar2;
          FUN_004028f0(local_70);
        }
        local_4 = 0xffffffff;
        if ((uVar2 & 0x40) != 0) {
          uVar2 = uVar2 & 0xffffffbf;
          FUN_004028f0(local_50);
        }
        local_140[0] = local_151;
        FUN_004028f0(local_140);
        j = 0xffffffff;
        pcVar5 = (char *)&DAT_0071283c;
        do {
          if (j == 0) break;
          j = j - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        cVar1 = FUN_00402a00(local_140);
        if (cVar1 != '\0') {
          puVar4 = &DAT_0071283c;
          puVar6 = local_13c;
          for (k = ~j - 1 >> 2; k != 0; k = k - 1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar6 = puVar6 + 1;
          }
          for (j = ~j - 1 & 3; j != 0; j = j - 1) {
            *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
            puVar4 = (undefined4 *)((int)puVar4 + 1);
            puVar6 = (undefined4 *)((int)puVar6 + 1);
          }
          FUN_004029e0(local_140);
        }
        local_4 = 0x17;
        FUN_00498f80(this_val_4);
        this_val = local_140;
LAB_0049a856:
        local_4 = 0xffffffff;
        FUN_004028f0(this_val);
        pvVar3 = local_144;
      }
      local_148 = (void *)((int)local_148 + 1);
      this = param_2;
    } while (local_148 < *(void **)((int)param_2 + 8));
  }
  ExceptionList = local_c;
  return;
}


/* ==== 0049a970 FUN_0049a970 ==== */

undefined1 * __thiscall FUN_0049a970(void *this,undefined1 *this_val_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *this_val;
  undefined4 uVar4;
  uint i;
  uint j;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int k;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_4c [4];
  undefined4 *local_48;
  undefined1 local_3c [4];
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 local_2c [4];
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [16];
  undefined4 uStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e81b;
  uStack_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_c;
  local_4c[0] = this_val_2._0_1_;
  FUN_004028f0(local_4c,0);
  i = 0xffffffff;
  pcVar6 = &DAT_0071284c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  cVar2 = FUN_00402a00(local_4c,i,1);
  if (cVar2 != '\0') {
    puVar5 = (undefined4 *)&DAT_0071284c;
    puVar7 = local_48;
    for (j = i >> 2; j != 0; j = j - 1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    FUN_004029e0(local_4c,i);
  }
  local_4 = 0;
  bVar1 = false;
  k = 0;
  iVar3 = FUN_0049bf00(*(undefined4 *)((int)this + 0x3c));
  if (0 < iVar3) {
    do {
      this_val = (int *)FUN_0049bd10(k);
      if (this_val != (int *)0x0) {
        cVar2 = FUN_004993b0(this_val);
        if (cVar2 != '\0') {
          if (bVar1) {
            iVar3 = (**(code **)(*this_val + 8))(local_3c);
            local_4._0_1_ = 1;
            uVar4 = FUN_004797e0(auStack_1c,auStack_1c,s___005ae53c,iVar3);
            local_4._0_1_ = 2;
            FUN_00483d90(local_4c,uVar4,0,0xffffffff);
            local_4._0_1_ = 1;
            FUN_004028f0(auStack_1c,1);
            local_4 = (uint)local_4._1_3_ << 8;
            if (iStack_38 != 0) {
              cVar2 = *(char *)(iStack_38 + -1);
              if ((cVar2 != '\0') && (cVar2 != -1)) {
                *(char *)(iStack_38 + -1) = cVar2 + -1;
                iStack_38 = 0;
                uStack_34 = 0;
                uStack_30 = 0;
                goto LAB_0049ab25;
              }
              FUN_0054b339((char *)(iStack_38 + -1));
            }
            iStack_38 = 0;
            uStack_34 = 0;
            uStack_30 = 0;
          }
          else {
            bVar1 = true;
            uVar4 = (**(code **)(*this_val + 8))(local_2c);
            local_4._0_1_ = 3;
            FUN_00483d90(local_4c,uVar4,0,0xffffffff);
            local_4 = (uint)local_4._1_3_ << 8;
            if (iStack_28 != 0) {
              cVar2 = *(char *)(iStack_28 + -1);
              if ((cVar2 == '\0') || (cVar2 == -1)) {
                FUN_0054b339((char *)(iStack_28 + -1));
              }
              else {
                *(char *)(iStack_28 + -1) = cVar2 + -1;
              }
            }
            iStack_28 = 0;
            uStack_24 = 0;
            uStack_20 = 0;
          }
        }
      }
LAB_0049ab25:
      k = k + 1;
      iVar3 = FUN_0049bf00(*(undefined4 *)((int)this + 0x3c));
    } while (k < iVar3);
  }
  *this_val_2 = local_4c[0];
  *(undefined4 *)(this_val_2 + 4) = 0;
  *(undefined4 *)(this_val_2 + 8) = 0;
  *(undefined4 *)(this_val_2 + 0xc) = 0;
  FUN_004093c0(this_val_2,local_4c,0,0xffffffff);
  if (local_48 != (undefined4 *)0x0) {
    cVar2 = *(char *)((int)local_48 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_0054b339((undefined1 *)((int)local_48 + -1));
    }
    else {
      *(char *)((int)local_48 + -1) = cVar2 + -1;
    }
  }
  *unaff_FS_OFFSET = uStack_c;
  return this_val_2;
}


/* ==== 0049aba0 FUN_0049aba0 ==== */

void __thiscall FUN_0049aba0(void *this,void *this_val_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 this_val;
  int iVar5;
  char *pcVar6;
  int *piVar8;
  uint j;
  uint uVar9;
  uint k;
  int i;
  undefined1 local_2c [4];
  int local_28;
  uint local_24;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  int iVar7;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e835;
  pvStack_c = ExceptionList;
  uVar9 = 0;
  bVar1 = false;
  local_2c[0] = this_val_2._0_1_;
  ExceptionList = &pvStack_c;
  FUN_004028f0(local_2c,0);
  local_4 = 0;
  iVar3 = FUN_0049bf00(*(undefined4 *)((int)this + 0x3c));
  i = 0;
  if (0 < iVar3) {
    do {
      iVar4 = FUN_0049bd10(i);
      if (iVar4 != 0) {
        j = 0xffffffff;
        pcVar6 = s__005ae540;
        do {
          if (j == 0) break;
          j = j - 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        j = FUN_0049b270(this_val_2,s__005ae540,uVar9,~j - 1);
        if (j != 0xffffffff) {
          uVar9 = j;
        }
        j = 0xffffffff;
        pcVar6 = s___005ae544;
        do {
          if (j == 0) break;
          j = j - 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        iVar4 = FUN_0049b210(this_val_2,s___005ae544,uVar9,~j - 1);
        if (iVar4 == -1) {
          bVar1 = true;
          iVar4 = *(int *)((int)this_val_2 + 8);
        }
        if (i == iVar3 + -1) {
          bVar1 = true;
        }
        j = iVar4 - uVar9;
        if (0 < (int)j) {
          this_val = FUN_00479520(this_val_2,local_1c,uVar9,j);
          local_4._0_1_ = 1;
          FUN_004093c0(local_2c,this_val,0,0xffffffff);
          local_4 = (uint)local_4._1_3_ << 8;
          if (local_18 != 0) {
            cVar2 = *(char *)(local_18 + -1);
            if ((cVar2 == '\0') || (cVar2 == -1)) {
              FUN_0054b339((char *)(local_18 + -1));
            }
            else {
              *(char *)(local_18 + -1) = cVar2 + -1;
            }
          }
          local_18 = 0;
          local_14 = 0;
          local_10 = 0;
          this_val = FUN_0049bd10(i);
          cVar2 = FUN_004993a0(this_val);
          if ((cVar2 != '\0') && (k = 0, iVar5 = local_28, uVar9 = local_24, 0 < (int)j)) {
            do {
              if ((uVar9 < k) || (iVar5 == 0)) {
                pcVar6 = "";
              }
              else {
                if ((*(char *)(iVar5 + -1) != '\0') && (*(char *)(iVar5 + -1) != -1)) {
                  FUN_00402a00(local_2c,uVar9,0);
                  iVar5 = local_28;
                  uVar9 = local_24;
                }
                if (iVar5 != 0) {
                  *(undefined1 *)(iVar5 + -1) = 0xff;
                  iVar5 = local_28;
                  uVar9 = local_24;
                }
                pcVar6 = (char *)(iVar5 + k);
              }
              if ('`' < *pcVar6) {
                if ((uVar9 < k) || (iVar5 == 0)) {
                  pcVar6 = "";
                }
                else {
                  if ((*(char *)(iVar5 + -1) != '\0') && (*(char *)(iVar5 + -1) != -1)) {
                    FUN_00402a00(local_2c,uVar9,0);
                    iVar5 = local_28;
                    uVar9 = local_24;
                  }
                  if (iVar5 != 0) {
                    *(undefined1 *)(iVar5 + -1) = 0xff;
                    iVar5 = local_28;
                    uVar9 = local_24;
                  }
                  pcVar6 = (char *)(iVar5 + k);
                }
                if (*pcVar6 < '{') {
                  if ((uVar9 < k) || (iVar5 == 0)) {
                    pcVar6 = "";
                  }
                  else {
                    if ((*(char *)(iVar5 + -1) != '\0') && (*(char *)(iVar5 + -1) != -1)) {
                      FUN_00402a00(local_2c,uVar9,0);
                      iVar5 = local_28;
                    }
                    iVar7 = 0;
                    if (iVar5 != 0) {
                      *(undefined1 *)(iVar5 + -1) = 0xff;
                      iVar7 = local_28;
                    }
                    pcVar6 = (char *)(iVar7 + k);
                  }
                  *pcVar6 = *pcVar6 + -0x20;
                  iVar5 = local_28;
                  uVar9 = local_24;
                }
              }
              k = k + 1;
            } while ((int)k < (int)j);
          }
          piVar8 = (int *)FUN_0049bd10(i);
          (**(code **)(*piVar8 + 4))(local_2c);
        }
        if (bVar1) break;
        uVar9 = iVar4 + 1;
      }
      i = i + 1;
    } while (i < iVar3);
  }
  if (local_28 != 0) {
    cVar2 = *(char *)(local_28 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_0054b339(local_28 + -1);
    }
    else {
      *(char *)(local_28 + -1) = cVar2 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return;
}


/* ==== 0049aeb0 FUN_0049aeb0 ==== */

void __thiscall FUN_0049aeb0(undefined4 param_1,undefined4 param_2)

{
  FUN_0049bd10(param_2);
  return;
}


/* ==== 0049b0c0 CRegVarArray_GetValue ==== */

undefined4 __thiscall
CRegVarArray_GetValue(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint i;
  uint j;
  char *pcVar4;
  char *pcVar5;
  undefined1 local_2c [4];
  char *local_28;
  uint local_24;
  undefined4 local_20;
  undefined1 local_1c [12];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e883;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = FUN_0049bd10(param_3);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_0049bd10(param_3);
    (**(code **)(*piVar3 + 8))(param_2);
    ExceptionList = pvStack_10;
    return param_2;
  }
  local_2c[0] = (undefined1)param_3;
  i = 0xffffffff;
  pcVar4 = s_index_out_of_bounds_in_CRegVarAr_005ae5a8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  local_28 = (char *)0x0;
  local_24 = 0;
  local_20 = 0;
  cVar1 = FUN_00402a00(local_2c,i,1);
  if (cVar1 != '\0') {
    pcVar4 = s_index_out_of_bounds_in_CRegVarAr_005ae5a8;
    pcVar5 = local_28;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    }
    local_28[i] = '\0';
    local_24 = i;
  }
  local_1c[0] = (undefined1)param_3;
  local_4 = 0;
  FUN_004028f0(local_1c,0);
  local_4._0_1_ = 1;
  FUN_004093c0(local_1c,local_2c,0,0xffffffff);
  local_4 = (uint)local_4._1_3_ << 8;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_1c,&DAT_005828d8);
}


/* ==== 0049b1f0 FUN_0049b1f0 ==== */

void * __thiscall FUN_0049b1f0(void *this,byte param_2)

{
  FUN_00499e40();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 0049b210 FUN_0049b210 ==== */

int __thiscall FUN_0049b210(void *this,void *buf,uint param_2,size_t max_count)

{
  uint uVar1;
  int iVar2;
  void *_memchr_result;
  char *pcVar3;
  
  if ((max_count != 0) && (uVar1 = *(uint *)((int)this + 8), param_2 < uVar1)) {
    iVar2 = *(int *)((int)this + 4);
    for (pcVar3 = (char *)(iVar2 + param_2); pcVar3 < (char *)(iVar2 + uVar1); pcVar3 = pcVar3 + 1)
    {
      _memchr_result = _memchr(buf,(int)*pcVar3,max_count);
      if (_memchr_result != (void *)0x0) {
        return (int)pcVar3 - *(int *)((int)this + 4);
      }
    }
  }
  return -1;
}


/* ==== 0049b270 FUN_0049b270 ==== */

int __thiscall FUN_0049b270(void *this,void *buf,uint param_2,size_t max_count)

{
  uint uVar1;
  int iVar2;
  void *_memchr_result;
  char *pcVar3;
  
  uVar1 = *(uint *)((int)this + 8);
  if (param_2 < uVar1) {
    iVar2 = *(int *)((int)this + 4);
    for (pcVar3 = (char *)(iVar2 + param_2); pcVar3 < (char *)(iVar2 + uVar1); pcVar3 = pcVar3 + 1)
    {
      _memchr_result = _memchr(buf,(int)*pcVar3,max_count);
      if (_memchr_result == (void *)0x0) {
        return (int)pcVar3 - *(int *)((int)this + 4);
      }
    }
  }
  return -1;
}


/* ==== 0049b2d0 FUN_0049b2d0 ==== */

void * __thiscall FUN_0049b2d0(void *this)

{
  FUN_00498a90();
  *(undefined ***)this = &PTR_FUN_0057714c;
  return this;
}


/* ==== 0049b2f0 FUN_0049b2f0 ==== */

void * __thiscall
FUN_0049b2f0(void *this,void *this_val,int this_val_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5,undefined4 param_6)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e898;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00498ad0(this,this_val,this_val_2,param_3,param_4,(char)param_6);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_0057714c;
  *(undefined1 *)((int)this + 0x3c) = param_5;
  param_5 = 1;
  FUN_00499390(this,&param_5);
  ExceptionList = local_c;
  return this;
}


/* ==== 0049b370 FUN_0049b370 ==== */

void * __thiscall
FUN_0049b370(void *this,void *this_val,int this_val_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5,undefined4 param_6)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e8aa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00498b70(this,this_val,this_val_2,param_3,param_4,(char)param_6);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_0057714c;
  *(undefined1 *)((int)this + 0x3c) = param_5;
  param_5 = 1;
  FUN_00499390(this,&param_5);
  ExceptionList = local_c;
  return this;
}


/* ==== 0049b3f0 FUN_0049b3f0 ==== */

void __thiscall FUN_0049b3f0(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056e8bc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_0057714c;
  local_4 = 0;
  FUN_00498ce0(this,this);
  local_4 = 0xffffffff;
  FUN_00498c10(this);
  ExceptionList = local_c;
  return;
}


