/* spel.dat — libs/stl/stl.c: 413 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0054b1b4 FUN_0054b1b4 ==== */

void FUN_0054b1b4(void)

{
  size_t _strlen_result;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(undefined1 *)(unaff_EBP + -0x20) = *(undefined1 *)(unaff_EBP + -0xd);
  FUN_004028f0(unaff_EBP + -0x20,0);
  _strlen_result = _strlen("string too long");
  FUN_00402940(unaff_EBP + -0x20,"string too long",_strlen_result);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00479b80(unaff_EBP + -0x3c,unaff_EBP + -0x20);
  *(undefined ***)(unaff_EBP + -0x3c) = &PTR_LAB_00578e54;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_00589b98);
}


/* ==== 0054b20e FUN_0054b20e ==== */

void FUN_0054b20e(void)

{
  exception *this;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_0055b39c();
  *(exception **)(unaff_EBP + -0x10) = this;
  *(undefined ***)this = &PTR_FUN_00578e74;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004028f0(this + 0xc,1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  exception::~exception(this);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


/* ==== 0054b24b FUN_0054b24b ==== */

void __thiscall FUN_0054b24b(void *this)

{
  undefined1 local_20 [28];
  
  FUN_0054b284(local_20,this);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_20,&DAT_00589b98);
}


/* ==== 0054b284 FUN_0054b284 ==== */

void * __thiscall FUN_0054b284(void *this,undefined4 param_2)

{
  FUN_00479d90(this,param_2);
  *(undefined ***)this = &PTR_LAB_00578e54;
  return this;
}


/* ==== 0054b29c FUN_0054b29c ==== */

void FUN_0054b29c(void)

{
  size_t _strlen_result;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(undefined1 *)(unaff_EBP + -0x20) = *(undefined1 *)(unaff_EBP + -0xd);
  FUN_004028f0(unaff_EBP + -0x20,0);
  _strlen_result = _strlen("invalid string position");
  FUN_00402940(unaff_EBP + -0x20,"invalid string position",_strlen_result);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00479b80(unaff_EBP + -0x3c,unaff_EBP + -0x20);
  *(undefined ***)(unaff_EBP + -0x3c) = &PTR_FUN_00578e84;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_0057f4e0);
}


/* ==== 0054b320 FUN_0054b320 ==== */

void FUN_0054b320(void)

{
  FUN_005584e0(FUN_004d1400);
  return;
}


/* ==== 0054b32c FUN_0054b32c ==== */

void FUN_0054b32c(void)

{
  FUN_005584e0(&DAT_0054b338);
  return;
}


/* ==== 0054b339 FUN_0054b339 ==== */

void FUN_0054b339(undefined4 param_1)

{
  FUN_00559d4e(param_1);
  return;
}


/* ==== 0054b34e FUN_0054b34e ==== */

void FUN_0054b34e(void)

{
  FUN_0054b75e(&DAT_0074d838,0);
  return;
}


/* ==== 0054b35b FUN_0054b35b ==== */

void FUN_0054b35b(void)

{
  FUN_005584e0(&LAB_0054b367);
  return;
}


/* ==== 0054b37b FUN_0054b37b ==== */

void FUN_0054b37b(void)

{
  FUN_0054b75e(&DAT_0074d710,0);
  return;
}


/* ==== 0054b388 FUN_0054b388 ==== */

void FUN_0054b388(void)

{
  FUN_005584e0(&LAB_0054b394);
  return;
}


/* ==== 0054b3a8 FUN_0054b3a8 ==== */

void FUN_0054b3a8(void)

{
  FUN_0054b6ff(0,1);
  return;
}


/* ==== 0054b3b7 FUN_0054b3b7 ==== */

void FUN_0054b3b7(void)

{
  FUN_005584e0(&LAB_0054b3c3);
  return;
}


/* ==== 0054b3ec FUN_0054b3ec ==== */

void FUN_0054b3ec(void)

{
  FUN_0054b6a0(0,1);
  return;
}


/* ==== 0054b3fb FUN_0054b3fb ==== */

void FUN_0054b3fb(void)

{
  FUN_005584e0(&LAB_0054b407);
  return;
}


/* ==== 0054b430 FUN_0054b430 ==== */

void FUN_0054b430(void)

{
  FUN_0054b75e(&DAT_0074d7a0,0);
  return;
}


/* ==== 0054b43d FUN_0054b43d ==== */

void FUN_0054b43d(void)

{
  FUN_005584e0(&LAB_0054b449);
  return;
}


/* ==== 0054b45d FUN_0054b45d ==== */

void FUN_0054b45d(void)

{
  FUN_0054b6a0(0,1);
  return;
}


/* ==== 0054b46c FUN_0054b46c ==== */

void FUN_0054b46c(void)

{
  FUN_005584e0(&LAB_0054b478);
  return;
}


/* ==== 0054b48c FUN_0054b48c ==== */

void FUN_0054b48c(void)

{
  FUN_0054b6a0(0,1);
  return;
}


/* ==== 0054b49b FUN_0054b49b ==== */

void FUN_0054b49b(void)

{
  FUN_005584e0(&LAB_0054b4a7);
  return;
}


/* ==== 0054b4b1 FUN_0054b4b1 ==== */

undefined4 FUN_0054b4b1(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  bool bVar3;
  
  FUN_0055b39c();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  bVar3 = DAT_005c70f8 < 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (bVar3) {
    *(undefined **)(unaff_EBP + -0x14) = &DAT_0074d838;
    DAT_005c70f8 = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_004d0ac0(&DAT_0074d838,&PTR_DAT_005c7bd8);
    *(undefined **)(unaff_EBP + -0x14) = &DAT_0074d710;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_004d0ac0(&DAT_0074d710,&DAT_005c7bf8);
    *(int **)(unaff_EBP + -0x14) = &DAT_0074d7f8;
    *(undefined4 *)(unaff_EBP + -4) = 2;
    FUN_004cfb80(&DAT_0074d7f8,&DAT_0074d838,1,1);
    *(undefined4 **)(unaff_EBP + -0x14) = &DAT_0074d768;
    *(undefined4 *)(unaff_EBP + -4) = 3;
    FUN_0054b636(&DAT_0074d710,1,1,1);
    iVar2 = DAT_0074d7f8;
    *(undefined **)(unaff_EBP + -0x14) = &DAT_0074d7a0;
    *(undefined4 **)(&DAT_0074d824 + *(int *)(iVar2 + 4)) = &DAT_0074d768;
    *(undefined4 *)(unaff_EBP + -4) = 4;
    FUN_004d0ac0(&DAT_0074d7a0,&DAT_005c7c18);
    *(int **)(unaff_EBP + -0x14) = &DAT_0074d890;
    *(undefined4 *)(unaff_EBP + -4) = 5;
    FUN_0054b636(&DAT_0074d7a0,1,1,1);
    iVar2 = DAT_0074d890;
    *(int **)(unaff_EBP + -0x14) = &DAT_0074d6d8;
    *(undefined4 **)(&DAT_0074d8bc + *(int *)(iVar2 + 4)) = &DAT_0074d768;
    *(uint *)(&DAT_0074d89c + *(int *)(DAT_0074d890 + 4)) =
         *(uint *)(&DAT_0074d89c + *(int *)(DAT_0074d890 + 4)) | 2;
    *(undefined4 *)(unaff_EBP + -4) = 6;
    FUN_0054b636(&DAT_0074d7a0,1,1,1);
    *(undefined4 **)(&DAT_0074d704 + *(int *)(DAT_0074d6d8 + 4)) = &DAT_0074d768;
  }
  else {
    DAT_005c70f8 = DAT_005c70f8 + 1;
  }
  uVar1 = *(undefined4 *)(unaff_EBP + -0x10);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar1;
}


/* ==== 0054b636 FUN_0054b636 ==== */

int * FUN_0054b636(void)

{
  char cVar1;
  int *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_0055b39c();
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + 0x14) != 0) {
    *extraout_ECX = (int)&DAT_00578ec0;
    extraout_ECX[10] = 0;
    extraout_ECX[1] = (int)&PTR_FUN_00578ebc;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  cVar1 = *(char *)(unaff_EBP + 0x10);
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_LAB_00578eb4;
  if (cVar1 != '\0') {
    FUN_004d6870(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX,*(undefined4 *)(unaff_EBP + 8),
                 *(undefined4 *)(unaff_EBP + 0xc));
  }
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return extraout_ECX;
}


/* ==== 0054b6a0 FUN_0054b6a0 ==== */

int * FUN_0054b6a0(void)

{
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    *extraout_ECX = (int)&DAT_00578ec0;
    extraout_ECX[10] = 0;
    extraout_ECX[1] = (int)&PTR_FUN_00578ebc;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_LAB_00578eb4;
  FUN_0054c9bb(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


/* ==== 0054b6ff FUN_0054b6ff ==== */

int * FUN_0054b6ff(void)

{
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    *extraout_ECX = (int)&DAT_005777b0;
    extraout_ECX[0xb] = 0;
    extraout_ECX[2] = (int)&PTR_FUN_00578ebc;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_LAB_00578eac;
  FUN_0054c9bb(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


/* ==== 0054b75e FUN_0054b75e ==== */

void __thiscall FUN_0054b75e(void *this)

{
  *(undefined ***)this = &PTR_FUN_00578ecc;
  return;
}


/* ==== 0054b769 FUN_0054b769 ==== */

void __thiscall FUN_0054b769(void *this)

{
  **(int **)((int)this + 0x2c) = **(int **)((int)this + 0x2c) + -1;
  **(int **)((int)this + 0x1c) = **(int **)((int)this + 0x1c) + 1;
  return;
}


/* ==== 0054b779 FUN_0054b779 ==== */

undefined4 FUN_0054b779(int param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  int i;
  undefined4 uVar2;
  bool bVar3;
  
  bVar3 = param_3 == 0;
  param_1 = param_1 + param_3;
  if (!bVar3) {
    do {
      puVar1 = (undefined1 *)(param_1 + -1);
      param_1 = param_1 + -1;
      i = FUN_0055a45a(*puVar1,param_2);
      if (i == -1) break;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    bVar3 = param_3 == 0;
  }
  if (bVar3) {
    uVar2 = 1;
  }
  else {
    if (param_3 == 0) {
      i = 1;
      do {
        FUN_0055a2ba(param_2);
        i = i + -1;
      } while (i != 0);
    }
    uVar2 = 0;
  }
  return uVar2;
}


/* ==== 0054b7f0 FUN_0054b7f0 ==== */

void FUN_0054b7f0(void)

{
  FUN_005584e0(FUN_004d1400);
  return;
}


/* ==== 0054b7fc FUN_0054b7fc ==== */

void FUN_0054b7fc(void)

{
  FUN_005584e0(&DAT_0054b338);
  return;
}


/* ==== 0054b812 FUN_0054b812 ==== */

void FUN_0054b812(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0054b81c FUN_0054b81c ==== */

void FUN_0054b81c(void)

{
  FUN_005584e0(&LAB_0054b828);
  return;
}


/* ==== 0054b83c FUN_0054b83c ==== */

void FUN_0054b83c(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0054b846 FUN_0054b846 ==== */

void FUN_0054b846(void)

{
  FUN_005584e0(&LAB_0054b852);
  return;
}


/* ==== 0054b866 FUN_0054b866 ==== */

void FUN_0054b866(void)

{
  FUN_0054bf5f(&DAT_0074d9d8,0);
  return;
}


/* ==== 0054b873 FUN_0054b873 ==== */

void FUN_0054b873(void)

{
  FUN_005584e0(&LAB_0054b87f);
  return;
}


/* ==== 0054b893 FUN_0054b893 ==== */

void FUN_0054b893(void)

{
  FUN_0054bf5f(&DAT_0074d980,0);
  return;
}


/* ==== 0054b8a0 FUN_0054b8a0 ==== */

void FUN_0054b8a0(void)

{
  FUN_005584e0(&LAB_0054b8ac);
  return;
}


/* ==== 0054b8c0 FUN_0054b8c0 ==== */

void FUN_0054b8c0(void)

{
  FUN_0054bf5f(&DAT_0074da68,0);
  return;
}


/* ==== 0054b8cd FUN_0054b8cd ==== */

void FUN_0054b8cd(void)

{
  FUN_005584e0(&LAB_0054b8d9);
  return;
}


/* ==== 0054b8ed FUN_0054b8ed ==== */

void FUN_0054b8ed(void)

{
  FUN_0054bcdd(0,1);
  return;
}


/* ==== 0054b8fc FUN_0054b8fc ==== */

void FUN_0054b8fc(void)

{
  FUN_005584e0(&LAB_0054b908);
  return;
}


/* ==== 0054b912 FUN_0054b912 ==== */

void __thiscall FUN_0054b912(void *this)

{
  *(undefined ***)(*(int *)(*(int *)this + 4) + (int)this) = &PTR_LAB_00578f3c;
  FUN_0054bc6a();
  return;
}


/* ==== 0054b931 FUN_0054b931 ==== */

void FUN_0054b931(void)

{
  FUN_0054bbc1(0,1);
  return;
}


/* ==== 0054b940 FUN_0054b940 ==== */

void FUN_0054b940(void)

{
  FUN_005584e0(&LAB_0054b94c);
  return;
}


/* ==== 0054b956 FUN_0054b956 ==== */

void __thiscall FUN_0054b956(void *this)

{
  *(undefined ***)(*(int *)(*(int *)this + 4) + (int)this) = &PTR_LAB_00578f44;
  FUN_0054bc6a();
  return;
}


/* ==== 0054b975 FUN_0054b975 ==== */

void FUN_0054b975(void)

{
  FUN_0054bbc1(0,1);
  return;
}


/* ==== 0054b984 FUN_0054b984 ==== */

void FUN_0054b984(void)

{
  FUN_005584e0(&LAB_0054b990);
  return;
}


/* ==== 0054b9a4 FUN_0054b9a4 ==== */

void FUN_0054b9a4(void)

{
  FUN_0054bbc1(0,1);
  return;
}


/* ==== 0054b9b3 FUN_0054b9b3 ==== */

void FUN_0054b9b3(void)

{
  FUN_005584e0(&LAB_0054b9bf);
  return;
}


/* ==== 0054b9c9 FUN_0054b9c9 ==== */

undefined4 FUN_0054b9c9(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  int unaff_EBP;
  bool bVar2;
  
  FUN_0055b39c();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  bVar2 = DAT_005c7254 < 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (bVar2) {
    *(undefined **)(unaff_EBP + -0x14) = &DAT_0074d9d8;
    DAT_005c7254 = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_0054bd3c(&PTR_DAT_005c7bd8);
    *(undefined **)(unaff_EBP + -0x14) = &DAT_0074d980;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_0054bd3c(&DAT_005c7bf8);
    *(undefined **)(unaff_EBP + -0x14) = &DAT_0074da68;
    *(undefined4 *)(unaff_EBP + -4) = 2;
    FUN_0054bd3c(&DAT_005c7c18);
    *(int **)(unaff_EBP + -0x14) = &DAT_0074d940;
    *(undefined4 *)(unaff_EBP + -4) = 3;
    FUN_0054bc75(&DAT_0074d9d8,1,1);
    *(undefined **)(unaff_EBP + -0x14) = &DAT_0074da30;
    *(undefined4 *)(unaff_EBP + -4) = 4;
    FUN_0054bb57(&DAT_0074d980,1,1,1);
    iVar1 = DAT_0074d940;
    *(int **)(unaff_EBP + -0x14) = &DAT_0074d8c8;
    *(undefined **)(&DAT_0074d96c + *(int *)(iVar1 + 4)) = &DAT_0074da30;
    *(undefined4 *)(unaff_EBP + -4) = 5;
    FUN_0054bb57(&DAT_0074da68,1,1,1);
    iVar1 = DAT_0074d8c8;
    *(int **)(unaff_EBP + -0x14) = &DAT_0074d908;
    *(undefined **)(&DAT_0074d8f4 + *(int *)(iVar1 + 4)) = &DAT_0074da30;
    *(uint *)(&DAT_0074d8d4 + *(int *)(DAT_0074d8c8 + 4)) =
         *(uint *)(&DAT_0074d8d4 + *(int *)(DAT_0074d8c8 + 4)) | 2;
    *(undefined4 *)(unaff_EBP + -4) = 6;
    FUN_0054bb57(&DAT_0074da68,1,1,1);
    *(undefined **)(&DAT_0074d934 + *(int *)(DAT_0074d908 + 4)) = &DAT_0074da30;
  }
  else {
    DAT_005c7254 = DAT_005c7254 + 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x10);
}


/* ==== 0054bb30 FUN_0054bb30 ==== */

void FUN_0054bb30(void)

{
  DAT_005c7254 = DAT_005c7254 + -1;
  if (DAT_005c7254 == 0) {
    FUN_0054bc20(&DAT_0074da30);
    FUN_0054bc20(&DAT_0074d8c8);
    FUN_0054bc20(&DAT_0074d908);
    return;
  }
  return;
}


/* ==== 0054bb57 FUN_0054bb57 ==== */

int * FUN_0054bb57(void)

{
  char cVar1;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + 0x14) != 0) {
    *extraout_ECX = (int)&DAT_00578f50;
    extraout_ECX[10] = 0;
    extraout_ECX[1] = (int)&PTR_FUN_00578f4c;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  cVar1 = *(char *)(unaff_EBP + 0x10);
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_LAB_00578f44;
  if (cVar1 != '\0') {
    FUN_0054c537(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX,*(undefined4 *)(unaff_EBP + 8),
                 *(undefined4 *)(unaff_EBP + 0xc));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


/* ==== 0054bbc1 FUN_0054bbc1 ==== */

int * FUN_0054bbc1(void)

{
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    *extraout_ECX = (int)&DAT_00578f50;
    extraout_ECX[10] = 0;
    extraout_ECX[1] = (int)&PTR_FUN_00578f4c;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_LAB_00578f44;
  FUN_0054c9bb(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


/* ==== 0054bc20 FUN_0054bc20 ==== */

void * __thiscall FUN_0054bc20(void *this)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((*(byte *)((int)this + *(int *)(*(int *)this + 4) + 4) & 6) == 0) {
    iVar1 = (**(code **)(**(int **)((int)this + *(int *)(*(int *)this + 4) + 0x28) + 0x2c))();
    if (iVar1 == -1) {
      uVar2 = 4;
    }
  }
  if (uVar2 != 0) {
    uVar2 = *(uint *)((int)this + *(int *)(*(int *)this + 4) + 4) | uVar2;
    if (*(int *)((int)this + *(int *)(*(int *)this + 4) + 0x28) == 0) {
      uVar2 = uVar2 | 4;
    }
    FUN_0054c6db(uVar2,0);
  }
  return this;
}


/* ==== 0054bc6a FUN_0054bc6a ==== */

void __thiscall FUN_0054bc6a(void *this)

{
  *(undefined ***)this = &PTR_FUN_00578f4c;
  FUN_0054c949();
  return;
}


/* ==== 0054bc75 FUN_0054bc75 ==== */

int * FUN_0054bc75(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    *extraout_ECX = (int)&DAT_00578f58;
    extraout_ECX[0xb] = 0;
    extraout_ECX[2] = (int)&PTR_FUN_00578f4c;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  extraout_ECX[1] = 0;
  uVar1 = *(undefined4 *)(unaff_EBP + 0xc);
  uVar2 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_LAB_00578f3c;
  FUN_0054c537(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX,uVar2,uVar1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


/* ==== 0054bcdd FUN_0054bcdd ==== */

int * FUN_0054bcdd(void)

{
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    *extraout_ECX = (int)&DAT_00578f58;
    extraout_ECX[0xb] = 0;
    extraout_ECX[2] = (int)&PTR_FUN_00578f4c;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_LAB_00578f3c;
  FUN_0054c9bb(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


/* ==== 0054bd3c FUN_0054bd3c ==== */

undefined4 * FUN_0054bd3c(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004d0e40(extraout_ECX + 0xd);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_FUN_00578f9c;
  FUN_0054c657(extraout_ECX);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_004d0e40(extraout_ECX + 0x13);
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  *extraout_ECX = &PTR_FUN_00578f64;
  FUN_0054c601(extraout_ECX,uVar1,0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


/* ==== 0054bd9c FUN_0054bd9c ==== */

void __thiscall FUN_0054bd9c(void *this)

{
  *(undefined ***)this = &PTR_FUN_00578f9c;
  std::locale::~locale((locale *)((int)this + 0x34));
  return;
}


/* ==== 0054bdb6 uflow ==== */

/* Library Function - Multiple Matches With Same Base Name
    protected: virtual unsigned short __thiscall std::basic_streambuf<unsigned short,struct
   std::char_traits<unsigned short> >::uflow(void)
    protected: virtual unsigned short __thiscall std::basic_streambuf<wchar_t,struct
   std::char_traits<wchar_t> >::uflow(void)
   
   Library: Visual Studio 2003 Release */

undefined2 __thiscall uflow(void *this)

{
  short sVar1;
  undefined2 *gninc;
  
  sVar1 = (**(code **)(*(int *)this + 0x10))();
  if (sVar1 == -1) {
    return 0xffff;
  }
  gninc = (undefined2 *)Gninc(this);
  return *gninc;
}


/* ==== 0054bdd7 FUN_0054bdd7 ==== */

int __thiscall FUN_0054bdd7(void *this,short *param_2,int param_3)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int i;
  
  i = 0;
  while( true ) {
    while( true ) {
      if (param_3 < 1) {
        return i;
      }
      psVar5 = (short *)**(undefined4 **)((int)this + 0x1c);
      if ((psVar5 == (short *)0x0) || (iVar3 = (**(int **)((int)this + 0x2c) << 1) >> 1, iVar3 < 1))
      break;
      psVar1 = param_2;
      iVar4 = iVar3;
      if (param_3 < iVar3) {
        iVar3 = param_3;
        iVar4 = param_3;
      }
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        *psVar1 = *psVar5;
        psVar5 = psVar5 + 1;
        psVar1 = psVar1 + 1;
      }
      i = i + iVar4;
      param_3 = param_3 - iVar4;
      param_2 = param_2 + iVar4;
      FUN_0054c581(this,iVar4);
    }
    sVar2 = (**(code **)(*(int *)this + 0x14))();
    if (sVar2 == -1) break;
    *param_2 = sVar2;
    param_2 = param_2 + 1;
    i = i + 1;
    param_3 = param_3 + -1;
  }
  return i;
}


/* ==== 0054be5e FUN_0054be5e ==== */

int __thiscall FUN_0054be5e(void *this,undefined2 *param_2,undefined4 *param_3)

{
  undefined2 *puVar1;
  short sVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  int i;
  
  i = 0;
  while( true ) {
    while( true ) {
      if ((int)param_3 < 1) {
        return i;
      }
      puVar3 = *(undefined4 **)((int)this + 0x20);
      puVar5 = (undefined2 *)*puVar3;
      if ((puVar5 == (undefined2 *)0x0) ||
         (puVar3 = (undefined4 *)((**(int **)((int)this + 0x30) << 1) >> 1), (int)puVar3 < 1))
      break;
      puVar1 = param_2;
      puVar4 = puVar3;
      if ((int)param_3 < (int)puVar3) {
        puVar3 = param_3;
        puVar4 = param_3;
      }
      for (; puVar3 != (undefined4 *)0x0; puVar3 = (undefined4 *)((int)puVar3 + -1)) {
        *puVar5 = *puVar1;
        puVar5 = puVar5 + 1;
        puVar1 = puVar1 + 1;
      }
      i = i + (int)puVar4;
      param_3 = (undefined4 *)((int)param_3 - (int)puVar4);
      param_2 = param_2 + (int)puVar4;
      FUN_0054c5b6(this,puVar4);
    }
    sVar2 = (**(code **)(*(int *)this + 4))(CONCAT22((short)((uint)puVar3 >> 0x10),*param_2));
    if (sVar2 == -1) break;
    param_2 = param_2 + 1;
    i = i + 1;
    param_3 = (undefined4 *)((int)param_3 + -1);
  }
  return i;
}


/* ==== 0054bee6 FUN_0054bee6 ==== */

void FUN_0054bee6(undefined4 *param_1)

{
  int i;
  undefined4 *puVar1;
  undefined4 local_1c [6];
  
  local_1c[0] = 0xffffffff;
  local_1c[2] = 0;
  local_1c[3] = 0;
  local_1c[4] = DAT_00750068;
  puVar1 = local_1c;
  for (i = 6; i != 0; i = i + -1) {
    *param_1 = *puVar1;
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* ==== 0054bf1d FUN_0054bf1d ==== */

void FUN_0054bf1d(undefined4 *param_1)

{
  int i;
  undefined4 *puVar1;
  undefined4 local_1c [6];
  
  local_1c[0] = 0xffffffff;
  local_1c[2] = 0;
  local_1c[3] = 0;
  local_1c[4] = DAT_00750068;
  puVar1 = local_1c;
  for (i = 6; i != 0; i = i + -1) {
    *param_1 = *puVar1;
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* ==== 0054bf5f FUN_0054bf5f ==== */

void __thiscall FUN_0054bf5f(void *this)

{
  *(undefined ***)this = &PTR_FUN_00578f64;
  return;
}


/* ==== 0054bf6a FUN_0054bf6a ==== */

void FUN_0054bf6a(void)

{
  char cVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  int this_val;
  
  FUN_0055b39c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_00578f64;
  cVar1 = *(char *)(extraout_ECX + 0x12);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (cVar1 != '\0') {
    FUN_0054c5da();
  }
  this_val = extraout_ECX[0x11];
  if (this_val != 0) {
    FUN_004028f0(this_val,1);
    FUN_0054b339(this_val);
  }
  std::locale::~locale((locale *)(extraout_ECX + 0x13));
  *extraout_ECX = &PTR_FUN_00578f9c;
  std::locale::~locale((locale *)(extraout_ECX + 0xd));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 0054bfcf FUN_0054bfcf ==== */

uint __thiscall FUN_0054bfcf(void *this,uint param_2)

{
  uint uVar1;
  short sVar2;
  short *psVar3;
  int this_val_2;
  int this_val;
  int local_14;
  undefined4 *local_10;
  int local_c;
  undefined4 local_8;
  
  if ((short)param_2 == -1) {
    return 0;
  }
  uVar1 = **(uint **)((int)this + 0x20);
  if ((uVar1 != 0) && (uVar1 < uVar1 + **(int **)((int)this + 0x30) * 2)) {
    psVar3 = (short *)FUN_0054c5ca(this);
    *psVar3 = (short)param_2;
    return param_2 & 0xffff;
  }
  if (*(int *)((int)this + 0x50) == 0) {
    return 0xffff;
  }
  if (*(int *)((int)this + 0x38) == 0) {
    sVar2 = FUN_0055b758(param_2,*(int *)((int)this + 0x50));
LAB_0054c0c8:
    if (sVar2 != -1) {
      return param_2;
    }
  }
  else {
    local_8 = param_2;
    FUN_0040f800(*(undefined4 *)((int)this + 0x44),0,0xffffffff);
    FUN_0047eab0(*(undefined4 *)((int)this + 0x44),8,0);
    this_val_2 = *(int *)((int)this + 0x44);
    FUN_00471de0(this_val_2);
    this_val = *(int *)((int)this + 0x44);
    local_c = *(int *)(this_val_2 + 4);
    FUN_00471de0(this_val);
    this_val_2 = (**(code **)(**(int **)((int)this + 0x38) + 0x14))
                           ((int)this + 0x40,&local_8,(int)&local_8 + 2,&local_10,
                            *(undefined4 *)(this_val + 4),
                            -(uint)(local_c != 0) & *(int *)(this_val_2 + 8) + local_c,&local_14);
    if (this_val_2 != 0) {
      if (this_val_2 != 1) {
        if (this_val_2 != 3) {
          return 0xffff;
        }
        sVar2 = FUN_0055b758(local_8,*(undefined4 *)((int)this + 0x50));
        goto LAB_0054c0c8;
      }
      if (local_10 == &local_8) {
        return 0xffff;
      }
    }
    this_val_2 = *(int *)((int)this + 0x44);
    FUN_00471de0(this_val_2);
    this_val_2 = *(int *)(this_val_2 + 4);
    FUN_00471de0(*(undefined4 *)((int)this + 0x44));
    this_val = FUN_00558c1d();
    if (this_val == local_14 - this_val_2) {
      return param_2;
    }
  }
  return 0xffff;
}


/* ==== 0054c117 FUN_0054c117 ==== */

uint __thiscall FUN_0054c117(void *this,uint param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  short sVar4;
  int this_val;
  
  uVar1 = **(uint **)((int)this + 0x1c);
  sVar4 = (short)param_2;
  if (((uVar1 == 0) || (uVar1 <= **(uint **)((int)this + 0xc))) ||
     ((sVar4 != -1 && (*(short *)(uVar1 - 2) != sVar4)))) {
    if ((*(int *)((int)this + 0x50) != 0) && (sVar4 != -1)) {
      if (*(int *)((int)this + 0x38) == 0) {
        sVar4 = FUN_0055b84d(param_2,*(int *)((int)this + 0x50));
        if (sVar4 != -1) {
          return param_2;
        }
        return 0xffff;
      }
      this_val = *(int *)((int)this + 0x44);
      iVar2 = *(int *)(this_val + 8);
      if (iVar2 != 0) {
        FUN_00471de0(this_val);
        cVar3 = FUN_0054b779(*(undefined4 *)(this_val + 4),*(undefined4 *)((int)this + 0x50),iVar2);
        if (cVar3 != '\0') {
          FUN_0040f800(*(undefined4 *)((int)this + 0x44),0,0xffffffff);
          *(undefined4 *)((int)this + 0x40) = *(undefined4 *)((int)this + 0x3c);
          return param_2 & 0xffff;
        }
      }
    }
    param_2 = 0xffff;
  }
  else {
    FUN_0054c595(this);
    param_2 = -(uint)(sVar4 != -1) & param_2;
  }
  return param_2;
}


/* ==== 0054c1ce FUN_0054c1ce ==== */

undefined4 __thiscall FUN_0054c1ce(void *this)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined2 *)**(undefined4 **)((int)this + 0x1c);
  if ((puVar1 != (undefined2 *)0x0) && (puVar1 < puVar1 + **(int **)((int)this + 0x2c))) {
    return CONCAT22((short)((uint)puVar1 >> 0x10),*puVar1);
  }
  iVar2 = *(int *)this;
  uVar3 = (**(code **)(iVar2 + 0x14))();
  uVar3 = (**(code **)(iVar2 + 8))(uVar3);
  return uVar3;
}


/* ==== 0054c1fc FUN_0054c1fc ==== */

short __thiscall FUN_0054c1fc(void *this)

{
  void *pvVar1;
  short *gninc;
  int this_val_2;
  void *this_val;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  int local_c;
  short local_6;
  int this_val_3;
  
  pvVar1 = (void *)**(uint **)((int)this + 0x1c);
  this_val = this;
  if ((pvVar1 == (void *)0x0) ||
     (this_val = (void *)((int)pvVar1 + **(int **)((int)this + 0x2c) * 2), this_val <= pvVar1)) {
    if (*(int *)((int)this + 0x50) == 0) {
LAB_0054c232:
      local_6 = -1;
    }
    else if (*(int *)((int)this + 0x38) == 0) {
      local_6 = FUN_0055b936(this_val,*(int *)((int)this + 0x50));
      if (local_6 == -1) {
        local_6 = -1;
      }
    }
    else {
      *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)((int)this + 0x40);
      FUN_0040f800(*(undefined4 *)((int)this + 0x44),0,0xffffffff);
      do {
        do {
          this_val_2 = FUN_0055a2ba(*(undefined4 *)((int)this + 0x50));
          if (this_val_2 == -1) goto LAB_0054c232;
          FUN_0047eab0(*(undefined4 *)((int)this + 0x44),1,this_val_2);
          this_val_2 = *(int *)((int)this + 0x44);
          *(undefined4 *)((int)this + 0x40) = *(undefined4 *)((int)this + 0x3c);
          FUN_00471de0(this_val_2);
          this_val_3 = *(int *)((int)this + 0x44);
          local_c = *(int *)(this_val_2 + 4);
          FUN_00471de0(this_val_3);
          this_val_2 = (**(code **)(**(int **)((int)this + 0x38) + 0x10))
                                 ((int)this + 0x40,*(undefined4 *)(this_val_3 + 4),
                                  -(uint)(local_c != 0) & *(int *)(this_val_2 + 8) + local_c,
                                  local_14,&local_6,&stack0xfffffffc,local_10);
          if (this_val_2 == 0) {
            return local_6;
          }
        } while (this_val_2 == 1);
        if (this_val_2 != 3) goto LAB_0054c232;
        this_val_2 = *(int *)((int)this + 0x44);
      } while (*(uint *)(this_val_2 + 8) < 2);
      FUN_00471de0(this_val_2);
      FUN_0055b3c0(&local_6,*(undefined4 *)(this_val_2 + 4),2);
    }
  }
  else {
    gninc = (short *)Gninc(this);
    local_6 = *gninc;
  }
  return local_6;
}


/* ==== 0054c31a FUN_0054c31a ==== */

void __thiscall FUN_0054c31a(void *this,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int i;
  undefined4 *puVar1;
  undefined4 local_24 [6];
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)((int)this + 0x50) != 0) {
    i = FUN_0055a06b(*(int *)((int)this + 0x50),param_3,param_4);
    if (i == 0) {
      i = FUN_0055a4c8(*(undefined4 *)((int)this + 0x50),&local_c);
      if (i == 0) {
        local_24[0] = 0;
        local_24[2] = local_c;
        local_24[3] = local_8;
        local_24[4] = *(undefined4 *)((int)this + 0x40);
        goto LAB_0054c38f;
      }
    }
  }
  local_24[0] = 0xffffffff;
  local_24[2] = 0;
  local_24[3] = 0;
  local_24[4] = DAT_00750068;
LAB_0054c38f:
  puVar1 = local_24;
  for (i = 6; i != 0; i = i + -1) {
    *param_2 = *puVar1;
    puVar1 = puVar1 + 1;
    param_2 = param_2 + 1;
  }
  return;
}


/* ==== 0054c39c FUN_0054c39c ==== */

void __thiscall
FUN_0054c39c(void *this,undefined4 *param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int i;
  undefined4 *puVar2;
  undefined4 local_c;
  undefined4 local_8;
  
  i = param_3;
  local_c = param_5;
  local_8 = param_6;
  if (*(int *)((int)this + 0x50) != 0) {
    iVar1 = FUN_0055a4ea(*(int *)((int)this + 0x50),&local_c);
    if (iVar1 == 0) {
      if (i != 0) {
        i = FUN_0055a06b(*(undefined4 *)((int)this + 0x50),i,1);
        if (i != 0) goto LAB_0054c42f;
      }
      i = FUN_0055a4c8(*(undefined4 *)((int)this + 0x50),&local_c);
      if (i == 0) {
        if (*(int *)((int)this + 0x44) != 0) {
          *(undefined4 *)((int)this + 0x40) = param_7;
          FUN_0040f800(*(int *)((int)this + 0x44),0,0xffffffff);
        }
        param_3 = 0;
        param_5 = local_c;
        param_6 = local_8;
        param_7 = *(undefined4 *)((int)this + 0x40);
        goto LAB_0054c451;
      }
    }
  }
LAB_0054c42f:
  param_3 = 0xffffffff;
  param_5 = 0;
  param_6 = 0;
  param_7 = DAT_00750068;
LAB_0054c451:
  puVar2 = &param_3;
  for (i = 6; i != 0; i = i + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  return;
}


/* ==== 0054c45e FUN_0054c45e ==== */

void * __thiscall FUN_0054c45e(void *this,int *param_2,int param_3)

{
  int iVar1;
  
  if ((*(FILE **)((int)this + 0x50) == (FILE *)0x0) ||
     (iVar1 = FUN_0055a502((void *)(param_3 * 2),*(FILE **)((int)this + 0x50),param_2,0,
                           (uint)(param_3 * 2)), iVar1 != 0)) {
    this = (void *)0x0;
  }
  return this;
}


/* ==== 0054c4c4 FUN_0054c4c4 ==== */

void * __thiscall FUN_0054c4c4(void *this,byte param_2)

{
  FUN_0054bc6a();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 0054c4ff FUN_0054c4ff ==== */

void * __thiscall FUN_0054c4ff(void *this,byte param_2)

{
  FUN_0054bd9c();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 0054c51b FUN_0054c51b ==== */

void * __thiscall FUN_0054c51b(void *this,byte param_2)

{
  FUN_0054bf6a();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 0054c537 FUN_0054c537 ==== */

void __thiscall FUN_0054c537(void *this,undefined4 param_2,char param_3)

{
  undefined2 uVar1;
  
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x28) = param_2;
  uVar1 = FUN_0054ef7c(this,0x20);
  *(undefined2 *)((int)this + 0x30) = uVar1;
  FUN_0054c9f0(this);
  if (*(int *)((int)this + 0x28) == 0) {
    FUN_0054c6db(*(uint *)((int)this + 4) | 4,0);
  }
  if (param_3 != '\0') {
    FUN_0054c9bb(this);
  }
  return;
}


/* ==== 0054c581 FUN_0054c581 ==== */

void __thiscall FUN_0054c581(void *this,int param_2)

{
  **(int **)((int)this + 0x2c) = **(int **)((int)this + 0x2c) - param_2;
  **(int **)((int)this + 0x1c) = **(int **)((int)this + 0x1c) + param_2 * 2;
  return;
}


/* ==== 0054c595 FUN_0054c595 ==== */

undefined4 __thiscall FUN_0054c595(void *this)

{
  **(int **)((int)this + 0x2c) = **(int **)((int)this + 0x2c) + 1;
  **(int **)((int)this + 0x1c) = **(int **)((int)this + 0x1c) + -2;
  return **(undefined4 **)((int)this + 0x1c);
}


/* ==== 0054c5a6 Gninc ==== */

/* Library Function - Multiple Matches With Same Base Name
    protected: unsigned short * __thiscall std::basic_streambuf<unsigned short,struct
   std::char_traits<unsigned short> >::_Gninc(void)
    protected: wchar_t * __thiscall std::basic_streambuf<wchar_t,struct std::char_traits<wchar_t>
   >::_Gninc(void)
   
   Library: Visual Studio 2003 Release */

void __thiscall Gninc(void *this)

{
  **(int **)((int)this + 0x2c) = **(int **)((int)this + 0x2c) + -1;
  **(int **)((int)this + 0x1c) = **(int **)((int)this + 0x1c) + 2;
  return;
}


/* ==== 0054c5b6 FUN_0054c5b6 ==== */

void __thiscall FUN_0054c5b6(void *this,int param_2)

{
  **(int **)((int)this + 0x30) = **(int **)((int)this + 0x30) - param_2;
  **(int **)((int)this + 0x20) = **(int **)((int)this + 0x20) + param_2 * 2;
  return;
}


/* ==== 0054c5ca FUN_0054c5ca ==== */

void __thiscall FUN_0054c5ca(void *this)

{
  **(int **)((int)this + 0x30) = **(int **)((int)this + 0x30) + -1;
  **(int **)((int)this + 0x20) = **(int **)((int)this + 0x20) + 2;
  return;
}


/* ==== 0054c5da FUN_0054c5da ==== */

void * __thiscall FUN_0054c5da(void *this)

{
  int iVar1;
  
  if (*(FILE **)((int)this + 0x50) != (FILE *)0x0) {
    iVar1 = FUN_005588fd(*(FILE **)((int)this + 0x50));
    if (iVar1 == 0) {
      FUN_0054c601(this,0,2);
      return this;
    }
  }
  return (void *)0x0;
}


/* ==== 0054c601 FUN_0054c601 ==== */

void __thiscall FUN_0054c601(void *this,undefined4 param_2,int param_3)

{
  locale *this_00;
  undefined4 uVar1;
  
  *(bool *)((int)this + 0x48) = param_3 == 1;
  if (param_3 == 0) {
    this_00 = (locale *)((int)this + 0x4c);
    std::locale::~locale(this_00);
    if (this_00 != (locale *)0x0) {
      FUN_004d0e40(this_00);
    }
    *(undefined4 *)((int)this + 0x44) = 0;
  }
  FUN_0054c657(this);
  *(undefined4 *)((int)this + 0x50) = param_2;
  *(undefined4 *)((int)this + 0x40) = DAT_0075006c;
  uVar1 = DAT_0075006c;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = uVar1;
  return;
}


/* ==== 0054c657 FUN_0054c657 ==== */

void __thiscall FUN_0054c657(void *this)

{
  *(int *)((int)this + 0x1c) = (int)this + 0x14;
  *(int *)((int)this + 0x20) = (int)this + 0x18;
  *(int *)((int)this + 0x2c) = (int)this + 0x24;
  *(int *)((int)this + 0xc) = (int)this + 4;
  *(int *)((int)this + 0x30) = (int)this + 0x28;
  *(undefined4 **)((int)this + 0x10) = (undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 8) = 0;
  **(undefined4 **)((int)this + 0x20) = 0;
  **(undefined4 **)((int)this + 0x30) = 0;
  **(undefined4 **)((int)this + 0xc) = 0;
  **(undefined4 **)((int)this + 0x1c) = 0;
  **(undefined4 **)((int)this + 0x2c) = 0;
  return;
}


/* ==== 0054c6c3 FUN_0054c6c3 ==== */

void FUN_0054c6c3(void)

{
  FUN_005584e0(FUN_004d1400);
  return;
}


/* ==== 0054c6cf FUN_0054c6cf ==== */

void FUN_0054c6cf(void)

{
  FUN_005584e0(&DAT_0054b338);
  return;
}


/* ==== 0054c6db FUN_0054c6db ==== */

void FUN_0054c6db(void)

{
  uint uVar1;
  size_t _strlen_result;
  int extraout_ECX;
  int unaff_EBP;
  char *_Str;
  
  FUN_0055b39c();
  uVar1 = *(uint *)(unaff_EBP + 8) & 7;
  *(uint *)(extraout_ECX + 4) = uVar1;
  uVar1 = *(uint *)(extraout_ECX + 8) & uVar1;
  if (uVar1 == 0) {
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
  if (*(char *)(unaff_EBP + 0xc) != '\0') {
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(0,0);
  }
  if ((uVar1 & 4) == 0) {
    _Str = "ios::failbit set";
    if ((uVar1 & 2) == 0) {
      _Str = "ios::eofbit set";
    }
  }
  else {
    _Str = "ios::badbit set";
  }
  *(undefined1 *)(unaff_EBP + -0x1c) = *(undefined1 *)(unaff_EBP + 0xf);
  FUN_004028f0(unaff_EBP + -0x1c,0);
  _strlen_result = _strlen(_Str);
  FUN_00402940(unaff_EBP + -0x1c,_Str,_strlen_result);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0054c777(unaff_EBP + -0x1c);
  *(undefined ***)(unaff_EBP + -0x38) = &PTR_LAB_00578fdc;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_00589ea0);
}


/* ==== 0054c777 FUN_0054c777 ==== */

undefined4 * FUN_0054c777(void)

{
  undefined1 *puVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *this_val;
  
  FUN_0055b39c();
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined1 **)(unaff_EBP + -0x10) = &DAT_00712694;
  FUN_00558853();
  puVar1 = *(undefined1 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  this_val = extraout_ECX + 3;
  *(undefined1 *)this_val = *puVar1;
  FUN_004028f0(this_val,0);
  FUN_004093c0(this_val,puVar1,0,0xffffffff);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_FUN_00579020;
  return extraout_ECX;
}


/* ==== 0054c7e8 FUN_0054c7e8 ==== */

void __thiscall FUN_0054c7e8(void *this)

{
  undefined1 local_20 [28];
  
  FUN_0054c85e(this);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_20,&DAT_00589f10);
}


/* ==== 0054c805 FUN_0054c805 ==== */

void FUN_0054c805(void)

{
  exception *this;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(exception **)(unaff_EBP + -0x10) = this;
  *(undefined ***)this = &PTR_FUN_00579020;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004028f0(this + 0xc,1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  exception::~exception(this);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 0054c842 FUN_0054c842 ==== */

void * __thiscall FUN_0054c842(void *this,byte param_2)

{
  FUN_0054c805();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 0054c85e FUN_0054c85e ==== */

undefined4 * FUN_0054c85e(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *this_val;
  
  FUN_0055b39c();
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_00558890();
  uVar1 = *(undefined1 *)(iVar2 + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  this_val = extraout_ECX + 3;
  *(undefined1 *)this_val = uVar1;
  FUN_004028f0(this_val,0);
  FUN_004093c0(this_val,iVar2 + 0xc,0,0xffffffff);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_FUN_00579020;
  return extraout_ECX;
}


/* ==== 0054c8bb FUN_0054c8bb ==== */

void FUN_0054c8bb(void)

{
  exception *this;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(exception **)(unaff_EBP + -0x10) = this;
  *(undefined ***)this = &PTR_FUN_00579020;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004028f0(this + 0xc,1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  exception::~exception(this);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 0054c8f8 FUN_0054c8f8 ==== */

void __thiscall FUN_0054c8f8(void *this)

{
  undefined1 local_20 [28];
  
  FUN_0054c931(local_20,this);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_20,&DAT_00589ea0);
}


/* ==== 0054c931 FUN_0054c931 ==== */

void * __thiscall FUN_0054c931(void *this,undefined4 param_2)

{
  FUN_0054c85e(param_2);
  *(undefined ***)this = &PTR_LAB_00578fdc;
  return this;
}


/* ==== 0054c949 FUN_0054c949 ==== */

void FUN_0054c949(void)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_00579030;
  iVar1 = extraout_ECX[9];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((iVar1 == 0) ||
     ((&DAT_0074dae4)[iVar1] = (&DAT_0074dae4)[iVar1] + -1,
     (char)(&DAT_0074dae4)[extraout_ECX[9]] < '\x01')) {
    FUN_0054ca28(extraout_ECX);
  }
  std::locale::~locale((locale *)(extraout_ECX + 8));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 0054c999 FUN_0054c999 ==== */

void __thiscall FUN_0054c999(void *this,undefined4 param_2)

{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)((int)this + 0x1c); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    (*(code *)puVar1[2])(param_2,this,puVar1[1]);
  }
  return;
}


/* ==== 0054c9bb FUN_0054c9bb ==== */

void __thiscall FUN_0054c9bb(void *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x24);
  while (uVar1 < 8) {
    if ((*(void **)(&DAT_0074dac0 + *(int *)((int)this + 0x24) * 4) == (void *)0x0) ||
       (*(void **)(&DAT_0074dac0 + *(int *)((int)this + 0x24) * 4) == this)) break;
    uVar1 = *(int *)((int)this + 0x24) + 1;
    *(uint *)((int)this + 0x24) = uVar1;
  }
  *(void **)(&DAT_0074dac0 + *(int *)((int)this + 0x24) * 4) = this;
  (&DAT_0074dae4)[*(int *)((int)this + 0x24)] = (&DAT_0074dae4)[*(int *)((int)this + 0x24)] + '\x01'
  ;
  return;
}


/* ==== 0054c9f0 FUN_0054c9f0 ==== */

void __thiscall FUN_0054c9f0(void *this)

{
  if (this != (void *)0xffffffe0) {
    FUN_004d0e40();
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0x201;
  *(undefined4 *)((int)this + 0x10) = 6;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  FUN_0054c6db(0,0);
  return;
}


/* ==== 0054ca28 FUN_0054ca28 ==== */

void __thiscall FUN_0054ca28(void *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_0054c999(this,0);
  puVar2 = *(undefined4 **)((int)this + 0x18);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_0054b339(puVar2);
    puVar2 = puVar1;
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  puVar2 = *(undefined4 **)((int)this + 0x1c);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_0054b339(puVar2);
    puVar2 = puVar1;
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  return;
}


/* ==== 0054ca74 FUN_0054ca74 ==== */

void FUN_0054ca74(void)

{
  return;
}


/* ==== 0054ca75 FUN_0054ca75 ==== */

void FUN_0054ca75(void)

{
  FUN_005584e0(&LAB_0054ca81);
  return;
}


/* ==== 0054ca8b FUN_0054ca8b ==== */

int __thiscall FUN_0054ca8b(void *this,uint param_2,char param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)this;
  if (param_2 < *(uint *)(iVar1 + 0xc)) {
    iVar2 = *(int *)(*(int *)(iVar1 + 8) + param_2 * 4);
  }
  else {
    iVar2 = 0;
  }
  if (((iVar2 == 0) && (param_3 != '\0')) && (*(char *)(iVar1 + 0x14) != '\0')) {
    if (param_2 < *(uint *)(DAT_0074daf8 + 0xc)) {
      iVar2 = *(int *)(*(int *)(DAT_0074daf8 + 8) + param_2 * 4);
    }
    else {
      iVar2 = 0;
    }
  }
  return iVar2;
}


/* ==== 0054caca FUN_0054caca ==== */

int __thiscall FUN_0054caca(void *this)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)this;
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((iVar1 != DAT_0074daf4) &&
     ((*(char *)(iVar1 + 0x14) == '\0' || (DAT_0074daf8 != DAT_0074daf4)))) {
    return (uint)uVar2 << 8;
  }
  return CONCAT31(uVar2,1);
}


/* ==== 0054caea FUN_0054caea ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0054caea(void)

{
  void *operator_new_result;
  size_t _strlen_result;
  int this_val;
  int unaff_EBP;
  
  FUN_0055b39c();
  this_val = DAT_0074daf8;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (this_val == 0) {
    operator_new_result = operator_new(0x28);
    *(void **)(unaff_EBP + -0x10) = operator_new_result;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (operator_new_result == (void *)0x0) {
      DAT_0074daf8 = 0;
    }
    else {
      DAT_0074daf8 = FUN_0054cbeb(0);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_005584e0(FUN_0054cba3);
    *(undefined4 *)(DAT_0074daf8 + 0x10) = 0x3f;
    this_val = DAT_0074daf8 + 0x18;
    _strlen_result = _strlen(s_C_005b6f4c);
    FUN_00402940(this_val,s_C_005b6f4c,_strlen_result);
    DAT_0074daf4 = DAT_0074daf8;
    if (*(int *)(DAT_0074daf8 + 4) != -1) {
      *(int *)(DAT_0074daf8 + 4) = *(int *)(DAT_0074daf8 + 4) + 1;
    }
    _DAT_0074daf0 = DAT_0074daf4;
    this_val = DAT_0074daf8;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return this_val;
}


/* ==== 0054cba3 FUN_0054cba3 ==== */

void FUN_0054cba3(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *unaff_retaddr;
  
  FUN_0055b39c();
  uVar2 = DAT_0074daf8;
  if (DAT_0074daf8 != 0) {
    iVar1 = *(int *)(DAT_0074daf8 + 4);
    if ((iVar1 != 0) && (iVar1 != -1)) {
      *(int *)(DAT_0074daf8 + 4) = iVar1 + -1;
    }
    puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar2 + 4) != 0) & uVar2);
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
    }
  }
  ExceptionList = unaff_retaddr;
  return;
}


/* ==== 0054cbeb FUN_0054cbeb ==== */

undefined4 * FUN_0054cbeb(void)

{
  undefined1 uVar1;
  size_t _strlen_result;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *this_val;
  
  FUN_0055b39c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = 1;
  *extraout_ECX = &PTR_LAB_00579044;
  *(undefined1 *)(extraout_ECX + 5) = *(undefined1 *)(unaff_EBP + 8);
  uVar1 = *(undefined1 *)(unaff_EBP + 0xb);
  this_val = extraout_ECX + 6;
  extraout_ECX[2] = 0;
  extraout_ECX[3] = 0;
  extraout_ECX[4] = 0;
  *(undefined1 *)this_val = uVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004028f0(this_val,0);
  _strlen_result = _strlen(s___005b7560);
  FUN_00402940(this_val,s___005b7560,_strlen_result);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_FUN_0057903c;
  return extraout_ECX;
}


/* ==== 0054cc5d FUN_0054cc5d ==== */

void * __thiscall FUN_0054cc5d(void *this,byte param_2)

{
  FUN_0054cc79();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 0054cc79 FUN_0054cc79 ==== */

void FUN_0054cc79(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  undefined4 *puVar3;
  int unaff_EBP;
  int i;
  
  FUN_0055b39c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_0057903c;
  i = extraout_ECX[3];
  *(undefined4 *)(unaff_EBP + -4) = 2;
  while (i != 0) {
    i = i + -1;
    uVar1 = *(uint *)(extraout_ECX[2] + i * 4);
    if (uVar1 != 0) {
      iVar2 = *(int *)(uVar1 + 4);
      if ((iVar2 != 0) && (iVar2 != -1)) {
        *(int *)(uVar1 + 4) = iVar2 + -1;
      }
      puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar1 + 4) != 0) & uVar1);
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
    }
  }
  FUN_00559d4e(extraout_ECX[2]);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004028f0(extraout_ECX + 6,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_00579044;
  return;
}


/* ==== 0054cd24 FUN_0054cd24 ==== */

void FUN_0054cd24(void)

{
  FUN_005584e0(FUN_004d1400);
  return;
}


/* ==== 0054cd30 FUN_0054cd30 ==== */

void FUN_0054cd30(void)

{
  FUN_005584e0(&DAT_0054b338);
  return;
}


/* ==== 0054cd3c FUN_0054cd3c ==== */

FILE * FUN_0054cd3c(undefined4 param_1,uint param_2)

{
  uint uVar1;
  FILE *file;
  undefined4 *puVar2;
  int i;
  
  uVar1 = 1;
  i = 0;
  puVar2 = &DAT_00579048;
  do {
    if (uVar1 == (param_2 & 0xfffffffb)) break;
    uVar1 = puVar2[1];
    puVar2 = puVar2 + 1;
    i = i + 1;
  } while (uVar1 != 0);
  if (((&DAT_00579048)[i] != 0) &&
     (file = (FILE *)FUN_005589a5(param_1,(&PTR_s_r_005c741c)[i]), file != (FILE *)0x0)) {
    if ((param_2 & 4) == 0) {
      return file;
    }
    i = FUN_0055a06b(file,0,2);
    if (i == 0) {
      return file;
    }
    FUN_005588fd(file);
  }
  return (FILE *)0x0;
}


/* ==== 0054cddf FUN_0054cddf ==== */

void FUN_0054cddf(void)

{
  FUN_005584e0(FUN_004d1400);
  return;
}


/* ==== 0054cdeb FUN_0054cdeb ==== */

void FUN_0054cdeb(void)

{
  FUN_005584e0(&DAT_0054b338);
  return;
}


/* ==== 0054cdf7 FUN_0054cdf7 ==== */

undefined1 * __thiscall FUN_0054cdf7(void *this,undefined1 *this_val)

{
  *this_val = *(undefined1 *)((int)this + 0x30);
  FUN_004028f0(this_val,0);
  FUN_004093c0(this_val,(int)this + 0x30,0,0xffffffff);
  return this_val;
}


/* ==== 0054ce2d FUN_0054ce2d ==== */

int * FUN_0054ce2d(void)

{
  int iVar1;
  void *operator_new_result;
  int iVar2;
  size_t _strlen_result;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_0055b39c();
  iVar2 = *extraout_ECX;
  if (1 < *(uint *)(iVar2 + 4)) {
    iVar1 = *(int *)(iVar2 + 4);
    if ((iVar1 != 0) && (iVar1 != -1)) {
      *(int *)(iVar2 + 4) = iVar1 + -1;
    }
    operator_new_result = operator_new(0x28);
    *(void **)(unaff_EBP + -0x10) = operator_new_result;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (operator_new_result == (void *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_0054d225(*extraout_ECX);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *extraout_ECX = iVar2;
  }
  FUN_0054d31e(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc));
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    iVar2 = *extraout_ECX;
    _strlen_result = _strlen(s___005b7560);
    FUN_00402940(iVar2 + 0x18,s___005b7560,_strlen_result);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


/* ==== 0054cebb FUN_0054cebb ==== */

int FUN_0054cebb(void)

{
  int iVar1;
  void *this;
  uint uVar2;
  undefined4 *this_val;
  undefined4 uVar3;
  int unaff_EBP;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  
  FUN_0055b39c();
  iVar1 = *(int *)(unaff_EBP + 0x10);
  uVar2 = *(uint *)(unaff_EBP + 0xc) & 2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(uint *)(unaff_EBP + -0x10) = uVar2;
  if (uVar2 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      this_val = operator_new(0x18);
      *(undefined4 **)(unaff_EBP + 0x10) = this_val;
      if (this_val == (undefined4 *)0x0) {
        this_val = (undefined4 *)0x0;
      }
      else {
        this_val[1] = 0;
        uVar3 = *(undefined4 *)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        *this_val = &PTR_FUN_0057912c;
        FUN_0054d1e0(this_val,uVar3);
      }
      bVar4 = DAT_0074db0c == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar6 = DAT_0074db0c;
      if (bVar4) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db0c = DAT_0074dafc;
        iVar6 = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074db0c == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db0c = DAT_0074dafc;
      }
      iVar6 = DAT_0074db0c;
      this_val = (undefined4 *)FUN_0054e3e2(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0074db0c);
    }
    FUN_0054d31e(this_val,iVar6);
  }
  uVar2 = *(uint *)(unaff_EBP + 0xc) & 8;
  if (uVar2 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      this_val = operator_new(8);
      if (this_val == (undefined4 *)0x0) {
        this_val = (undefined4 *)0x0;
      }
      else {
        this_val[1] = 0;
        *this_val = &PTR_FUN_00579100;
      }
      iVar6 = DAT_0074db08;
      if (DAT_0074db08 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db08 = DAT_0074dafc;
        iVar6 = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074db08 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db08 = DAT_0074dafc;
      }
      iVar6 = DAT_0074db08;
      this_val = (undefined4 *)FUN_0054e49c(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0074db08);
    }
    FUN_0054d31e(this_val,iVar6);
  }
  if (uVar2 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      this_val = operator_new(8);
      if (this_val == (undefined4 *)0x0) {
        this_val = (undefined4 *)0x0;
      }
      else {
        this_val[1] = 0;
        *this_val = &PTR_FUN_005790e0;
      }
      iVar6 = DAT_0074db14;
      if (DAT_0074db14 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db14 = DAT_0074dafc;
        iVar6 = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074db14 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db14 = DAT_0074dafc;
      }
      iVar6 = DAT_0074db14;
      this_val = (undefined4 *)FUN_0054e56d(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0074db14);
    }
    FUN_0054d31e(this_val,iVar6);
    if (uVar2 != 0) {
      if (*(int *)(unaff_EBP + 0x14) == 0) {
        this_val = operator_new(0x18);
        *(undefined4 **)(unaff_EBP + 0x10) = this_val;
        if (this_val == (undefined4 *)0x0) {
          this_val = (undefined4 *)0x0;
        }
        else {
          this_val[1] = 0;
          uVar3 = *(undefined4 *)(unaff_EBP + 8);
          *(undefined1 *)(unaff_EBP + -4) = 4;
          *this_val = &PTR_FUN_005790c4;
          FUN_0054e2ea(this_val,uVar3);
        }
        bVar4 = DAT_0074db10 == 0;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iVar6 = DAT_0074db10;
        if (bVar4) {
          DAT_0074dafc = DAT_0074dafc + 1;
          DAT_0074db10 = DAT_0074dafc;
          iVar6 = DAT_0074dafc;
        }
      }
      else {
        if (DAT_0074db10 == 0) {
          DAT_0074dafc = DAT_0074dafc + 1;
          DAT_0074db10 = DAT_0074dafc;
        }
        iVar6 = DAT_0074db10;
        this_val = (undefined4 *)FUN_0054e63e(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0074db10);
      }
      FUN_0054d31e(this_val,iVar6);
    }
  }
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      this_val = operator_new(0x10);
      if (this_val == (undefined4 *)0x0) {
        this_val = (undefined4 *)0x0;
      }
      else {
        this_val[1] = 0;
        *this_val = &PTR_FUN_005790a4;
        uVar5 = FUN_0054eb13();
        *(undefined8 *)(this_val + 2) = uVar5;
      }
      iVar6 = DAT_0074db04;
      if (DAT_0074db04 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db04 = DAT_0074dafc;
        iVar6 = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074db04 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db04 = DAT_0074dafc;
      }
      iVar6 = DAT_0074db04;
      this_val = (undefined4 *)FUN_0054e6f5(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0074db04);
    }
    FUN_0054d31e(this_val,iVar6);
  }
  FUN_00554f69(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),iVar1,
               *(undefined4 *)(unaff_EBP + 0x14));
  uVar2 = *(uint *)(unaff_EBP + 0xc);
  FUN_0054f087(*(undefined4 *)(unaff_EBP + 8),uVar2,iVar1,*(undefined4 *)(unaff_EBP + 0x14));
  this = *(void **)(unaff_EBP + 8);
  *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | uVar2;
  uVar3 = FUN_0054cdf7(this,(undefined1 *)(unaff_EBP + -0x20));
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_004093c0(iVar1 + 0x18,uVar3,0,0xffffffff);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004028f0(unaff_EBP + -0x20,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1;
}


/* ==== 0054d1e0 FUN_0054d1e0 ==== */

void __thiscall FUN_0054d1e0(void *this)

{
  undefined4 *puVar1;
  undefined1 local_10 [16];
  
  puVar1 = (undefined4 *)FUN_0054ec38(local_10);
  *(undefined4 *)((int)this + 8) = *puVar1;
  *(undefined4 *)((int)this + 0xc) = puVar1[1];
  *(undefined4 *)((int)this + 0x10) = puVar1[2];
  *(undefined4 *)((int)this + 0x14) = puVar1[3];
  if (DAT_0074db00 == 0) {
    DAT_0074db00 = *(int *)((int)this + 0x10);
    FUN_005584e0(&LAB_004d4ae0);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  return;
}


/* ==== 0054d225 FUN_0054d225 ==== */

undefined4 * FUN_0054d225(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *_malloc_result;
  undefined4 *extraout_ECX;
  int i;
  int unaff_EBP;
  bool bVar4;
  undefined4 *this_val;
  
  FUN_0055b39c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = 1;
  *extraout_ECX = &PTR_LAB_00579044;
  iVar1 = *(int *)(unaff_EBP + 8);
  extraout_ECX[2] = 0;
  this_val = extraout_ECX + 6;
  extraout_ECX[3] = *(undefined4 *)(iVar1 + 0xc);
  extraout_ECX[4] = *(undefined4 *)(iVar1 + 0x10);
  *(undefined1 *)(extraout_ECX + 5) = *(undefined1 *)(iVar1 + 0x14);
  *(undefined1 *)this_val = *(undefined1 *)(iVar1 + 0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004028f0(this_val,0);
  FUN_004093c0(this_val,iVar1 + 0x18,0,0xffffffff);
  *extraout_ECX = &PTR_FUN_0057903c;
  bVar4 = iVar1 == DAT_0074daf4;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (bVar4) {
    uVar3 = FUN_0054d3cd(s_C_005b6f4c);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_0054cebb(uVar3,0x3f,extraout_ECX,0);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_0054d486();
  }
  else {
    i = extraout_ECX[3];
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (i != 0) {
      _malloc_result = _malloc(i << 2);
      extraout_ECX[2] = _malloc_result;
      if (_malloc_result == (void *)0x0) {
        FUN_0054efbd();
      }
      i = extraout_ECX[3];
      while (i != 0) {
        i = i + -1;
        iVar2 = *(int *)(*(int *)(iVar1 + 8) + i * 4);
        *(int *)(extraout_ECX[2] + i * 4) = iVar2;
        if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != -1)) {
          *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
        }
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


/* ==== 0054d31e FUN_0054d31e ==== */

void FUN_0054d31e(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  undefined4 *puVar4;
  int unaff_EBP;
  uint i;
  
  FUN_0055b39c();
  i = *(uint *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(uint *)(extraout_ECX + 0xc) <= i) {
    i = i + 1;
    if (i < 0x20) {
      i = 0x20;
    }
    iVar3 = FUN_0055a9b4(*(LPVOID *)(extraout_ECX + 8),i << 2);
    if (iVar3 == 0) {
      FUN_0054efbd();
    }
    *(int *)(extraout_ECX + 8) = iVar3;
    while (*(uint *)(extraout_ECX + 0xc) < i) {
      *(undefined4 *)(*(int *)(extraout_ECX + 8) + *(int *)(extraout_ECX + 0xc) * 4) = 0;
      *(int *)(extraout_ECX + 0xc) = *(int *)(extraout_ECX + 0xc) + 1;
    }
    i = *(uint *)(unaff_EBP + 0xc);
  }
  iVar3 = *(int *)(unaff_EBP + 8);
  if (*(int *)(iVar3 + 4) != -1) {
    *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
  }
  uVar1 = *(uint *)(*(int *)(extraout_ECX + 8) + i * 4);
  if (uVar1 != 0) {
    iVar2 = *(int *)(uVar1 + 4);
    if ((iVar2 != 0) && (iVar2 != -1)) {
      *(int *)(uVar1 + 4) = iVar2 + -1;
    }
    puVar4 = (undefined4 *)(~-(uint)(*(int *)(uVar1 + 4) != 0) & uVar1);
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)*puVar4)(1);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(int *)(*(int *)(extraout_ECX + 8) + i * 4) = iVar3;
  return;
}


/* ==== 0054d3cd FUN_0054d3cd ==== */

undefined1 * FUN_0054d3cd(void)

{
  char *str;
  size_t _strlen_result;
  undefined1 *extraout_ECX;
  int unaff_EBP;
  undefined1 *this_val;
  
  FUN_0055b39c();
  *(undefined1 **)(unaff_EBP + -0x14) = extraout_ECX;
  *extraout_ECX = *(undefined1 *)(unaff_EBP + 0xb);
  FUN_004028f0();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x10] = *(undefined1 *)(unaff_EBP + 0xb);
  FUN_004028f0(extraout_ECX + 0x10,0);
  this_val = extraout_ECX + 0x20;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *this_val = *(undefined1 *)(unaff_EBP + 0xb);
  FUN_004028f0(this_val,0);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  extraout_ECX[0x30] = *(undefined1 *)(unaff_EBP + 0xb);
  FUN_004028f0(extraout_ECX + 0x30,0);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  str = (char *)FUN_0055badc(0,(char *)0x0);
  *(char **)(unaff_EBP + -0x10) = str;
  _strlen_result = _strlen(str);
  FUN_00402940(this_val,*(undefined4 *)(unaff_EBP + -0x10),_strlen_result);
  if (*(int *)(unaff_EBP + 8) != 0) {
    str = (char *)FUN_0055badc(0,*(char **)(unaff_EBP + 8));
    if (str != (char *)0x0) goto LAB_0054d462;
  }
  str = s___005b7560;
LAB_0054d462:
  _strlen_result = _strlen(str);
  FUN_00402940(extraout_ECX + 0x30,str,_strlen_result);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


/* ==== 0054d486 FUN_0054d486 ==== */

void FUN_0054d486(void)

{
  int iVar1;
  char *str2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  iVar1 = *(int *)(extraout_ECX + 0x28);
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if (iVar1 != 0) {
    str2 = *(char **)(extraout_ECX + 0x24);
    if (str2 == (char *)0x0) {
      str2 = "";
    }
    FUN_0055badc(0,str2);
  }
  FUN_004028f0(extraout_ECX + 0x30,1);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004028f0(extraout_ECX + 0x20,1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004028f0(extraout_ECX + 0x10,1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004028f0(extraout_ECX,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 0054d4fb FUN_0054d4fb ==== */

void FUN_0054d4fb(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 this_val;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uVar6;
  int unaff_EBP;
  int this_val_2;
  
  FUN_0055b39c();
  *(undefined4 *)(unaff_EBP + -0x10) = 0xffffffff;
  this_val_2 = *(int *)(unaff_EBP + 0x1c);
  if ((*(uint *)(this_val_2 + 0xc) & 0x4000) == 0) {
    DAT_0074dc60 = 0;
    uVar4 = FUN_004d4370(this_val_2,unaff_EBP + -0x14);
    this_val = *(undefined4 *)(this_val_2 + 0xc);
    *(undefined4 *)(unaff_EBP + -4) = 4;
    this_val = FUN_0054dc69(unaff_EBP + -0x48,unaff_EBP + 0xc,unaff_EBP + 0x14,this_val,uVar4);
    uVar6 = FUN_0055b06c(unaff_EBP + -0x48,unaff_EBP + -0x18,this_val);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    std::locale::~locale((locale *)(unaff_EBP + -0x14));
    if (((*(int *)(unaff_EBP + -0x18) != unaff_EBP + -0x48) && (DAT_0074dc60 == 0)) && (uVar6 < 2))
    {
      *(uint *)(unaff_EBP + -0x10) = uVar6;
    }
  }
  else {
    this_val = FUN_004d4370(this_val_2,unaff_EBP + 0x1c);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    this_val = FUN_0054e63e(this_val,0,1);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    std::locale::~locale((locale *)(unaff_EBP + 0x1c));
    *(undefined1 *)(unaff_EBP + -0x28) = *(undefined1 *)(unaff_EBP + 0x1f);
    FUN_004028f0(unaff_EBP + -0x28,0);
    FUN_0054e333((void *)(unaff_EBP + -0x28),1,'\0');
    *(undefined4 *)(unaff_EBP + -4) = 1;
    uVar4 = FUN_004d6060(this_val,unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00483d90(unaff_EBP + -0x28,uVar4,0,0xffffffff);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_004028f0(unaff_EBP + -0x38,1);
    FUN_0047eab0(unaff_EBP + -0x28,1,0);
    this_val = FUN_004d6080(this_val,unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00483d90(unaff_EBP + -0x28,this_val,0,0xffffffff);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_004028f0(unaff_EBP + -0x38,1);
    puVar5 = *(undefined1 **)(unaff_EBP + -0x24);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0057629c;
    }
    this_val = FUN_0054e7ac(unaff_EBP + 0xc,unaff_EBP + 0x14,2,puVar5);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(unaff_EBP + -0x10) = this_val;
    FUN_004028f0(unaff_EBP + -0x28,1);
  }
  cVar3 = FUN_0054e9af((void *)(unaff_EBP + 0xc),(int *)(unaff_EBP + 0x14));
  puVar1 = *(uint **)(unaff_EBP + 0x20);
  if (cVar3 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if (*(int *)(unaff_EBP + -0x10) < 0) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    *(bool *)*(undefined4 *)(unaff_EBP + 0x24) = *(int *)(unaff_EBP + -0x10) != 0;
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = *(undefined4 *)(unaff_EBP + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 0054d6a3 FUN_0054d6a3 ==== */

void FUN_0054d6a3(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int unaff_EBP;
  int this_val;
  
  FUN_0055b39c();
  DAT_0074dc60 = 0;
  this_val = *(int *)(unaff_EBP + 0x1c);
  uVar4 = FUN_004d4370(this_val,unaff_EBP + 0x1c);
  uVar5 = *(undefined4 *)(this_val + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar5 = FUN_0054dc69(unaff_EBP + -0x30,unaff_EBP + 0xc,unaff_EBP + 0x14,uVar5,uVar4);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  std::locale::~locale((locale *)(unaff_EBP + 0x1c));
  this_val = unaff_EBP + -0x2f;
  if (*(char *)(unaff_EBP + -0x30) != '-') {
    this_val = unaff_EBP + -0x30;
  }
  uVar6 = FUN_0055b06c(this_val,unaff_EBP + -0x10,uVar5);
  cVar3 = FUN_0054e9af((void *)(unaff_EBP + 0xc),(int *)(unaff_EBP + 0x14));
  puVar1 = *(uint **)(unaff_EBP + 0x20);
  if (cVar3 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if (((*(int *)(unaff_EBP + -0x10) == this_val) || (DAT_0074dc60 != 0)) || (0xffff < uVar6)) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    if (*(char *)(unaff_EBP + -0x30) == '-') {
      uVar6 = -uVar6;
    }
    **(undefined2 **)(unaff_EBP + 0x24) = (short)uVar6;
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = *(undefined4 *)(unaff_EBP + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 0054d76b FUN_0054d76b ==== */

void FUN_0054d76b(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int unaff_EBP;
  int this_val;
  
  FUN_0055b39c();
  DAT_0074dc60 = 0;
  this_val = *(int *)(unaff_EBP + 0x1c);
  uVar4 = FUN_004d4370(this_val,unaff_EBP + 0x1c);
  uVar5 = *(undefined4 *)(this_val + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar5 = FUN_0054dc69(unaff_EBP + -0x30,unaff_EBP + 0xc,unaff_EBP + 0x14,uVar5,uVar4);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  std::locale::~locale((locale *)(unaff_EBP + 0x1c));
  this_val = unaff_EBP + -0x2f;
  if (*(char *)(unaff_EBP + -0x30) != '-') {
    this_val = unaff_EBP + -0x30;
  }
  iVar6 = FUN_0055b06c(this_val,unaff_EBP + -0x10,uVar5);
  cVar3 = FUN_0054e9af((void *)(unaff_EBP + 0xc),(int *)(unaff_EBP + 0x14));
  puVar1 = *(uint **)(unaff_EBP + 0x20);
  if (cVar3 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if ((*(int *)(unaff_EBP + -0x10) == this_val) || (DAT_0074dc60 != 0)) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    if (*(char *)(unaff_EBP + -0x30) == '-') {
      iVar6 = -iVar6;
    }
    **(int **)(unaff_EBP + 0x24) = iVar6;
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = *(undefined4 *)(unaff_EBP + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 0054d82f FUN_0054d82f ==== */

void FUN_0054d82f(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int unaff_EBP;
  int this_val;
  
  FUN_0055b39c();
  DAT_0074dc60 = 0;
  this_val = *(int *)(unaff_EBP + 0x1c);
  uVar4 = FUN_004d4370(this_val,unaff_EBP + 0x1c);
  uVar5 = *(undefined4 *)(this_val + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar5 = FUN_0054dc69(unaff_EBP + -0x30,unaff_EBP + 0xc,unaff_EBP + 0x14,uVar5,uVar4);
  uVar5 = FUN_0055ae4d(unaff_EBP + -0x30,unaff_EBP + -0x10,uVar5);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  std::locale::~locale((locale *)(unaff_EBP + 0x1c));
  cVar3 = FUN_0054e9af((void *)(unaff_EBP + 0xc),(int *)(unaff_EBP + 0x14));
  puVar1 = *(uint **)(unaff_EBP + 0x20);
  if (cVar3 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if ((*(int *)(unaff_EBP + -0x10) == unaff_EBP + -0x30) || (DAT_0074dc60 != 0)) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    **(undefined4 **)(unaff_EBP + 0x24) = uVar5;
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = *(undefined4 *)(unaff_EBP + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 0054d8d9 FUN_0054d8d9 ==== */

void FUN_0054d8d9(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int unaff_EBP;
  int this_val;
  
  FUN_0055b39c();
  DAT_0074dc60 = 0;
  this_val = *(int *)(unaff_EBP + 0x1c);
  uVar4 = FUN_004d4370(this_val,unaff_EBP + 0x1c);
  uVar5 = *(undefined4 *)(this_val + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar5 = FUN_0054dc69(unaff_EBP + -0x30,unaff_EBP + 0xc,unaff_EBP + 0x14,uVar5,uVar4);
  uVar5 = FUN_0055b06c(unaff_EBP + -0x30,unaff_EBP + -0x10,uVar5);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  std::locale::~locale((locale *)(unaff_EBP + 0x1c));
  cVar3 = FUN_0054e9af((void *)(unaff_EBP + 0xc),(int *)(unaff_EBP + 0x14));
  puVar1 = *(uint **)(unaff_EBP + 0x20);
  if (cVar3 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if ((*(int *)(unaff_EBP + -0x10) == unaff_EBP + -0x30) || (DAT_0074dc60 != 0)) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    **(undefined4 **)(unaff_EBP + 0x24) = uVar5;
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = *(undefined4 *)(unaff_EBP + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 0054d983 FUN_0054d983 ==== */

void FUN_0054d983(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  int unaff_EBP;
  float10 fVar5;
  
  FUN_0055b39c();
  DAT_0074dc60 = 0;
  uVar4 = FUN_004d4370(*(undefined4 *)(unaff_EBP + 0x1c),unaff_EBP + 0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar4 = FUN_0054dffe((undefined1 *)(unaff_EBP + -0x60),(void *)(unaff_EBP + 0xc),
                       (int *)(unaff_EBP + 0x14),uVar4);
  fVar5 = (float10)FUN_00557ce9(unaff_EBP + -0x60,unaff_EBP + -0x10,uVar4);
  *(float *)(unaff_EBP + -0x14) = (float)fVar5;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  std::locale::~locale((locale *)(unaff_EBP + 0x1c));
  cVar3 = FUN_0054e9af((void *)(unaff_EBP + 0xc),(int *)(unaff_EBP + 0x14));
  puVar1 = *(uint **)(unaff_EBP + 0x20);
  if (cVar3 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if ((*(int *)(unaff_EBP + -0x10) == unaff_EBP + -0x60) || (DAT_0074dc60 != 0)) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    **(undefined4 **)(unaff_EBP + 0x24) = *(undefined4 *)(unaff_EBP + -0x14);
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = *(undefined4 *)(unaff_EBP + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 0054da29 FUN_0054da29 ==== */

void FUN_0054da29(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  int unaff_EBP;
  float10 fVar5;
  
  FUN_0055b39c();
  DAT_0074dc60 = 0;
  uVar4 = FUN_004d4370(*(undefined4 *)(unaff_EBP + 0x1c),unaff_EBP + 0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar4 = FUN_0054dffe((undefined1 *)(unaff_EBP + -100),(void *)(unaff_EBP + 0xc),
                       (int *)(unaff_EBP + 0x14),uVar4);
  fVar5 = (float10)FUN_00557cad(unaff_EBP + -100,unaff_EBP + -0x10,uVar4);
  *(double *)(unaff_EBP + -0x18) = (double)fVar5;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  std::locale::~locale((locale *)(unaff_EBP + 0x1c));
  cVar3 = FUN_0054e9af((void *)(unaff_EBP + 0xc),(int *)(unaff_EBP + 0x14));
  puVar1 = *(uint **)(unaff_EBP + 0x20);
  if (cVar3 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if ((*(int *)(unaff_EBP + -0x10) == unaff_EBP + -100) || (DAT_0074dc60 != 0)) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    **(undefined8 **)(unaff_EBP + 0x24) = *(undefined8 *)(unaff_EBP + -0x18);
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = *(undefined4 *)(unaff_EBP + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 0054dacf FUN_0054dacf ==== */

void FUN_0054dacf(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  int unaff_EBP;
  float10 fVar5;
  
  FUN_0055b39c();
  DAT_0074dc60 = 0;
  uVar4 = FUN_004d4370(*(undefined4 *)(unaff_EBP + 0x1c),unaff_EBP + 0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar4 = FUN_0054dffe((undefined1 *)(unaff_EBP + -100),(void *)(unaff_EBP + 0xc),
                       (int *)(unaff_EBP + 0x14),uVar4);
  fVar5 = (float10)FUN_00557ce9(unaff_EBP + -100,unaff_EBP + -0x10,uVar4);
  *(double *)(unaff_EBP + -0x18) = (double)fVar5;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  std::locale::~locale((locale *)(unaff_EBP + 0x1c));
  cVar3 = FUN_0054e9af((void *)(unaff_EBP + 0xc),(int *)(unaff_EBP + 0x14));
  puVar1 = *(uint **)(unaff_EBP + 0x20);
  if (cVar3 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if ((*(int *)(unaff_EBP + -0x10) == unaff_EBP + -100) || (DAT_0074dc60 != 0)) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    **(undefined8 **)(unaff_EBP + 0x24) = *(undefined8 *)(unaff_EBP + -0x18);
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = *(undefined4 *)(unaff_EBP + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 0054db75 FUN_0054db75 ==== */

void FUN_0054db75(void)

{
  uint *puVar1;
  char cVar2;
  undefined4 uVar3;
  int unaff_EBP;
  undefined4 *puVar4;
  
  FUN_0055b39c();
  puVar1 = *(uint **)(unaff_EBP + 0x20);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  puVar4 = (undefined4 *)(unaff_EBP + -0x18);
  while( true ) {
    DAT_0074dc60 = 0;
    uVar3 = FUN_004d4370(*(undefined4 *)(unaff_EBP + 0x1c),unaff_EBP + 0x20);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uVar3 = FUN_0054dc69(unaff_EBP + -0x38,unaff_EBP + 0xc,unaff_EBP + 0x14,0x800,uVar3);
    uVar3 = FUN_0055b06c(unaff_EBP + -0x38,unaff_EBP + -0x14,uVar3);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *puVar4 = uVar3;
    std::locale::~locale((locale *)(unaff_EBP + 0x20));
    cVar2 = FUN_0054e9af((void *)(unaff_EBP + 0xc),(int *)(unaff_EBP + 0x14));
    if (cVar2 != '\0') {
      *puVar1 = *puVar1 | 1;
    }
    if ((*(int *)(unaff_EBP + -0x14) == unaff_EBP + -0x38) || (DAT_0074dc60 != 0)) break;
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    puVar4 = puVar4 + 1;
    if (0 < *(int *)(unaff_EBP + -0x10)) goto LAB_0054dc3d;
    cVar2 = FUN_0054e9af((void *)(unaff_EBP + 0xc),(int *)(unaff_EBP + 0x14));
    if (cVar2 != '\0') break;
    if (*(char *)(unaff_EBP + 0x10) == '\0') {
      Peek(unaff_EBP + 0xc);
    }
    if (*(char *)(unaff_EBP + 0x11) != ':') break;
    FUN_0054e379(unaff_EBP + 0xc);
  }
  *puVar1 = *puVar1 | 2;
LAB_0054dc3d:
  if ((*puVar1 & 2) == 0) {
    **(undefined4 **)(unaff_EBP + 0x24) = *(undefined4 *)(unaff_EBP + -0x18);
  }
  puVar4 = *(undefined4 **)(unaff_EBP + 8);
  *puVar4 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar4[1] = *(undefined4 *)(unaff_EBP + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 0054dc69 FUN_0054dc69 ==== */

undefined4 FUN_0054dc69(void)

{
  int iVar1;
  void *this;
  size_t _MaxCount;
  undefined1 uVar2;
  char cVar3;
  int *this_val;
  uint i;
  void *_memchr_result;
  char *pcVar4;
  char *pcVar5;
  undefined1 *puVar6;
  int unaff_EBP;
  uint uVar7;
  
  FUN_0055b39c();
  this_val = (int *)FUN_0054e63e(*(undefined4 *)(unaff_EBP + 0x18),0,1);
  FUN_004d6100(this_val,unaff_EBP + -0x38);
  iVar1 = *this_val;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar2 = (**(code **)(iVar1 + 8))();
  this = *(void **)(unaff_EBP + 0xc);
  puVar6 = *(undefined1 **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -0xd) = uVar2;
  *(undefined1 **)(unaff_EBP + -0x14) = puVar6;
  cVar3 = FUN_0054e9af(this,*(int **)(unaff_EBP + 0x10));
  if (cVar3 == '\0') {
    if (*(char *)((int)this + 4) == '\0') {
      Peek(this);
    }
    if (*(char *)((int)this + 5) == '+') {
      *puVar6 = 0x2b;
    }
    else {
      if (*(char *)((int)this + 4) == '\0') {
        Peek(this);
      }
      if (*(char *)((int)this + 5) != '-') goto LAB_0054dcf2;
      *puVar6 = 0x2d;
    }
    *(undefined1 **)(unaff_EBP + -0x14) = puVar6 + 1;
    FUN_0054e379(this);
  }
LAB_0054dcf2:
  i = *(uint *)(unaff_EBP + 0x14) & 0xe00;
  if (i == 0x400) {
    *(undefined4 *)(unaff_EBP + 0x14) = 8;
  }
  else if (i == 0x800) {
    *(undefined4 *)(unaff_EBP + 0x14) = 0x10;
  }
  else {
    *(uint *)(unaff_EBP + 0x14) = -(uint)(i != 0) & 10;
  }
  *(undefined1 *)(unaff_EBP + 0x1b) = 0;
  *(undefined1 *)(unaff_EBP + 0xf) = 0;
  cVar3 = FUN_0054e9af(this,*(int **)(unaff_EBP + 0x10));
  if (cVar3 == '\0') {
    if (*(char *)((int)this + 4) == '\0') {
      Peek(this);
    }
    if (*(char *)((int)this + 5) != '0') goto LAB_0054ddb3;
    *(undefined1 *)(unaff_EBP + 0x1b) = 1;
    FUN_0054e379(this);
    cVar3 = FUN_0054e9af(this,*(int **)(unaff_EBP + 0x10));
    if (cVar3 != '\0') {
LAB_0054dda6:
      if (*(int *)(unaff_EBP + 0x14) == 0) {
        *(undefined4 *)(unaff_EBP + 0x14) = 8;
        goto LAB_0054ddb3;
      }
      goto LAB_0054ddb9;
    }
    if (*(char *)((int)this + 4) == '\0') {
      Peek(this);
    }
    if (*(char *)((int)this + 5) != 'x') {
      if (*(char *)((int)this + 4) == '\0') {
        Peek(this);
      }
      if (*(char *)((int)this + 5) != 'X') goto LAB_0054dda6;
    }
    if ((*(int *)(unaff_EBP + 0x14) != 0) && (*(int *)(unaff_EBP + 0x14) != 0x10))
    goto LAB_0054dda6;
    *(undefined1 *)(unaff_EBP + 0x1b) = 0;
    *(undefined4 *)(unaff_EBP + 0x14) = 0x10;
    FUN_0054e379(this);
LAB_0054ddbe:
    *(uint *)(unaff_EBP + -0x18) = ((*(int *)(unaff_EBP + 0x14) != 8) - 1 & 0xfffffff2) + 0x16;
  }
  else {
LAB_0054ddb3:
    if (*(int *)(unaff_EBP + 0x14) != 0) {
LAB_0054ddb9:
      if (*(int *)(unaff_EBP + 0x14) != 10) goto LAB_0054ddbe;
    }
    *(undefined4 *)(unaff_EBP + -0x18) = 10;
  }
  i = 0;
  *(undefined1 *)(unaff_EBP + -0x28) = *(undefined1 *)(unaff_EBP + 0x13);
  FUN_004028f0(unaff_EBP + -0x28,0);
  FUN_0054e333((void *)(unaff_EBP + -0x28),1,*(char *)(unaff_EBP + 0x1b) != '\0');
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  cVar3 = FUN_0054e9af(this,*(int **)(unaff_EBP + 0x10));
  if (cVar3 == '\0') {
    do {
      if (*(char *)((int)this + 4) == '\0') {
        Peek(this);
      }
      cVar3 = *(char *)((int)this + 5);
      _MaxCount = *(size_t *)(unaff_EBP + -0x18);
      **(char **)(unaff_EBP + -0x14) = cVar3;
      _memchr_result = _memchr("0123456789abcdefABCDEF",(int)cVar3,_MaxCount);
      if (_memchr_result == (void *)0x0) {
        if ((*(uint *)(unaff_EBP + -0x20) < i) || (*(int *)(unaff_EBP + -0x24) == 0)) {
          pcVar4 = "";
        }
        else {
          FUN_00471de0(unaff_EBP + -0x28);
          pcVar4 = (char *)(*(int *)(unaff_EBP + -0x24) + i);
        }
        if ((*pcVar4 == '\0') || (*(char *)(unaff_EBP + -0xd) == '\0')) break;
        if (*(char *)((int)this + 4) == '\0') {
          Peek(this);
        }
        if (*(char *)((int)this + 5) != *(char *)(unaff_EBP + -0xd)) break;
        FUN_0047eab0(unaff_EBP + -0x28,1,0);
        i = i + 1;
      }
      else {
        if (((*(char *)(unaff_EBP + 0xf) != '\0') || (**(char **)(unaff_EBP + -0x14) != '0')) &&
           (*(uint *)(unaff_EBP + -0x14) < iVar1 + 0x1fU)) {
          *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
          *(undefined1 *)(unaff_EBP + 0xf) = 1;
        }
        *(undefined1 *)(unaff_EBP + 0x1b) = 1;
        if ((*(uint *)(unaff_EBP + -0x20) < i) || (*(int *)(unaff_EBP + -0x24) == 0)) {
          pcVar4 = "";
        }
        else {
          FUN_00471de0(unaff_EBP + -0x28);
          pcVar4 = (char *)(*(int *)(unaff_EBP + -0x24) + i);
        }
        if (*pcVar4 != '\x7f') {
          if ((*(uint *)(unaff_EBP + -0x20) < i) || (*(int *)(unaff_EBP + -0x24) == 0)) {
            pcVar4 = "";
          }
          else {
            FUN_00471de0(unaff_EBP + -0x28);
            pcVar4 = (char *)(*(int *)(unaff_EBP + -0x24) + i);
          }
          *pcVar4 = *pcVar4 + '\x01';
        }
      }
      FUN_0054e379(this);
      cVar3 = FUN_0054e9af(this,*(int **)(unaff_EBP + 0x10));
    } while (cVar3 == '\0');
    if (i != 0) {
      if ((*(uint *)(unaff_EBP + -0x20) < i) || (*(int *)(unaff_EBP + -0x24) == 0)) {
        pcVar4 = "";
      }
      else {
        FUN_00471de0(unaff_EBP + -0x28);
        pcVar4 = (char *)(*(int *)(unaff_EBP + -0x24) + i);
      }
      if (*pcVar4 < '\x01') {
        *(undefined1 *)(unaff_EBP + 0x1b) = 0;
      }
      else {
        i = i + 1;
      }
    }
  }
  pcVar4 = *(char **)(unaff_EBP + -0x34);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = "";
  }
  if (*(char *)(unaff_EBP + 0x1b) != '\0') {
    do {
      if ((i == 0) || (*pcVar4 == '\x7f')) break;
      uVar7 = i - 1;
      if (uVar7 == 0) {
LAB_0054df80:
        if (uVar7 == 0) {
          if (*(int *)(unaff_EBP + -0x24) == 0) {
            pcVar5 = "";
          }
          else {
            FUN_00471de0(unaff_EBP + -0x28);
            pcVar5 = *(char **)(unaff_EBP + -0x24);
          }
          if (*pcVar4 < *pcVar5) goto LAB_0054dfa5;
        }
        if ('\0' < pcVar4[1]) {
          pcVar4 = pcVar4 + 1;
        }
      }
      else {
        if ((*(uint *)(unaff_EBP + -0x20) < uVar7) || (*(int *)(unaff_EBP + -0x24) == 0)) {
          pcVar5 = "";
        }
        else {
          FUN_00471de0(unaff_EBP + -0x28);
          pcVar5 = (char *)(*(int *)(unaff_EBP + -0x24) + uVar7);
        }
        if (*pcVar4 == *pcVar5) goto LAB_0054df80;
LAB_0054dfa5:
        *(undefined1 *)(unaff_EBP + 0x1b) = 0;
      }
      i = i - 2;
    } while (*(char *)(unaff_EBP + 0x1b) != '\0');
    if (*(char *)(unaff_EBP + 0x1b) != '\0') {
      puVar6 = *(undefined1 **)(unaff_EBP + -0x14);
      if (*(char *)(unaff_EBP + 0xf) == '\0') {
        *puVar6 = 0x30;
        puVar6 = puVar6 + 1;
      }
      goto LAB_0054dfd5;
    }
  }
  puVar6 = *(undefined1 **)(unaff_EBP + 8);
LAB_0054dfd5:
  *puVar6 = 0;
  FUN_004028f0(unaff_EBP + -0x28,1);
  FUN_004028f0(unaff_EBP + -0x38,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 0x14);
}


/* ==== 0054dffe FUN_0054dffe ==== */

int FUN_0054dffe(undefined1 *param_1,void *this_val_2,int *this_val,undefined4 param_4)

{
  undefined1 uVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  undefined4 *puVar5;
  int k;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int i;
  int j;
  
  piVar4 = (int *)FUN_0054e63e(param_4,0,1);
  cVar3 = FUN_0054e9af(this_val_2,this_val);
  puVar6 = param_1;
  if (cVar3 == '\0') {
    if (*(char *)((int)this_val_2 + 4) == '\0') {
      Peek(this_val_2);
    }
    if (*(char *)((int)this_val_2 + 5) == '+') {
      *param_1 = 0x2b;
    }
    else {
      if (*(char *)((int)this_val_2 + 4) == '\0') {
        Peek(this_val_2);
      }
      if (*(char *)((int)this_val_2 + 5) != '-') goto LAB_0054e069;
      *param_1 = 0x2d;
    }
    FUN_0054e379(this_val_2);
    puVar6 = param_1 + 1;
  }
LAB_0054e069:
  bVar2 = false;
  cVar3 = FUN_0054e9af(this_val_2,this_val);
  if (cVar3 == '\0') {
    do {
      if (*(char *)((int)this_val_2 + 4) == '\0') {
        Peek(this_val_2);
      }
      if (*(char *)((int)this_val_2 + 5) != '0') break;
      bVar2 = true;
      FUN_0054e379(this_val_2);
      cVar3 = FUN_0054e9af(this_val_2,this_val);
    } while (cVar3 == '\0');
    if (bVar2) {
      *puVar6 = 0x30;
      puVar6 = puVar6 + 1;
    }
  }
  i = 0;
  j = 0;
  while( true ) {
    cVar3 = FUN_0054e9af(this_val_2,this_val);
    if (cVar3 != '\0') break;
    if (*(char *)((int)this_val_2 + 4) == '\0') {
      Peek(this_val_2);
    }
    uVar1 = *(undefined1 *)((int)this_val_2 + 5);
    *puVar6 = uVar1;
    cVar3 = FUN_0054e965(uVar1,param_4);
    if (cVar3 == '\0') break;
    if (i < 0x24) {
      puVar6 = puVar6 + 1;
      i = i + 1;
    }
    else {
      j = j + 1;
    }
    bVar2 = true;
    FUN_0054e379(this_val_2);
  }
  cVar3 = FUN_0054e9af(this_val_2,this_val);
  if (cVar3 == '\0') {
    if (*(char *)((int)this_val_2 + 4) == '\0') {
      Peek(this_val_2);
    }
    cVar3 = (**(code **)(*piVar4 + 4))();
    if (*(char *)((int)this_val_2 + 5) == cVar3) {
      puVar5 = (undefined4 *)FUN_0055a6b0();
      *puVar6 = *(undefined1 *)*puVar5;
      puVar6 = puVar6 + 1;
      FUN_0054e379(this_val_2);
    }
  }
  if (i == 0) {
    while( true ) {
      cVar3 = FUN_0054e9af(this_val_2,this_val);
      if (cVar3 != '\0') break;
      if (*(char *)((int)this_val_2 + 4) == '\0') {
        Peek(this_val_2);
      }
      if (*(char *)((int)this_val_2 + 5) != '0') break;
      j = j + -1;
      bVar2 = true;
      FUN_0054e379(this_val_2);
    }
    if (j < 0) {
      *puVar6 = 0x30;
      puVar6 = puVar6 + 1;
      j = j + 1;
    }
  }
  while( true ) {
    cVar3 = FUN_0054e9af(this_val_2,this_val);
    if (cVar3 != '\0') break;
    if (*(char *)((int)this_val_2 + 4) == '\0') {
      Peek(this_val_2);
    }
    uVar1 = *(undefined1 *)((int)this_val_2 + 5);
    *puVar6 = uVar1;
    cVar3 = FUN_0054e965(uVar1,param_4);
    if (cVar3 == '\0') break;
    if (i < 0x24) {
      puVar6 = puVar6 + 1;
      i = i + 1;
    }
    bVar2 = true;
    FUN_0054e379(this_val_2);
  }
  if (bVar2) {
    cVar3 = FUN_0054e9af(this_val_2,this_val);
    bVar2 = true;
    puVar7 = puVar6;
    if (cVar3 == '\0') {
      if (*(char *)((int)this_val_2 + 4) == '\0') {
        Peek(this_val_2);
      }
      if (*(char *)((int)this_val_2 + 5) != 'e') {
        if (*(char *)((int)this_val_2 + 4) == '\0') {
          Peek(this_val_2);
        }
        if (*(char *)((int)this_val_2 + 5) != 'E') goto LAB_0054e2d6;
      }
      *puVar6 = 0x65;
      puVar7 = puVar6 + 1;
      FUN_0054e379(this_val_2);
      bVar2 = false;
      k = 0;
      cVar3 = FUN_0054e9af(this_val_2,this_val);
      if (cVar3 == '\0') {
        if (*(char *)((int)this_val_2 + 4) == '\0') {
          Peek(this_val_2);
        }
        if (*(char *)((int)this_val_2 + 5) == '+') {
          *puVar7 = 0x2b;
        }
        else {
          if (*(char *)((int)this_val_2 + 4) == '\0') {
            Peek(this_val_2);
          }
          if (*(char *)((int)this_val_2 + 5) != '-') goto LAB_0054e250;
          *puVar7 = 0x2d;
        }
        puVar7 = puVar6 + 2;
        FUN_0054e379(this_val_2);
      }
LAB_0054e250:
      cVar3 = FUN_0054e9af(this_val_2,this_val);
      if (cVar3 == '\0') {
        do {
          if (*(char *)((int)this_val_2 + 4) == '\0') {
            Peek(this_val_2);
          }
          if (*(char *)((int)this_val_2 + 5) != '0') break;
          bVar2 = true;
          FUN_0054e379(this_val_2);
          cVar3 = FUN_0054e9af(this_val_2,this_val);
        } while (cVar3 == '\0');
        if (bVar2) {
          *puVar7 = 0x30;
          puVar7 = puVar7 + 1;
        }
      }
      while( true ) {
        cVar3 = FUN_0054e9af(this_val_2,this_val);
        if (cVar3 != '\0') break;
        if (*(char *)((int)this_val_2 + 4) == '\0') {
          Peek(this_val_2);
        }
        uVar1 = *(undefined1 *)((int)this_val_2 + 5);
        *puVar7 = uVar1;
        cVar3 = FUN_0054e965(uVar1,param_4);
        if (cVar3 == '\0') break;
        if (k < 8) {
          puVar7 = puVar7 + 1;
          k = k + 1;
        }
        bVar2 = true;
        FUN_0054e379(this_val_2);
      }
    }
LAB_0054e2d6:
    if (bVar2) goto LAB_0054e2df;
  }
  puVar7 = param_1;
LAB_0054e2df:
  *puVar7 = 0;
  return j;
}


/* ==== 0054e2ea FUN_0054e2ea ==== */

void __thiscall FUN_0054e2ea(void *this)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_0055a6b0();
  *(undefined1 *)((int)this + 0xc) = *(undefined1 *)*puVar1;
  *(undefined1 *)((int)this + 0xd) = *(undefined1 *)puVar1[1];
  uVar2 = FUN_0054e986((char *)puVar1[2]);
  *(undefined4 *)((int)this + 8) = uVar2;
  uVar2 = FUN_0054e986(s_false_005b70b4);
  *(undefined4 *)((int)this + 0x10) = uVar2;
  uVar2 = FUN_0054e986(&DAT_005b70ac);
  *(undefined4 *)((int)this + 0x14) = uVar2;
  return;
}


/* ==== 0054e333 FUN_0054e333 ==== */

void * __thiscall FUN_0054e333(void *this,size_t size,char param_2)

{
  char cVar1;
  
  if (size == 0xffffffff) {
    FUN_0054b1b4();
  }
  cVar1 = FUN_00402a00(this,size,1);
  if (cVar1 != '\0') {
    _memset(*(void **)((int)this + 4),(int)param_2,size);
    *(size_t *)((int)this + 8) = size;
    *(undefined1 *)(*(int *)((int)this + 4) + size) = 0;
  }
  return this;
}


/* ==== 0054e379 FUN_0054e379 ==== */

void __thiscall FUN_0054e379(void *this)

{
  int iVar1;
  
  if (*(int *)this != 0) {
    iVar1 = FUN_0054e39b();
    if (iVar1 != -1) {
      *(undefined1 *)((int)this + 4) = 0;
      return;
    }
  }
  *(undefined4 *)this = 0;
  *(undefined1 *)((int)this + 4) = 1;
  return;
}


/* ==== 0054e39b FUN_0054e39b ==== */

uint __thiscall FUN_0054e39b(void *this)

{
  byte *pbVar1;
  uint uVar2;
  
  uVar2 = **(uint **)((int)this + 0x1c);
  if ((uVar2 != 0) && (uVar2 < **(int **)((int)this + 0x2c) + uVar2)) {
    pbVar1 = (byte *)FUN_0054b769();
    return (uint)*pbVar1;
  }
  uVar2 = (**(code **)(*(int *)this + 0x14))();
  return uVar2;
}


/* ==== 0054e3be Peek ==== */

/* Library Function - Multiple Matches With Same Base Name
    private: char __thiscall std::istreambuf_iterator<char,struct std::char_traits<char>
   >::_Peek(void)
    private: char __thiscall std::istreambuf_iterator<char,struct std::char_traits<char>
   >::_Peek(void)const 
   
   Library: Visual Studio */

undefined1 __thiscall Peek(void *this)

{
  int iVar1;
  
  if (*(int *)this != 0) {
    iVar1 = FUN_004d4c30();
    if (iVar1 != -1) {
      *(char *)((int)this + 5) = (char)iVar1;
      goto LAB_0054e3d9;
    }
  }
  *(undefined4 *)this = 0;
LAB_0054e3d9:
  *(undefined1 *)((int)this + 4) = 1;
  return *(undefined1 *)((int)this + 5);
}


/* ==== 0054e3e2 FUN_0054e3e2 ==== */

void FUN_0054e3e2(void)

{
  char cVar1;
  int iVar2;
  void *this_val;
  undefined4 uVar3;
  int unaff_EBP;
  bool bVar4;
  
  FUN_0055b39c();
  iVar2 = DAT_0074db0c;
  bVar4 = DAT_0074db0c == 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (bVar4) {
    DAT_0074dafc = DAT_0074dafc + 1;
    DAT_0074db0c = DAT_0074dafc;
    iVar2 = DAT_0074dafc;
  }
  iVar2 = FUN_0054ca8b(*(undefined4 *)(unaff_EBP + 8),iVar2,1);
  if (iVar2 == 0) {
    if (*(char *)(unaff_EBP + 0x10) != '\0') {
      cVar1 = FUN_0054caca(*(undefined4 *)(unaff_EBP + 8));
      if (cVar1 != '\0') {
        if (DAT_0074b898 == 0) {
          this_val = operator_new(0x18);
          *(void **)(unaff_EBP + 0x10) = this_val;
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (this_val == (void *)0x0) {
            uVar3 = 0;
          }
          else {
            uVar3 = FUN_004d49e0(this_val,0,0,0);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          DAT_0074b898 = FUN_004d6520(uVar3);
        }
        goto LAB_0054e467;
      }
    }
    *(char **)(unaff_EBP + 0x10) = s_missing_locale_facet_005b6f34;
    FUN_00558853(unaff_EBP + -0x18,unaff_EBP + 0x10);
    *(undefined ***)(unaff_EBP + -0x18) = &PTR_FUN_0057915c;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x18,&DAT_00584188);
  }
LAB_0054e467:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 0054e49c FUN_0054e49c ==== */

void FUN_0054e49c(void)

{
  char cVar1;
  int iVar2;
  undefined4 *operator_new_result;
  int unaff_EBP;
  
  FUN_0055b39c();
  iVar2 = DAT_0074db08;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    DAT_0074dafc = DAT_0074dafc + 1;
    DAT_0074db08 = DAT_0074dafc;
    iVar2 = DAT_0074dafc;
  }
  iVar2 = FUN_0054ca8b(*(undefined4 *)(unaff_EBP + 8),iVar2,1);
  if (iVar2 == 0) {
    if (*(char *)(unaff_EBP + 0x10) != '\0') {
      cVar1 = FUN_0054caca(*(undefined4 *)(unaff_EBP + 8));
      if (cVar1 != '\0') {
        if (DAT_0074db18 == 0) {
          operator_new_result = operator_new(8);
          *(undefined4 **)(unaff_EBP + 0x10) = operator_new_result;
          if (operator_new_result == (undefined4 *)0x0) {
            operator_new_result = (undefined4 *)0x0;
          }
          else {
            operator_new_result[1] = 0;
            *(undefined1 *)(unaff_EBP + -4) = 2;
            *operator_new_result = &PTR_FUN_00579100;
            FUN_0054d3cd(s_C_005b6f4c);
            FUN_0054d486();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          DAT_0074db18 = FUN_0054e9ee(operator_new_result);
        }
        goto LAB_0054e539;
      }
    }
    *(char **)(unaff_EBP + 0x10) = s_missing_locale_facet_005b6f34;
    FUN_00558853(unaff_EBP + -0x18,unaff_EBP + 0x10);
    *(undefined ***)(unaff_EBP + -0x18) = &PTR_FUN_0057915c;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x18,&DAT_00584188);
  }
LAB_0054e539:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 0054e56d FUN_0054e56d ==== */

void FUN_0054e56d(void)

{
  char cVar1;
  int iVar2;
  undefined4 *operator_new_result;
  int unaff_EBP;
  
  FUN_0055b39c();
  iVar2 = DAT_0074db14;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    DAT_0074dafc = DAT_0074dafc + 1;
    DAT_0074db14 = DAT_0074dafc;
    iVar2 = DAT_0074dafc;
  }
  iVar2 = FUN_0054ca8b(*(undefined4 *)(unaff_EBP + 8),iVar2,1);
  if (iVar2 == 0) {
    if (*(char *)(unaff_EBP + 0x10) != '\0') {
      cVar1 = FUN_0054caca(*(undefined4 *)(unaff_EBP + 8));
      if (cVar1 != '\0') {
        if (DAT_0074b894 == 0) {
          operator_new_result = operator_new(8);
          *(undefined4 **)(unaff_EBP + 0x10) = operator_new_result;
          if (operator_new_result == (undefined4 *)0x0) {
            operator_new_result = (undefined4 *)0x0;
          }
          else {
            operator_new_result[1] = 0;
            *(undefined1 *)(unaff_EBP + -4) = 2;
            *operator_new_result = &PTR_FUN_005790e0;
            FUN_0054d3cd(s_C_005b6f4c);
            FUN_0054d486();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          DAT_0074b894 = FUN_004d6550(operator_new_result);
        }
        goto LAB_0054e60a;
      }
    }
    *(char **)(unaff_EBP + 0x10) = s_missing_locale_facet_005b6f34;
    FUN_00558853(unaff_EBP + -0x18,unaff_EBP + 0x10);
    *(undefined ***)(unaff_EBP + -0x18) = &PTR_FUN_0057915c;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x18,&DAT_00584188);
  }
LAB_0054e60a:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 0054e63e FUN_0054e63e ==== */

void FUN_0054e63e(void)

{
  char cVar1;
  int iVar2;
  void *this_val;
  undefined4 uVar3;
  int unaff_EBP;
  
  FUN_0055b39c();
  iVar2 = DAT_0074db10;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    DAT_0074dafc = DAT_0074dafc + 1;
    DAT_0074db10 = DAT_0074dafc;
    iVar2 = DAT_0074dafc;
  }
  iVar2 = FUN_0054ca8b(*(undefined4 *)(unaff_EBP + 8),iVar2,1);
  if (iVar2 == 0) {
    if (*(char *)(unaff_EBP + 0x10) != '\0') {
      cVar1 = FUN_0054caca(*(undefined4 *)(unaff_EBP + 8));
      if (cVar1 != '\0') {
        if (DAT_0074b89c == 0) {
          this_val = operator_new(0x18);
          *(void **)(unaff_EBP + 0x10) = this_val;
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (this_val == (void *)0x0) {
            uVar3 = 0;
          }
          else {
            uVar3 = FUN_004d6120(this_val,0);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          DAT_0074b89c = FUN_004d6580(uVar3);
        }
        goto LAB_0054e6c1;
      }
    }
    *(char **)(unaff_EBP + 0x10) = s_missing_locale_facet_005b6f34;
    FUN_00558853(unaff_EBP + -0x18,unaff_EBP + 0x10);
    *(undefined ***)(unaff_EBP + -0x18) = &PTR_FUN_0057915c;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x18,&DAT_00584188);
  }
LAB_0054e6c1:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 0054e6f5 FUN_0054e6f5 ==== */

void FUN_0054e6f5(void)

{
  char cVar1;
  int iVar2;
  void *this_val;
  undefined4 uVar3;
  int unaff_EBP;
  
  FUN_0055b39c();
  iVar2 = DAT_0074db04;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    DAT_0074dafc = DAT_0074dafc + 1;
    DAT_0074db04 = DAT_0074dafc;
    iVar2 = DAT_0074dafc;
  }
  iVar2 = FUN_0054ca8b(*(undefined4 *)(unaff_EBP + 8),iVar2,1);
  if (iVar2 == 0) {
    if (*(char *)(unaff_EBP + 0x10) != '\0') {
      cVar1 = FUN_0054caca(*(undefined4 *)(unaff_EBP + 8));
      if (cVar1 != '\0') {
        if (DAT_0074b88c == 0) {
          this_val = operator_new(0x10);
          *(void **)(unaff_EBP + 0x10) = this_val;
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (this_val == (void *)0x0) {
            uVar3 = 0;
          }
          else {
            uVar3 = FUN_004d1210(this_val,0);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          DAT_0074b88c = FUN_004d1330(uVar3);
        }
        goto LAB_0054e778;
      }
    }
    *(char **)(unaff_EBP + 0x10) = s_missing_locale_facet_005b6f34;
    FUN_00558853(unaff_EBP + -0x18,unaff_EBP + 0x10);
    *(undefined ***)(unaff_EBP + -0x18) = &PTR_FUN_0057915c;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x18,&DAT_00584188);
  }
LAB_0054e778:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 0054e7ac FUN_0054e7ac ==== */

undefined4 FUN_0054e7ac(void)

{
  char *pcVar1;
  char cVar2;
  void *this;
  undefined4 uVar3;
  char cVar4;
  undefined1 *puVar5;
  char *pcVar6;
  undefined1 uVar7;
  uint uVar8;
  char *pcVar9;
  int unaff_EBP;
  uint i;
  int j;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_0055b39c();
  pcVar9 = *(char **)(unaff_EBP + 0x14);
  cVar4 = *pcVar9;
  pcVar6 = pcVar9;
  cVar2 = cVar4;
  while (cVar2 != '\0') {
    if (cVar2 == cVar4) {
      *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 1;
    }
    pcVar1 = pcVar6 + 1;
    pcVar6 = pcVar6 + 1;
    cVar2 = *pcVar1;
  }
  *(undefined1 *)(unaff_EBP + -0x28) = *(undefined1 *)(unaff_EBP + 0x17);
  FUN_004028f0(unaff_EBP + -0x28,0);
  FUN_0054e333((void *)(unaff_EBP + -0x28),*(size_t *)(unaff_EBP + 0x10),'\0');
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0xfffffffe;
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
  while( true ) {
    *(undefined1 *)(unaff_EBP + -0xd) = 0;
    i = 0;
    j = 0;
    if (*(int *)(unaff_EBP + 0x10) == 0) break;
    do {
      cVar4 = pcVar9[j];
      if (cVar4 != '\0') {
        do {
          if (cVar4 == *pcVar9) break;
          cVar4 = pcVar9[j + 1];
          j = j + 1;
        } while (cVar4 != '\0');
      }
      if ((*(uint *)(unaff_EBP + -0x20) < i) || (*(int *)(unaff_EBP + -0x24) == 0)) {
        pcVar6 = "";
      }
      else {
        FUN_00471de0(unaff_EBP + -0x28);
        pcVar6 = (char *)(*(int *)(unaff_EBP + -0x24) + i);
      }
      if (*pcVar6 == '\0') {
        j = j + *(int *)(unaff_EBP + -0x14);
        if ((pcVar9[j] == *pcVar9) || (pcVar9[j] == '\0')) {
          uVar7 = 0x7f;
          if (*(uint *)(unaff_EBP + -0x14) < 0x7f) {
            uVar7 = (undefined1)*(undefined4 *)(unaff_EBP + -0x14);
          }
          if ((*(uint *)(unaff_EBP + -0x20) < i) || (*(int *)(unaff_EBP + -0x24) == 0)) {
            puVar5 = &DAT_0057629c;
          }
          else {
            FUN_00471de0(unaff_EBP + -0x28);
            puVar5 = (undefined1 *)(*(int *)(unaff_EBP + -0x24) + i);
          }
          *puVar5 = uVar7;
          *(uint *)(unaff_EBP + -0x18) = i;
        }
        else {
          this = *(void **)(unaff_EBP + 8);
          cVar4 = FUN_0054e9af(this,*(int **)(unaff_EBP + 0xc));
          if (cVar4 == '\0') {
            if (*(char *)((int)this + 4) == '\0') {
              Peek(this);
            }
            if (*(char *)(j + *(int *)(unaff_EBP + 0x14)) == *(char *)((int)this + 5)) {
              *(undefined1 *)(unaff_EBP + -0xd) = 1;
              goto LAB_0054e913;
            }
          }
          uVar8 = *(uint *)(unaff_EBP + -0x14);
          if (0x7e < uVar8) {
            uVar8 = 0x7f;
          }
          if ((*(uint *)(unaff_EBP + -0x20) < i) || (*(int *)(unaff_EBP + -0x24) == 0)) {
            puVar5 = &DAT_0057629c;
          }
          else {
            FUN_00471de0(unaff_EBP + -0x28);
            puVar5 = (undefined1 *)(*(int *)(unaff_EBP + -0x24) + i);
          }
          *puVar5 = (char)uVar8;
        }
LAB_0054e913:
        pcVar9 = *(char **)(unaff_EBP + 0x14);
      }
      else {
        if ((*(uint *)(unaff_EBP + -0x20) < i) || (*(int *)(unaff_EBP + -0x24) == 0)) {
          pcVar6 = "";
        }
        else {
          FUN_00471de0(unaff_EBP + -0x28);
          pcVar6 = (char *)(*(int *)(unaff_EBP + -0x24) + i);
        }
        j = j + *pcVar6;
      }
      i = i + 1;
    } while (i < *(uint *)(unaff_EBP + 0x10));
    if ((*(char *)(unaff_EBP + -0xd) == '\0') ||
       (cVar4 = FUN_0054e9af(*(void **)(unaff_EBP + 8),*(int **)(unaff_EBP + 0xc)), cVar4 != '\0'))
    break;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    FUN_0054e379(*(undefined4 *)(unaff_EBP + 8));
    *(undefined4 *)(unaff_EBP + -0x18) = 0xffffffff;
  }
  FUN_004028f0(unaff_EBP + -0x28,1);
  uVar3 = *(undefined4 *)(unaff_EBP + -0x18);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar3;
}


/* ==== 0054e965 FUN_0054e965 ==== */

uint FUN_0054e965(byte param_1,undefined4 param_2)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = FUN_0054e3e2(param_2,0,1);
  uVar2 = (uint3)((uint)*(int *)(iVar1 + 0x10) >> 8);
  return CONCAT31(uVar2 >> 2,
                  (char)(CONCAT31(uVar2,*(undefined1 *)(*(int *)(iVar1 + 0x10) + (uint)param_1 * 2))
                        >> 2)) & 0xffffff01;
}


/* ==== 0054e986 FUN_0054e986 ==== */

void FUN_0054e986(char *str)

{
  size_t _strlen_result;
  char *pcVar1;
  uint size;
  
  _strlen_result = _strlen(str);
  size = _strlen_result + 1;
  pcVar1 = operator_new(size);
  for (; size != 0; size = size - 1) {
    *pcVar1 = *str;
    pcVar1 = pcVar1 + 1;
    str = str + 1;
  }
  return;
}


/* ==== 0054e9af FUN_0054e9af ==== */

undefined4 __thiscall FUN_0054e9af(void *this,int *this_val)

{
  if (*(char *)((int)this + 4) == '\0') {
    Peek();
  }
  if ((char)this_val[1] == '\0') {
    Peek(this_val);
  }
  if (*(int *)this == 0) {
    if (*this_val != 0) {
      return 0;
    }
  }
  else if (*this_val == 0) {
    return 0;
  }
  return 1;
}


/* ==== 0054e9ee FUN_0054e9ee ==== */

int FUN_0054e9ee(int param_1)

{
  DAT_0074db1c = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(&LAB_0054ea14);
  return param_1;
}


/* ==== 0054ea89 FUN_0054ea89 ==== */

void FUN_0054ea89(void)

{
  FUN_005584e0(FUN_004d1400);
  return;
}


/* ==== 0054ea95 FUN_0054ea95 ==== */

void FUN_0054ea95(void)

{
  FUN_005584e0(&DAT_0054b338);
  return;
}


/* ==== 0054eaa1 FUN_0054eaa1 ==== */

int FUN_0054eaa1(LPSTR param_1,WCHAR param_2,undefined4 param_3,int *param_4)

{
  UINT CodePage;
  int iVar1;
  
  CodePage = DAT_0074dcf4;
  iVar1 = DAT_0074dce4;
  if (param_4 != (int *)0x0) {
    CodePage = param_4[1];
    iVar1 = *param_4;
  }
  if (iVar1 == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return 1;
    }
  }
  else {
    param_4 = (int *)0x0;
    iVar1 = WideCharToMultiByte(CodePage,0x220,&param_2,1,param_1,DAT_005c8378,(LPCSTR)0x0,
                                (LPBOOL)&param_4);
    if ((iVar1 != 0) && (param_4 == (int *)0x0)) {
      return iVar1;
    }
  }
  DAT_0074dc60 = 0x2a;
  return -1;
}


/* ==== 0054eb13 FUN_0054eb13 ==== */

undefined8 FUN_0054eb13(void)

{
  return CONCAT44(DAT_0074dcf4,DAT_0074dce4);
}


/* ==== 0054eb1f FUN_0054eb1f ==== */

int FUN_0054eb1f(undefined4 param_1)

{
  int iVar1;
  
  if ((short)param_1 != -1) {
    iVar1 = FUN_0054eaa1((int)&param_1 + 2,param_1,0,0);
    if (iVar1 == 1) {
      return (int)param_1._2_1_;
    }
  }
  return -1;
}


/* ==== 0054eb4d FUN_0054eb4d ==== */

undefined1 FUN_0054eb4d(void)

{
  return 0;
}


/* ==== 0054eb50 FUN_0054eb50 ==== */

uint __thiscall FUN_0054eb50(void *this,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  void *local_8;
  
  uVar2 = param_2;
  if (param_3 == (undefined4 *)0x0) {
    local_8 = DAT_0074dce4;
    uVar1 = DAT_0074dcf4;
  }
  else {
    this = (void *)*param_3;
    uVar1 = param_3[1];
    local_8 = this;
  }
  if (local_8 == (void *)0x0) {
    if ((0x40 < (int)param_2) && ((int)param_2 < 0x5b)) {
      uVar2 = param_2 + 0x20;
    }
  }
  else {
    uVar4 = 1;
    if ((int)param_2 < 0x100) {
      if (DAT_005c8378 < 2) {
        uVar3 = (byte)PTR_s__005c8384[param_2 * 2] & 1;
      }
      else {
        uVar3 = FUN_0055c336(this,param_2,1);
      }
      if (uVar3 == 0) {
        return uVar2;
      }
    }
    if ((PTR_s__005c8384[((int)uVar2 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_2 = CONCAT31((int3)(param_2 >> 8),(char)uVar2) & 0xffff00ff;
    }
    else {
      uVar3 = param_2 >> 0x10;
      param_2._0_2_ = CONCAT11((char)uVar2,(char)(uVar2 >> 8));
      param_2 = CONCAT22((short)uVar3,(undefined2)param_2) & 0xff00ffff;
      uVar4 = 2;
    }
    iVar5 = FUN_0055c112(local_8,0x100,&param_2,uVar4,&param_3,3,uVar1,1);
    if (iVar5 != 0) {
      if (iVar5 == 1) {
        uVar2 = (uint)param_3 & 0xff;
      }
      else {
        uVar2 = (uint)param_3 & 0xffff;
      }
    }
  }
  return uVar2;
}


/* ==== 0054ec38 FUN_0054ec38 ==== */

void FUN_0054ec38(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined *_malloc_result;
  uint local_8;
  
  uVar2 = DAT_0074dcf4;
  uVar1 = DAT_0074dce0;
  _malloc_result = _malloc(0x200);
  bVar3 = _malloc_result == (undefined *)0x0;
  if (bVar3) {
    _malloc_result = PTR_s__005c8384;
  }
  else {
    FUN_0055b3c0(_malloc_result,PTR_s__005c8384,0x200);
  }
  local_8 = (uint)!bVar3;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = _malloc_result;
  param_1[3] = local_8;
  return;
}


/* ==== 0054ec98 FUN_0054ec98 ==== */

uint __thiscall FUN_0054ec98(void *this,uint param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar1 = param_2;
  iVar3 = DAT_0074dcf4;
  iVar4 = DAT_0074dce4;
  if (param_3 != (int *)0x0) {
    iVar3 = param_3[1];
    iVar4 = *param_3;
  }
  if (iVar4 == 0) {
    if ((0x60 < (int)param_2) && ((int)param_2 < 0x7b)) {
      uVar1 = param_2 - 0x20;
    }
  }
  else {
    if ((int)param_2 < 0x100) {
      if (DAT_005c8378 < 2) {
        uVar2 = (byte)PTR_s__005c8384[param_2 * 2] & 2;
      }
      else {
        uVar2 = FUN_0055c336(this,param_2,2);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_s__005c8384[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_2 = CONCAT31((int3)(param_2 >> 8),(char)uVar1) & 0xffff00ff;
      uVar5 = 1;
    }
    else {
      uVar2 = param_2 >> 0x10;
      param_2._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_2 = CONCAT22((short)uVar2,(undefined2)param_2) & 0xff00ffff;
      uVar5 = 2;
    }
    iVar3 = FUN_0055c112(iVar4,0x200,&param_2,uVar5,&param_3,3,iVar3,1);
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        uVar1 = (uint)param_3 & 0xff;
      }
      else {
        uVar1 = (uint)param_3 & 0xffff;
      }
    }
  }
  return uVar1;
}


/* ==== 0054eda3 FUN_0054eda3 ==== */

void FUN_0054eda3(void)

{
  FUN_005584e0(FUN_004d1400);
  return;
}


/* ==== 0054edaf FUN_0054edaf ==== */

void FUN_0054edaf(void)

{
  FUN_005584e0(&DAT_0054b338);
  return;
}


/* ==== 0054edbb FUN_0054edbb ==== */

void FUN_0054edbb(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &LAB_0054edce;
  param_1[1] = param_2;
  return;
}


/* ==== 0054eddc FUN_0054eddc ==== */

void FUN_0054eddc(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &LAB_0054edef;
  param_1[1] = param_2;
  return;
}


/* ==== 0054ee09 FUN_0054ee09 ==== */

void FUN_0054ee09(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &LAB_0054ee1c;
  param_1[1] = param_2;
  return;
}


/* ==== 0054ee52 FUN_0054ee52 ==== */

void FUN_0054ee52(void)

{
  FUN_005584e0(FUN_004d1400);
  return;
}


/* ==== 0054ee5e FUN_0054ee5e ==== */

void FUN_0054ee5e(void)

{
  FUN_005584e0(&DAT_0054b338);
  return;
}


/* ==== 0054ee6a FUN_0054ee6a ==== */

uint FUN_0054ee6a(LPWSTR param_1,byte *param_2,uint param_3,byte *param_4,int *param_5)

{
  byte bVar1;
  UINT CodePage;
  int iVar2;
  
  if ((param_2 != (byte *)0x0) && (param_3 != 0)) {
    bVar1 = *param_2;
    if (bVar1 != 0) {
      CodePage = DAT_0074dcf4;
      iVar2 = DAT_0074dce4;
      if (param_5 != (int *)0x0) {
        CodePage = param_5[1];
        iVar2 = *param_5;
      }
      if (iVar2 == 0) {
        if (param_1 != (LPWSTR)0x0) {
          *param_1 = (ushort)bVar1;
        }
        return 1;
      }
      if (*(int *)param_4 == 0) {
        if ((PTR_s__005c8384[(uint)bVar1 * 2 + 1] & 0x80) == 0) {
          iVar2 = MultiByteToWideChar(CodePage,9,(LPCSTR)param_2,1,param_1,
                                      (uint)(param_1 != (LPWSTR)0x0));
          if (iVar2 != 0) {
            return 1;
          }
        }
        else {
          if (param_3 < DAT_005c8378) {
            *param_4 = bVar1;
            return 0xfffffffe;
          }
          if ((1 < (int)DAT_005c8378) &&
             (iVar2 = MultiByteToWideChar(CodePage,9,(LPCSTR)param_2,DAT_005c8378,param_1,
                                          (uint)(param_1 != (LPWSTR)0x0)), iVar2 != 0)) {
            return DAT_005c8378;
          }
          if (param_2[1] != 0) {
            return DAT_005c8378;
          }
          param_4[0] = 0;
          param_4[1] = 0;
          param_4[2] = 0;
          param_4[3] = 0;
        }
      }
      else {
        param_4[1] = bVar1;
        if ((1 < (int)DAT_005c8378) &&
           (iVar2 = MultiByteToWideChar(CodePage,9,(LPCSTR)param_4,2,param_1,
                                        (uint)(param_1 != (LPWSTR)0x0)), iVar2 != 0)) {
          param_4[0] = 0;
          param_4[1] = 0;
          param_4[2] = 0;
          param_4[3] = 0;
          return DAT_005c8378;
        }
        param_4[0] = 0;
        param_4[1] = 0;
        param_4[2] = 0;
        param_4[3] = 0;
      }
      DAT_0074dc60 = 0x2a;
      return 0xffffffff;
    }
    if (param_1 != (LPWSTR)0x0) {
      *param_1 = L'\0';
    }
  }
  return 0;
}


/* ==== 0054ef7c FUN_0054ef7c ==== */

uint __thiscall FUN_0054ef7c(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 local_c;
  undefined4 uStack_8;
  
  if (param_2 == -1) {
    return 0xffffffff;
  }
  param_2 = CONCAT13((char)param_2,(undefined3)param_2);
  local_c = 0;
  iVar1 = FUN_0054ee6a((int)&uStack_8 + 2,(int)&param_2 + 3,1,&local_c,0);
  uVar2 = 0xffff;
  if (-1 < iVar1) {
    uVar2 = uStack_8 >> 0x10;
  }
  return uVar2;
}


/* ==== 0054efbd FUN_0054efbd ==== */

void FUN_0054efbd(void)

{
  undefined1 local_10 [12];
  
  if ((DAT_0074db30 & 1) == 0) {
    DAT_0074db30 = DAT_0074db30 | 1;
    FUN_0054f008(&DAT_0074db38,"bad allocation");
    FUN_005584e0(&LAB_0054f07d);
  }
  FUN_0054f065(local_10,&DAT_0074db38);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_10,&DAT_0058a510);
}


/* ==== 0054f008 FUN_0054f008 ==== */

void * __thiscall FUN_0054f008(void *this)

{
  FUN_00558853(this,&stack0x00000004);
  *(undefined ***)this = &PTR_LAB_00579180;
  return this;
}


/* ==== 0054f021 FUN_0054f021 ==== */

void __thiscall FUN_0054f021(void *this)

{
  *(undefined ***)this = &PTR_LAB_00579180;
  exception::~exception(this);
  return;
}


/* ==== 0054f02c FUN_0054f02c ==== */

void __thiscall FUN_0054f02c(void *this)

{
  undefined1 local_10 [12];
  
  FUN_0054f065(local_10,this);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_10,&DAT_0058a510);
}


/* ==== 0054f065 FUN_0054f065 ==== */

void * __thiscall FUN_0054f065(void *this,undefined4 param_2)

{
  FUN_00558890(this,param_2);
  *(undefined ***)this = &PTR_LAB_00579180;
  return this;
}


/* ==== 0054f087 FUN_0054f087 ==== */

void FUN_0054f087(void)

{
  uint uVar1;
  undefined4 *this_val_2;
  undefined4 *puVar2;
  undefined4 this_val;
  int unaff_EBP;
  bool bVar3;
  undefined8 uVar4;
  int iVar5;
  
  FUN_0055b39c();
  uVar1 = *(uint *)(unaff_EBP + 0xc) & 2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(uint *)(unaff_EBP + -0x14) = uVar1;
  if (uVar1 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      this_val_2 = operator_new(0x18);
      *(undefined4 **)(unaff_EBP + -0x10) = this_val_2;
      if (this_val_2 == (undefined4 *)0x0) {
        this_val = 0;
      }
      else {
        this_val_2[1] = 0;
        *this_val_2 = &PTR_FUN_005792e4;
        puVar2 = (undefined4 *)FUN_0054ec38(unaff_EBP + -0x28);
        this_val_2[2] = *puVar2;
        this_val_2[3] = puVar2[1];
        this_val = *(undefined4 *)(unaff_EBP + -0x10);
        this_val_2[4] = puVar2[2];
        this_val_2[5] = puVar2[3];
      }
      iVar5 = DAT_0074db60;
      if (DAT_0074db60 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db60 = DAT_0074dafc;
        iVar5 = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074db60 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db60 = DAT_0074dafc;
      }
      iVar5 = DAT_0074db60;
      this_val = FUN_00553a7f(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0074db60);
    }
    FUN_0054d31e(this_val,iVar5);
  }
  uVar1 = *(uint *)(unaff_EBP + 0xc) & 8;
  *(uint *)(unaff_EBP + -0x10) = uVar1;
  if (uVar1 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      this_val_2 = operator_new(8);
      if (this_val_2 == (undefined4 *)0x0) {
        this_val_2 = (undefined4 *)0x0;
      }
      else {
        this_val_2[1] = 0;
        *this_val_2 = &PTR_FUN_005792b8;
      }
      iVar5 = DAT_0074db64;
      if (DAT_0074db64 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db64 = DAT_0074dafc;
        iVar5 = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074db64 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db64 = DAT_0074dafc;
      }
      iVar5 = DAT_0074db64;
      this_val_2 = (undefined4 *)FUN_00553b36(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0074db64);
    }
    FUN_0054d31e(this_val_2,iVar5);
  }
  if (uVar1 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      this_val_2 = operator_new(8);
      if (this_val_2 == (undefined4 *)0x0) {
        this_val_2 = (undefined4 *)0x0;
      }
      else {
        this_val_2[1] = 0;
        *this_val_2 = &PTR_FUN_00579298;
      }
      iVar5 = DAT_0074db54;
      if (DAT_0074db54 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db54 = DAT_0074dafc;
        iVar5 = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074db54 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db54 = DAT_0074dafc;
      }
      iVar5 = DAT_0074db54;
      this_val_2 = (undefined4 *)FUN_00553c07(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0074db54);
    }
    FUN_0054d31e(this_val_2,iVar5);
    if (uVar1 != 0) {
      if (*(int *)(unaff_EBP + 0x14) == 0) {
        this_val_2 = operator_new(0x18);
        *(undefined4 **)(unaff_EBP + -0x18) = this_val_2;
        if (this_val_2 == (undefined4 *)0x0) {
          this_val_2 = (undefined4 *)0x0;
        }
        else {
          this_val_2[1] = 0;
          this_val = *(undefined4 *)(unaff_EBP + 8);
          *(undefined1 *)(unaff_EBP + -4) = 2;
          *this_val_2 = &PTR_FUN_0057927c;
          FUN_0055213d(this_val_2,this_val);
        }
        bVar3 = DAT_0074db44 == 0;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iVar5 = DAT_0074db44;
        if (bVar3) {
          DAT_0074dafc = DAT_0074dafc + 1;
          DAT_0074db44 = DAT_0074dafc;
          iVar5 = DAT_0074dafc;
        }
      }
      else {
        if (DAT_0074db44 == 0) {
          DAT_0074dafc = DAT_0074dafc + 1;
          DAT_0074db44 = DAT_0074dafc;
        }
        iVar5 = DAT_0074db44;
        this_val_2 = (undefined4 *)FUN_00553cd8(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0074db44);
      }
      FUN_0054d31e(this_val_2,iVar5);
    }
  }
  if ((*(byte *)(unaff_EBP + 0xc) & 1) != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      this_val_2 = operator_new(0x10);
      if (this_val_2 == (undefined4 *)0x0) {
        this_val_2 = (undefined4 *)0x0;
      }
      else {
        this_val_2[1] = 0;
        *this_val_2 = &PTR_FUN_00579268;
        uVar4 = FUN_00557cfe();
        *(undefined8 *)(this_val_2 + 2) = uVar4;
      }
      iVar5 = DAT_0074db58;
      if (DAT_0074db58 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db58 = DAT_0074dafc;
        iVar5 = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074db58 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db58 = DAT_0074dafc;
      }
      iVar5 = DAT_0074db58;
      this_val_2 = (undefined4 *)FUN_00553d8f(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0074db58);
    }
    FUN_0054d31e(this_val_2,iVar5);
  }
  if ((*(byte *)(unaff_EBP + 0xc) & 0x20) != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      this_val_2 = operator_new(0x10);
      *(undefined4 **)(unaff_EBP + -0x18) = this_val_2;
      if (this_val_2 == (undefined4 *)0x0) {
        this_val_2 = (undefined4 *)0x0;
      }
      else {
        this_val_2[1] = 0;
        this_val = *(undefined4 *)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        *this_val_2 = &PTR_FUN_00579254;
        FUN_0055219a(this_val_2,this_val);
      }
      bVar3 = DAT_0074db4c == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar5 = DAT_0074db4c;
      if (bVar3) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db4c = DAT_0074dafc;
        iVar5 = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074db4c == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db4c = DAT_0074dafc;
      }
      iVar5 = DAT_0074db4c;
      this_val_2 = (undefined4 *)FUN_00553e46(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0074db4c);
    }
    FUN_0054d31e(this_val_2,iVar5);
  }
  uVar1 = *(uint *)(unaff_EBP + 0xc) & 4;
  if (uVar1 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      this_val_2 = operator_new(8);
      if (this_val_2 == (undefined4 *)0x0) {
        this_val_2 = (undefined4 *)0x0;
      }
      else {
        this_val_2[1] = 0;
        *this_val_2 = &PTR_FUN_00579244;
      }
      iVar5 = DAT_0074db48;
      if (DAT_0074db48 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db48 = DAT_0074dafc;
        iVar5 = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074db48 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db48 = DAT_0074dafc;
      }
      iVar5 = DAT_0074db48;
      this_val_2 = (undefined4 *)FUN_00553efd(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0074db48);
    }
    FUN_0054d31e(this_val_2,iVar5);
  }
  if (uVar1 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      this_val_2 = operator_new(8);
      if (this_val_2 == (undefined4 *)0x0) {
        this_val_2 = (undefined4 *)0x0;
      }
      else {
        this_val_2[1] = 0;
        *this_val_2 = &PTR_FUN_00579234;
      }
      iVar5 = DAT_0074db74;
      if (DAT_0074db74 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db74 = DAT_0074dafc;
        iVar5 = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074db74 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db74 = DAT_0074dafc;
      }
      iVar5 = DAT_0074db74;
      this_val_2 = (undefined4 *)FUN_00553fce(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0074db74);
    }
    FUN_0054d31e(this_val_2,iVar5);
  }
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      this_val_2 = operator_new(0x2c);
      *(undefined4 **)(unaff_EBP + -0x18) = this_val_2;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (this_val_2 == (undefined4 *)0x0) {
        this_val_2 = (undefined4 *)0x0;
      }
      else {
        FUN_005530c8(*(undefined4 *)(unaff_EBP + 8),0,0);
        *this_val_2 = &PTR_FUN_00579208;
      }
      bVar3 = DAT_0074db70 == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar5 = DAT_0074db70;
      if (bVar3) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db70 = DAT_0074dafc;
        iVar5 = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074db70 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db70 = DAT_0074dafc;
      }
      iVar5 = DAT_0074db70;
      this_val_2 = (undefined4 *)FUN_0055409f(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0074db70);
    }
    FUN_0054d31e(this_val_2,iVar5);
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      if (*(int *)(unaff_EBP + 0x14) == 0) {
        this_val_2 = operator_new(0x2c);
        *(undefined4 **)(unaff_EBP + -0x18) = this_val_2;
        *(undefined1 *)(unaff_EBP + -4) = 6;
        if (this_val_2 == (undefined4 *)0x0) {
          this_val_2 = (undefined4 *)0x0;
        }
        else {
          FUN_005530c8(*(undefined4 *)(unaff_EBP + 8),0,1);
          *this_val_2 = &PTR_FUN_005791dc;
        }
        bVar3 = DAT_0074db50 == 0;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iVar5 = DAT_0074db50;
        if (bVar3) {
          DAT_0074dafc = DAT_0074dafc + 1;
          DAT_0074db50 = DAT_0074dafc;
          iVar5 = DAT_0074dafc;
        }
      }
      else {
        if (DAT_0074db50 == 0) {
          DAT_0074dafc = DAT_0074dafc + 1;
          DAT_0074db50 = DAT_0074dafc;
        }
        iVar5 = DAT_0074db50;
        this_val_2 = (undefined4 *)FUN_00554162(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0074db50);
      }
      FUN_0054d31e(this_val_2,iVar5);
    }
  }
  uVar1 = *(uint *)(unaff_EBP + 0xc) & 0x10;
  if (uVar1 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      this_val_2 = operator_new(0x10);
      *(undefined4 **)(unaff_EBP + 0xc) = this_val_2;
      if (this_val_2 == (undefined4 *)0x0) {
        this_val_2 = (undefined4 *)0x0;
      }
      else {
        this_val_2[1] = 0;
        this_val = *(undefined4 *)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        *this_val_2 = &PTR_FUN_005791bc;
        FUN_00553108(this_val_2,this_val);
      }
      bVar3 = DAT_0074db5c == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar5 = DAT_0074db5c;
      if (bVar3) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db5c = DAT_0074dafc;
        iVar5 = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074db5c == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db5c = DAT_0074dafc;
      }
      iVar5 = DAT_0074db5c;
      this_val_2 = (undefined4 *)FUN_00554225(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0074db5c);
    }
    FUN_0054d31e(this_val_2,iVar5);
  }
  if (uVar1 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      this_val_2 = operator_new(0xc);
      *(undefined4 **)(unaff_EBP + 0xc) = this_val_2;
      if (this_val_2 == (undefined4 *)0x0) {
        this_val_2 = (undefined4 *)0x0;
      }
      else {
        this_val_2[1] = 0;
        this_val_2[2] = 0;
        this_val = *(undefined4 *)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        *this_val_2 = &PTR_FUN_005791b0;
        FUN_00551317(this_val_2,this_val);
      }
      bVar3 = DAT_0074db6c == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar5 = DAT_0074db6c;
      if (bVar3) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db6c = DAT_0074dafc;
        iVar5 = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074db6c == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db6c = DAT_0074dafc;
      }
      iVar5 = DAT_0074db6c;
      this_val_2 = (undefined4 *)FUN_005542dc(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0074db6c);
    }
    FUN_0054d31e(this_val_2,iVar5);
  }
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      this_val_2 = operator_new(0x10);
      if (this_val_2 == (undefined4 *)0x0) {
        this_val_2 = (undefined4 *)0x0;
      }
      else {
        this_val_2[1] = 0;
        *this_val_2 = &PTR_FUN_00579190;
        uVar4 = FUN_0054eb13();
        *(undefined8 *)(this_val_2 + 2) = uVar4;
      }
      iVar5 = DAT_0074db68;
      if (DAT_0074db68 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db68 = DAT_0074dafc;
        iVar5 = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074db68 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db68 = DAT_0074dafc;
      }
      iVar5 = DAT_0074db68;
      this_val_2 = (undefined4 *)FUN_00554393(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0074db68);
    }
    FUN_0054d31e(this_val_2,iVar5);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 0054f7c4 FUN_0054f7c4 ==== */

void __thiscall FUN_0054f7c4(void *this)

{
  FUN_00559d4e(*(undefined4 *)this);
  return;
}


/* ==== 0054f7cd FUN_0054f7cd ==== */

bool __thiscall
FUN_0054f7cd(void *this,undefined4 param_2,int param_3,int param_4,int *param_5,int param_6,
            int param_7,int *param_8)

{
  int iVar1;
  size_t _strlen_result;
  bool bVar2;
  
  *param_5 = param_3;
  *param_8 = param_6;
  iVar1 = *param_5;
  bVar2 = iVar1 != param_4;
  while( true ) {
    if (iVar1 == param_4) {
      return bVar2;
    }
    if (*param_8 == param_7) {
      return bVar2;
    }
    iVar1 = FUN_0054ee6a(*param_8,iVar1,param_4 - iVar1,param_2,(int)this + 8);
    if (iVar1 == -2) {
      *param_5 = param_4;
      return bVar2;
    }
    if (iVar1 == -1) break;
    if (iVar1 == 0) {
      _strlen_result = _strlen((char *)*param_5);
      iVar1 = _strlen_result + 1;
    }
    *param_5 = *param_5 + iVar1;
    *param_8 = *param_8 + 2;
    bVar2 = false;
    iVar1 = *param_5;
  }
  return (bool)2;
}


/* ==== 0054f84f FUN_0054f84f ==== */

undefined1 __thiscall
FUN_0054f84f(void *this,undefined4 *param_2,int param_3,undefined2 *param_4,int *param_5,int param_6
            ,int param_7,int *param_8)

{
  int *piVar1;
  int *piVar2;
  undefined2 *puVar3;
  undefined2 uVar5;
  int iVar4;
  bool bVar6;
  
  piVar2 = param_8;
  piVar1 = param_5;
  *param_5 = param_3;
  *param_8 = param_6;
  puVar3 = (undefined2 *)*param_5;
  bVar6 = puVar3 != param_4;
  do {
    if (puVar3 == param_4) {
      return bVar6;
    }
    iVar4 = *piVar2;
    if (iVar4 == param_7) {
      return bVar6;
    }
    uVar5 = (undefined2)((uint)puVar3 >> 0x10);
    if (param_7 - iVar4 < DAT_005c8378) {
      param_8 = (int *)*param_2;
      iVar4 = FUN_0054eaa1((int)&param_5 + 2,CONCAT22(uVar5,*puVar3),param_2,(int)this + 8);
      if (iVar4 < 1) {
        return 2;
      }
      if (param_7 - *piVar2 < iVar4) {
        *param_2 = param_8;
        return bVar6;
      }
      FUN_0055b3c0(*piVar2,(int)&param_5 + 2,iVar4);
      *piVar1 = *piVar1 + 2;
      *piVar2 = *piVar2 + iVar4;
    }
    else {
      iVar4 = FUN_0054eaa1(iVar4,CONCAT22(uVar5,*puVar3),param_2,(int)this + 8);
      if (iVar4 < 1) {
        return 2;
      }
      *piVar1 = *piVar1 + 2;
      *piVar2 = *piVar2 + iVar4;
    }
    bVar6 = false;
    puVar3 = (undefined2 *)*piVar1;
  } while( true );
}


/* ==== 0054f922 FUN_0054f922 ==== */

int __thiscall
FUN_0054f922(void *this,undefined4 param_2,undefined2 *param_3,undefined2 *param_4,uint param_5)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  
  puVar1 = param_3;
  puVar3 = param_3;
  if (param_3 != param_4) {
    while (param_5 != 0) {
      uVar2 = FUN_0054eaa1((int)&param_3 + 2,
                           CONCAT22((short)((uint)((int)this + 8) >> 0x10),*puVar3),param_2,
                           (int)this + 8);
      if (((int)uVar2 < 1) || (param_5 < uVar2)) break;
      param_5 = param_5 - uVar2;
      puVar3 = puVar3 + 1;
      if (puVar3 == param_4) break;
    }
  }
  return (int)puVar3 - (int)puVar1 >> 1;
}


/* ==== 0054f978 FUN_0054f978 ==== */

bool __thiscall FUN_0054f978(void *this,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  ushort unaff_SI;
  
  cVar1 = (**(code **)(*(int *)this + 0x30))(param_3,0);
  return (*(ushort *)(*(int *)((int)this + 0x10) + cVar1 * 2) & unaff_SI) != 0;
}


/* ==== 0054f9de FUN_0054f9de ==== */

undefined2 * __thiscall
FUN_0054f9de(void *this,undefined4 param_2,undefined2 *param_3,undefined2 *param_4)

{
  char cVar1;
  
  while( true ) {
    if (param_3 == param_4) {
      return param_3;
    }
    cVar1 = (**(code **)(*(int *)this + 8))(param_2,*param_3);
    if (cVar1 != '\0') break;
    param_3 = param_3 + 1;
  }
  return param_3;
}


/* ==== 0054fa0a FUN_0054fa0a ==== */

undefined2 * __thiscall
FUN_0054fa0a(void *this,undefined4 param_2,undefined2 *param_3,undefined2 *param_4)

{
  char cVar1;
  
  while( true ) {
    if (param_3 == param_4) {
      return param_3;
    }
    cVar1 = (**(code **)(*(int *)this + 8))(param_2,*param_3);
    if (cVar1 == '\0') break;
    param_3 = param_3 + 1;
  }
  return param_3;
}


/* ==== 0054fa36 FUN_0054fa36 ==== */

void __thiscall FUN_0054fa36(void *this,undefined4 param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = (**(code **)(*(int *)this + 0x30))(param_2,0);
  uVar2 = FUN_0054eb50((int)this + 8,(int)cVar1,(int)this + 8);
  (**(code **)(*(int *)this + 0x28))(uVar2);
  return;
}


/* ==== 0054fa67 FUN_0054fa67 ==== */

undefined2 * FUN_0054fa67(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    uVar1 = FUN_0054eb50();
    *param_1 = uVar1;
  }
  return param_1;
}


/* ==== 0054fa94 FUN_0054fa94 ==== */

void __thiscall FUN_0054fa94(void *this,undefined4 param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = (**(code **)(*(int *)this + 0x30))(param_2,0);
  uVar2 = FUN_0054ec98((int)this + 8,(int)cVar1,(int)this + 8);
  (**(code **)(*(int *)this + 0x28))(uVar2);
  return;
}


/* ==== 0054fac5 FUN_0054fac5 ==== */

undefined2 * FUN_0054fac5(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    uVar1 = FUN_0054ec98();
    *param_1 = uVar1;
  }
  return param_1;
}


/* ==== 0054fb01 FUN_0054fb01 ==== */

int FUN_0054fb01(int param_1,int param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    uVar1 = FUN_0054ef7c();
    *param_3 = uVar1;
    param_3 = param_3 + 1;
  }
  return param_1;
}


/* ==== 0054fb3b FUN_0054fb3b ==== */

undefined2 *
FUN_0054fb3b(undefined2 *param_1,undefined2 *param_2,undefined4 param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    uVar1 = FUN_0054eb1f(*param_1);
    *param_4 = uVar1;
    param_4 = param_4 + 1;
  }
  return param_1;
}


/* ==== 0054fb67 FUN_0054fb67 ==== */

undefined4 * FUN_0054fb67(void)

{
  undefined4 *puVar1;
  int i;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  int iVar3;
  
  FUN_0055b39c();
  *(char (*) [4])(unaff_EBP + -0x14) = (char  [4])0x782521;
  *(undefined1 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(unaff_EBP + -0x24) = *(undefined1 *)(unaff_EBP + 0x1f);
  FUN_004028f0(unaff_EBP + -0x24,0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(char *)(unaff_EBP + 0x20) == '\0') {
    *(undefined1 *)(unaff_EBP + -0x12) = *(undefined1 *)(unaff_EBP + 0x1c);
  }
  else {
    *(char *)(unaff_EBP + -0x12) = *(char *)(unaff_EBP + 0x20);
    *(undefined1 *)(unaff_EBP + -0x11) = *(undefined1 *)(unaff_EBP + 0x1c);
  }
  iVar3 = 0x10;
  while( true ) {
    FUN_0047eab0(unaff_EBP + -0x24,iVar3,0);
    uVar2 = *(undefined4 *)(extraout_ECX + 8);
    *(undefined4 *)(unaff_EBP + 0x1c) = *(undefined4 *)(unaff_EBP + -0x1c);
    FUN_00471de0(unaff_EBP + -0x24);
    i = FUN_0055c701(*(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + 0x1c),
                     unaff_EBP + -0x14,*(undefined4 *)(unaff_EBP + 0x18),uVar2);
    if (i != 0) break;
    iVar3 = iVar3 * 2;
  }
  FUN_00471de0(unaff_EBP + -0x24);
  while (i = i + -1, i != 0) {
    uVar2 = FUN_0054ef7c();
    FUN_00551357(unaff_EBP + 0xc,uVar2);
  }
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *puVar1 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar1[1] = *(undefined4 *)(unaff_EBP + 0x10);
  FUN_004028f0(unaff_EBP + -0x24,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar1;
}


/* ==== 0054fc43 FUN_0054fc43 ==== */

void FUN_0054fc43(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 this_val;
  undefined4 uVar4;
  undefined2 *puVar5;
  uint uVar6;
  int unaff_EBP;
  int this_val_2;
  
  FUN_0055b39c();
  *(undefined4 *)(unaff_EBP + -0x10) = 0xffffffff;
  this_val_2 = *(int *)(unaff_EBP + 0x1c);
  if ((*(uint *)(this_val_2 + 0xc) & 0x4000) == 0) {
    DAT_0074dc60 = 0;
    uVar4 = FUN_004d4370(this_val_2,unaff_EBP + -0x14);
    this_val = *(undefined4 *)(this_val_2 + 0xc);
    *(undefined4 *)(unaff_EBP + -4) = 4;
    this_val = FUN_005513aa(unaff_EBP + -0x48,unaff_EBP + 0xc,unaff_EBP + 0x14,this_val,uVar4);
    uVar6 = FUN_0055b06c(unaff_EBP + -0x48,unaff_EBP + -0x18,this_val);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    std::locale::~locale((locale *)(unaff_EBP + -0x14));
    if (((*(int *)(unaff_EBP + -0x18) != unaff_EBP + -0x48) && (DAT_0074dc60 == 0)) && (uVar6 < 2))
    {
      *(uint *)(unaff_EBP + -0x10) = uVar6;
    }
  }
  else {
    this_val = FUN_004d4370(this_val_2,unaff_EBP + 0x1c);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    this_val = FUN_00553cd8(this_val,0,1);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    std::locale::~locale((locale *)(unaff_EBP + 0x1c));
    *(undefined1 *)(unaff_EBP + -0x28) = *(undefined1 *)(unaff_EBP + 0x1f);
    FUN_00553734(unaff_EBP + -0x28,0);
    FUN_005534e1(unaff_EBP + -0x28,1,0);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    uVar4 = FUN_0055210f(this_val,unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_0055388a(unaff_EBP + -0x28,uVar4,0,0xffffffff);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00553734(unaff_EBP + -0x38,1);
    FUN_00553039(unaff_EBP + -0x28,1,0);
    this_val = FUN_00552126(this_val,unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_0055388a(unaff_EBP + -0x28,this_val,0,0xffffffff);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00553734(unaff_EBP + -0x38,1);
    puVar5 = *(undefined2 **)(unaff_EBP + -0x24);
    if (puVar5 == (undefined2 *)0x0) {
      puVar5 = &DAT_00579320;
    }
    this_val = FUN_0055449e(unaff_EBP + 0xc,unaff_EBP + 0x14,2,puVar5);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(unaff_EBP + -0x10) = this_val;
    FUN_00553734(unaff_EBP + -0x28,1);
  }
  cVar3 = FUN_00554775((void *)(unaff_EBP + 0xc),(int *)(unaff_EBP + 0x14));
  puVar1 = *(uint **)(unaff_EBP + 0x20);
  if (cVar3 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if (*(int *)(unaff_EBP + -0x10) < 0) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    *(bool *)*(undefined4 *)(unaff_EBP + 0x24) = *(int *)(unaff_EBP + -0x10) != 0;
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = *(undefined4 *)(unaff_EBP + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 0054fdeb FUN_0054fdeb ==== */

void FUN_0054fdeb(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int unaff_EBP;
  int this_val;
  
  FUN_0055b39c();
  DAT_0074dc60 = 0;
  this_val = *(int *)(unaff_EBP + 0x1c);
  uVar4 = FUN_004d4370(this_val,unaff_EBP + 0x1c);
  uVar5 = *(undefined4 *)(this_val + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar5 = FUN_005513aa(unaff_EBP + -0x30,unaff_EBP + 0xc,unaff_EBP + 0x14,uVar5,uVar4);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  std::locale::~locale((locale *)(unaff_EBP + 0x1c));
  this_val = unaff_EBP + -0x2f;
  if (*(char *)(unaff_EBP + -0x30) != '-') {
    this_val = unaff_EBP + -0x30;
  }
  uVar6 = FUN_0055b06c(this_val,unaff_EBP + -0x10,uVar5);
  cVar3 = FUN_00554775((void *)(unaff_EBP + 0xc),(int *)(unaff_EBP + 0x14));
  puVar1 = *(uint **)(unaff_EBP + 0x20);
  if (cVar3 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if (((*(int *)(unaff_EBP + -0x10) == this_val) || (DAT_0074dc60 != 0)) || (0xffff < uVar6)) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    if (*(char *)(unaff_EBP + -0x30) == '-') {
      uVar6 = -uVar6;
    }
    **(undefined2 **)(unaff_EBP + 0x24) = (short)uVar6;
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = *(undefined4 *)(unaff_EBP + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 0054feb3 FUN_0054feb3 ==== */

void FUN_0054feb3(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int unaff_EBP;
  int this_val;
  
  FUN_0055b39c();
  DAT_0074dc60 = 0;
  this_val = *(int *)(unaff_EBP + 0x1c);
  uVar4 = FUN_004d4370(this_val,unaff_EBP + 0x1c);
  uVar5 = *(undefined4 *)(this_val + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar5 = FUN_005513aa(unaff_EBP + -0x30,unaff_EBP + 0xc,unaff_EBP + 0x14,uVar5,uVar4);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  std::locale::~locale((locale *)(unaff_EBP + 0x1c));
  this_val = unaff_EBP + -0x2f;
  if (*(char *)(unaff_EBP + -0x30) != '-') {
    this_val = unaff_EBP + -0x30;
  }
  iVar6 = FUN_0055b06c(this_val,unaff_EBP + -0x10,uVar5);
  cVar3 = FUN_00554775((void *)(unaff_EBP + 0xc),(int *)(unaff_EBP + 0x14));
  puVar1 = *(uint **)(unaff_EBP + 0x20);
  if (cVar3 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if ((*(int *)(unaff_EBP + -0x10) == this_val) || (DAT_0074dc60 != 0)) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    if (*(char *)(unaff_EBP + -0x30) == '-') {
      iVar6 = -iVar6;
    }
    **(int **)(unaff_EBP + 0x24) = iVar6;
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = *(undefined4 *)(unaff_EBP + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 0054ff77 FUN_0054ff77 ==== */

void FUN_0054ff77(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int unaff_EBP;
  int this_val;
  
  FUN_0055b39c();
  DAT_0074dc60 = 0;
  this_val = *(int *)(unaff_EBP + 0x1c);
  uVar4 = FUN_004d4370(this_val,unaff_EBP + 0x1c);
  uVar5 = *(undefined4 *)(this_val + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar5 = FUN_005513aa(unaff_EBP + -0x30,unaff_EBP + 0xc,unaff_EBP + 0x14,uVar5,uVar4);
  uVar5 = FUN_0055ae4d(unaff_EBP + -0x30,unaff_EBP + -0x10,uVar5);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  std::locale::~locale((locale *)(unaff_EBP + 0x1c));
  cVar3 = FUN_00554775((void *)(unaff_EBP + 0xc),(int *)(unaff_EBP + 0x14));
  puVar1 = *(uint **)(unaff_EBP + 0x20);
  if (cVar3 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if ((*(int *)(unaff_EBP + -0x10) == unaff_EBP + -0x30) || (DAT_0074dc60 != 0)) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    **(undefined4 **)(unaff_EBP + 0x24) = uVar5;
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = *(undefined4 *)(unaff_EBP + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 00550021 FUN_00550021 ==== */

void FUN_00550021(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int unaff_EBP;
  int this_val;
  
  FUN_0055b39c();
  DAT_0074dc60 = 0;
  this_val = *(int *)(unaff_EBP + 0x1c);
  uVar4 = FUN_004d4370(this_val,unaff_EBP + 0x1c);
  uVar5 = *(undefined4 *)(this_val + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar5 = FUN_005513aa(unaff_EBP + -0x30,unaff_EBP + 0xc,unaff_EBP + 0x14,uVar5,uVar4);
  uVar5 = FUN_0055b06c(unaff_EBP + -0x30,unaff_EBP + -0x10,uVar5);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  std::locale::~locale((locale *)(unaff_EBP + 0x1c));
  cVar3 = FUN_00554775((void *)(unaff_EBP + 0xc),(int *)(unaff_EBP + 0x14));
  puVar1 = *(uint **)(unaff_EBP + 0x20);
  if (cVar3 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if ((*(int *)(unaff_EBP + -0x10) == unaff_EBP + -0x30) || (DAT_0074dc60 != 0)) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    **(undefined4 **)(unaff_EBP + 0x24) = uVar5;
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = *(undefined4 *)(unaff_EBP + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 005500cb FUN_005500cb ==== */

void FUN_005500cb(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  int unaff_EBP;
  float10 fVar5;
  
  FUN_0055b39c();
  DAT_0074dc60 = 0;
  uVar4 = FUN_004d4370(*(undefined4 *)(unaff_EBP + 0x1c),unaff_EBP + 0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar4 = FUN_00551779((undefined1 *)(unaff_EBP + -0x60),(void *)(unaff_EBP + 0xc),
                       (int *)(unaff_EBP + 0x14),uVar4);
  fVar5 = (float10)FUN_00557ce9(unaff_EBP + -0x60,unaff_EBP + -0x10,uVar4);
  *(float *)(unaff_EBP + -0x14) = (float)fVar5;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  std::locale::~locale((locale *)(unaff_EBP + 0x1c));
  cVar3 = FUN_00554775((void *)(unaff_EBP + 0xc),(int *)(unaff_EBP + 0x14));
  puVar1 = *(uint **)(unaff_EBP + 0x20);
  if (cVar3 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if ((*(int *)(unaff_EBP + -0x10) == unaff_EBP + -0x60) || (DAT_0074dc60 != 0)) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    **(undefined4 **)(unaff_EBP + 0x24) = *(undefined4 *)(unaff_EBP + -0x14);
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = *(undefined4 *)(unaff_EBP + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 00550171 FUN_00550171 ==== */

void FUN_00550171(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  int unaff_EBP;
  float10 fVar5;
  
  FUN_0055b39c();
  DAT_0074dc60 = 0;
  uVar4 = FUN_004d4370(*(undefined4 *)(unaff_EBP + 0x1c),unaff_EBP + 0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar4 = FUN_00551779((undefined1 *)(unaff_EBP + -100),(void *)(unaff_EBP + 0xc),
                       (int *)(unaff_EBP + 0x14),uVar4);
  fVar5 = (float10)FUN_00557cad(unaff_EBP + -100,unaff_EBP + -0x10,uVar4);
  *(double *)(unaff_EBP + -0x18) = (double)fVar5;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  std::locale::~locale((locale *)(unaff_EBP + 0x1c));
  cVar3 = FUN_00554775((void *)(unaff_EBP + 0xc),(int *)(unaff_EBP + 0x14));
  puVar1 = *(uint **)(unaff_EBP + 0x20);
  if (cVar3 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if ((*(int *)(unaff_EBP + -0x10) == unaff_EBP + -100) || (DAT_0074dc60 != 0)) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    **(undefined8 **)(unaff_EBP + 0x24) = *(undefined8 *)(unaff_EBP + -0x18);
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = *(undefined4 *)(unaff_EBP + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 00550217 FUN_00550217 ==== */

void FUN_00550217(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  int unaff_EBP;
  float10 fVar5;
  
  FUN_0055b39c();
  DAT_0074dc60 = 0;
  uVar4 = FUN_004d4370(*(undefined4 *)(unaff_EBP + 0x1c),unaff_EBP + 0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar4 = FUN_00551779((undefined1 *)(unaff_EBP + -100),(void *)(unaff_EBP + 0xc),
                       (int *)(unaff_EBP + 0x14),uVar4);
  fVar5 = (float10)FUN_00557ce9(unaff_EBP + -100,unaff_EBP + -0x10,uVar4);
  *(double *)(unaff_EBP + -0x18) = (double)fVar5;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  std::locale::~locale((locale *)(unaff_EBP + 0x1c));
  cVar3 = FUN_00554775((void *)(unaff_EBP + 0xc),(int *)(unaff_EBP + 0x14));
  puVar1 = *(uint **)(unaff_EBP + 0x20);
  if (cVar3 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if ((*(int *)(unaff_EBP + -0x10) == unaff_EBP + -100) || (DAT_0074dc60 != 0)) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    **(undefined8 **)(unaff_EBP + 0x24) = *(undefined8 *)(unaff_EBP + -0x18);
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = *(undefined4 *)(unaff_EBP + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 005502bd FUN_005502bd ==== */

void FUN_005502bd(void)

{
  uint *puVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  int unaff_EBP;
  undefined4 *puVar5;
  
  FUN_0055b39c();
  puVar1 = *(uint **)(unaff_EBP + 0x20);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  puVar5 = (undefined4 *)(unaff_EBP + -0x18);
  while( true ) {
    DAT_0074dc60 = 0;
    uVar4 = FUN_004d4370(*(undefined4 *)(unaff_EBP + 0x1c),unaff_EBP + 0x20);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uVar4 = FUN_005513aa(unaff_EBP + -0x38,unaff_EBP + 0xc,unaff_EBP + 0x14,0x800,uVar4);
    uVar4 = FUN_0055b06c(unaff_EBP + -0x38,unaff_EBP + -0x14,uVar4);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *puVar5 = uVar4;
    std::locale::~locale((locale *)(unaff_EBP + 0x20));
    cVar2 = FUN_00554775((void *)(unaff_EBP + 0xc),(int *)(unaff_EBP + 0x14));
    if (cVar2 != '\0') {
      *puVar1 = *puVar1 | 1;
    }
    if ((*(int *)(unaff_EBP + -0x14) == unaff_EBP + -0x38) || (DAT_0074dc60 != 0)) break;
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    puVar5 = puVar5 + 1;
    if (0 < *(int *)(unaff_EBP + -0x10)) goto LAB_0055038d;
    cVar2 = FUN_00554775((void *)(unaff_EBP + 0xc),(int *)(unaff_EBP + 0x14));
    if (cVar2 != '\0') break;
    if (*(char *)(unaff_EBP + 0x10) == '\0') {
      Peek(unaff_EBP + 0xc);
    }
    sVar3 = FUN_0054ef7c();
    if (*(short *)(unaff_EBP + 0x12) != sVar3) break;
    FUN_0055331d(unaff_EBP + 0xc);
  }
  *puVar1 = *puVar1 | 2;
LAB_0055038d:
  if ((*puVar1 & 2) == 0) {
    **(undefined4 **)(unaff_EBP + 0x24) = *(undefined4 *)(unaff_EBP + -0x18);
  }
  puVar5 = *(undefined4 **)(unaff_EBP + 8);
  *puVar5 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar5[1] = *(undefined4 *)(unaff_EBP + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 005503b9 FUN_005503b9 ==== */

undefined4 * FUN_005503b9(void)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 this_val;
  int unaff_EBP;
  int i;
  int j;
  undefined2 *puVar4;
  
  FUN_0055b39c();
  i = *(int *)(unaff_EBP + 0x14);
  this_val = FUN_004d4370(i,unaff_EBP + 0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  this_val = FUN_00553cd8(this_val,0,1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  std::locale::~locale((locale *)(unaff_EBP + 0x14));
  *(undefined1 *)(unaff_EBP + -0x2c) = *(undefined1 *)(unaff_EBP + 0x1f);
  FUN_00553734(unaff_EBP + -0x2c,0);
  uVar2 = *(uint *)(i + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if ((uVar2 & 0x4000) == 0) {
    this_val = FUN_0054ef7c();
    FUN_00553039(unaff_EBP + -0x2c,1,this_val);
  }
  else {
    if (*(char *)(unaff_EBP + 0x1c) == '\0') {
      this_val = FUN_0055210f(this_val,unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_005533c1(unaff_EBP + -0x2c,this_val,0,0xffffffff);
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    else {
      this_val = FUN_00552126(this_val,unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_005533c1(unaff_EBP + -0x2c,this_val,0,0xffffffff);
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    FUN_00553734(unaff_EBP + -0x1c,1);
  }
  uVar2 = *(uint *)(i + 0x14);
  if (((int)uVar2 < 1) || (uVar2 <= *(uint *)(unaff_EBP + -0x24))) {
    *(undefined4 *)(unaff_EBP + 0x1c) = 0;
  }
  else {
    *(uint *)(unaff_EBP + 0x1c) = uVar2 - *(int *)(unaff_EBP + -0x24);
  }
  if ((*(uint *)(i + 0xc) & 0x1c0) != 0x40) {
    j = *(int *)(unaff_EBP + 0x1c);
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + 0xc);
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + 0x10);
    for (; j != 0; j = j + -1) {
      FUN_00551357(unaff_EBP + -0x14,*(undefined4 *)(unaff_EBP + 0x18));
    }
    *(undefined4 *)(unaff_EBP + 0x1c) = 0;
    *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x10);
  }
  puVar4 = *(undefined2 **)(unaff_EBP + -0x28);
  if (puVar4 == (undefined2 *)0x0) {
    puVar4 = &DAT_00579320;
  }
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + 0x10);
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + -0x24);
    do {
      FUN_00551357(unaff_EBP + -0x14,*puVar4);
      puVar4 = puVar4 + 1;
      piVar1 = (int *)(unaff_EBP + 0x14);
      *piVar1 = *piVar1 + -1;
    } while (*piVar1 != 0);
  }
  this_val = *(undefined4 *)(unaff_EBP + -0x14);
  *(undefined4 *)(i + 0x14) = 0;
  i = *(int *)(unaff_EBP + 0x1c);
  *(undefined4 *)(unaff_EBP + 0xc) = this_val;
  *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x10);
  for (; i != 0; i = i + -1) {
    FUN_00551357(unaff_EBP + 0xc,*(undefined4 *)(unaff_EBP + 0x18));
  }
  puVar3 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *puVar3 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar3[1] = *(undefined4 *)(unaff_EBP + 0x10);
  FUN_00553734(unaff_EBP + -0x2c,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar3;
}


/* ==== 0055056c FUN_0055056c ==== */

void FUN_0055056c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 local_54 [64];
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  uVar1 = FUN_00551e07(local_c,100,*(undefined4 *)(param_4 + 0xc),param_6);
  uVar1 = FUN_005587a3(local_54,uVar1);
  puVar2 = (undefined4 *)FUN_00551e61(local_14,param_2,param_3,param_4,param_5,local_54,uVar1);
  *param_1 = *puVar2;
  param_1[1] = puVar2[1];
  return;
}


/* ==== 005505c4 FUN_005505c4 ==== */

void FUN_005505c4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 local_54 [64];
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  uVar1 = FUN_00551e07(local_c,0x75,*(undefined4 *)(param_4 + 0xc),param_6);
  uVar1 = FUN_005587a3(local_54,uVar1);
  puVar2 = (undefined4 *)FUN_00551e61(local_14,param_2,param_3,param_4,param_5,local_54,uVar1);
  *param_1 = *puVar2;
  param_1[1] = puVar2[1];
  return;
}


/* ==== 0055061c FUN_0055061c ==== */

void FUN_0055061c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 local_58 [76];
  undefined1 local_c [8];
  
  iVar4 = *(int *)(param_4 + 0x10);
  if ((iVar4 < 1) && ((*(byte *)(param_4 + 0xd) & 0x20) == 0)) {
    iVar4 = 6;
  }
  iVar3 = 0x24;
  if (iVar4 < 0x25) {
    iVar3 = iVar4;
  }
  uVar1 = FUN_00551ac4(&param_6,0,*(undefined4 *)(param_4 + 0xc),iVar3,param_6);
  uVar1 = FUN_005587a3(local_58,uVar1);
  puVar2 = (undefined4 *)
           FUN_00551b22(local_c,param_2,param_3,param_4,param_5,local_58,iVar4 - iVar3,uVar1);
  *param_1 = *puVar2;
  param_1[1] = puVar2[1];
  return;
}


/* ==== 0055069a FUN_0055069a ==== */

void FUN_0055069a(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 local_58 [76];
  undefined1 local_c [8];
  
  iVar4 = *(int *)(param_4 + 0x10);
  if ((iVar4 < 1) && ((*(byte *)(param_4 + 0xd) & 0x20) == 0)) {
    iVar4 = 6;
  }
  iVar3 = 0x24;
  if (iVar4 < 0x25) {
    iVar3 = iVar4;
  }
  uVar1 = FUN_00551ac4(&param_6,0x4c,*(undefined4 *)(param_4 + 0xc),iVar3,param_6);
  uVar1 = FUN_005587a3(local_58,uVar1);
  puVar2 = (undefined4 *)
           FUN_00551b22(local_c,param_2,param_3,param_4,param_5,local_58,iVar4 - iVar3,uVar1);
  *param_1 = *puVar2;
  param_1[1] = puVar2[1];
  return;
}


/* ==== 00550718 FUN_00550718 ==== */

void FUN_00550718(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int i;
  int j;
  undefined4 uVar1;
  undefined1 local_50 [68];
  undefined4 local_c;
  undefined4 local_8;
  
  i = FUN_005587a3(local_50,s__p_005b70a0,param_6);
  j = *(int *)(param_4 + 0x14);
  if ((j < 1) || (j <= i)) {
    j = 0;
  }
  else {
    j = j - i;
  }
  local_c = param_2;
  local_8 = param_3;
  if ((*(uint *)(param_4 + 0xc) & 0x1c0) != 0x40) {
    for (; j != 0; j = j + -1) {
      FUN_00551357(&local_c,param_5);
    }
    j = 0;
    param_2 = local_c;
    param_3 = local_8;
  }
  local_c = param_2;
  local_8 = param_3;
  for (; i != 0; i = i + -1) {
    uVar1 = FUN_0054ef7c();
    FUN_00551357(&local_c,uVar1);
  }
  *(undefined4 *)(param_4 + 0x14) = 0;
  param_2 = local_c;
  param_3 = local_8;
  for (; j != 0; j = j + -1) {
    FUN_00551357(&param_2,param_5);
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}


/* ==== 005507ef FUN_005507ef ==== */

uint FUN_005507ef(ushort *param_1,ushort *param_2,ushort *param_3,ushort *param_4)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 == param_4) goto LAB_00550825;
    uVar1 = *param_1;
    uVar2 = *param_3;
    if (uVar2 >= uVar1 && uVar2 != uVar1) goto LAB_00550816;
    if (uVar2 < uVar1) {
      return 1;
    }
    param_3 = param_3 + 1;
  }
  if (param_3 == param_4) {
LAB_00550825:
    uVar3 = (uint)(param_1 != param_2);
  }
  else {
LAB_00550816:
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


/* ==== 00550832 FUN_00550832 ==== */

undefined1 * FUN_00550832(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  uint uVar3;
  undefined1 *this_val;
  
  FUN_0055b39c();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(unaff_EBP + -0x20) = *(undefined1 *)(unaff_EBP + 0xf);
  FUN_00553734(unaff_EBP + -0x20,0);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  uVar3 = *(int *)(unaff_EBP + 0x10) - *(int *)(unaff_EBP + 0xc) >> 1;
  uVar2 = uVar3;
  while( true ) {
    FUN_00553039(unaff_EBP + -0x20,uVar2,0);
    FUN_0055367f(unaff_EBP + -0x20);
    iVar1 = *(int *)(unaff_EBP + -0x1c);
    FUN_0055367f(unaff_EBP + -0x20);
    if (uVar3 <= (uint)((int)((-(uint)(iVar1 != 0) & iVar1 + *(int *)(unaff_EBP + -0x18) * 2) -
                             *(int *)(unaff_EBP + -0x1c)) >> 1)) {
      FUN_0055b3c0(*(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + 0xc),uVar3 * 2);
    }
    if (uVar3 <= *(uint *)(unaff_EBP + -0x18)) break;
    uVar2 = uVar3 - *(int *)(unaff_EBP + -0x18);
  }
  FUN_005530a2(unaff_EBP + -0x20,uVar3);
  this_val = *(undefined1 **)(unaff_EBP + 8);
  *this_val = *(undefined1 *)(unaff_EBP + -0x20);
  FUN_00553734(this_val,0);
  FUN_005533c1(this_val,unaff_EBP + -0x20,0,0xffffffff);
  *(undefined4 *)(unaff_EBP + -0x10) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00553734(unaff_EBP + -0x20,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return this_val;
}


/* ==== 0055092b FUN_0055092b ==== */

undefined1 * __thiscall
FUN_0055092b(void *this,undefined1 *this_val,undefined4 param_2,undefined4 param_3,int param_4,
            undefined1 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_4 == 0) {
    uVar2 = *(undefined4 *)((int)this + 8);
  }
  else {
    if (param_4 != 1) {
      *this_val = *param_5;
      FUN_00553734(this_val,0);
      FUN_005533c1(this_val,param_5,0,0xffffffff);
      return this_val;
    }
    uVar2 = *(undefined4 *)((int)this + 0xc);
  }
  *this_val = this_val._3_1_;
  FUN_00553734(this_val,0);
  uVar1 = FUN_0055cf4d(uVar2);
  FUN_0055349f(this_val,uVar2,uVar1);
  return this_val;
}


/* ==== 0055099c FUN_0055099c ==== */

undefined4 * FUN_0055099c(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined1 uVar4;
  undefined2 *puVar5;
  int unaff_EBP;
  uint i;
  undefined1 *puVar6;
  float10 fVar7;
  
  FUN_0055b39c();
  FUN_005521c2(unaff_EBP + -0x1c,unaff_EBP + 0xc,unaff_EBP + 0x14,*(undefined4 *)(unaff_EBP + 0x1c),
               *(undefined4 *)(unaff_EBP + 0x20));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  cVar3 = FUN_00554775((void *)(unaff_EBP + 0xc),(int *)(unaff_EBP + 0x14));
  puVar1 = *(uint **)(unaff_EBP + 0x24);
  if (cVar3 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    *(undefined1 *)(unaff_EBP + -0x2c) = *(undefined1 *)(unaff_EBP + 0x23);
    FUN_004028f0(unaff_EBP + -0x2c,0);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(uint *)(unaff_EBP + -0x20) < *(uint *)(unaff_EBP + -0x14)) {
      FUN_00402a00(unaff_EBP + -0x2c,*(uint *)(unaff_EBP + -0x14),0);
    }
    i = 0;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      do {
        if (*(int *)(unaff_EBP + -0x18) == 0) {
          puVar5 = &DAT_00579320;
        }
        else {
          FUN_0055367f(unaff_EBP + -0x1c);
          puVar5 = (undefined2 *)(*(int *)(unaff_EBP + -0x18) + i * 2);
        }
        uVar4 = FUN_0054eb1f(CONCAT22((short)((uint)puVar5 >> 0x10),*puVar5));
        *(undefined1 *)(unaff_EBP + 0x20) = uVar4;
        FUN_0047eab0(unaff_EBP + -0x2c,1,*(undefined4 *)(unaff_EBP + 0x20));
        i = i + 1;
      } while (i < *(uint *)(unaff_EBP + -0x14));
    }
    puVar6 = *(undefined1 **)(unaff_EBP + -0x28);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0057629c;
    }
    DAT_0074dc60 = 0;
    fVar7 = (float10)FUN_00557ce9(puVar6,unaff_EBP + 0x1c,0);
    if ((*(undefined1 **)(unaff_EBP + 0x1c) == puVar6) || (DAT_0074dc60 != 0)) {
      *puVar1 = *puVar1 | 2;
    }
    else {
      **(double **)(unaff_EBP + 0x28) = (double)fVar7;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_004028f0(unaff_EBP + -0x2c,1);
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = *(undefined4 *)(unaff_EBP + 0x10);
  FUN_00553734(unaff_EBP + -0x1c,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}


/* ==== 00550acf FUN_00550acf ==== */

undefined4 * FUN_00550acf(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int unaff_EBP;
  
  FUN_0055b39c();
  FUN_005521c2(unaff_EBP + -0x1c,unaff_EBP + 0xc,unaff_EBP + 0x14,*(undefined4 *)(unaff_EBP + 0x1c),
               *(undefined4 *)(unaff_EBP + 0x20));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  cVar3 = FUN_00554775((void *)(unaff_EBP + 0xc),(int *)(unaff_EBP + 0x14));
  puVar1 = *(uint **)(unaff_EBP + 0x24);
  if (cVar3 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    FUN_005533c1(*(undefined4 *)(unaff_EBP + 0x28),unaff_EBP + -0x1c,0,0xffffffff);
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = *(undefined4 *)(unaff_EBP + 0x10);
  FUN_00553734(unaff_EBP + -0x1c,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}


/* ==== 00550b59 FUN_00550b59 ==== */

undefined4 * FUN_00550b59(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 extraout_ECX;
  int unaff_EBP;
  int i;
  int local_60;
  char *pcStack_5c;
  undefined8 local_58;
  
  FUN_0055b39c();
  *(undefined4 *)(unaff_EBP + -0x18) = extraout_ECX;
  *(undefined1 *)(unaff_EBP + -0x14) = 0;
  if (*(double *)(unaff_EBP + 0x20) < 0.0) {
    *(double *)(unaff_EBP + 0x20) = -*(double *)(unaff_EBP + 0x20);
    *(undefined1 *)(unaff_EBP + -0x14) = 1;
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  while ((1e+35 <= *(double *)(unaff_EBP + 0x20) && (*(uint *)(unaff_EBP + -0x10) < 5000))) {
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 10;
    *(double *)(unaff_EBP + 0x20) = *(double *)(unaff_EBP + 0x20) * 1e-10;
  }
  *(undefined1 *)(unaff_EBP + -0x28) = *(undefined1 *)(unaff_EBP + 0x1f);
  local_58 = 0x550bc6;
  FUN_00553734(unaff_EBP + -0x28);
  local_58 = *(undefined8 *)(unaff_EBP + 0x20);
  local_60 = unaff_EBP + -0x50;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  pcStack_5c = "%.0Lf";
  iVar2 = FUN_005587a3();
  i = 0;
  if (0 < iVar2) {
    do {
      local_58 = CONCAT44((int)*(char *)(unaff_EBP + -0x50 + i),0x550bf5);
      uVar3 = FUN_0054ef7c();
      local_58 = CONCAT44(uVar3,1);
      pcStack_5c = (char *)0x550c01;
      FUN_00553039(unaff_EBP + -0x28);
      i = i + 1;
    } while (i < iVar2);
  }
  local_58 = 0x3000550c0d;
  uVar3 = FUN_0054ef7c();
  local_58 = CONCAT44(uVar3,*(undefined4 *)(unaff_EBP + -0x10));
  pcStack_5c = (char *)0x550c1a;
  FUN_00553039(unaff_EBP + -0x28);
  *(int **)(unaff_EBP + 0x24) = &local_60;
  local_60 = CONCAT31(local_60._1_3_,*(undefined1 *)(unaff_EBP + -0x28));
  FUN_00553734(&local_60,0);
  FUN_005533c1(&local_60,unaff_EBP + -0x28,0,0xffffffff);
  puVar4 = (undefined4 *)
           FUN_00552a63(unaff_EBP + 0x20,*(undefined4 *)(unaff_EBP + 0xc),
                        *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
                        *(undefined4 *)(unaff_EBP + 0x18),*(undefined4 *)(unaff_EBP + 0x1c),
                        *(undefined4 *)(unaff_EBP + -0x14));
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  uVar3 = *puVar4;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *puVar1 = uVar3;
  puVar1[1] = puVar4[1];
  local_58 = 0x100550c7a;
  FUN_00553734(unaff_EBP + -0x28);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar1;
}


/* ==== 00550c8d FUN_00550c8d ==== */

undefined4 * FUN_00550c8d(void)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 extraout_ECX;
  short *psVar7;
  int unaff_EBP;
  short *psVar8;
  undefined1 auStack_44 [4];
  undefined4 uStack_40;
  short *psStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  
  FUN_0055b39c();
  *(undefined4 *)(unaff_EBP + -0x1c) = extraout_ECX;
  iStack_30 = unaff_EBP + -0x14;
  uStack_34 = 0x550cac;
  uStack_38 = FUN_004d4370(*(undefined4 *)(unaff_EBP + 0x18));
  iStack_30 = 1;
  uStack_34 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  psStack_3c = (short *)0x550cba;
  piVar4 = (int *)FUN_00553a7f();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_30 = 0x550ccb;
  std::locale::~locale((locale *)(unaff_EBP + -0x14));
  psVar8 = *(short **)(*(int *)(unaff_EBP + 0x20) + 4);
  if (psVar8 == (short *)0x0) {
    psVar8 = &DAT_00579320;
  }
  *(undefined1 *)(unaff_EBP + -0x10) = 0;
  iStack_30 = 0x2d;
  uStack_34 = 0x550ce5;
  uVar5 = FUN_0054ef7c();
  if (*psVar8 == (short)uVar5) {
    *(undefined1 *)(unaff_EBP + -0x10) = 1;
    psVar8 = psVar8 + 1;
  }
  iStack_30 = CONCAT22((short)((uint)uVar5 >> 0x10),*psVar8);
  iVar1 = *piVar4;
  uStack_34 = 4;
  *(undefined4 *)(unaff_EBP + 0x20) = 0;
  uStack_38 = 0x550d01;
  uVar5 = (**(code **)(iVar1 + 8))();
  cVar3 = (char)uVar5;
  psVar7 = psVar8;
  while (cVar3 != '\0') {
    *(int *)(unaff_EBP + 0x20) = *(int *)(unaff_EBP + 0x20) + 1;
    psVar7 = psVar7 + 1;
    uStack_38 = CONCAT22((short)((uint)uVar5 >> 0x10),*psVar7);
    psStack_3c = (short *)0x4;
    uStack_40 = 0x550d19;
    uVar5 = (**(code **)(*piVar4 + 8))();
    cVar3 = (char)uVar5;
  }
  uStack_38 = 0;
  *(undefined1 *)(unaff_EBP + -0x2c) = *(undefined1 *)(unaff_EBP + 0x1b);
  psStack_3c = (short *)0x550d2e;
  FUN_00553734(unaff_EBP + -0x2c);
  uStack_38 = *(undefined4 *)(unaff_EBP + 0x20);
  uStack_40 = 0x550d3a;
  psStack_3c = psVar8;
  FUN_0055349f(unaff_EBP + -0x2c);
  uStack_38 = 1;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 0x20) == 0) {
    uStack_38 = 0x30;
    psStack_3c = (short *)0x550d4c;
    uStack_38 = FUN_0054ef7c();
    psStack_3c = (short *)0x1;
    uStack_40 = 0x550d57;
    FUN_00553039(unaff_EBP + -0x2c);
  }
  auStack_44[0] = *(undefined1 *)(unaff_EBP + -0x2c);
  *(undefined1 **)(unaff_EBP + 0x20) = auStack_44;
  FUN_00553734(auStack_44,0);
  FUN_005533c1(auStack_44,unaff_EBP + -0x2c,0,0xffffffff);
  puVar6 = (undefined4 *)
           FUN_00552a63(unaff_EBP + -0x18,*(undefined4 *)(unaff_EBP + 0xc),
                        *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
                        *(undefined4 *)(unaff_EBP + 0x18),*(undefined4 *)(unaff_EBP + 0x1c),
                        *(undefined4 *)(unaff_EBP + -0x10));
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  uVar5 = *puVar6;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_38 = 1;
  *puVar2 = uVar5;
  puVar2[1] = puVar6[1];
  psStack_3c = (short *)0x550db6;
  FUN_00553734(unaff_EBP + -0x2c);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}


/* ==== 00550dce FUN_00550dce ==== */

undefined1 * __thiscall FUN_00550dce(void *this,undefined1 *this_val)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)((int)this + 0x10);
  *this_val = this_val._3_1_;
  FUN_00553734(this_val,0);
  uVar2 = FUN_0055cf4d(uVar1);
  FUN_0055349f(this_val,uVar1,uVar2);
  return this_val;
}


/* ==== 00550e04 FUN_00550e04 ==== */

undefined1 * __thiscall FUN_00550e04(void *this,undefined1 *this_val)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)((int)this + 0x14);
  *this_val = this_val._3_1_;
  FUN_00553734(this_val,0);
  uVar2 = FUN_0055cf4d(uVar1);
  FUN_0055349f(this_val,uVar1,uVar2);
  return this_val;
}


/* ==== 00550e3a FUN_00550e3a ==== */

undefined1 * __thiscall FUN_00550e3a(void *this,undefined1 *this_val)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)((int)this + 0x18);
  *this_val = this_val._3_1_;
  FUN_00553734(this_val,0);
  uVar2 = FUN_0055cf4d(uVar1);
  FUN_0055349f(this_val,uVar1,uVar2);
  return this_val;
}


/* ==== 00550e74 FUN_00550e74 ==== */

void __thiscall FUN_00550e74(void *this,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  int *piVar2;
  short sVar3;
  uint uVar4;
  uint *in_stack_0000001c;
  int *in_stack_00000020;
  
  sVar3 = FUN_0054ef7c(this,0x3a);
  piVar2 = in_stack_00000020;
  uVar4 = FUN_005531c8((char *)&param_3,(int *)&stack0x00000010,0,0x17,in_stack_00000020 + 2);
  puVar1 = in_stack_0000001c;
  *in_stack_0000001c = *in_stack_0000001c | uVar4;
  if (*in_stack_0000001c == 0) {
    if ((char)param_4 == '\0') {
      Peek(&param_3);
    }
    if (param_4._2_2_ != sVar3) goto LAB_00550ee2;
    FUN_0055331d(&param_3);
    uVar4 = FUN_005531c8((char *)&param_3,(int *)&stack0x00000010,0,0x3b,piVar2 + 1);
    *puVar1 = *puVar1 | uVar4;
  }
  else {
LAB_00550ee2:
    *puVar1 = *puVar1 | 2;
  }
  if (*puVar1 == 0) {
    if ((char)param_4 == '\0') {
      Peek(&param_3);
    }
    if (param_4._2_2_ == sVar3) {
      FUN_0055331d(&param_3);
      uVar4 = FUN_005531c8((char *)&param_3,(int *)&stack0x00000010,0,0x3b,piVar2);
      *puVar1 = *puVar1 | uVar4;
      goto LAB_00550f23;
    }
  }
  *puVar1 = *puVar1 | 2;
LAB_00550f23:
  *param_2 = param_3;
  param_2[1] = param_4;
  return;
}


/* ==== 00550f38 FUN_00550f38 ==== */

void __thiscall
FUN_00550f38(void *this,undefined4 *param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6,undefined4 param_7,uint *param_8,int param_9)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  short sVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 extraout_ECX;
  undefined4 this_val;
  void *local_c;
  void *pvStack_8;
  
  iVar2 = param_9;
  puVar1 = param_8;
  local_c = this;
  pvStack_8 = this;
  puVar5 = (undefined4 *)
           (**(code **)(*(int *)this + 0x14))
                     (&local_c,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  this_val = *puVar5;
  param_4 = puVar5[1];
  param_3 = this_val;
  if (*puVar1 == 0) {
    if ((char)param_4 == '\0') {
      Peek(&param_3);
      this_val = extraout_ECX;
    }
    sVar4 = FUN_0054ef7c(this_val,0x20);
    if (param_4._2_2_ != sVar4) goto LAB_00550fb2;
    FUN_0055331d(&param_3);
    uVar6 = FUN_005531c8((char *)&param_3,&param_5,1,0x1f,(int *)(iVar2 + 0xc));
    *puVar1 = *puVar1 | uVar6;
  }
  else {
LAB_00550fb2:
    *puVar1 = *puVar1 | 2;
  }
  if (*puVar1 == 0) {
    if ((char)param_4 == '\0') {
      Peek(&param_3);
    }
    sVar4 = FUN_0054ef7c();
    if (param_4._2_2_ == sVar4) {
      FUN_0055331d(&param_3);
      cVar3 = FUN_00554775(&param_3,&param_5);
      if (cVar3 == '\0') {
        if ((char)param_4 == '\0') {
          Peek(&param_3);
        }
        sVar4 = FUN_0054ef7c();
        if (param_4._2_2_ == sVar4) {
          FUN_0055331d(&param_3);
          puVar5 = (undefined4 *)
                   (**(code **)(*(int *)this + 0x18))
                             (&local_c,param_3,param_4,param_5,param_6,param_7,puVar1,iVar2);
          param_3 = *puVar5;
          param_4 = puVar5[1];
          goto LAB_00551041;
        }
      }
    }
  }
  *puVar1 = *puVar1 | 2;
LAB_00551041:
  cVar3 = FUN_00554775(&param_3,&param_5);
  if (cVar3 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  *param_2 = param_3;
  param_2[1] = param_4;
  return;
}


/* ==== 00551069 FUN_00551069 ==== */

void __thiscall FUN_00551069(void *this,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint *in_stack_0000001c;
  int in_stack_00000020;
  
  iVar1 = FUN_0055449e(&param_3,&stack0x00000010,0,*(undefined4 *)((int)this + 8));
  if (iVar1 < 0) {
    *in_stack_0000001c = *in_stack_0000001c | 2;
  }
  else {
    *(int *)(in_stack_00000020 + 0x18) = iVar1 >> 1;
  }
  *param_2 = param_3;
  param_2[1] = param_4;
  return;
}


/* ==== 005510a7 FUN_005510a7 ==== */

void __thiscall FUN_005510a7(void *this,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint *in_stack_0000001c;
  int in_stack_00000020;
  
  iVar1 = FUN_0055449e(&param_3,&stack0x00000010,0,*(undefined4 *)((int)this + 0xc));
  if (iVar1 < 0) {
    *in_stack_0000001c = *in_stack_0000001c | 2;
  }
  else {
    *(int *)(in_stack_00000020 + 0x10) = iVar1 >> 1;
  }
  *param_2 = param_3;
  param_2[1] = param_4;
  return;
}


/* ==== 005510e5 FUN_005510e5 ==== */

void __thiscall
FUN_005510e5(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint *in_stack_0000001c;
  int in_stack_00000020;
  int local_8;
  
  uVar1 = FUN_005531c8((char *)&param_3,(int *)&stack0x00000010,0,0x7f3,&local_8);
  *in_stack_0000001c = *in_stack_0000001c | uVar1;
  if ((*in_stack_0000001c & 2) == 0) {
    if (local_8 < 0x76c) {
      if (0x87 < local_8) {
        *in_stack_0000001c = *in_stack_0000001c | 2;
      }
    }
    else {
      local_8 = local_8 + -0x76c;
    }
  }
  if ((*in_stack_0000001c & 2) == 0) {
    *(int *)(in_stack_00000020 + 0x14) = local_8;
  }
  *param_2 = param_3;
  param_2[1] = param_4;
  return;
}


/* ==== 0055114b FUN_0055114b ==== */

void * __thiscall FUN_0055114b(void *this,byte param_2)

{
  ~ctype<>();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 00551167 ~ctype<> ==== */

/* Library Function - Multiple Matches With Same Base Name
    protected: virtual __thiscall std::ctype<unsigned short>::~ctype<unsigned short>(void)
    protected: virtual __thiscall std::ctype<wchar_t>::~ctype<wchar_t>(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall ~ctype<>(void *this)

{
  *(undefined ***)this = &PTR_FUN_005792e4;
  if (*(int *)((int)this + 0x14) != 0) {
    FUN_00559d4e(*(undefined4 *)((int)this + 0x10));
  }
  *(undefined ***)this = &PTR_LAB_00579044;
  return;
}


/* ==== 00551187 FUN_00551187 ==== */

void * __thiscall FUN_00551187(void *this,byte param_2)

{
  ~time_put<>();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 005511a3 ~time_put<> ==== */

/* Library Function - Multiple Matches With Same Base Name
    protected: virtual __thiscall std::time_put<char,class std::ostreambuf_iterator<char,struct
   std::char_traits<char> > >::~time_put<char,class std::ostreambuf_iterator<char,struct
   std::char_traits<char> > >(void)
    protected: virtual __thiscall std::time_put<unsigned short,class
   std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >
   >::~time_put<unsigned short,class std::ostreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > >(void)
    protected: virtual __thiscall std::time_put<wchar_t,class
   std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > >::~time_put<wchar_t,class
   std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > >(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall ~time_put<>(void *this)

{
  *(undefined ***)this = &PTR_FUN_005791b0;
  FUN_00559d4e(*(undefined4 *)((int)this + 8));
  *(undefined ***)this = &PTR_LAB_00579044;
  return;
}


/* ==== 005511bd FUN_005511bd ==== */

void * __thiscall FUN_005511bd(void *this,byte param_2)

{
  FUN_005511d9();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 005511d9 FUN_005511d9 ==== */

void __thiscall FUN_005511d9(void *this)

{
  *(undefined ***)this = &PTR_FUN_0057927c;
  FUN_0054b339(*(undefined4 *)((int)this + 8));
  FUN_0054b339(*(undefined4 *)((int)this + 0x10));
  FUN_0054b339(*(undefined4 *)((int)this + 0x14));
  *(undefined ***)this = &PTR_LAB_00579044;
  return;
}


/* ==== 00551205 FUN_00551205 ==== */

void * __thiscall FUN_00551205(void *this,byte param_2)

{
  FUN_00551221();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 00551221 FUN_00551221 ==== */

void __thiscall FUN_00551221(void *this)

{
  *(undefined ***)this = &PTR_FUN_00579254;
  FUN_0054b339(*(undefined4 *)((int)this + 8));
  FUN_0054b339(*(undefined4 *)((int)this + 0xc));
  *(undefined ***)this = &PTR_LAB_00579044;
  return;
}


/* ==== 00551244 FUN_00551244 ==== */

void * __thiscall FUN_00551244(void *this,byte param_2)

{
  FUN_00551260();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 00551260 FUN_00551260 ==== */

void __thiscall FUN_00551260(void *this)

{
  *(undefined ***)this = &PTR_LAB_00579044;
  return;
}


/* ==== 00551267 FUN_00551267 ==== */

void * __thiscall FUN_00551267(void *this,byte param_2)

{
  thunk_FUN_005512c2();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 00551283 FUN_00551283 ==== */

void * __thiscall FUN_00551283(void *this,byte param_2)

{
  FUN_0055129f();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 0055129f FUN_0055129f ==== */

void __thiscall FUN_0055129f(void *this)

{
  *(undefined ***)this = &PTR_FUN_005791bc;
  FUN_0054b339(*(undefined4 *)((int)this + 8));
  FUN_0054b339(*(undefined4 *)((int)this + 0xc));
  *(undefined ***)this = &PTR_LAB_00579044;
  return;
}


/* ==== 005512c2 FUN_005512c2 ==== */

void __thiscall FUN_005512c2(void *this)

{
  *(undefined ***)this = &PTR_FUN_00579344;
  FUN_0054b339(*(undefined4 *)((int)this + 8));
  FUN_0054b339(*(undefined4 *)((int)this + 0x10));
  FUN_0054b339(*(undefined4 *)((int)this + 0x14));
  FUN_0054b339(*(undefined4 *)((int)this + 0x18));
  *(undefined ***)this = &PTR_LAB_00579044;
  return;
}


/* ==== 005512f6 FUN_005512f6 ==== */

void * __thiscall FUN_005512f6(void *this,byte param_2)

{
  FUN_005512c2();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 00551312 thunk_FUN_005512c2 ==== */

void __thiscall thunk_FUN_005512c2(void *this)

{
  *(undefined ***)this = &PTR_FUN_00579344;
  FUN_0054b339(*(undefined4 *)((int)this + 8));
  FUN_0054b339(*(undefined4 *)((int)this + 0x10));
  FUN_0054b339(*(undefined4 *)((int)this + 0x14));
  FUN_0054b339(*(undefined4 *)((int)this + 0x18));
  *(undefined ***)this = &PTR_LAB_00579044;
  return;
}


/* ==== 00551317 FUN_00551317 ==== */

void __thiscall FUN_00551317(void *this,undefined4 this_val)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0055133f(this_val,&this_val);
  *(undefined4 *)((int)this + 8) = *puVar1;
  *puVar1 = 0;
  FUN_00559d4e(this_val);
  return;
}


/* ==== 0055133f FUN_0055133f ==== */

undefined4 * __thiscall FUN_0055133f(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0055c4cf(0);
  *param_2 = uVar1;
  return param_2;
}


/* ==== 00551357 FUN_00551357 ==== */

void * __thiscall FUN_00551357(void *this,undefined4 param_2)

{
  short sVar1;
  
  if ((*(int *)((int)this + 4) != 0) &&
     (sVar1 = FUN_00551379(*(int *)((int)this + 4),param_2), sVar1 != -1)) {
    return this;
  }
  *(undefined1 *)this = 1;
  return this;
}


/* ==== 00551379 FUN_00551379 ==== */

undefined4 __thiscall FUN_00551379(void *this,undefined4 param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  
  uVar1 = **(uint **)((int)this + 0x20);
  if ((uVar1 == 0) || (uVar1 + **(int **)((int)this + 0x30) * 2 <= uVar1)) {
    param_2 = (**(code **)(*(int *)this + 4))(param_2);
  }
  else {
    puVar2 = (undefined2 *)FUN_0054c5ca();
    *puVar2 = (short)param_2;
  }
  return param_2;
}


/* ==== 005513aa FUN_005513aa ==== */

undefined4 FUN_005513aa(void)

{
  int iVar1;
  void *this;
  size_t _MaxCount;
  char cVar2;
  short sVar3;
  short sVar4;
  int *this_val;
  uint i;
  undefined2 uVar8;
  undefined2 extraout_var;
  void *_memchr_result;
  char *pcVar5;
  char *pcVar6;
  undefined1 *puVar7;
  int unaff_EBP;
  uint uVar9;
  undefined4 uVar10;
  
  FUN_0055b39c();
  uVar10 = 0x30;
  sVar3 = FUN_0054ef7c();
  this_val = (int *)FUN_00553cd8(*(undefined4 *)(unaff_EBP + 0x18),0,1,uVar10);
  FUN_005533aa(this_val,unaff_EBP + -0x38);
  iVar1 = *this_val;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar10 = (**(code **)(iVar1 + 8))();
  this = *(void **)(unaff_EBP + 0xc);
  puVar7 = *(undefined1 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x18) = uVar10;
  *(undefined1 **)(unaff_EBP + -0x10) = puVar7;
  cVar2 = FUN_00554775(this,*(int **)(unaff_EBP + 0x10));
  if (cVar2 == '\0') {
    if (*(char *)((int)this + 4) == '\0') {
      Peek(this);
    }
    sVar4 = FUN_0054ef7c();
    if (*(short *)((int)this + 6) == sVar4) {
      *puVar7 = 0x2b;
    }
    else {
      if (*(char *)((int)this + 4) == '\0') {
        Peek(this);
      }
      sVar4 = FUN_0054ef7c();
      if (*(short *)((int)this + 6) != sVar4) goto LAB_0055144c;
      *puVar7 = 0x2d;
    }
    *(undefined1 **)(unaff_EBP + -0x10) = puVar7 + 1;
    FUN_0055331d(this);
  }
LAB_0055144c:
  i = *(uint *)(unaff_EBP + 0x14) & 0xe00;
  if (i == 0x400) {
    *(undefined4 *)(unaff_EBP + 0x14) = 8;
  }
  else if (i == 0x800) {
    *(undefined4 *)(unaff_EBP + 0x14) = 0x10;
  }
  else {
    *(uint *)(unaff_EBP + 0x14) = -(uint)(i != 0) & 10;
  }
  *(undefined1 *)(unaff_EBP + 0x1b) = 0;
  *(undefined1 *)(unaff_EBP + 0xf) = 0;
  cVar2 = FUN_00554775(this,*(int **)(unaff_EBP + 0x10));
  if (cVar2 == '\0') {
    if (*(char *)((int)this + 4) == '\0') {
      Peek(this);
    }
    if (*(short *)((int)this + 6) != sVar3) goto LAB_0055151f;
    *(undefined1 *)(unaff_EBP + 0x1b) = 1;
    FUN_0055331d(this);
    cVar2 = FUN_00554775(this,*(int **)(unaff_EBP + 0x10));
    if (cVar2 != '\0') {
LAB_00551512:
      if (*(int *)(unaff_EBP + 0x14) == 0) {
        *(undefined4 *)(unaff_EBP + 0x14) = 8;
        goto LAB_0055151f;
      }
      goto LAB_00551525;
    }
    if (*(char *)((int)this + 4) == '\0') {
      Peek(this);
    }
    sVar3 = FUN_0054ef7c();
    if (*(short *)((int)this + 6) != sVar3) {
      if (*(char *)((int)this + 4) == '\0') {
        Peek(this);
      }
      sVar3 = FUN_0054ef7c();
      if (*(short *)((int)this + 6) != sVar3) goto LAB_00551512;
    }
    if ((*(int *)(unaff_EBP + 0x14) != 0) && (*(int *)(unaff_EBP + 0x14) != 0x10))
    goto LAB_00551512;
    *(undefined1 *)(unaff_EBP + 0x1b) = 0;
    *(undefined4 *)(unaff_EBP + 0x14) = 0x10;
    FUN_0055331d(this);
LAB_0055152b:
    *(uint *)(unaff_EBP + -0x14) = ((*(int *)(unaff_EBP + 0x14) != 8) - 1 & 0xfffffff2) + 0x16;
  }
  else {
LAB_0055151f:
    if (*(int *)(unaff_EBP + 0x14) != 0) {
LAB_00551525:
      if (*(int *)(unaff_EBP + 0x14) != 10) goto LAB_0055152b;
    }
    *(undefined4 *)(unaff_EBP + -0x14) = 10;
  }
  i = 0;
  *(undefined1 *)(unaff_EBP + -0x28) = *(undefined1 *)(unaff_EBP + 0x13);
  FUN_004028f0(unaff_EBP + -0x28,0);
  FUN_0054e333((void *)(unaff_EBP + -0x28),1,*(char *)(unaff_EBP + 0x1b) != '\0');
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uVar10 = FUN_00554775(this,*(int **)(unaff_EBP + 0x10));
  if ((char)uVar10 == '\0') {
    do {
      uVar8 = (undefined2)((uint)uVar10 >> 0x10);
      if (*(char *)((int)this + 4) == '\0') {
        Peek(this);
        uVar8 = extraout_var;
      }
      cVar2 = FUN_0054eb1f(CONCAT22(uVar8,*(undefined2 *)((int)this + 6)));
      _MaxCount = *(size_t *)(unaff_EBP + -0x14);
      **(char **)(unaff_EBP + -0x10) = cVar2;
      _memchr_result = _memchr("0123456789abcdefABCDEF",(int)cVar2,_MaxCount);
      if (_memchr_result == (void *)0x0) {
        if ((*(uint *)(unaff_EBP + -0x20) < i) || (*(int *)(unaff_EBP + -0x24) == 0)) {
          pcVar5 = "";
        }
        else {
          FUN_00471de0(unaff_EBP + -0x28);
          pcVar5 = (char *)(*(int *)(unaff_EBP + -0x24) + i);
        }
        if ((*pcVar5 == '\0') || (*(short *)(unaff_EBP + -0x18) == 0)) break;
        if (*(char *)((int)this + 4) == '\0') {
          Peek(this);
        }
        if (*(short *)((int)this + 6) != *(short *)(unaff_EBP + -0x18)) break;
        FUN_0047eab0(unaff_EBP + -0x28,1,0);
        i = i + 1;
      }
      else {
        if (((*(char *)(unaff_EBP + 0xf) != '\0') || (**(char **)(unaff_EBP + -0x10) != '0')) &&
           (*(uint *)(unaff_EBP + -0x10) < iVar1 + 0x1fU)) {
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
          *(undefined1 *)(unaff_EBP + 0xf) = 1;
        }
        *(undefined1 *)(unaff_EBP + 0x1b) = 1;
        if ((*(uint *)(unaff_EBP + -0x20) < i) || (*(int *)(unaff_EBP + -0x24) == 0)) {
          pcVar5 = "";
        }
        else {
          FUN_00471de0(unaff_EBP + -0x28);
          pcVar5 = (char *)(*(int *)(unaff_EBP + -0x24) + i);
        }
        if (*pcVar5 != '\x7f') {
          if ((*(uint *)(unaff_EBP + -0x20) < i) || (*(int *)(unaff_EBP + -0x24) == 0)) {
            pcVar5 = "";
          }
          else {
            FUN_00471de0(unaff_EBP + -0x28);
            pcVar5 = (char *)(*(int *)(unaff_EBP + -0x24) + i);
          }
          *pcVar5 = *pcVar5 + '\x01';
        }
      }
      FUN_0055331d(this);
      uVar10 = FUN_00554775(this,*(int **)(unaff_EBP + 0x10));
    } while ((char)uVar10 == '\0');
    if (i != 0) {
      if ((*(uint *)(unaff_EBP + -0x20) < i) || (*(int *)(unaff_EBP + -0x24) == 0)) {
        pcVar5 = "";
      }
      else {
        FUN_00471de0(unaff_EBP + -0x28);
        pcVar5 = (char *)(*(int *)(unaff_EBP + -0x24) + i);
      }
      if (*pcVar5 < '\x01') {
        *(undefined1 *)(unaff_EBP + 0x1b) = 0;
      }
      else {
        i = i + 1;
      }
    }
  }
  pcVar5 = *(char **)(unaff_EBP + -0x34);
  if (pcVar5 == (char *)0x0) {
    pcVar5 = "";
  }
  if (*(char *)(unaff_EBP + 0x1b) != '\0') {
    do {
      if ((i == 0) || (*pcVar5 == '\x7f')) break;
      uVar9 = i - 1;
      if (uVar9 == 0) {
LAB_005516fb:
        if (uVar9 == 0) {
          if (*(int *)(unaff_EBP + -0x24) == 0) {
            pcVar6 = "";
          }
          else {
            FUN_00471de0(unaff_EBP + -0x28);
            pcVar6 = *(char **)(unaff_EBP + -0x24);
          }
          if (*pcVar5 < *pcVar6) goto LAB_00551720;
        }
        if ('\0' < pcVar5[1]) {
          pcVar5 = pcVar5 + 1;
        }
      }
      else {
        if ((*(uint *)(unaff_EBP + -0x20) < uVar9) || (*(int *)(unaff_EBP + -0x24) == 0)) {
          pcVar6 = "";
        }
        else {
          FUN_00471de0(unaff_EBP + -0x28);
          pcVar6 = (char *)(*(int *)(unaff_EBP + -0x24) + uVar9);
        }
        if (*pcVar5 == *pcVar6) goto LAB_005516fb;
LAB_00551720:
        *(undefined1 *)(unaff_EBP + 0x1b) = 0;
      }
      i = i - 2;
    } while (*(char *)(unaff_EBP + 0x1b) != '\0');
    if (*(char *)(unaff_EBP + 0x1b) != '\0') {
      puVar7 = *(undefined1 **)(unaff_EBP + -0x10);
      if (*(char *)(unaff_EBP + 0xf) == '\0') {
        *puVar7 = 0x30;
        puVar7 = puVar7 + 1;
      }
      goto LAB_00551750;
    }
  }
  puVar7 = *(undefined1 **)(unaff_EBP + 8);
LAB_00551750:
  *puVar7 = 0;
  FUN_004028f0(unaff_EBP + -0x28,1);
  FUN_004028f0(unaff_EBP + -0x38,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 0x14);
}


/* ==== 00551779 FUN_00551779 ==== */

int FUN_00551779(undefined1 *param_1,void *this_val_2,int *this_val,undefined4 param_4)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 in_ECX;
  int k;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int i;
  int j;
  
  sVar3 = FUN_0054ef7c(in_ECX,0x30);
  piVar5 = (int *)FUN_00553cd8(param_4,0,1);
  cVar2 = FUN_00554775(this_val_2,this_val);
  puVar8 = param_1;
  if (cVar2 == '\0') {
    if (*(char *)((int)this_val_2 + 4) == '\0') {
      Peek(this_val_2);
    }
    sVar4 = FUN_0054ef7c();
    if (*(short *)((int)this_val_2 + 6) == sVar4) {
      *param_1 = 0x2b;
    }
    else {
      if (*(char *)((int)this_val_2 + 4) == '\0') {
        Peek(this_val_2);
      }
      sVar4 = FUN_0054ef7c();
      if (*(short *)((int)this_val_2 + 6) != sVar4) goto LAB_005517fe;
      *param_1 = 0x2d;
    }
    FUN_0055331d(this_val_2);
    puVar8 = param_1 + 1;
  }
LAB_005517fe:
  bVar1 = false;
  cVar2 = FUN_00554775(this_val_2,this_val);
  if (cVar2 == '\0') {
    do {
      if (*(char *)((int)this_val_2 + 4) == '\0') {
        Peek(this_val_2);
      }
      if (*(short *)((int)this_val_2 + 6) != sVar3) break;
      bVar1 = true;
      FUN_0055331d(this_val_2);
      cVar2 = FUN_00554775(this_val_2,this_val);
    } while (cVar2 == '\0');
    if (bVar1) {
      *puVar8 = 0x30;
      puVar8 = puVar8 + 1;
    }
  }
  i = 0;
  j = 0;
  while( true ) {
    cVar2 = FUN_00554775(this_val_2,this_val);
    if (cVar2 != '\0') break;
    if (*(char *)((int)this_val_2 + 4) == '\0') {
      Peek(this_val_2);
    }
    uVar6 = FUN_0054eb1f(*(undefined2 *)((int)this_val_2 + 6));
    *puVar8 = (char)uVar6;
    cVar2 = FUN_0054e965(uVar6,param_4);
    if (cVar2 == '\0') break;
    if (i < 0x24) {
      puVar8 = puVar8 + 1;
      i = i + 1;
    }
    else {
      j = j + 1;
    }
    bVar1 = true;
    FUN_0055331d(this_val_2);
  }
  cVar2 = FUN_00554775(this_val_2,this_val);
  if (cVar2 == '\0') {
    if (*(char *)((int)this_val_2 + 4) == '\0') {
      Peek(this_val_2);
    }
    sVar4 = (**(code **)(*piVar5 + 4))();
    if (*(short *)((int)this_val_2 + 6) == sVar4) {
      puVar7 = (undefined4 *)FUN_0055a6b0();
      *puVar8 = *(undefined1 *)*puVar7;
      puVar8 = puVar8 + 1;
      FUN_0055331d(this_val_2);
    }
  }
  if (i == 0) {
    while( true ) {
      cVar2 = FUN_00554775(this_val_2,this_val);
      if (cVar2 != '\0') break;
      if (*(char *)((int)this_val_2 + 4) == '\0') {
        Peek(this_val_2);
      }
      if (*(short *)((int)this_val_2 + 6) != sVar3) break;
      j = j + -1;
      bVar1 = true;
      FUN_0055331d(this_val_2);
    }
    if (j < 0) {
      *puVar8 = 0x30;
      puVar8 = puVar8 + 1;
      j = j + 1;
    }
  }
  while( true ) {
    cVar2 = FUN_00554775(this_val_2,this_val);
    if (cVar2 != '\0') break;
    if (*(char *)((int)this_val_2 + 4) == '\0') {
      Peek(this_val_2);
    }
    uVar6 = FUN_0054eb1f(*(undefined2 *)((int)this_val_2 + 6));
    *puVar8 = (char)uVar6;
    cVar2 = FUN_0054e965(uVar6,param_4);
    if (cVar2 == '\0') break;
    if (i < 0x24) {
      puVar8 = puVar8 + 1;
      i = i + 1;
    }
    bVar1 = true;
    FUN_0055331d(this_val_2);
  }
  if (bVar1) {
    cVar2 = FUN_00554775(this_val_2,this_val);
    bVar1 = true;
    puVar9 = puVar8;
    if (cVar2 == '\0') {
      if (*(char *)((int)this_val_2 + 4) == '\0') {
        Peek(this_val_2);
      }
      sVar4 = FUN_0054ef7c();
      if (*(short *)((int)this_val_2 + 6) != sVar4) {
        if (*(char *)((int)this_val_2 + 4) == '\0') {
          Peek(this_val_2);
        }
        sVar4 = FUN_0054ef7c();
        if (*(short *)((int)this_val_2 + 6) != sVar4) goto LAB_00551ab0;
      }
      *puVar8 = 0x65;
      puVar9 = puVar8 + 1;
      FUN_0055331d(this_val_2);
      bVar1 = false;
      k = 0;
      cVar2 = FUN_00554775(this_val_2,this_val);
      if (cVar2 == '\0') {
        if (*(char *)((int)this_val_2 + 4) == '\0') {
          Peek(this_val_2);
        }
        sVar4 = FUN_0054ef7c();
        if (*(short *)((int)this_val_2 + 6) == sVar4) {
          *puVar9 = 0x2b;
        }
        else {
          if (*(char *)((int)this_val_2 + 4) == '\0') {
            Peek(this_val_2);
          }
          sVar4 = FUN_0054ef7c();
          if (*(short *)((int)this_val_2 + 6) != sVar4) goto LAB_00551a1e;
          *puVar9 = 0x2d;
        }
        puVar9 = puVar8 + 2;
        FUN_0055331d(this_val_2);
      }
LAB_00551a1e:
      cVar2 = FUN_00554775(this_val_2,this_val);
      if (cVar2 == '\0') {
        do {
          if (*(char *)((int)this_val_2 + 4) == '\0') {
            Peek(this_val_2);
          }
          if (*(short *)((int)this_val_2 + 6) != sVar3) break;
          bVar1 = true;
          FUN_0055331d(this_val_2);
          cVar2 = FUN_00554775(this_val_2,this_val);
        } while (cVar2 == '\0');
        if (bVar1) {
          *puVar9 = 0x30;
          puVar9 = puVar9 + 1;
        }
      }
      while( true ) {
        cVar2 = FUN_00554775(this_val_2,this_val);
        if (cVar2 != '\0') break;
        if (*(char *)((int)this_val_2 + 4) == '\0') {
          Peek(this_val_2);
        }
        uVar6 = FUN_0054eb1f(*(undefined2 *)((int)this_val_2 + 6));
        *puVar9 = (char)uVar6;
        cVar2 = FUN_0054e965(uVar6,param_4);
        if (cVar2 == '\0') break;
        if (k < 8) {
          puVar9 = puVar9 + 1;
          k = k + 1;
        }
        bVar1 = true;
        FUN_0055331d(this_val_2);
      }
    }
LAB_00551ab0:
    if (bVar1) goto LAB_00551ab9;
  }
  puVar9 = param_1;
LAB_00551ab9:
  *puVar9 = 0;
  return j;
}


/* ==== 00551ac4 FUN_00551ac4 ==== */

void FUN_00551ac4(undefined1 *param_1,char param_2,uint param_3)

{
  undefined1 *puVar1;
  char *pcVar2;
  char cVar3;
  
  *param_1 = 0x25;
  puVar1 = param_1 + 1;
  if ((param_3 & 0x20) != 0) {
    *puVar1 = 0x2b;
    puVar1 = param_1 + 2;
  }
  if ((param_3 & 0x10) != 0) {
    *puVar1 = 0x23;
    puVar1 = puVar1 + 1;
  }
  *puVar1 = 0x2e;
  puVar1[1] = 0x2a;
  pcVar2 = puVar1 + 2;
  if (param_2 != '\0') {
    *pcVar2 = param_2;
    pcVar2 = puVar1 + 3;
  }
  if ((param_3 & 0x3000) == 0x2000) {
    cVar3 = 'f';
  }
  else {
    cVar3 = (((param_3 & 0x3000) != 0x1000) - 1U & 0xfe) + 0x67;
  }
  *pcVar2 = cVar3;
  pcVar2[1] = '\0';
  return;
}


/* ==== 00551b22 FUN_00551b22 ==== */

void FUN_00551b22(void)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *_memchr_result;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  int unaff_EBP;
  int iVar8;
  int i;
  size_t _MaxCount;
  
  FUN_0055b39c();
  uVar2 = *(uint *)(*(int *)(unaff_EBP + 0x14) + 0x14);
  if (0 < (int)uVar2) {
    if ((uint)(*(int *)(unaff_EBP + 0x20) + *(int *)(unaff_EBP + 0x24)) < uVar2) {
      *(uint *)(unaff_EBP + -0x10) =
           (uVar2 - *(int *)(unaff_EBP + 0x20)) - *(int *)(unaff_EBP + 0x24);
      goto LAB_00551b57;
    }
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
LAB_00551b57:
  uVar2 = *(uint *)(*(int *)(unaff_EBP + 0x14) + 0xc) & 0x1c0;
  if (uVar2 == 0x40) {
    uVar7 = *(undefined4 *)(unaff_EBP + 0x10);
    uVar5 = *(undefined4 *)(unaff_EBP + 0xc);
  }
  else {
    if (uVar2 == 0x100) {
      if ((*(int *)(unaff_EBP + 0x24) != 0) &&
         ((cVar1 = **(char **)(unaff_EBP + 0x1c), cVar1 == '+' || (cVar1 == '-')))) {
        *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + 0xc);
        *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + 0x10);
        uVar5 = FUN_0054ef7c(*(undefined4 *)(unaff_EBP + 0x10),(int)cVar1);
        FUN_00551357(unaff_EBP + -0x20,uVar5);
        *(int *)(unaff_EBP + 0x1c) = *(int *)(unaff_EBP + 0x1c) + 1;
        *(int *)(unaff_EBP + 0x24) = *(int *)(unaff_EBP + 0x24) + -1;
        *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x20);
        *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x1c);
      }
      i = *(int *)(unaff_EBP + -0x10);
      *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + 0xc);
      *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + 0x10);
      for (; i != 0; i = i + -1) {
        FUN_00551357(unaff_EBP + -0x20,*(undefined4 *)(unaff_EBP + 0x18));
      }
      uVar5 = *(undefined4 *)(unaff_EBP + -0x20);
      uVar7 = *(undefined4 *)(unaff_EBP + -0x1c);
    }
    else {
      i = *(int *)(unaff_EBP + -0x10);
      *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + 0xc);
      *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + 0x10);
      for (; i != 0; i = i + -1) {
        FUN_00551357(unaff_EBP + -0x20,*(undefined4 *)(unaff_EBP + 0x18));
      }
      uVar5 = *(undefined4 *)(unaff_EBP + -0x20);
      uVar7 = *(undefined4 *)(unaff_EBP + -0x1c);
    }
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  _MaxCount = *(size_t *)(unaff_EBP + 0x24);
  puVar3 = (undefined4 *)FUN_0055a6b0();
  _memchr_result = _memchr(*(void **)(unaff_EBP + 0x1c),(int)*(char *)*puVar3,_MaxCount);
  if (_memchr_result != (void *)0x0) {
    uVar4 = FUN_004d4370(*(undefined4 *)(unaff_EBP + 0x14),unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uVar4 = FUN_00553cd8(uVar4,0,1);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
    std::locale::~locale((locale *)(unaff_EBP + -0x14));
    *(undefined4 *)(unaff_EBP + -0x28) = uVar5;
    i = (int)_memchr_result - *(int *)(unaff_EBP + 0x1c);
    *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x1c);
    iVar8 = i + 1;
    *(undefined4 *)(unaff_EBP + -0x24) = uVar7;
    for (; i != 0; i = i + -1) {
      uVar5 = FUN_0054ef7c();
      FUN_00551357(unaff_EBP + -0x28,uVar5);
      *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 1;
    }
    uVar5 = (**(code **)(**(int **)(unaff_EBP + -0x1c) + 4))();
    *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x28);
    *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x24);
    FUN_00551357(unaff_EBP + 0xc,uVar5);
    *(int *)(unaff_EBP + 0x1c) = *(int *)(unaff_EBP + 0x1c) + iVar8;
    uVar5 = *(undefined4 *)(unaff_EBP + 0xc);
    uVar7 = *(undefined4 *)(unaff_EBP + 0x10);
    *(int *)(unaff_EBP + 0x24) = *(int *)(unaff_EBP + 0x24) - iVar8;
  }
  _memchr_result = _memchr(*(void **)(unaff_EBP + 0x1c),0x65,*(size_t *)(unaff_EBP + 0x24));
  if (_memchr_result != (void *)0x0) {
    *(undefined4 *)(unaff_EBP + -0x28) = uVar5;
    i = (int)_memchr_result - *(int *)(unaff_EBP + 0x1c);
    *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x1c);
    iVar8 = i + 1;
    *(undefined4 *)(unaff_EBP + -0x24) = uVar7;
    for (; i != 0; i = i + -1) {
      uVar5 = FUN_0054ef7c();
      FUN_00551357(unaff_EBP + -0x28,uVar5);
      *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 1;
    }
    uVar5 = FUN_0054ef7c();
    i = *(int *)(unaff_EBP + 0x20);
    *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x28);
    *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x24);
    for (; i != 0; i = i + -1) {
      FUN_00551357(unaff_EBP + 0xc,uVar5);
    }
    *(undefined4 *)(unaff_EBP + 0x20) = 0;
    pcVar6 = s_E_005b70a8;
    if ((*(byte *)(*(int *)(unaff_EBP + 0x14) + 0xc) & 4) == 0) {
      pcVar6 = s_e_005b70a4;
    }
    cVar1 = *pcVar6;
    *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + 0xc);
    *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + 0x10);
    uVar5 = FUN_0054ef7c(*(undefined4 *)(unaff_EBP + 0x10),(int)cVar1);
    FUN_00551357(unaff_EBP + -0x28,uVar5);
    *(int *)(unaff_EBP + 0x1c) = *(int *)(unaff_EBP + 0x1c) + iVar8;
    uVar5 = *(undefined4 *)(unaff_EBP + -0x28);
    uVar7 = *(undefined4 *)(unaff_EBP + -0x24);
    *(int *)(unaff_EBP + 0x24) = *(int *)(unaff_EBP + 0x24) - iVar8;
  }
  *(undefined4 *)(unaff_EBP + 0xc) = uVar5;
  i = *(int *)(unaff_EBP + 0x24);
  *(undefined4 *)(unaff_EBP + 0x10) = uVar7;
  for (; i != 0; i = i + -1) {
    uVar5 = FUN_0054ef7c();
    FUN_00551357(unaff_EBP + 0xc,uVar5);
  }
  uVar5 = FUN_0054ef7c();
  i = *(int *)(unaff_EBP + 0x20);
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + 0x10);
  for (; i != 0; i = i + -1) {
    FUN_00551357(unaff_EBP + -0x28,uVar5);
  }
  i = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(*(int *)(unaff_EBP + 0x14) + 0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x28);
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x24);
  for (; i != 0; i = i + -1) {
    FUN_00551357(unaff_EBP + -0x18,*(undefined4 *)(unaff_EBP + 0x18));
  }
  puVar3 = *(undefined4 **)(unaff_EBP + 8);
  *puVar3 = *(undefined4 *)(unaff_EBP + -0x18);
  puVar3[1] = *(undefined4 *)(unaff_EBP + -0x14);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 00551e07 FUN_00551e07 ==== */

void FUN_00551e07(undefined1 *param_1,char param_2,uint param_3)

{
  undefined1 *puVar1;
  
  *param_1 = 0x25;
  puVar1 = param_1 + 1;
  if ((param_3 & 0x20) != 0) {
    *puVar1 = 0x2b;
    puVar1 = param_1 + 2;
  }
  if ((param_3 & 8) != 0) {
    *puVar1 = 0x23;
    puVar1 = puVar1 + 1;
  }
  *puVar1 = 0x6c;
  if ((param_3 & 0xe00) == 0x400) {
    param_2 = 'o';
  }
  else if ((param_3 & 0xe00) == 0x800) {
    param_2 = (~(byte)param_3 & 4 | 0xb) << 3;
  }
  puVar1[1] = param_2;
  puVar1[2] = 0;
  return;
}


/* ==== 00551e61 FUN_00551e61 ==== */

undefined4 * FUN_00551e61(void)

{
  undefined1 *puVar1;
  char cVar2;
  char *pcVar3;
  undefined4 *puVar4;
  bool bVar5;
  undefined4 uVar6;
  int *this_val;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  int unaff_EBP;
  int i;
  undefined4 uVar10;
  
  FUN_0055b39c();
  cVar2 = **(char **)(unaff_EBP + 0x1c);
  if ((cVar2 == '+') || (cVar2 == '-')) {
    *(undefined4 *)(unaff_EBP + -0x14) = 1;
  }
  else if ((cVar2 == '0') &&
          ((cVar2 = (*(char **)(unaff_EBP + 0x1c))[1], cVar2 == 'x' || (cVar2 == 'X')))) {
    *(undefined4 *)(unaff_EBP + -0x14) = 2;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  uVar6 = FUN_004d4370(*(undefined4 *)(unaff_EBP + 0x14),unaff_EBP + -0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  this_val = (int *)FUN_00553cd8(uVar6,0,1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  std::locale::~locale((locale *)(unaff_EBP + -0x1c));
  FUN_005533aa(this_val,unaff_EBP + -0x34);
  i = *this_val;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  uVar6 = (**(code **)(i + 8))();
  pcVar3 = *(char **)(unaff_EBP + -0x30);
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar6;
  pcVar7 = "";
  if (pcVar3 != (char *)0x0) {
    pcVar7 = pcVar3;
  }
  bVar5 = false;
  if ('\0' < *pcVar7) {
    pcVar7 = "";
    if (pcVar3 != (char *)0x0) {
      pcVar7 = pcVar3;
    }
    i = *(int *)(unaff_EBP + 0x20);
    bVar5 = false;
    while (((cVar2 = *pcVar7, cVar2 != '\x7f' && ('\0' < cVar2)) &&
           ((uint)(int)cVar2 < (uint)(i - *(int *)(unaff_EBP + -0x14))))) {
      i = i - cVar2;
      puVar1 = (undefined1 *)(i + *(int *)(unaff_EBP + 0x1c));
      FUN_005580e0(i + 1 + *(int *)(unaff_EBP + 0x1c),puVar1,(*(int *)(unaff_EBP + 0x20) - i) + 1);
      *(int *)(unaff_EBP + 0x20) = *(int *)(unaff_EBP + 0x20) + 1;
      *puVar1 = 0x2c;
      if ('\0' < pcVar7[1]) {
        pcVar7 = pcVar7 + 1;
      }
      bVar5 = true;
    }
  }
  uVar8 = *(uint *)(*(int *)(unaff_EBP + 0x14) + 0x14);
  if (((int)uVar8 < 1) || (uVar8 <= *(uint *)(unaff_EBP + 0x20))) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  else {
    *(uint *)(unaff_EBP + -0x10) = uVar8 - *(int *)(unaff_EBP + 0x20);
  }
  uVar8 = *(uint *)(*(int *)(unaff_EBP + 0x14) + 0xc) & 0x1c0;
  if (uVar8 == 0x40) {
    uVar10 = *(undefined4 *)(unaff_EBP + 0x10);
    uVar6 = *(undefined4 *)(unaff_EBP + 0xc);
  }
  else {
    if (uVar8 == 0x100) {
      i = *(int *)(unaff_EBP + -0x14);
      *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + 0xc);
      *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + 0x10);
      for (; i != 0; i = i + -1) {
        uVar6 = FUN_0054ef7c();
        FUN_00551357(unaff_EBP + -0x24,uVar6);
      }
      i = *(int *)(unaff_EBP + -0x10);
      *(int *)(unaff_EBP + 0x1c) = *(int *)(unaff_EBP + 0x1c) + *(int *)(unaff_EBP + -0x14);
      *(int *)(unaff_EBP + 0x20) = *(int *)(unaff_EBP + 0x20) - *(int *)(unaff_EBP + -0x14);
      *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x24);
      *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x20);
      for (; i != 0; i = i + -1) {
        FUN_00551357(unaff_EBP + 0xc,*(undefined4 *)(unaff_EBP + 0x18));
      }
      uVar6 = *(undefined4 *)(unaff_EBP + 0xc);
      uVar10 = *(undefined4 *)(unaff_EBP + 0x10);
    }
    else {
      i = *(int *)(unaff_EBP + -0x10);
      *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + 0xc);
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + 0x10);
      for (; i != 0; i = i + -1) {
        FUN_00551357(unaff_EBP + -0x18,*(undefined4 *)(unaff_EBP + 0x18));
      }
      uVar6 = *(undefined4 *)(unaff_EBP + -0x18);
      uVar10 = *(undefined4 *)(unaff_EBP + -0x14);
    }
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  if (bVar5) {
    while( true ) {
      iVar9 = FUN_0055a6c0();
      *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + 0x1c);
      *(undefined4 *)(unaff_EBP + -0x24) = uVar6;
      *(undefined4 *)(unaff_EBP + -0x20) = uVar10;
      for (i = iVar9; i != 0; i = i + -1) {
        uVar6 = FUN_0054ef7c();
        FUN_00551357(unaff_EBP + -0x24,uVar6);
        *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 1;
      }
      *(int *)(unaff_EBP + 0x1c) = *(int *)(unaff_EBP + 0x1c) + iVar9;
      this_val = (int *)(unaff_EBP + 0x20);
      *this_val = *this_val - iVar9;
      uVar6 = *(undefined4 *)(unaff_EBP + -0x24);
      uVar10 = *(undefined4 *)(unaff_EBP + -0x20);
      if (*this_val == 0) break;
      if (*(short *)(unaff_EBP + -0x1c) != 0) {
        *(undefined4 *)(unaff_EBP + -0x18) = uVar6;
        *(undefined4 *)(unaff_EBP + -0x14) = uVar10;
        FUN_00551357(unaff_EBP + -0x18,*(undefined4 *)(unaff_EBP + -0x1c));
        uVar6 = *(undefined4 *)(unaff_EBP + -0x18);
        uVar10 = *(undefined4 *)(unaff_EBP + -0x14);
      }
      *(int *)(unaff_EBP + 0x1c) = *(int *)(unaff_EBP + 0x1c) + 1;
      *(int *)(unaff_EBP + 0x20) = *(int *)(unaff_EBP + 0x20) + -1;
    }
  }
  else {
    *(undefined4 *)(unaff_EBP + 0xc) = uVar6;
    i = *(int *)(unaff_EBP + 0x20);
    *(undefined4 *)(unaff_EBP + 0x10) = uVar10;
    for (; i != 0; i = i + -1) {
      uVar6 = FUN_0054ef7c();
      FUN_00551357(unaff_EBP + 0xc,uVar6);
    }
    uVar6 = *(undefined4 *)(unaff_EBP + 0xc);
    uVar10 = *(undefined4 *)(unaff_EBP + 0x10);
  }
  *(undefined4 *)(unaff_EBP + 0xc) = uVar6;
  i = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + 0x10) = uVar10;
  *(undefined4 *)(*(int *)(unaff_EBP + 0x14) + 0x14) = 0;
  for (; i != 0; i = i + -1) {
    FUN_00551357(unaff_EBP + 0xc,*(undefined4 *)(unaff_EBP + 0x18));
  }
  puVar4 = *(undefined4 **)(unaff_EBP + 8);
  *puVar4 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar4[1] = *(undefined4 *)(unaff_EBP + 0x10);
  FUN_004028f0(unaff_EBP + -0x34,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar4;
}


/* ==== 0055210f FUN_0055210f ==== */

undefined4 __thiscall FUN_0055210f(void *this,undefined4 param_2)

{
  (**(code **)(*(int *)this + 0x10))(param_2,0);
  return param_2;
}


/* ==== 00552126 FUN_00552126 ==== */

undefined4 __thiscall FUN_00552126(void *this,undefined4 param_2)

{
  (**(code **)(*(int *)this + 0x14))(param_2,0);
  return param_2;
}


/* ==== 0055213d FUN_0055213d ==== */

void __thiscall FUN_0055213d(void *this)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_0055a6b0();
  uVar1 = FUN_0054ef7c();
  *(undefined2 *)((int)this + 0xc) = uVar1;
  uVar1 = FUN_0054ef7c();
  *(undefined2 *)((int)this + 0xe) = uVar1;
  uVar3 = FUN_0054e986(*(char **)(iVar2 + 8));
  *(undefined4 *)((int)this + 8) = uVar3;
  uVar3 = FUN_0055466a(s_false_005b70b4);
  *(undefined4 *)((int)this + 0x10) = uVar3;
  uVar3 = FUN_0055466a(&DAT_005b70ac);
  *(undefined4 *)((int)this + 0x14) = uVar3;
  return;
}


/* ==== 0055219a FUN_0055219a ==== */

void __thiscall FUN_0055219a(void *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0055466a(s_no_005b2d3c);
  *(undefined4 *)((int)this + 8) = uVar1;
  uVar1 = FUN_0055466a((char *)&PTR_DAT_005b2d40);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return;
}


/* ==== 005521c2 FUN_005521c2 ==== */

undefined1 * FUN_005521c2(void)

{
  short sVar1;
  undefined4 *this;
  int *piVar2;
  undefined4 uVar3;
  bool bVar4;
  char cVar5;
  short sVar6;
  undefined4 uVar7;
  int *this_val;
  undefined4 *puVar8;
  undefined2 uVar11;
  undefined2 extraout_var;
  char *pcVar9;
  undefined2 extraout_var_00;
  char *pcVar10;
  undefined2 extraout_var_01;
  int this_val_2;
  short *psVar12;
  int unaff_EBP;
  uint j;
  uint uVar13;
  int i;
  undefined1 *this_val_3;
  
  FUN_0055b39c();
  *(undefined4 *)(unaff_EBP + -0x74) = 0;
  if (*(char *)(unaff_EBP + 0x14) == '\0') {
    uVar7 = FUN_004d4370(*(undefined4 *)(unaff_EBP + 0x18),unaff_EBP + -0x40);
    *(undefined4 *)(unaff_EBP + -4) = 2;
    this_val = (int *)FUN_0055409f(uVar7,0,1);
    *(int **)(unaff_EBP + -0x24) = this_val;
  }
  else {
    uVar7 = FUN_004d4370(*(undefined4 *)(unaff_EBP + 0x18),unaff_EBP + -0x40);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    this_val = (int *)FUN_00554162(uVar7,0,1);
    *(int **)(unaff_EBP + -0x24) = this_val;
  }
  std::locale::~locale((locale *)(unaff_EBP + -0x40));
  uVar7 = FUN_004d4370(*(undefined4 *)(unaff_EBP + 0x18),unaff_EBP + -0x6c);
  *(undefined4 *)(unaff_EBP + -4) = 3;
  uVar7 = FUN_00553a7f(uVar7,0,1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = uVar7;
  std::locale::~locale((locale *)(unaff_EBP + -0x6c));
  *(undefined1 *)(unaff_EBP + 0x17) = 0;
  *(undefined1 *)(unaff_EBP + -0xd) = 0;
  *(undefined1 *)(unaff_EBP + -0x3c) = *(undefined1 *)(unaff_EBP + 0x17);
  FUN_00553734(unaff_EBP + -0x3c,0);
  *(undefined4 *)(unaff_EBP + -4) = 4;
  *(undefined1 *)(unaff_EBP + -0x68) = *(undefined1 *)(unaff_EBP + 0x17);
  FUN_00553734(unaff_EBP + -0x68,0);
  i = *this_val;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puVar8 = (undefined4 *)(**(code **)(i + 0x24))(unaff_EBP + -0x58);
  this = *(undefined4 **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x70) = *puVar8;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  do {
    j = *(uint *)(unaff_EBP + -0x2c);
    if (3 < j) break;
    cVar5 = *(char *)(unaff_EBP + -0x70 + j);
    if (cVar5 == '$') {
      FUN_0055210f(this_val,unaff_EBP + -0x54);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if ((*(byte *)(*(int *)(unaff_EBP + 0x18) + 0xc) & 8) == 0) {
        if (((*(int *)(unaff_EBP + -0x2c) != 3) || (*(int *)(unaff_EBP + -0x34) != 0)) &&
           (cVar5 = FUN_00554775(this,*(int **)(unaff_EBP + 0x10)), cVar5 == '\0')) {
          if (*(char *)(this + 1) == '\0') {
            Peek(this);
          }
          psVar12 = *(short **)(unaff_EBP + -0x50);
          if (psVar12 == (short *)0x0) {
            psVar12 = &DAT_00579320;
          }
          if (*(short *)((int)this + 6) == *psVar12) goto LAB_005528c7;
        }
        FUN_00553613(unaff_EBP + -0x54,0,0xffffffff);
      }
LAB_005528c7:
      FUN_0055367f(unaff_EBP + -0x54);
      for (psVar12 = *(short **)(unaff_EBP + -0x50);
          (cVar5 = FUN_00554775(this,*(int **)(unaff_EBP + 0x10)), cVar5 == '\0' &&
          (FUN_0055367f(unaff_EBP + -0x54),
          psVar12 !=
          (short *)(-(uint)(*(int *)(unaff_EBP + -0x50) != 0) &
                   *(int *)(unaff_EBP + -0x50) + *(int *)(unaff_EBP + -0x4c) * 2)));
          psVar12 = psVar12 + 1) {
        if (*(char *)(this + 1) == '\0') {
          Peek(this);
        }
        if (*(short *)((int)this + 6) != *psVar12) break;
        FUN_0055331d(this);
      }
      FUN_0055367f(unaff_EBP + -0x54);
      if (psVar12 !=
          (short *)(-(uint)(*(int *)(unaff_EBP + -0x50) != 0) &
                   *(int *)(unaff_EBP + -0x50) + *(int *)(unaff_EBP + -0x4c) * 2)) {
        *(undefined1 *)(unaff_EBP + 0x17) = 1;
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_00553734(unaff_EBP + -0x54,1);
    }
    else if (cVar5 == '+') {
      cVar5 = FUN_00554775(this,*(int **)(unaff_EBP + 0x10));
      if (cVar5 == '\0') {
        i = FUN_00556fac(this_val,unaff_EBP + -0xc0);
        i = *(int *)(i + 8);
        *(undefined1 *)(unaff_EBP + -4) = 7;
        if (i == 0) {
LAB_0055272c:
          bVar4 = false;
        }
        else {
          this_val_2 = FUN_00556fac(this_val,unaff_EBP + -0xe0);
          i = *(int *)(this_val_2 + 4);
          *(undefined1 *)(unaff_EBP + -4) = 8;
          if (i == 0) {
            psVar12 = &DAT_00579320;
          }
          else {
            FUN_0055367f(this_val_2);
            psVar12 = *(short **)(this_val_2 + 4);
          }
          if (*(char *)(this + 1) == '\0') {
            Peek(this);
          }
          sVar6 = *psVar12;
          sVar1 = *(short *)((int)this + 6);
          *(undefined1 *)(unaff_EBP + -4) = 7;
          FUN_00553734(unaff_EBP + -0xe0,1);
          if (sVar6 != sVar1) goto LAB_0055272c;
          bVar4 = true;
        }
        *(undefined1 *)(unaff_EBP + -4) = 5;
        FUN_00553734(unaff_EBP + -0xc0,1);
        if (bVar4) {
          FUN_0055331d(this);
          uVar7 = FUN_00556fac(this_val,unaff_EBP + -0xa0);
          *(undefined1 *)(unaff_EBP + -4) = 9;
          FUN_005533c1(unaff_EBP + -0x3c,uVar7,0,0xffffffff);
          *(undefined1 *)(unaff_EBP + -4) = 5;
          i = unaff_EBP + -0xa0;
        }
        else {
          i = FUN_00553788(this_val,unaff_EBP + -0xd0);
          i = *(int *)(i + 8);
          *(undefined1 *)(unaff_EBP + -4) = 10;
          if (i == 0) {
LAB_005527f1:
            bVar4 = false;
          }
          else {
            this_val_2 = FUN_00553788(this_val,unaff_EBP + -0xb0);
            i = *(int *)(this_val_2 + 4);
            *(undefined1 *)(unaff_EBP + -4) = 0xb;
            if (i == 0) {
              psVar12 = &DAT_00579320;
            }
            else {
              FUN_0055367f(this_val_2);
              psVar12 = *(short **)(this_val_2 + 4);
            }
            if (*(char *)(this + 1) == '\0') {
              Peek(this);
            }
            sVar6 = *psVar12;
            sVar1 = *(short *)((int)this + 6);
            *(undefined1 *)(unaff_EBP + -4) = 10;
            FUN_00553734(unaff_EBP + -0xb0,1);
            if (sVar6 != sVar1) goto LAB_005527f1;
            bVar4 = true;
          }
          *(undefined1 *)(unaff_EBP + -4) = 5;
          FUN_00553734(unaff_EBP + -0xd0,1);
          if (!bVar4) goto LAB_00552847;
          FUN_0055331d(this);
          uVar7 = FUN_00553788(this_val,unaff_EBP + -0xf0);
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          FUN_005533c1(unaff_EBP + -0x3c,uVar7,0,0xffffffff);
          *(undefined1 *)(unaff_EBP + -0xd) = 1;
          *(undefined1 *)(unaff_EBP + -4) = 5;
          i = unaff_EBP + -0xf0;
        }
        FUN_00553734(i,1);
      }
LAB_00552847:
      if (*(int *)(unaff_EBP + -0x34) == 1) {
        FUN_00553613(unaff_EBP + -0x3c,0,0xffffffff);
      }
    }
    else {
      if (cVar5 != 'v') {
        if ((j != 3) &&
           (uVar7 = FUN_00554775(this,*(int **)(unaff_EBP + 0x10)), (char)uVar7 == '\0')) {
          piVar2 = *(int **)(unaff_EBP + -0x28);
          do {
            uVar11 = (undefined2)((uint)uVar7 >> 0x10);
            if (*(char *)(this + 1) == '\0') {
              Peek(this);
              uVar11 = extraout_var;
            }
            cVar5 = (**(code **)(*piVar2 + 8))(0x48,CONCAT22(uVar11,*(undefined2 *)((int)this + 6)))
            ;
            if (cVar5 == '\0') break;
            FUN_0055331d(this);
            uVar7 = FUN_00554775(this,*(int **)(unaff_EBP + 0x10));
          } while ((char)uVar7 == '\0');
        }
        goto LAB_0055294d;
      }
      i = *this_val;
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      uVar7 = (**(code **)(i + 0x1c))();
      *(undefined4 *)(unaff_EBP + -0x44) = uVar7;
      FUN_00553771(this_val,unaff_EBP + -0x90);
      pcVar9 = *(char **)(unaff_EBP + -0x8c);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      if (pcVar9 == (char *)0x0) {
        pcVar9 = "";
      }
      if (*pcVar9 < '\x01') {
        while (cVar5 = FUN_00554775(this,*(int **)(unaff_EBP + 0x10)), cVar5 == '\0') {
          if (*(char *)(this + 1) == '\0') {
            Peek(this);
          }
          cVar5 = (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))(4,*(undefined2 *)((int)this + 6))
          ;
          if (cVar5 == '\0') break;
          if (*(char *)(this + 1) == '\0') {
            Peek(this);
          }
          uVar7 = *this;
          uVar3 = this[1];
          FUN_0055331d(this);
          *(undefined4 *)(unaff_EBP + -0x80) = uVar7;
          *(undefined4 *)(unaff_EBP + -0x7c) = uVar3;
          if ((char)uVar3 == '\0') {
            Peek(unaff_EBP + -0x80);
          }
          FUN_00553039(unaff_EBP + -0x68,1,*(undefined4 *)(unaff_EBP + -0x7a));
        }
LAB_005525c0:
        cVar5 = FUN_00554775(this,*(int **)(unaff_EBP + 0x10));
        if (cVar5 == '\0') {
          if (*(char *)(this + 1) == '\0') {
            Peek(this);
          }
          sVar6 = (**(code **)(**(int **)(unaff_EBP + -0x24) + 4))();
          if (*(short *)((int)this + 6) != sVar6) goto LAB_00552661;
          FUN_0055331d(this);
          uVar7 = FUN_00554775(this,*(int **)(unaff_EBP + 0x10));
          if ((char)uVar7 != '\0') goto LAB_00552661;
          i = *(int *)(unaff_EBP + -0x44);
          this_val = *(int **)(unaff_EBP + -0x28);
          do {
            uVar11 = (undefined2)((uint)uVar7 >> 0x10);
            if (*(char *)(this + 1) == '\0') {
              Peek(this);
              uVar11 = extraout_var_01;
            }
            cVar5 = (**(code **)(*this_val + 8))(4,CONCAT22(uVar11,*(undefined2 *)((int)this + 6)));
            if (cVar5 == '\0') break;
            if (*(int *)(unaff_EBP + 0xc) < i) {
              if (*(char *)(this + 1) == '\0') {
                Peek(this);
              }
              FUN_00553039(unaff_EBP + -0x68,1,*(undefined2 *)((int)this + 6));
              *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
            }
            FUN_0055331d(this);
            uVar7 = FUN_00554775(this,*(int **)(unaff_EBP + 0x10));
          } while ((char)uVar7 == '\0');
        }
        else {
LAB_00552661:
          i = *(int *)(unaff_EBP + -0x44);
        }
        if (*(int *)(unaff_EBP + -0x60) == 0) {
          *(undefined1 *)(unaff_EBP + 0x17) = 1;
        }
        else if (*(int *)(unaff_EBP + 0xc) < i) {
          i = i - *(int *)(unaff_EBP + 0xc);
          do {
            uVar7 = FUN_0054ef7c();
            FUN_00553039(unaff_EBP + -0x68,1,uVar7);
            i = i + -1;
          } while (i != 0);
        }
      }
      else {
        uVar7 = (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
        *(undefined4 *)(unaff_EBP + -0x58) = uVar7;
        j = 0;
        *(undefined1 *)(unaff_EBP + -0x20) = *(undefined1 *)(unaff_EBP + 0x17);
        FUN_004028f0(unaff_EBP + -0x20,0);
        FUN_0054e333((void *)(unaff_EBP + -0x20),1,'\0');
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        uVar7 = FUN_00554775(this,*(int **)(unaff_EBP + 0x10));
        if ((char)uVar7 == '\0') {
          do {
            uVar11 = (undefined2)((uint)uVar7 >> 0x10);
            if (*(char *)(this + 1) == '\0') {
              Peek(this);
              uVar11 = extraout_var_00;
            }
            cVar5 = (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))
                              (4,CONCAT22(uVar11,*(undefined2 *)((int)this + 6)));
            if (cVar5 == '\0') {
              if ((*(uint *)(unaff_EBP + -0x18) < j) || (*(int *)(unaff_EBP + -0x1c) == 0)) {
                pcVar9 = "";
              }
              else {
                FUN_00471de0(unaff_EBP + -0x20);
                pcVar9 = (char *)(*(int *)(unaff_EBP + -0x1c) + j);
              }
              if (*pcVar9 == '\0') break;
              if (*(char *)(this + 1) == '\0') {
                Peek(this);
              }
              if (*(short *)((int)this + 6) != *(short *)(unaff_EBP + -0x58)) break;
              FUN_0047eab0(unaff_EBP + -0x20,1,0);
              j = j + 1;
            }
            else {
              if (*(char *)(this + 1) == '\0') {
                Peek(this);
              }
              FUN_00553039(unaff_EBP + -0x68,1,*(undefined2 *)((int)this + 6));
              if ((*(uint *)(unaff_EBP + -0x18) < j) || (*(int *)(unaff_EBP + -0x1c) == 0)) {
                pcVar9 = "";
              }
              else {
                FUN_00471de0(unaff_EBP + -0x20);
                pcVar9 = (char *)(*(int *)(unaff_EBP + -0x1c) + j);
              }
              if (*pcVar9 != '\x7f') {
                if ((*(uint *)(unaff_EBP + -0x18) < j) || (*(int *)(unaff_EBP + -0x1c) == 0)) {
                  pcVar9 = "";
                }
                else {
                  FUN_00471de0(unaff_EBP + -0x20);
                  pcVar9 = (char *)(*(int *)(unaff_EBP + -0x1c) + j);
                }
                *pcVar9 = *pcVar9 + '\x01';
              }
            }
            FUN_0055331d(this);
            uVar7 = FUN_00554775(this,*(int **)(unaff_EBP + 0x10));
          } while ((char)uVar7 == '\0');
          if (j != 0) {
            if ((*(uint *)(unaff_EBP + -0x18) < j) || (*(int *)(unaff_EBP + -0x1c) == 0)) {
              pcVar9 = "";
            }
            else {
              FUN_00471de0(unaff_EBP + -0x20);
              pcVar9 = (char *)(*(int *)(unaff_EBP + -0x1c) + j);
            }
            if (*pcVar9 < '\x01') {
              *(undefined1 *)(unaff_EBP + 0x17) = 1;
            }
            else {
              j = j + 1;
            }
          }
        }
        pcVar9 = *(char **)(unaff_EBP + -0x8c);
        if (pcVar9 == (char *)0x0) {
          pcVar9 = "";
        }
        if (*(char *)(unaff_EBP + 0x17) == '\0') {
          do {
            if ((j == 0) || (*pcVar9 == '\x7f')) break;
            uVar13 = j - 1;
            if (uVar13 == 0) {
LAB_0055255d:
              if (uVar13 == 0) {
                if (*(int *)(unaff_EBP + -0x1c) == 0) {
                  pcVar10 = "";
                }
                else {
                  FUN_00471de0(unaff_EBP + -0x20);
                  pcVar10 = *(char **)(unaff_EBP + -0x1c);
                }
                if (*pcVar9 < *pcVar10) goto LAB_00552585;
              }
              if ('\0' < pcVar9[1]) {
                pcVar9 = pcVar9 + 1;
              }
            }
            else {
              if ((*(uint *)(unaff_EBP + -0x18) < uVar13) || (*(int *)(unaff_EBP + -0x1c) == 0)) {
                pcVar10 = "";
              }
              else {
                FUN_00471de0(unaff_EBP + -0x20);
                pcVar10 = (char *)(*(int *)(unaff_EBP + -0x1c) + uVar13);
              }
              if (*pcVar9 == *pcVar10) goto LAB_0055255d;
LAB_00552585:
              *(undefined1 *)(unaff_EBP + 0x17) = 1;
            }
            j = j - 2;
          } while (*(char *)(unaff_EBP + 0x17) == '\0');
          if (*(char *)(unaff_EBP + 0x17) == '\0') {
            *(undefined1 *)(unaff_EBP + -4) = 0xd;
            FUN_004028f0(unaff_EBP + -0x20,1);
            goto LAB_005525c0;
          }
        }
        FUN_004028f0(unaff_EBP + -0x20,1);
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_004028f0(unaff_EBP + -0x90,1);
      this_val = *(int **)(unaff_EBP + -0x24);
    }
LAB_0055294d:
    *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 1;
  } while (*(char *)(unaff_EBP + 0x17) == '\0');
  if (*(char *)(unaff_EBP + 0x17) == '\0') {
    if (*(int *)(unaff_EBP + -0x34) != 0) {
      FUN_0055367f(unaff_EBP + -0x3c);
      psVar12 = *(short **)(unaff_EBP + -0x38);
      while (cVar5 = FUN_00554775(this,*(int **)(unaff_EBP + 0x10)), cVar5 == '\0') {
        psVar12 = psVar12 + 1;
        FUN_0055367f(unaff_EBP + -0x3c);
        if (psVar12 ==
            (short *)(-(uint)(*(int *)(unaff_EBP + -0x38) != 0) &
                     *(int *)(unaff_EBP + -0x38) + *(int *)(unaff_EBP + -0x34) * 2)) break;
        if (*(char *)(this + 1) == '\0') {
          Peek(this);
        }
        if (*(short *)((int)this + 6) != *psVar12) break;
        FUN_0055331d(this);
      }
      FUN_0055367f(unaff_EBP + -0x3c);
      if (psVar12 !=
          (short *)(-(uint)(*(int *)(unaff_EBP + -0x38) != 0) &
                   *(int *)(unaff_EBP + -0x38) + *(int *)(unaff_EBP + -0x34) * 2))
      goto LAB_005529df;
    }
    if (*(char *)(unaff_EBP + -0xd) != '\0') {
      uVar7 = FUN_0054ef7c();
      FUN_00553539(unaff_EBP + -0x68,0,1,uVar7);
    }
  }
  else {
LAB_005529df:
    FUN_00553613(unaff_EBP + -0x68,0,0xffffffff);
  }
  this_val_3 = *(undefined1 **)(unaff_EBP + 8);
  *this_val_3 = *(undefined1 *)(unaff_EBP + -0x68);
  FUN_00553734(this_val_3,0);
  FUN_005533c1(this_val_3,unaff_EBP + -0x68,0,0xffffffff);
  *(undefined4 *)(unaff_EBP + -0x74) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00553734(unaff_EBP + -0x68,1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00553734(unaff_EBP + -0x3c,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return this_val_3;
}


/* ==== 00552a63 FUN_00552a63 ==== */

undefined4 * FUN_00552a63(void)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  undefined4 this_val_2;
  int *this_val;
  uint i;
  char *pcVar4;
  undefined4 *puVar5;
  int j;
  uint uVar6;
  undefined4 uVar7;
  int unaff_EBP;
  int k;
  undefined2 *puVar8;
  char *pcVar9;
  
  FUN_0055b39c();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(char *)(unaff_EBP + 0x14) == '\0') {
    this_val_2 = FUN_004d4370(*(undefined4 *)(unaff_EBP + 0x18),unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    this_val = (int *)FUN_0055409f(this_val_2,0,1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(int **)(unaff_EBP + -0x10) = this_val;
  }
  else {
    this_val_2 = FUN_004d4370(*(undefined4 *)(unaff_EBP + 0x18),unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    this_val = (int *)FUN_00554162(this_val_2,0,1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(int **)(unaff_EBP + -0x10) = this_val;
  }
  std::locale::~locale((locale *)(unaff_EBP + -0x30));
  i = (**(code **)(*this_val + 0x1c))();
  *(uint *)(unaff_EBP + 0x14) = i;
  FUN_00553771(this_val,unaff_EBP + -0x9c);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (i < *(uint *)(unaff_EBP + 0x2c)) {
    pcVar4 = *(char **)(unaff_EBP + -0x98);
    pcVar9 = "";
    if (pcVar4 == (char *)0x0) {
      pcVar4 = "";
    }
    if ('\0' < *pcVar4) {
      this_val_2 = (**(code **)(*this_val + 8))();
      if (*(int *)(unaff_EBP + -0x98) != 0) {
        pcVar9 = *(char **)(unaff_EBP + -0x98);
      }
      i = *(int *)(unaff_EBP + 0x2c) - *(int *)(unaff_EBP + 0x14);
      while (((cVar1 = *pcVar9, cVar1 != '\x7f' && ('\0' < cVar1)) && ((uint)(int)cVar1 < i))) {
        i = i - (int)cVar1;
        FUN_00553539(unaff_EBP + 0x24,i,1,this_val_2);
        if ('\0' < pcVar9[1]) {
          pcVar9 = pcVar9 + 1;
        }
      }
    }
  }
  *(undefined1 *)(unaff_EBP + -0x40) = *(undefined1 *)(unaff_EBP + 0x17);
  FUN_00553734(unaff_EBP + -0x40,0);
  this_val = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(char *)(unaff_EBP + 0x20) == '\0') {
    puVar5 = (undefined4 *)(**(code **)(*this_val + 0x20))(unaff_EBP + 0x20);
    *(undefined4 *)(unaff_EBP + -0x2c) = *puVar5;
    this_val_2 = FUN_00556fac(this_val,unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_005533c1(unaff_EBP + -0x40,this_val_2,0,0xffffffff);
    *(undefined1 *)(unaff_EBP + -4) = 4;
  }
  else {
    puVar5 = (undefined4 *)(**(code **)(*this_val + 0x24))(unaff_EBP + 0x20);
    *(undefined4 *)(unaff_EBP + -0x2c) = *puVar5;
    this_val_2 = FUN_00553788(this_val,unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_005533c1(unaff_EBP + -0x40,this_val_2,0,0xffffffff);
    *(undefined1 *)(unaff_EBP + -4) = 4;
  }
  FUN_00553734(unaff_EBP + -0x20,1);
  *(undefined1 *)(unaff_EBP + -0x8c) = *(undefined1 *)(unaff_EBP + 0x17);
  FUN_00553734(unaff_EBP + -0x8c,0);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if ((*(uint *)(*(int *)(unaff_EBP + 0x18) + 0xc) & 8) != 0) {
    this_val_2 = FUN_0055210f(this_val,unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_005533c1(unaff_EBP + -0x8c,this_val_2,0,0xffffffff);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00553734(unaff_EBP + -0x20,1);
  }
  bVar3 = false;
  uVar6 = 0;
  i = 0;
  do {
    cVar1 = *(char *)(unaff_EBP + -0x2c + i);
    if (cVar1 == ' ') {
      bVar3 = true;
    }
    else if (cVar1 == '$') {
      uVar6 = uVar6 + *(int *)(unaff_EBP + -0x84);
    }
    else if (cVar1 == '+') {
      uVar6 = uVar6 + *(int *)(unaff_EBP + -0x38);
    }
    else if (cVar1 == 'v') {
      uVar2 = *(uint *)(unaff_EBP + 0x14);
      if (uVar2 < *(uint *)(unaff_EBP + 0x2c)) {
        j = 0;
      }
      else {
        j = (uVar2 - *(int *)(unaff_EBP + 0x2c)) + 1;
      }
      uVar6 = uVar6 + (uint)(uVar2 != 0) + *(int *)(unaff_EBP + 0x2c) + j;
    }
    i = i + 1;
  } while (i < 4);
  i = *(uint *)(*(int *)(unaff_EBP + 0x18) + 0x14);
  if (((int)i < 1) || (i <= uVar6)) {
    j = 0;
  }
  else {
    j = i - uVar6;
  }
  i = *(uint *)(*(int *)(unaff_EBP + 0x18) + 0xc);
  *(int *)(unaff_EBP + 0x20) = j;
  i = i & 0x1c0;
  *(uint *)(unaff_EBP + -0x7c) = i;
  if ((i != 0x40) && ((i != 0x100 || (!bVar3)))) {
    *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + 0xc);
    *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + 0x10);
    for (; j != 0; j = j + -1) {
      FUN_00551357(unaff_EBP + -0x28,*(undefined4 *)(unaff_EBP + 0x1c));
    }
    *(undefined4 *)(unaff_EBP + 0x20) = 0;
    *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x28);
    *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x24);
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  uVar7 = *(undefined4 *)(unaff_EBP + 0x10);
  this_val_2 = *(undefined4 *)(unaff_EBP + 0xc);
  do {
    cVar1 = *(char *)(unaff_EBP + -0x2c + *(int *)(unaff_EBP + -0x24));
    if (cVar1 == ' ') {
      if (*(int *)(unaff_EBP + -0x7c) == 0x100) {
        j = *(int *)(unaff_EBP + 0x20);
        *(undefined4 *)(unaff_EBP + -0x18) = this_val_2;
        *(undefined4 *)(unaff_EBP + -0x14) = uVar7;
        for (; j != 0; j = j + -1) {
          FUN_00551357(unaff_EBP + -0x18,*(undefined4 *)(unaff_EBP + 0x1c));
        }
        this_val_2 = *(undefined4 *)(unaff_EBP + -0x18);
        uVar7 = *(undefined4 *)(unaff_EBP + -0x14);
        *(undefined4 *)(unaff_EBP + 0x20) = 0;
        *(undefined4 *)(unaff_EBP + 0xc) = this_val_2;
        *(undefined4 *)(unaff_EBP + 0x10) = uVar7;
      }
      goto LAB_00552f60;
    }
    if (cVar1 == '$') {
      j = *(int *)(unaff_EBP + -0x84);
      FUN_0055367f(unaff_EBP + -0x8c);
      puVar8 = *(undefined2 **)(unaff_EBP + -0x88);
      *(undefined4 *)(unaff_EBP + -0x50) = *(undefined4 *)(unaff_EBP + 0xc);
      *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + 0x10);
      for (; j != 0; j = j + -1) {
        FUN_00551357(unaff_EBP + -0x50,*puVar8);
        puVar8 = puVar8 + 1;
      }
      this_val_2 = *(undefined4 *)(unaff_EBP + -0x50);
      uVar7 = *(undefined4 *)(unaff_EBP + -0x4c);
      *(undefined4 *)(unaff_EBP + 0xc) = this_val_2;
LAB_00552e0a:
      *(undefined4 *)(unaff_EBP + 0x10) = uVar7;
    }
    else if (cVar1 == '+') {
      if (*(int *)(unaff_EBP + -0x38) != 0) {
        FUN_0055367f(unaff_EBP + -0x40);
        *(undefined4 *)(unaff_EBP + -0x58) = *(undefined4 *)(unaff_EBP + 0xc);
        *(undefined4 *)(unaff_EBP + -0x54) = *(undefined4 *)(unaff_EBP + 0x10);
        FUN_00551357(unaff_EBP + -0x58,
                     CONCAT22((short)((uint)*(undefined2 **)(unaff_EBP + -0x3c) >> 0x10),
                              **(undefined2 **)(unaff_EBP + -0x3c)));
        this_val_2 = *(undefined4 *)(unaff_EBP + -0x58);
        uVar7 = *(undefined4 *)(unaff_EBP + -0x54);
        *(undefined4 *)(unaff_EBP + 0xc) = this_val_2;
        goto LAB_00552e0a;
      }
    }
    else if (cVar1 == 'v') {
      if (*(int *)(unaff_EBP + 0x14) == 0) {
        j = *(int *)(unaff_EBP + 0x2c);
        FUN_0055367f(unaff_EBP + 0x24);
        puVar8 = *(undefined2 **)(unaff_EBP + 0x28);
        *(undefined4 *)(unaff_EBP + -0x78) = *(undefined4 *)(unaff_EBP + 0xc);
        *(undefined4 *)(unaff_EBP + -0x74) = *(undefined4 *)(unaff_EBP + 0x10);
        for (; j != 0; j = j + -1) {
          FUN_00551357(unaff_EBP + -0x78,*puVar8);
          puVar8 = puVar8 + 1;
        }
        this_val_2 = *(undefined4 *)(unaff_EBP + -0x78);
        uVar7 = *(undefined4 *)(unaff_EBP + -0x74);
        *(undefined4 *)(unaff_EBP + 0xc) = this_val_2;
      }
      else {
        i = *(uint *)(unaff_EBP + 0x2c);
        if (*(uint *)(unaff_EBP + 0x14) < i) {
          FUN_0055367f(unaff_EBP + 0x24);
          j = *(int *)(unaff_EBP + 0x14);
          puVar8 = *(undefined2 **)(unaff_EBP + 0x28);
          *(undefined4 *)(unaff_EBP + -0x68) = *(undefined4 *)(unaff_EBP + 0xc);
          *(undefined4 *)(unaff_EBP + -100) = *(undefined4 *)(unaff_EBP + 0x10);
          for (k = i - j; k != 0; k = k + -1) {
            FUN_00551357(unaff_EBP + -0x68,*puVar8);
            puVar8 = puVar8 + 1;
          }
          *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x68);
          *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -100);
          this_val_2 = (**(code **)(**(int **)(unaff_EBP + -0x10) + 4))();
          FUN_00551357(unaff_EBP + 0xc,this_val_2);
          FUN_0055367f(unaff_EBP + 0x24);
          puVar8 = (undefined2 *)
                   ((-(uint)(*(int *)(unaff_EBP + 0x28) != 0) &
                    *(int *)(unaff_EBP + 0x28) + *(int *)(unaff_EBP + 0x2c) * 2) + j * -2);
          *(undefined4 *)(unaff_EBP + -0x70) = *(undefined4 *)(unaff_EBP + 0xc);
          *(undefined4 *)(unaff_EBP + -0x6c) = *(undefined4 *)(unaff_EBP + 0x10);
          for (; j != 0; j = j + -1) {
            FUN_00551357(unaff_EBP + -0x70,*puVar8);
            puVar8 = puVar8 + 1;
          }
          this_val_2 = *(undefined4 *)(unaff_EBP + -0x70);
          uVar7 = *(undefined4 *)(unaff_EBP + -0x6c);
          *(undefined4 *)(unaff_EBP + 0xc) = this_val_2;
        }
        else {
          this_val_2 = FUN_0054ef7c(this_val_2,0x30);
          FUN_00551357(unaff_EBP + 0xc,this_val_2);
          this_val_2 = (**(code **)(**(int **)(unaff_EBP + -0x10) + 4))();
          FUN_00551357(unaff_EBP + 0xc,this_val_2);
          j = *(int *)(unaff_EBP + 0x14);
          k = *(int *)(unaff_EBP + 0x2c);
          this_val_2 = FUN_0054ef7c();
          *(undefined4 *)(unaff_EBP + -0x60) = *(undefined4 *)(unaff_EBP + 0xc);
          *(undefined4 *)(unaff_EBP + -0x5c) = *(undefined4 *)(unaff_EBP + 0x10);
          for (j = j - k; j != 0; j = j + -1) {
            FUN_00551357(unaff_EBP + -0x60,this_val_2);
          }
          j = *(int *)(unaff_EBP + 0x2c);
          *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x60);
          *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x5c);
          FUN_0055367f(unaff_EBP + 0x24);
          puVar8 = *(undefined2 **)(unaff_EBP + 0x28);
          *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + 0xc);
          *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + 0x10);
          for (; j != 0; j = j + -1) {
            FUN_00551357(unaff_EBP + -0x48,*puVar8);
            puVar8 = puVar8 + 1;
          }
          this_val_2 = *(undefined4 *)(unaff_EBP + -0x48);
          uVar7 = *(undefined4 *)(unaff_EBP + -0x44);
          *(undefined4 *)(unaff_EBP + 0xc) = this_val_2;
        }
      }
      goto LAB_00552e0a;
    }
LAB_00552f60:
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
    if (3 < *(uint *)(unaff_EBP + -0x24)) {
      i = *(uint *)(unaff_EBP + -0x38);
      if (1 < i) {
        FUN_0055367f(unaff_EBP + -0x40);
        puVar8 = *(undefined2 **)(unaff_EBP + -0x3c);
        *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + 0xc);
        *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + 0x10);
        while (i = i - 1, i != 0) {
          puVar8 = puVar8 + 1;
          FUN_00551357(unaff_EBP + -0x18,*puVar8);
        }
        this_val_2 = *(undefined4 *)(unaff_EBP + -0x18);
        uVar7 = *(undefined4 *)(unaff_EBP + -0x14);
        *(undefined4 *)(unaff_EBP + 0xc) = this_val_2;
        *(undefined4 *)(unaff_EBP + 0x10) = uVar7;
      }
      j = *(int *)(unaff_EBP + 0x20);
      *(undefined4 *)(unaff_EBP + -0x18) = this_val_2;
      *(undefined4 *)(unaff_EBP + -0x14) = uVar7;
      *(undefined4 *)(*(int *)(unaff_EBP + 0x18) + 0x14) = 0;
      for (; j != 0; j = j + -1) {
        FUN_00551357(unaff_EBP + -0x18,*(undefined4 *)(unaff_EBP + 0x1c));
      }
      puVar5 = *(undefined4 **)(unaff_EBP + 8);
      *puVar5 = *(undefined4 *)(unaff_EBP + -0x18);
      puVar5[1] = *(undefined4 *)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00553734(unaff_EBP + -0x8c,1);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00553734(unaff_EBP + -0x40,1);
      FUN_004028f0(unaff_EBP + -0x9c,1);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00553734(unaff_EBP + 0x24,1);
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return puVar5;
    }
  } while( true );
}


/* ==== 00553031 FUN_00553031 ==== */

void FUN_00553031(void)

{
  undefined4 in_ECX;
  
  FUN_00553734(in_ECX,1);
  return;
}


/* ==== 00553039 FUN_00553039 ==== */

void * __thiscall FUN_00553039(void *this,uint param_2,undefined2 param_3)

{
  char cVar1;
  uint i;
  int iVar2;
  undefined4 *puVar3;
  
  if (-*(int *)((int)this + 8) - 1U <= param_2) {
    FUN_0054b1b4();
  }
  if (param_2 != 0) {
    iVar2 = param_2 + *(int *)((int)this + 8);
    cVar1 = FUN_005536ab(this,iVar2,0);
    if (cVar1 != '\0') {
      puVar3 = (undefined4 *)(*(int *)((int)this + 4) + *(int *)((int)this + 8) * 2);
      for (i = param_2 >> 1; i != 0; i = i - 1) {
        *puVar3 = CONCAT22(param_3,param_3);
        puVar3 = puVar3 + 1;
      }
      for (i = (uint)((param_2 & 1) != 0); i != 0; i = i - 1) {
        *(undefined2 *)puVar3 = param_3;
        puVar3 = (undefined4 *)((int)puVar3 + 2);
      }
      *(int *)((int)this + 8) = iVar2;
      *(undefined2 *)(*(int *)((int)this + 4) + iVar2 * 2) = 0;
    }
  }
  return this;
}


/* ==== 005530a2 FUN_005530a2 ==== */

void __thiscall FUN_005530a2(void *this,uint param_2)

{
  if (*(uint *)((int)this + 8) < param_2) {
    FUN_00553039(this,param_2 - *(uint *)((int)this + 8),0);
  }
  else {
    FUN_00553613(this,param_2,0xffffffff);
  }
  return;
}


/* ==== 005530c8 FUN_005530c8 ==== */

undefined4 * FUN_005530c8(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 *)(extraout_ECX + 10) = *(undefined1 *)(unaff_EBP + 0x10);
  *extraout_ECX = &PTR_FUN_00579344;
  FUN_0055379f();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


/* ==== 00553108 FUN_00553108 ==== */

void __thiscall FUN_00553108(void *this,undefined4 this_val)

{
  char *str;
  undefined4 uVar1;
  
  str = (char *)FUN_0055313b(this_val,0);
  uVar1 = FUN_0055466a(str);
  *(undefined4 *)((int)this + 8) = uVar1;
  str = (char *)FUN_00553181(this_val,0);
  uVar1 = FUN_0055466a(str);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return;
}


/* ==== 0055313b FUN_0055313b ==== */

char * __thiscall FUN_0055313b(void *this)

{
  char *str;
  size_t _strlen_result;
  
  str = (char *)FUN_0055c3ab();
  if (str != (char *)0x0) {
    _strlen_result = _strlen(str);
    FUN_00402940(this,str,_strlen_result);
    FUN_00559d4e(str);
  }
  if (*(int *)((int)this + 8) == 0) {
    str = ":Sun:Sunday:Mon:Monday:Tue:Tuesday:Wed:Wednesday:Thu:Thursday:Fri:Friday:Sat:Saturday";
  }
  else {
    str = *(char **)((int)this + 4);
    if (str == (char *)0x0) {
      str = "";
    }
  }
  return str;
}


/* ==== 00553181 FUN_00553181 ==== */

char * __thiscall FUN_00553181(void *this)

{
  char *str;
  size_t _strlen_result;
  
  str = (char *)FUN_0055c43a();
  if (str != (char *)0x0) {
    _strlen_result = _strlen(str);
    FUN_00402940((int)this + 0x10,str,_strlen_result);
    FUN_00559d4e(str);
  }
  if (*(int *)((int)this + 0x18) == 0) {
    str = 
    ":Jan:January:Feb:February:Mar:March:Apr:April:May:May:Jun:June:Jul:July:Aug:August:Sep:September:Oct:October:Nov:November:Dec:December"
    ;
  }
  else {
    str = *(char **)((int)this + 0x14);
    if (str == (char *)0x0) {
      str = "";
    }
  }
  return str;
}


/* ==== 005531c8 FUN_005531c8 ==== */

byte FUN_005531c8(char *this_val_2,int *this_val,int param_3,int param_4,int *param_5)

{
  bool bVar1;
  char *this;
  char cVar2;
  short sVar3;
  int iVar4;
  char *pcVar5;
  byte bVar6;
  char local_24 [32];
  
  this = this_val_2;
  pcVar5 = local_24;
  cVar2 = FUN_00554775(this_val_2,this_val);
  if (cVar2 == '\0') {
    if (this[4] == '\0') {
      Peek(this);
    }
    sVar3 = FUN_0054ef7c();
    if (*(short *)(this + 6) == sVar3) {
      local_24[0] = '+';
    }
    else {
      if (this[4] == '\0') {
        Peek(this);
      }
      sVar3 = FUN_0054ef7c();
      if (*(short *)(this + 6) != sVar3) goto LAB_0055322e;
      local_24[0] = '-';
    }
    pcVar5 = local_24 + 1;
    FUN_0055331d(this);
  }
LAB_0055322e:
  bVar1 = false;
  cVar2 = FUN_00554775(this,this_val);
  if (cVar2 == '\0') {
    do {
      if (this[4] == '\0') {
        Peek(this);
      }
      sVar3 = FUN_0054ef7c();
      if (*(short *)(this + 6) != sVar3) break;
      bVar1 = true;
      FUN_0055331d(this);
      cVar2 = FUN_00554775(this,this_val);
    } while (cVar2 == '\0');
    if (bVar1) {
      *pcVar5 = '0';
      pcVar5 = pcVar5 + 1;
    }
  }
  while (cVar2 = FUN_00554775(this,this_val), cVar2 == '\0') {
    if (this[4] == '\0') {
      Peek(this);
    }
    cVar2 = FUN_0054eb1f(*(undefined2 *)(this + 6));
    *pcVar5 = cVar2;
    if ((cVar2 < '0') || ('9' < cVar2)) break;
    if (pcVar5 < local_24 + 0x1f) {
      pcVar5 = pcVar5 + 1;
    }
    bVar1 = true;
    FUN_0055331d(this);
  }
  if (!bVar1) {
    pcVar5 = local_24;
  }
  *pcVar5 = '\0';
  DAT_0074dc60 = 0;
  iVar4 = FUN_0055ae4d(local_24,&this_val_2,10);
  cVar2 = FUN_00554775(this,this_val);
  bVar6 = cVar2 != '\0';
  if ((((this_val_2 == local_24) || (DAT_0074dc60 != 0)) || (iVar4 < param_3)) || (param_4 < iVar4))
  {
    bVar6 = bVar6 | 2;
  }
  else {
    *param_5 = iVar4;
  }
  return bVar6;
}


/* ==== 0055331d FUN_0055331d ==== */

void __thiscall FUN_0055331d(void *this)

{
  short sVar1;
  
  if (*(int *)this != 0) {
    sVar1 = FUN_00553340();
    if (sVar1 != -1) {
      *(undefined1 *)((int)this + 4) = 0;
      return;
    }
  }
  *(undefined4 *)this = 0;
  *(undefined1 *)((int)this + 4) = 1;
  return;
}


/* ==== 00553340 FUN_00553340 ==== */

undefined2 __thiscall FUN_00553340(void *this)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 *gninc;
  
  uVar1 = **(uint **)((int)this + 0x1c);
  if ((uVar1 != 0) && (uVar1 < uVar1 + **(int **)((int)this + 0x2c) * 2)) {
    gninc = (undefined2 *)Gninc();
    return *gninc;
  }
  uVar2 = (**(code **)(*(int *)this + 0x14))();
  return uVar2;
}


/* ==== 00553364 Peek ==== */

/* Library Function - Multiple Matches With Same Base Name
    private: unsigned short __thiscall std::istreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> >::_Peek(void)
    private: wchar_t __thiscall std::istreambuf_iterator<wchar_t,struct std::char_traits<wchar_t>
   >::_Peek(void)
   
   Library: Visual Studio 2003 Release */

undefined2 __thiscall Peek(void *this)

{
  short sVar1;
  
  if (*(int *)this != 0) {
    sVar1 = FUN_0055338b();
    if (sVar1 != -1) {
      *(short *)((int)this + 6) = sVar1;
      goto LAB_00553381;
    }
  }
  *(undefined4 *)this = 0;
LAB_00553381:
  *(undefined1 *)((int)this + 4) = 1;
  return *(undefined2 *)((int)this + 6);
}


/* ==== 0055338b FUN_0055338b ==== */

undefined4 __thiscall FUN_0055338b(void *this)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined2 *)**(undefined4 **)((int)this + 0x1c);
  if ((puVar1 != (undefined2 *)0x0) && (puVar1 < puVar1 + **(int **)((int)this + 0x2c))) {
    return CONCAT22((short)((uint)puVar1 >> 0x10),*puVar1);
  }
  uVar2 = (**(code **)(*(int *)this + 0x10))();
  return uVar2;
}


/* ==== 005533aa FUN_005533aa ==== */

undefined4 __thiscall FUN_005533aa(void *this,undefined4 param_2)

{
  (**(code **)(*(int *)this + 0xc))(param_2,0);
  return param_2;
}


/* ==== 005533c1 FUN_005533c1 ==== */

void * __thiscall FUN_005533c1(void *this,void *param_2,uint param_3,uint param_4)

{
  char cVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint i;
  uint uVar4;
  
  if (*(uint *)((int)param_2 + 8) < param_3) {
    FUN_0054b29c();
  }
  uVar4 = *(uint *)((int)param_2 + 8) - param_3;
  if (param_4 < uVar4) {
    uVar4 = param_4;
  }
  if (this == param_2) {
    FUN_00553613(this,uVar4 + param_3,0xffffffff);
    FUN_00553613(this,0,param_3);
  }
  else {
    if ((uVar4 != 0) && (uVar4 == *(uint *)((int)param_2 + 8))) {
      puVar2 = *(undefined2 **)((int)param_2 + 4);
      if (puVar2 == (undefined2 *)0x0) {
        puVar2 = &DAT_00579320;
      }
      if (*(byte *)((int)puVar2 + -1) < 0xfe) {
        FUN_00553734(this,1);
        puVar2 = *(undefined2 **)((int)param_2 + 4);
        if (puVar2 == (undefined2 *)0x0) {
          puVar2 = &DAT_00579320;
        }
        *(undefined2 **)((int)this + 4) = puVar2;
        *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)param_2 + 8);
        *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)param_2 + 0xc);
        *(char *)((int)puVar2 + -1) = *(char *)((int)puVar2 + -1) + '\x01';
        return this;
      }
    }
    cVar1 = FUN_005536ab(this,uVar4,1);
    if (cVar1 != '\0') {
      puVar2 = &DAT_00579320;
      if (*(undefined2 **)((int)param_2 + 4) != (undefined2 *)0x0) {
        puVar2 = *(undefined2 **)((int)param_2 + 4);
      }
      puVar2 = puVar2 + param_3;
      puVar3 = *(undefined2 **)((int)this + 4);
      for (i = uVar4; i != 0; i = i - 1) {
        *puVar3 = *puVar2;
        puVar3 = puVar3 + 1;
        puVar2 = puVar2 + 1;
      }
      *(uint *)((int)this + 8) = uVar4;
      *(undefined2 *)(*(int *)((int)this + 4) + uVar4 * 2) = 0;
    }
  }
  return this;
}


/* ==== 0055349f FUN_0055349f ==== */

void * __thiscall FUN_0055349f(void *this,undefined2 *param_2,int param_3)

{
  char cVar1;
  undefined2 *puVar2;
  int i;
  
  cVar1 = FUN_005536ab(this,param_3,1);
  if (cVar1 != '\0') {
    puVar2 = *(undefined2 **)((int)this + 4);
    for (i = param_3; i != 0; i = i + -1) {
      *puVar2 = *param_2;
      puVar2 = puVar2 + 1;
      param_2 = param_2 + 1;
    }
    *(int *)((int)this + 8) = param_3;
    *(undefined2 *)(*(int *)((int)this + 4) + param_3 * 2) = 0;
  }
  return this;
}


/* ==== 005534e1 FUN_005534e1 ==== */

void * __thiscall FUN_005534e1(void *this,uint param_2,undefined2 param_3)

{
  char cVar1;
  uint i;
  undefined4 *puVar2;
  
  if (param_2 == 0xffffffff) {
    FUN_0054b1b4();
  }
  cVar1 = FUN_005536ab(this,param_2,1);
  if (cVar1 != '\0') {
    if (param_2 != 0) {
      puVar2 = *(undefined4 **)((int)this + 4);
      for (i = param_2 >> 1; i != 0; i = i - 1) {
        *puVar2 = CONCAT22(param_3,param_3);
        puVar2 = puVar2 + 1;
      }
      for (i = (uint)((param_2 & 1) != 0); i != 0; i = i - 1) {
        *(undefined2 *)puVar2 = param_3;
        puVar2 = (undefined4 *)((int)puVar2 + 2);
      }
    }
    *(uint *)((int)this + 8) = param_2;
    *(undefined2 *)(*(int *)((int)this + 4) + param_2 * 2) = 0;
  }
  return this;
}


/* ==== 00553539 FUN_00553539 ==== */

void * __thiscall FUN_00553539(void *this,uint param_2,uint param_3,undefined2 param_4)

{
  char cVar1;
  uint i;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(uint *)((int)this + 8) < param_2) {
    FUN_0054b29c();
  }
  if (-*(int *)((int)this + 8) - 1U <= param_3) {
    FUN_0054b1b4();
  }
  if (param_3 != 0) {
    iVar2 = param_3 + *(int *)((int)this + 8);
    cVar1 = FUN_005536ab(this,iVar2,0);
    if (cVar1 != '\0') {
      FUN_005535ce(*(int *)((int)this + 4) + (param_2 + param_3) * 2,
                   param_2 * 2 + *(int *)((int)this + 4),*(int *)((int)this + 8) - param_2);
      puVar3 = (undefined4 *)(*(int *)((int)this + 4) + param_2 * 2);
      for (i = param_3 >> 1; i != 0; i = i - 1) {
        *puVar3 = CONCAT22(param_4,param_4);
        puVar3 = puVar3 + 1;
      }
      for (i = (uint)((param_3 & 1) != 0); i != 0; i = i - 1) {
        *(undefined2 *)puVar3 = param_4;
        puVar3 = (undefined4 *)((int)puVar3 + 2);
      }
      *(int *)((int)this + 8) = iVar2;
      *(undefined2 *)(*(int *)((int)this + 4) + iVar2 * 2) = 0;
    }
  }
  return this;
}


/* ==== 005535ce FUN_005535ce ==== */

void FUN_005535ce(undefined2 *param_1,undefined2 *param_2,int param_3)

{
  undefined2 *puVar1;
  
  if ((param_2 < param_1) && (puVar1 = param_2 + param_3, param_1 < puVar1)) {
    param_1 = param_1 + param_3;
    for (; param_3 != 0; param_3 = param_3 + -1) {
      puVar1 = puVar1 + -1;
      param_1 = param_1 + -1;
      *param_1 = *puVar1;
    }
  }
  else {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      *param_1 = *param_2;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
  }
  return;
}


/* ==== 00553613 FUN_00553613 ==== */

void * __thiscall FUN_00553613(void *this,uint param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  if (*(uint *)((int)this + 8) < param_2) {
    FUN_0054b29c();
  }
  FUN_005539ee(this);
  uVar2 = *(int *)((int)this + 8) - param_2;
  if (uVar2 < param_3) {
    param_3 = uVar2;
  }
  if (param_3 != 0) {
    FUN_005535ce(*(int *)((int)this + 4) + param_2 * 2,
                 *(int *)((int)this + 4) + (param_2 + param_3) * 2,uVar2 - param_3);
    iVar3 = *(int *)((int)this + 8) - param_3;
    cVar1 = FUN_005536ab(this,iVar3,0);
    if (cVar1 != '\0') {
      *(int *)((int)this + 8) = iVar3;
      *(undefined2 *)(*(int *)((int)this + 4) + iVar3 * 2) = 0;
    }
  }
  return this;
}


/* ==== 0055367f FUN_0055367f ==== */

void __thiscall FUN_0055367f(void *this)

{
  char cVar1;
  
  if (((*(int *)((int)this + 4) != 0) &&
      (cVar1 = *(char *)(*(int *)((int)this + 4) + -1), cVar1 != '\0')) && (cVar1 != -1)) {
    FUN_005536ab(this,*(undefined4 *)((int)this + 8),0);
  }
  if (*(int *)((int)this + 4) != 0) {
    *(undefined1 *)(*(int *)((int)this + 4) + -1) = 0xff;
  }
  return;
}


/* ==== 005536ab FUN_005536ab ==== */

undefined4 __thiscall FUN_005536ab(void *this,uint param_2,char param_3)

{
  char cVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  
  if (0x7ffffffd < param_2) {
    FUN_0054b1b4();
  }
  puVar2 = *(undefined2 **)((int)this + 4);
  if (((puVar2 == (undefined2 *)0x0) || (cVar1 = *(char *)((int)puVar2 + -1), cVar1 == '\0')) ||
     (cVar1 == -1)) {
    if (param_2 != 0) {
      if (param_3 == '\0') {
        if (param_2 <= *(uint *)((int)this + 0xc)) {
          return 1;
        }
      }
      else {
        if ((*(uint *)((int)this + 0xc) < 0x20) && (param_2 <= *(uint *)((int)this + 0xc))) {
          return 1;
        }
        FUN_00553734(this,1);
      }
      goto LAB_00553725;
    }
    if (param_3 == '\0') {
      if (puVar2 == (undefined2 *)0x0) {
        return 0;
      }
      *(undefined4 *)((int)this + 8) = 0;
      *puVar2 = 0;
      return 0;
    }
    uVar3 = 1;
  }
  else {
    if (param_2 != 0) {
LAB_00553725:
      FUN_0055391c(param_2);
      return 1;
    }
    uVar3 = 0;
    *(char *)((int)puVar2 + -1) = cVar1 + -1;
  }
  FUN_00553734(this,uVar3);
  return 0;
}


/* ==== 00553734 FUN_00553734 ==== */

void __thiscall FUN_00553734(void *this,char param_2)

{
  char cVar1;
  int iVar2;
  
  if ((param_2 != '\0') && (iVar2 = *(int *)((int)this + 4), iVar2 != 0)) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(iVar2 + -2);
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return;
}


/* ==== 00553771 FUN_00553771 ==== */

undefined4 __thiscall FUN_00553771(void *this,undefined4 param_2)

{
  (**(code **)(*(int *)this + 0xc))(param_2,0);
  return param_2;
}


/* ==== 00553788 FUN_00553788 ==== */

undefined4 __thiscall FUN_00553788(void *this,undefined4 param_2)

{
  (**(code **)(*(int *)this + 0x18))(param_2,0);
  return param_2;
}


/* ==== 0055379f FUN_0055379f ==== */

void __thiscall FUN_0055379f(void *this)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *str;
  int3 iVar6;
  int iVar5;
  
  iVar3 = FUN_0055a6b0();
  uVar2 = FUN_0054ef7c();
  *(undefined2 *)((int)this + 0xc) = uVar2;
  uVar2 = FUN_0054ef7c();
  *(undefined2 *)((int)this + 0xe) = uVar2;
  uVar4 = FUN_0054e986(*(char **)(iVar3 + 0x1c));
  *(undefined4 *)((int)this + 8) = uVar4;
  if (*(char *)((int)this + 0x28) == '\0') {
    str = *(char **)(iVar3 + 0x10);
  }
  else {
    str = *(char **)(iVar3 + 0xc);
  }
  uVar4 = FUN_0055466a(str);
  *(undefined4 *)((int)this + 0x10) = uVar4;
  if ((*(char *)(iVar3 + 0x2e) < '\0') || ('\x04' < *(char *)(iVar3 + 0x2e))) {
    str = &DAT_00712694;
  }
  else {
    str = *(char **)(iVar3 + 0x20);
  }
  uVar4 = FUN_0055466a(str);
  *(undefined4 *)((int)this + 0x14) = uVar4;
  if ((*(char *)(iVar3 + 0x2f) < '\0') || ('\x04' < *(char *)(iVar3 + 0x2f))) {
    str = s___005b755c;
  }
  else {
    str = *(char **)(iVar3 + 0x24);
  }
  uVar4 = FUN_0055466a(str);
  *(undefined4 *)((int)this + 0x18) = uVar4;
  if (*(char *)((int)this + 0x28) == '\0') {
    cVar1 = *(char *)(iVar3 + 0x29);
  }
  else {
    cVar1 = *(char *)(iVar3 + 0x28);
  }
  iVar5 = (int)cVar1;
  *(int *)((int)this + 0x1c) = iVar5;
  if ((iVar5 < 0) || (0x7e < iVar5)) {
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  iVar6 = (int3)(cVar1 >> 7);
  FUN_00553a1e(this,(int)this + 0x20,CONCAT31(iVar6,*(undefined1 *)(iVar3 + 0x2b)),
               CONCAT31(iVar6,*(undefined1 *)(iVar3 + 0x2a)),
               CONCAT31(iVar6,*(undefined1 *)(iVar3 + 0x2e)));
  FUN_00553a1e(this,(int)this + 0x24,*(undefined1 *)(iVar3 + 0x2d),*(undefined1 *)(iVar3 + 0x2c),
               *(undefined1 *)(iVar3 + 0x2f));
  return;
}


/* ==== 0055388a FUN_0055388a ==== */

void * __thiscall FUN_0055388a(void *this,int param_2,uint param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  
  if (*(uint *)(param_2 + 8) < param_3) {
    FUN_0054b29c();
  }
  uVar2 = *(int *)(param_2 + 8) - param_3;
  if (uVar2 < param_4) {
    param_4 = uVar2;
  }
  if (-*(int *)((int)this + 8) - 1U <= param_4) {
    FUN_0054b1b4();
  }
  if (param_4 != 0) {
    iVar5 = *(int *)((int)this + 8) + param_4;
    cVar1 = FUN_005536ab(this,iVar5,0);
    if (cVar1 != '\0') {
      puVar3 = &DAT_00579320;
      if (*(undefined2 **)(param_2 + 4) != (undefined2 *)0x0) {
        puVar3 = *(undefined2 **)(param_2 + 4);
      }
      puVar3 = puVar3 + param_3;
      puVar4 = (undefined2 *)(*(int *)((int)this + 4) + *(int *)((int)this + 8) * 2);
      do {
        *puVar4 = *puVar3;
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
      *(int *)((int)this + 8) = iVar5;
      *(undefined2 *)(*(int *)((int)this + 4) + iVar5 * 2) = 0;
    }
  }
  return this;
}


/* ==== 0055391c FUN_0055391c ==== */

void FUN_0055391c(void)

{
  int iVar1;
  void *operator_new_result;
  undefined4 extraout_ECX;
  int unaff_EBP;
  uint uVar2;
  
  FUN_0055b39c();
  uVar2 = *(uint *)(unaff_EBP + 8) | 0x1f;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffe8;
  *(undefined4 *)(unaff_EBP + -0x14) = extraout_ECX;
  if (0x7ffffffd < uVar2) {
    uVar2 = *(uint *)(unaff_EBP + 8);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar1 = uVar2 + 2;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  operator_new_result = operator_new(iVar1 * 2);
  *(void **)(unaff_EBP + 8) = operator_new_result;
  FUN_00553987();
  return;
}


/* ==== 00553987 FUN_00553987 ==== */

void FUN_00553987(void)

{
  uint uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  uint i;
  int unaff_EBP;
  int unaff_ESI;
  uint unaff_EDI;
  
  uVar1 = *(uint *)(unaff_ESI + 8);
  if (uVar1 != 0) {
    i = unaff_EDI;
    if (uVar1 <= unaff_EDI) {
      i = uVar1;
    }
    puVar3 = *(undefined2 **)(unaff_EBP + 8);
    puVar4 = *(undefined2 **)(unaff_ESI + 4);
    for (; i != 0; i = i - 1) {
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar4;
      puVar4 = puVar4 + 1;
    }
  }
  uVar1 = *(uint *)(unaff_ESI + 8);
  FUN_00553734();
  iVar2 = *(int *)(unaff_EBP + 8);
  *(int *)(unaff_ESI + 4) = iVar2 + 2;
  *(undefined1 *)(iVar2 + 1) = 0;
  *(uint *)(unaff_ESI + 0xc) = unaff_EDI;
  if (uVar1 <= unaff_EDI) {
    unaff_EDI = uVar1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(uint *)(unaff_ESI + 8) = unaff_EDI;
  *(undefined2 *)(*(int *)(unaff_ESI + 4) + unaff_EDI * 2) = 0;
  return;
}


/* ==== 005539ee FUN_005539ee ==== */

void __thiscall FUN_005539ee(void *this)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if (((iVar1 != 0) && (*(char *)(iVar1 + -1) != '\0')) && (*(char *)(iVar1 + -1) != -1)) {
    FUN_00553734(this,1);
    uVar2 = FUN_0055cf4d(iVar1);
    FUN_0055349f(this,iVar1,uVar2);
  }
  return;
}


/* ==== 00553a1e FUN_00553a1e ==== */

void __thiscall FUN_00553a1e(void *this,undefined4 param_2,byte param_3,byte param_4,char param_5)

{
  char *pcVar1;
  
  if ((((*(char *)((int)this + 0x28) == '\0') && ((param_3 & 0xfe) == 0)) && ((param_4 & 0xfe) == 0)
      ) && ((-1 < param_5 && (param_5 < '\x05')))) {
    pcVar1 = "+v$x+v$xv$+xv+$xv$+x+$vx+$vx$v+x+$vx$+vx+v $+v $v $+v+ $v $++$ v+$ v$ v++$ v$ +v" +
             (int)param_5 +
             (-(uint)(param_3 != 1) & 0xffffffd8) + (-(uint)(param_4 != 1) & 0xffffffec) + 0x3c;
  }
  else {
    pcVar1 = "$+vx";
  }
  FUN_0055b3c0(param_2,pcVar1,4);
  return;
}


/* ==== 00553a7f FUN_00553a7f ==== */

void FUN_00553a7f(void)

{
  char cVar1;
  int iVar2;
  void *operator_new_result;
  undefined4 uVar3;
  int unaff_EBP;
  
  FUN_0055b39c();
  iVar2 = DAT_0074db60;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    DAT_0074dafc = DAT_0074dafc + 1;
    DAT_0074db60 = DAT_0074dafc;
    iVar2 = DAT_0074dafc;
  }
  iVar2 = FUN_0054ca8b(*(undefined4 *)(unaff_EBP + 8),iVar2,1);
  if (iVar2 == 0) {
    if (*(char *)(unaff_EBP + 0x10) != '\0') {
      cVar1 = FUN_0054caca(*(undefined4 *)(unaff_EBP + 8));
      if (cVar1 != '\0') {
        if (DAT_0074db78 == 0) {
          operator_new_result = operator_new(0x18);
          *(void **)(unaff_EBP + 0x10) = operator_new_result;
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (operator_new_result == (void *)0x0) {
            uVar3 = 0;
          }
          else {
            uVar3 = FUN_005546a8(0);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          DAT_0074db78 = FUN_0055492c(uVar3);
        }
        goto LAB_00553b02;
      }
    }
    *(char **)(unaff_EBP + 0x10) = s_missing_locale_facet_005b6f34;
    FUN_00558853(unaff_EBP + -0x18,unaff_EBP + 0x10);
    *(undefined ***)(unaff_EBP + -0x18) = &PTR_FUN_0057915c;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x18,&DAT_00584188);
  }
LAB_00553b02:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 00553b36 FUN_00553b36 ==== */

void FUN_00553b36(void)

{
  char cVar1;
  int iVar2;
  undefined4 *operator_new_result;
  int unaff_EBP;
  
  FUN_0055b39c();
  iVar2 = DAT_0074db64;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    DAT_0074dafc = DAT_0074dafc + 1;
    DAT_0074db64 = DAT_0074dafc;
    iVar2 = DAT_0074dafc;
  }
  iVar2 = FUN_0054ca8b(*(undefined4 *)(unaff_EBP + 8),iVar2,1);
  if (iVar2 == 0) {
    if (*(char *)(unaff_EBP + 0x10) != '\0') {
      cVar1 = FUN_0054caca(*(undefined4 *)(unaff_EBP + 8));
      if (cVar1 != '\0') {
        if (DAT_0074db7c == 0) {
          operator_new_result = operator_new(8);
          *(undefined4 **)(unaff_EBP + 0x10) = operator_new_result;
          if (operator_new_result == (undefined4 *)0x0) {
            operator_new_result = (undefined4 *)0x0;
          }
          else {
            operator_new_result[1] = 0;
            *(undefined1 *)(unaff_EBP + -4) = 2;
            *operator_new_result = &PTR_FUN_005792b8;
            FUN_0054d3cd(s_C_005b6f4c);
            FUN_0054d486();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          DAT_0074db7c = FUN_00554952(operator_new_result);
        }
        goto LAB_00553bd3;
      }
    }
    *(char **)(unaff_EBP + 0x10) = s_missing_locale_facet_005b6f34;
    FUN_00558853(unaff_EBP + -0x18,unaff_EBP + 0x10);
    *(undefined ***)(unaff_EBP + -0x18) = &PTR_FUN_0057915c;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x18,&DAT_00584188);
  }
LAB_00553bd3:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 00553c07 FUN_00553c07 ==== */

void FUN_00553c07(void)

{
  char cVar1;
  int iVar2;
  undefined4 *operator_new_result;
  int unaff_EBP;
  
  FUN_0055b39c();
  iVar2 = DAT_0074db54;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    DAT_0074dafc = DAT_0074dafc + 1;
    DAT_0074db54 = DAT_0074dafc;
    iVar2 = DAT_0074dafc;
  }
  iVar2 = FUN_0054ca8b(*(undefined4 *)(unaff_EBP + 8),iVar2,1);
  if (iVar2 == 0) {
    if (*(char *)(unaff_EBP + 0x10) != '\0') {
      cVar1 = FUN_0054caca(*(undefined4 *)(unaff_EBP + 8));
      if (cVar1 != '\0') {
        if (DAT_0074db80 == 0) {
          operator_new_result = operator_new(8);
          *(undefined4 **)(unaff_EBP + 0x10) = operator_new_result;
          if (operator_new_result == (undefined4 *)0x0) {
            operator_new_result = (undefined4 *)0x0;
          }
          else {
            operator_new_result[1] = 0;
            *(undefined1 *)(unaff_EBP + -4) = 2;
            *operator_new_result = &PTR_FUN_00579298;
            FUN_0054d3cd(s_C_005b6f4c);
            FUN_0054d486();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          DAT_0074db80 = FUN_00554978(operator_new_result);
        }
        goto LAB_00553ca4;
      }
    }
    *(char **)(unaff_EBP + 0x10) = s_missing_locale_facet_005b6f34;
    FUN_00558853(unaff_EBP + -0x18,unaff_EBP + 0x10);
    *(undefined ***)(unaff_EBP + -0x18) = &PTR_FUN_0057915c;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x18,&DAT_00584188);
  }
LAB_00553ca4:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 00553cd8 FUN_00553cd8 ==== */

void FUN_00553cd8(void)

{
  char cVar1;
  int iVar2;
  void *operator_new_result;
  undefined4 uVar3;
  int unaff_EBP;
  
  FUN_0055b39c();
  iVar2 = DAT_0074db44;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    DAT_0074dafc = DAT_0074dafc + 1;
    DAT_0074db44 = DAT_0074dafc;
    iVar2 = DAT_0074dafc;
  }
  iVar2 = FUN_0054ca8b(*(undefined4 *)(unaff_EBP + 8),iVar2,1);
  if (iVar2 == 0) {
    if (*(char *)(unaff_EBP + 0x10) != '\0') {
      cVar1 = FUN_0054caca(*(undefined4 *)(unaff_EBP + 8));
      if (cVar1 != '\0') {
        if (DAT_0074db84 == 0) {
          operator_new_result = operator_new(0x18);
          *(void **)(unaff_EBP + 0x10) = operator_new_result;
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (operator_new_result == (void *)0x0) {
            uVar3 = 0;
          }
          else {
            uVar3 = FUN_005547b4(0);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          DAT_0074db84 = FUN_0055499e(uVar3);
        }
        goto LAB_00553d5b;
      }
    }
    *(char **)(unaff_EBP + 0x10) = s_missing_locale_facet_005b6f34;
    FUN_00558853(unaff_EBP + -0x18,unaff_EBP + 0x10);
    *(undefined ***)(unaff_EBP + -0x18) = &PTR_FUN_0057915c;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x18,&DAT_00584188);
  }
LAB_00553d5b:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 00553d8f FUN_00553d8f ==== */

void FUN_00553d8f(void)

{
  char cVar1;
  int iVar2;
  void *operator_new_result;
  undefined4 uVar3;
  int unaff_EBP;
  
  FUN_0055b39c();
  iVar2 = DAT_0074db58;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    DAT_0074dafc = DAT_0074dafc + 1;
    DAT_0074db58 = DAT_0074dafc;
    iVar2 = DAT_0074dafc;
  }
  iVar2 = FUN_0054ca8b(*(undefined4 *)(unaff_EBP + 8),iVar2,1);
  if (iVar2 == 0) {
    if (*(char *)(unaff_EBP + 0x10) != '\0') {
      cVar1 = FUN_0054caca(*(undefined4 *)(unaff_EBP + 8));
      if (cVar1 != '\0') {
        if (DAT_0074db88 == 0) {
          operator_new_result = operator_new(0x10);
          *(void **)(unaff_EBP + 0x10) = operator_new_result;
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (operator_new_result == (void *)0x0) {
            uVar3 = 0;
          }
          else {
            uVar3 = FUN_0055480d(0);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          DAT_0074db88 = FUN_005549c4(uVar3);
        }
        goto LAB_00553e12;
      }
    }
    *(char **)(unaff_EBP + 0x10) = s_missing_locale_facet_005b6f34;
    FUN_00558853(unaff_EBP + -0x18,unaff_EBP + 0x10);
    *(undefined ***)(unaff_EBP + -0x18) = &PTR_FUN_0057915c;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x18,&DAT_00584188);
  }
LAB_00553e12:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 00553e46 FUN_00553e46 ==== */

void FUN_00553e46(void)

{
  char cVar1;
  int iVar2;
  void *operator_new_result;
  undefined4 uVar3;
  int unaff_EBP;
  
  FUN_0055b39c();
  iVar2 = DAT_0074db4c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    DAT_0074dafc = DAT_0074dafc + 1;
    DAT_0074db4c = DAT_0074dafc;
    iVar2 = DAT_0074dafc;
  }
  iVar2 = FUN_0054ca8b(*(undefined4 *)(unaff_EBP + 8),iVar2,1);
  if (iVar2 == 0) {
    if (*(char *)(unaff_EBP + 0x10) != '\0') {
      cVar1 = FUN_0054caca(*(undefined4 *)(unaff_EBP + 8));
      if (cVar1 != '\0') {
        if (DAT_0074db8c == 0) {
          operator_new_result = operator_new(0x10);
          *(void **)(unaff_EBP + 0x10) = operator_new_result;
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (operator_new_result == (void *)0x0) {
            uVar3 = 0;
          }
          else {
            uVar3 = FUN_00554861(0);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          DAT_0074db8c = FUN_005549ea(uVar3);
        }
        goto LAB_00553ec9;
      }
    }
    *(char **)(unaff_EBP + 0x10) = s_missing_locale_facet_005b6f34;
    FUN_00558853(unaff_EBP + -0x18,unaff_EBP + 0x10);
    *(undefined ***)(unaff_EBP + -0x18) = &PTR_FUN_0057915c;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x18,&DAT_00584188);
  }
LAB_00553ec9:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 00553efd FUN_00553efd ==== */

void FUN_00553efd(void)

{
  char cVar1;
  int iVar2;
  undefined4 *operator_new_result;
  int unaff_EBP;
  
  FUN_0055b39c();
  iVar2 = DAT_0074db48;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    DAT_0074dafc = DAT_0074dafc + 1;
    DAT_0074db48 = DAT_0074dafc;
    iVar2 = DAT_0074dafc;
  }
  iVar2 = FUN_0054ca8b(*(undefined4 *)(unaff_EBP + 8),iVar2,1);
  if (iVar2 == 0) {
    if (*(char *)(unaff_EBP + 0x10) != '\0') {
      cVar1 = FUN_0054caca(*(undefined4 *)(unaff_EBP + 8));
      if (cVar1 != '\0') {
        if (DAT_0074db90 == 0) {
          operator_new_result = operator_new(8);
          *(undefined4 **)(unaff_EBP + 0x10) = operator_new_result;
          if (operator_new_result == (undefined4 *)0x0) {
            operator_new_result = (undefined4 *)0x0;
          }
          else {
            operator_new_result[1] = 0;
            *(undefined1 *)(unaff_EBP + -4) = 2;
            *operator_new_result = &PTR_FUN_00579244;
            FUN_0054d3cd(s_C_005b6f4c);
            FUN_0054d486();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          DAT_0074db90 = FUN_00554a10(operator_new_result);
        }
        goto LAB_00553f9a;
      }
    }
    *(char **)(unaff_EBP + 0x10) = s_missing_locale_facet_005b6f34;
    FUN_00558853(unaff_EBP + -0x18,unaff_EBP + 0x10);
    *(undefined ***)(unaff_EBP + -0x18) = &PTR_FUN_0057915c;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x18,&DAT_00584188);
  }
LAB_00553f9a:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 00553fce FUN_00553fce ==== */

void FUN_00553fce(void)

{
  char cVar1;
  int iVar2;
  undefined4 *operator_new_result;
  int unaff_EBP;
  
  FUN_0055b39c();
  iVar2 = DAT_0074db74;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    DAT_0074dafc = DAT_0074dafc + 1;
    DAT_0074db74 = DAT_0074dafc;
    iVar2 = DAT_0074dafc;
  }
  iVar2 = FUN_0054ca8b(*(undefined4 *)(unaff_EBP + 8),iVar2,1);
  if (iVar2 == 0) {
    if (*(char *)(unaff_EBP + 0x10) != '\0') {
      cVar1 = FUN_0054caca(*(undefined4 *)(unaff_EBP + 8));
      if (cVar1 != '\0') {
        if (DAT_0074db94 == 0) {
          operator_new_result = operator_new(8);
          *(undefined4 **)(unaff_EBP + 0x10) = operator_new_result;
          if (operator_new_result == (undefined4 *)0x0) {
            operator_new_result = (undefined4 *)0x0;
          }
          else {
            operator_new_result[1] = 0;
            *(undefined1 *)(unaff_EBP + -4) = 2;
            *operator_new_result = &PTR_FUN_00579234;
            FUN_0054d3cd(s_C_005b6f4c);
            FUN_0054d486();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          DAT_0074db94 = FUN_00554a36(operator_new_result);
        }
        goto LAB_0055406b;
      }
    }
    *(char **)(unaff_EBP + 0x10) = s_missing_locale_facet_005b6f34;
    FUN_00558853(unaff_EBP + -0x18,unaff_EBP + 0x10);
    *(undefined ***)(unaff_EBP + -0x18) = &PTR_FUN_0057915c;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x18,&DAT_00584188);
  }
LAB_0055406b:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 0055409f FUN_0055409f ==== */

void FUN_0055409f(void)

{
  char cVar1;
  int iVar2;
  undefined4 *operator_new_result;
  int unaff_EBP;
  bool bVar3;
  
  FUN_0055b39c();
  iVar2 = DAT_0074db70;
  bVar3 = DAT_0074db70 == 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (bVar3) {
    DAT_0074dafc = DAT_0074dafc + 1;
    DAT_0074db70 = DAT_0074dafc;
    iVar2 = DAT_0074dafc;
  }
  iVar2 = FUN_0054ca8b(*(undefined4 *)(unaff_EBP + 8),iVar2,1);
  if (iVar2 == 0) {
    if (*(char *)(unaff_EBP + 0x10) != '\0') {
      cVar1 = FUN_0054caca(*(undefined4 *)(unaff_EBP + 8));
      if (cVar1 != '\0') {
        if (DAT_0074db98 == 0) {
          operator_new_result = operator_new(0x2c);
          *(undefined4 **)(unaff_EBP + 0x10) = operator_new_result;
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (operator_new_result == (undefined4 *)0x0) {
            operator_new_result = (undefined4 *)0x0;
          }
          else {
            FUN_00554b1a(0,0);
            *operator_new_result = &PTR_FUN_00579208;
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          DAT_0074db98 = FUN_00554a5c(operator_new_result);
        }
        goto LAB_0055412d;
      }
    }
    *(char **)(unaff_EBP + 0x10) = s_missing_locale_facet_005b6f34;
    FUN_00558853(unaff_EBP + -0x18,unaff_EBP + 0x10);
    *(undefined ***)(unaff_EBP + -0x18) = &PTR_FUN_0057915c;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x18,&DAT_00584188);
  }
LAB_0055412d:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 00554162 FUN_00554162 ==== */

void FUN_00554162(void)

{
  char cVar1;
  int iVar2;
  undefined4 *operator_new_result;
  int unaff_EBP;
  
  FUN_0055b39c();
  iVar2 = DAT_0074db50;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    DAT_0074dafc = DAT_0074dafc + 1;
    DAT_0074db50 = DAT_0074dafc;
    iVar2 = DAT_0074dafc;
  }
  iVar2 = FUN_0054ca8b(*(undefined4 *)(unaff_EBP + 8),iVar2,1);
  if (iVar2 == 0) {
    if (*(char *)(unaff_EBP + 0x10) != '\0') {
      cVar1 = FUN_0054caca(*(undefined4 *)(unaff_EBP + 8));
      if (cVar1 != '\0') {
        if (DAT_0074db9c == 0) {
          operator_new_result = operator_new(0x2c);
          *(undefined4 **)(unaff_EBP + 0x10) = operator_new_result;
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (operator_new_result == (undefined4 *)0x0) {
            operator_new_result = (undefined4 *)0x0;
          }
          else {
            FUN_00554b1a(0,1);
            *operator_new_result = &PTR_FUN_005791dc;
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          DAT_0074db9c = FUN_00554a82(operator_new_result);
        }
        goto LAB_005541f1;
      }
    }
    *(char **)(unaff_EBP + 0x10) = s_missing_locale_facet_005b6f34;
    FUN_00558853(unaff_EBP + -0x18,unaff_EBP + 0x10);
    *(undefined ***)(unaff_EBP + -0x18) = &PTR_FUN_0057915c;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x18,&DAT_00584188);
  }
LAB_005541f1:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 00554225 FUN_00554225 ==== */

void FUN_00554225(void)

{
  char cVar1;
  int iVar2;
  void *operator_new_result;
  undefined4 uVar3;
  int unaff_EBP;
  
  FUN_0055b39c();
  iVar2 = DAT_0074db5c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    DAT_0074dafc = DAT_0074dafc + 1;
    DAT_0074db5c = DAT_0074dafc;
    iVar2 = DAT_0074dafc;
  }
  iVar2 = FUN_0054ca8b(*(undefined4 *)(unaff_EBP + 8),iVar2,1);
  if (iVar2 == 0) {
    if (*(char *)(unaff_EBP + 0x10) != '\0') {
      cVar1 = FUN_0054caca(*(undefined4 *)(unaff_EBP + 8));
      if (cVar1 != '\0') {
        if (DAT_0074dba0 == 0) {
          operator_new_result = operator_new(0x10);
          *(void **)(unaff_EBP + 0x10) = operator_new_result;
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (operator_new_result == (void *)0x0) {
            uVar3 = 0;
          }
          else {
            uVar3 = FUN_005548d3(0);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          DAT_0074dba0 = FUN_00554aa8(uVar3);
        }
        goto LAB_005542a8;
      }
    }
    *(char **)(unaff_EBP + 0x10) = s_missing_locale_facet_005b6f34;
    FUN_00558853(unaff_EBP + -0x18,unaff_EBP + 0x10);
    *(undefined ***)(unaff_EBP + -0x18) = &PTR_FUN_0057915c;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x18,&DAT_00584188);
  }
LAB_005542a8:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 005542dc FUN_005542dc ==== */

void FUN_005542dc(void)

{
  char cVar1;
  int iVar2;
  void *operator_new_result;
  undefined4 uVar3;
  int unaff_EBP;
  
  FUN_0055b39c();
  iVar2 = DAT_0074db6c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    DAT_0074dafc = DAT_0074dafc + 1;
    DAT_0074db6c = DAT_0074dafc;
    iVar2 = DAT_0074dafc;
  }
  iVar2 = FUN_0054ca8b(*(undefined4 *)(unaff_EBP + 8),iVar2,1);
  if (iVar2 == 0) {
    if (*(char *)(unaff_EBP + 0x10) != '\0') {
      cVar1 = FUN_0054caca(*(undefined4 *)(unaff_EBP + 8));
      if (cVar1 != '\0') {
        if (DAT_0074dba4 == 0) {
          operator_new_result = operator_new(0xc);
          *(void **)(unaff_EBP + 0x10) = operator_new_result;
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (operator_new_result == (void *)0x0) {
            uVar3 = 0;
          }
          else {
            uVar3 = FUN_00554708(0);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          DAT_0074dba4 = FUN_00554ace(uVar3);
        }
        goto LAB_0055435f;
      }
    }
    *(char **)(unaff_EBP + 0x10) = s_missing_locale_facet_005b6f34;
    FUN_00558853(unaff_EBP + -0x18,unaff_EBP + 0x10);
    *(undefined ***)(unaff_EBP + -0x18) = &PTR_FUN_0057915c;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x18,&DAT_00584188);
  }
LAB_0055435f:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 00554393 FUN_00554393 ==== */

void FUN_00554393(void)

{
  char cVar1;
  int iVar2;
  void *operator_new_result;
  undefined4 uVar3;
  int unaff_EBP;
  
  FUN_0055b39c();
  iVar2 = DAT_0074db68;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    DAT_0074dafc = DAT_0074dafc + 1;
    DAT_0074db68 = DAT_0074dafc;
    iVar2 = DAT_0074dafc;
  }
  iVar2 = FUN_0054ca8b(*(undefined4 *)(unaff_EBP + 8),iVar2,1);
  if (iVar2 == 0) {
    if (*(char *)(unaff_EBP + 0x10) != '\0') {
      cVar1 = FUN_0054caca(*(undefined4 *)(unaff_EBP + 8));
      if (cVar1 != '\0') {
        if (DAT_0074dba8 == 0) {
          operator_new_result = operator_new(0x10);
          *(void **)(unaff_EBP + 0x10) = operator_new_result;
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (operator_new_result == (void *)0x0) {
            uVar3 = 0;
          }
          else {
            uVar3 = FUN_0055444a(0);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          DAT_0074dba8 = FUN_00554af4(uVar3);
        }
        goto LAB_00554416;
      }
    }
    *(char **)(unaff_EBP + 0x10) = s_missing_locale_facet_005b6f34;
    FUN_00558853(unaff_EBP + -0x18,unaff_EBP + 0x10);
    *(undefined ***)(unaff_EBP + -0x18) = &PTR_FUN_0057915c;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x18,&DAT_00584188);
  }
LAB_00554416:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 0055444a FUN_0055444a ==== */

undefined4 * FUN_0055444a(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined8 uVar1;
  
  FUN_0055b39c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_FUN_00579190;
  FUN_0054d3cd(s_C_005b6f4c);
  uVar1 = FUN_0054eb13();
  *(undefined8 *)(extraout_ECX + 2) = uVar1;
  FUN_0054d486();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


/* ==== 0055449e FUN_0055449e ==== */

undefined4 FUN_0055449e(void)

{
  short sVar1;
  void *this;
  char cVar2;
  short sVar3;
  char *pcVar4;
  undefined1 *puVar5;
  short *psVar6;
  undefined1 uVar7;
  uint uVar8;
  short *psVar9;
  int unaff_EBP;
  uint i;
  int j;
  
  FUN_0055b39c();
  psVar9 = *(short **)(unaff_EBP + 0x14);
  sVar3 = *psVar9;
  psVar6 = psVar9;
  sVar1 = sVar3;
  while (sVar1 != 0) {
    if (sVar1 == sVar3) {
      *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 1;
    }
    psVar6 = psVar6 + 1;
    sVar1 = *psVar6;
  }
  *(undefined1 *)(unaff_EBP + -0x28) = *(undefined1 *)(unaff_EBP + 0x17);
  FUN_004028f0(unaff_EBP + -0x28,0);
  FUN_0054e333((void *)(unaff_EBP + -0x28),*(size_t *)(unaff_EBP + 0x10),'\0');
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0xfffffffe;
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
  while( true ) {
    *(undefined1 *)(unaff_EBP + -0xd) = 0;
    i = 0;
    j = 0;
    if (*(int *)(unaff_EBP + 0x10) == 0) break;
    do {
      sVar3 = psVar9[j];
      psVar6 = psVar9 + j;
      if (sVar3 != 0) {
        do {
          if (sVar3 == *psVar9) break;
          j = j + 1;
          psVar6 = psVar6 + 1;
          sVar3 = *psVar6;
        } while (sVar3 != 0);
      }
      if ((*(uint *)(unaff_EBP + -0x20) < i) || (*(int *)(unaff_EBP + -0x24) == 0)) {
        pcVar4 = "";
      }
      else {
        FUN_00471de0(unaff_EBP + -0x28);
        pcVar4 = (char *)(*(int *)(unaff_EBP + -0x24) + i);
      }
      if (*pcVar4 == '\0') {
        j = j + *(int *)(unaff_EBP + -0x14);
        if ((psVar9[j] == *psVar9) || (psVar9[j] == 0)) {
          uVar7 = 0x7f;
          if (*(uint *)(unaff_EBP + -0x14) < 0x7f) {
            uVar7 = (undefined1)*(undefined4 *)(unaff_EBP + -0x14);
          }
          if ((*(uint *)(unaff_EBP + -0x20) < i) || (*(int *)(unaff_EBP + -0x24) == 0)) {
            puVar5 = &DAT_0057629c;
          }
          else {
            FUN_00471de0(unaff_EBP + -0x28);
            puVar5 = (undefined1 *)(*(int *)(unaff_EBP + -0x24) + i);
          }
          *puVar5 = uVar7;
          *(uint *)(unaff_EBP + -0x18) = i;
        }
        else {
          this = *(void **)(unaff_EBP + 8);
          cVar2 = FUN_00554775(this,*(int **)(unaff_EBP + 0xc));
          if (cVar2 == '\0') {
            if (*(char *)((int)this + 4) == '\0') {
              Peek(this);
            }
            if (*(short *)(*(int *)(unaff_EBP + 0x14) + j * 2) == *(short *)((int)this + 6)) {
              *(undefined1 *)(unaff_EBP + -0xd) = 1;
              goto LAB_00554618;
            }
          }
          uVar8 = *(uint *)(unaff_EBP + -0x14);
          if (0x7e < uVar8) {
            uVar8 = 0x7f;
          }
          if ((*(uint *)(unaff_EBP + -0x20) < i) || (*(int *)(unaff_EBP + -0x24) == 0)) {
            puVar5 = &DAT_0057629c;
          }
          else {
            FUN_00471de0(unaff_EBP + -0x28);
            puVar5 = (undefined1 *)(*(int *)(unaff_EBP + -0x24) + i);
          }
          *puVar5 = (char)uVar8;
        }
LAB_00554618:
        psVar9 = *(short **)(unaff_EBP + 0x14);
      }
      else {
        if ((*(uint *)(unaff_EBP + -0x20) < i) || (*(int *)(unaff_EBP + -0x24) == 0)) {
          pcVar4 = "";
        }
        else {
          FUN_00471de0(unaff_EBP + -0x28);
          pcVar4 = (char *)(*(int *)(unaff_EBP + -0x24) + i);
        }
        j = j + *pcVar4;
      }
      i = i + 1;
    } while (i < *(uint *)(unaff_EBP + 0x10));
    if ((*(char *)(unaff_EBP + -0xd) == '\0') ||
       (cVar2 = FUN_00554775(*(void **)(unaff_EBP + 8),*(int **)(unaff_EBP + 0xc)), cVar2 != '\0'))
    break;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    FUN_0055331d(*(undefined4 *)(unaff_EBP + 8));
    *(undefined4 *)(unaff_EBP + -0x18) = 0xffffffff;
  }
  FUN_004028f0(unaff_EBP + -0x28,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x18);
}


/* ==== 0055466a FUN_0055466a ==== */

undefined2 * FUN_0055466a(char *str)

{
  undefined2 uVar1;
  size_t _strlen_result;
  undefined2 *operator_new_result;
  char *pcVar2;
  int i;
  undefined2 *puVar3;
  char *this_val;
  
  this_val = str;
  _strlen_result = _strlen(str);
  i = _strlen_result + 1;
  operator_new_result = operator_new(i * 2);
  puVar3 = operator_new_result;
  for (; i != 0; i = i + -1) {
    pcVar2 = (char *)(int)*str;
    uVar1 = FUN_0054ef7c(this_val);
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
    str = str + 1;
    this_val = pcVar2;
  }
  return operator_new_result;
}


/* ==== 005546a8 FUN_005546a8 ==== */

undefined4 * FUN_005546a8(void)

{
  undefined4 *puVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_FUN_005792e4;
  FUN_0054d3cd(s_C_005b6f4c);
  puVar1 = (undefined4 *)FUN_0054ec38(unaff_EBP + -0x20);
  extraout_ECX[2] = *puVar1;
  extraout_ECX[3] = puVar1[1];
  extraout_ECX[4] = puVar1[2];
  extraout_ECX[5] = puVar1[3];
  FUN_0054d486();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


/* ==== 00554708 FUN_00554708 ==== */

undefined4 * FUN_00554708(void)

{
  undefined4 this_val;
  undefined4 *puVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[2] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *extraout_ECX = &PTR_FUN_005791b0;
  this_val = FUN_0054d3cd(s_C_005b6f4c);
  puVar1 = (undefined4 *)FUN_0055133f(this_val,unaff_EBP + 8);
  extraout_ECX[2] = *puVar1;
  *puVar1 = 0;
  FUN_00559d4e(*(undefined4 *)(unaff_EBP + 8));
  FUN_0054d486();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


/* ==== 00554775 FUN_00554775 ==== */

undefined4 __thiscall FUN_00554775(void *this,int *this_val)

{
  if (*(char *)((int)this + 4) == '\0') {
    Peek();
  }
  if ((char)this_val[1] == '\0') {
    Peek(this_val);
  }
  if (*(int *)this == 0) {
    if (*this_val != 0) {
      return 0;
    }
  }
  else if (*this_val == 0) {
    return 0;
  }
  return 1;
}


/* ==== 005547b4 FUN_005547b4 ==== */

undefined4 * FUN_005547b4(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_FUN_0057927c;
  uVar1 = FUN_0054d3cd(s_C_005b6f4c);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0055213d(extraout_ECX,uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0054d486();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


/* ==== 0055480d FUN_0055480d ==== */

undefined4 * FUN_0055480d(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined8 uVar1;
  
  FUN_0055b39c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_FUN_00579268;
  FUN_0054d3cd(s_C_005b6f4c);
  uVar1 = FUN_00557cfe();
  *(undefined8 *)(extraout_ECX + 2) = uVar1;
  FUN_0054d486();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


/* ==== 00554861 FUN_00554861 ==== */

undefined4 * FUN_00554861(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_FUN_00579254;
  FUN_0054d3cd(s_C_005b6f4c);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uVar1 = FUN_0055466a(s_no_005b2d3c);
  extraout_ECX[2] = uVar1;
  uVar1 = FUN_0055466a((char *)&PTR_DAT_005b2d40);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  extraout_ECX[3] = uVar1;
  FUN_0054d486();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


/* ==== 005548d3 FUN_005548d3 ==== */

undefined4 * FUN_005548d3(void)

{
  undefined4 this_val;
  undefined4 *this;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(undefined4 **)(unaff_EBP + -0x10) = this;
  this[1] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *this = &PTR_FUN_005791bc;
  this_val = FUN_0054d3cd(s_C_005b6f4c);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00553108(this,this_val);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0054d486();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return this;
}


/* ==== 0055492c FUN_0055492c ==== */

int FUN_0055492c(int param_1)

{
  DAT_0074dbac = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(FUN_00554b79);
  return param_1;
}


/* ==== 00554952 FUN_00554952 ==== */

int FUN_00554952(int param_1)

{
  DAT_0074dbb0 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(FUN_00554bc4);
  return param_1;
}


/* ==== 00554978 FUN_00554978 ==== */

int FUN_00554978(int param_1)

{
  DAT_0074dbb4 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(FUN_00554c0f);
  return param_1;
}


/* ==== 0055499e FUN_0055499e ==== */

int FUN_0055499e(int param_1)

{
  DAT_0074dbb8 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(FUN_00554c5a);
  return param_1;
}


/* ==== 005549c4 FUN_005549c4 ==== */

int FUN_005549c4(int param_1)

{
  DAT_0074dbbc = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(FUN_00554ca5);
  return param_1;
}


/* ==== 005549ea FUN_005549ea ==== */

int FUN_005549ea(int param_1)

{
  DAT_0074dbc0 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(FUN_00554cf0);
  return param_1;
}


/* ==== 00554a10 FUN_00554a10 ==== */

int FUN_00554a10(int param_1)

{
  DAT_0074dbc4 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(FUN_00554d3b);
  return param_1;
}


/* ==== 00554a36 FUN_00554a36 ==== */

int FUN_00554a36(int param_1)

{
  DAT_0074dbc8 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(FUN_00554d86);
  return param_1;
}


/* ==== 00554a5c FUN_00554a5c ==== */

int FUN_00554a5c(int param_1)

{
  DAT_0074dbcc = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(FUN_00554dd1);
  return param_1;
}


/* ==== 00554a82 FUN_00554a82 ==== */

int FUN_00554a82(int param_1)

{
  DAT_0074dbd0 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(FUN_00554e1c);
  return param_1;
}


/* ==== 00554aa8 FUN_00554aa8 ==== */

int FUN_00554aa8(int param_1)

{
  DAT_0074dbd4 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(FUN_00554e67);
  return param_1;
}


/* ==== 00554ace FUN_00554ace ==== */

int FUN_00554ace(int param_1)

{
  DAT_0074dbd8 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(FUN_00554eb2);
  return param_1;
}


/* ==== 00554af4 FUN_00554af4 ==== */

int FUN_00554af4(int param_1)

{
  DAT_0074dbdc = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(FUN_00554efd);
  return param_1;
}


/* ==== 00554b1a FUN_00554b1a ==== */

undefined4 * FUN_00554b1a(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 *)(extraout_ECX + 10) = *(undefined1 *)(unaff_EBP + 0xc);
  *extraout_ECX = &PTR_FUN_00579344;
  uVar1 = FUN_0054d3cd(s_C_005b6f4c);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0055379f(extraout_ECX,uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0054d486();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


/* ==== 00554b79 FUN_00554b79 ==== */

void FUN_00554b79(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *unaff_retaddr;
  
  FUN_0055b39c();
  uVar2 = DAT_0074dbac;
  iVar1 = *(int *)(DAT_0074dbac + 4);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(int *)(DAT_0074dbac + 4) = iVar1 + -1;
  }
  puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar2 + 4) != 0) & uVar2);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  DAT_0074dbac = 0;
  ExceptionList = unaff_retaddr;
  return;
}


/* ==== 00554bc4 FUN_00554bc4 ==== */

void FUN_00554bc4(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *unaff_retaddr;
  
  FUN_0055b39c();
  uVar2 = DAT_0074dbb0;
  iVar1 = *(int *)(DAT_0074dbb0 + 4);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(int *)(DAT_0074dbb0 + 4) = iVar1 + -1;
  }
  puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar2 + 4) != 0) & uVar2);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  DAT_0074dbb0 = 0;
  ExceptionList = unaff_retaddr;
  return;
}


/* ==== 00554c0f FUN_00554c0f ==== */

void FUN_00554c0f(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *unaff_retaddr;
  
  FUN_0055b39c();
  uVar2 = DAT_0074dbb4;
  iVar1 = *(int *)(DAT_0074dbb4 + 4);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(int *)(DAT_0074dbb4 + 4) = iVar1 + -1;
  }
  puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar2 + 4) != 0) & uVar2);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  DAT_0074dbb4 = 0;
  ExceptionList = unaff_retaddr;
  return;
}


/* ==== 00554c5a FUN_00554c5a ==== */

void FUN_00554c5a(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *unaff_retaddr;
  
  FUN_0055b39c();
  uVar2 = DAT_0074dbb8;
  iVar1 = *(int *)(DAT_0074dbb8 + 4);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(int *)(DAT_0074dbb8 + 4) = iVar1 + -1;
  }
  puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar2 + 4) != 0) & uVar2);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  DAT_0074dbb8 = 0;
  ExceptionList = unaff_retaddr;
  return;
}


/* ==== 00554ca5 FUN_00554ca5 ==== */

void FUN_00554ca5(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *unaff_retaddr;
  
  FUN_0055b39c();
  uVar2 = DAT_0074dbbc;
  iVar1 = *(int *)(DAT_0074dbbc + 4);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(int *)(DAT_0074dbbc + 4) = iVar1 + -1;
  }
  puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar2 + 4) != 0) & uVar2);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  DAT_0074dbbc = 0;
  ExceptionList = unaff_retaddr;
  return;
}


/* ==== 00554cf0 FUN_00554cf0 ==== */

void FUN_00554cf0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *unaff_retaddr;
  
  FUN_0055b39c();
  uVar2 = DAT_0074dbc0;
  iVar1 = *(int *)(DAT_0074dbc0 + 4);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(int *)(DAT_0074dbc0 + 4) = iVar1 + -1;
  }
  puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar2 + 4) != 0) & uVar2);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  DAT_0074dbc0 = 0;
  ExceptionList = unaff_retaddr;
  return;
}


/* ==== 00554d3b FUN_00554d3b ==== */

void FUN_00554d3b(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *unaff_retaddr;
  
  FUN_0055b39c();
  uVar2 = DAT_0074dbc4;
  iVar1 = *(int *)(DAT_0074dbc4 + 4);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(int *)(DAT_0074dbc4 + 4) = iVar1 + -1;
  }
  puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar2 + 4) != 0) & uVar2);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  DAT_0074dbc4 = 0;
  ExceptionList = unaff_retaddr;
  return;
}


/* ==== 00554d86 FUN_00554d86 ==== */

void FUN_00554d86(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *unaff_retaddr;
  
  FUN_0055b39c();
  uVar2 = DAT_0074dbc8;
  iVar1 = *(int *)(DAT_0074dbc8 + 4);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(int *)(DAT_0074dbc8 + 4) = iVar1 + -1;
  }
  puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar2 + 4) != 0) & uVar2);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  DAT_0074dbc8 = 0;
  ExceptionList = unaff_retaddr;
  return;
}


/* ==== 00554dd1 FUN_00554dd1 ==== */

void FUN_00554dd1(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *unaff_retaddr;
  
  FUN_0055b39c();
  uVar2 = DAT_0074dbcc;
  iVar1 = *(int *)(DAT_0074dbcc + 4);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(int *)(DAT_0074dbcc + 4) = iVar1 + -1;
  }
  puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar2 + 4) != 0) & uVar2);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  DAT_0074dbcc = 0;
  ExceptionList = unaff_retaddr;
  return;
}


/* ==== 00554e1c FUN_00554e1c ==== */

void FUN_00554e1c(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *unaff_retaddr;
  
  FUN_0055b39c();
  uVar2 = DAT_0074dbd0;
  iVar1 = *(int *)(DAT_0074dbd0 + 4);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(int *)(DAT_0074dbd0 + 4) = iVar1 + -1;
  }
  puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar2 + 4) != 0) & uVar2);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  DAT_0074dbd0 = 0;
  ExceptionList = unaff_retaddr;
  return;
}


/* ==== 00554e67 FUN_00554e67 ==== */

void FUN_00554e67(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *unaff_retaddr;
  
  FUN_0055b39c();
  uVar2 = DAT_0074dbd4;
  iVar1 = *(int *)(DAT_0074dbd4 + 4);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(int *)(DAT_0074dbd4 + 4) = iVar1 + -1;
  }
  puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar2 + 4) != 0) & uVar2);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  DAT_0074dbd4 = 0;
  ExceptionList = unaff_retaddr;
  return;
}


/* ==== 00554eb2 FUN_00554eb2 ==== */

void FUN_00554eb2(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *unaff_retaddr;
  
  FUN_0055b39c();
  uVar2 = DAT_0074dbd8;
  iVar1 = *(int *)(DAT_0074dbd8 + 4);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(int *)(DAT_0074dbd8 + 4) = iVar1 + -1;
  }
  puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar2 + 4) != 0) & uVar2);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  DAT_0074dbd8 = 0;
  ExceptionList = unaff_retaddr;
  return;
}


/* ==== 00554efd FUN_00554efd ==== */

void FUN_00554efd(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *unaff_retaddr;
  
  FUN_0055b39c();
  uVar2 = DAT_0074dbdc;
  iVar1 = *(int *)(DAT_0074dbdc + 4);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(int *)(DAT_0074dbdc + 4) = iVar1 + -1;
  }
  puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar2 + 4) != 0) & uVar2);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  DAT_0074dbdc = 0;
  ExceptionList = unaff_retaddr;
  return;
}


/* ==== 00554f69 FUN_00554f69 ==== */

void FUN_00554f69(void)

{
  undefined4 *this_val;
  int unaff_EBP;
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined4 this_val_2;
  
  FUN_0055b39c();
  iVar5 = *(int *)(unaff_EBP + 0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((*(byte *)(unaff_EBP + 0xc) & 1) != 0) {
    if (iVar5 == 0) {
      this_val = operator_new(0x10);
      if (this_val == (undefined4 *)0x0) {
        this_val = (undefined4 *)0x0;
      }
      else {
        this_val[1] = 0;
        *this_val = &PTR_FUN_00579564;
        uVar3 = FUN_00557cfe();
        *(undefined8 *)(this_val + 2) = uVar3;
      }
      iVar4 = DAT_0074dbfc;
      if (DAT_0074dbfc == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074dbfc = DAT_0074dafc;
        iVar4 = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074dbfc == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074dbfc = DAT_0074dafc;
      }
      iVar4 = DAT_0074dbfc;
      this_val = (undefined4 *)FUN_00557115(iVar5,0,1,DAT_0074dbfc);
    }
    FUN_0054d31e(this_val,iVar4);
  }
  if ((*(byte *)(unaff_EBP + 0xc) & 0x20) != 0) {
    if (iVar5 == 0) {
      this_val = operator_new(0x10);
      *(undefined4 **)(unaff_EBP + -0x10) = this_val;
      if (this_val == (undefined4 *)0x0) {
        this_val = (undefined4 *)0x0;
      }
      else {
        this_val[1] = 0;
        this_val_2 = *(undefined4 *)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        *this_val = &PTR_FUN_00579550;
        FUN_00555f45(this_val,this_val_2);
      }
      bVar2 = DAT_0074dbf0 == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar4 = DAT_0074dbf0;
      if (bVar2) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074dbf0 = DAT_0074dafc;
        iVar4 = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074dbf0 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074dbf0 = DAT_0074dafc;
      }
      iVar4 = DAT_0074dbf0;
      this_val = (undefined4 *)FUN_005571cc(iVar5,0,1,DAT_0074dbf0);
    }
    FUN_0054d31e(this_val,iVar4);
  }
  uVar1 = *(uint *)(unaff_EBP + 0xc) & 4;
  if (uVar1 != 0) {
    if (iVar5 == 0) {
      this_val = operator_new(8);
      if (this_val == (undefined4 *)0x0) {
        this_val = (undefined4 *)0x0;
      }
      else {
        this_val[1] = 0;
        *this_val = &PTR_FUN_00579540;
      }
      iVar4 = DAT_0074dbf8;
      if (DAT_0074dbf8 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074dbf8 = DAT_0074dafc;
        iVar4 = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074dbf8 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074dbf8 = DAT_0074dafc;
      }
      iVar4 = DAT_0074dbf8;
      this_val = (undefined4 *)FUN_00557283(iVar5,0,1,DAT_0074dbf8);
    }
    FUN_0054d31e(this_val,iVar4);
  }
  if (uVar1 != 0) {
    if (iVar5 == 0) {
      this_val = operator_new(8);
      if (this_val == (undefined4 *)0x0) {
        this_val = (undefined4 *)0x0;
      }
      else {
        this_val[1] = 0;
        *this_val = &PTR_FUN_00579530;
      }
      iVar4 = DAT_0074dbe0;
      if (DAT_0074dbe0 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074dbe0 = DAT_0074dafc;
        iVar4 = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074dbe0 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074dbe0 = DAT_0074dafc;
      }
      iVar4 = DAT_0074dbe0;
      this_val = (undefined4 *)FUN_00557354(iVar5,0,1,DAT_0074dbe0);
    }
    FUN_0054d31e(this_val,iVar4);
  }
  uVar1 = *(uint *)(unaff_EBP + 0xc) & 8;
  if (uVar1 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      this_val = operator_new(0x2c);
      *(undefined4 **)(unaff_EBP + -0x10) = this_val;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (this_val == (undefined4 *)0x0) {
        this_val = (undefined4 *)0x0;
      }
      else {
        FUN_00556d85(*(undefined4 *)(unaff_EBP + 8),0,0);
        *this_val = &PTR_FUN_00579504;
      }
      bVar2 = DAT_0074dbf4 == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar5 = DAT_0074dbf4;
      if (bVar2) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074dbf4 = DAT_0074dafc;
        iVar5 = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074dbf4 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074dbf4 = DAT_0074dafc;
      }
      iVar5 = DAT_0074dbf4;
      this_val = (undefined4 *)FUN_00557425(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0074dbf4);
    }
    FUN_0054d31e(this_val,iVar5);
  }
  if (uVar1 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      this_val = operator_new(0x2c);
      *(undefined4 **)(unaff_EBP + -0x10) = this_val;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (this_val == (undefined4 *)0x0) {
        this_val = (undefined4 *)0x0;
      }
      else {
        FUN_00556d85(*(undefined4 *)(unaff_EBP + 8),0,1);
        *this_val = &PTR_FUN_005794d8;
      }
      bVar2 = DAT_0074dbe4 == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar5 = DAT_0074dbe4;
      if (bVar2) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074dbe4 = DAT_0074dafc;
        iVar5 = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074dbe4 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074dbe4 = DAT_0074dafc;
      }
      iVar5 = DAT_0074dbe4;
      this_val = (undefined4 *)FUN_005574e8(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0074dbe4);
    }
    FUN_0054d31e(this_val,iVar5);
  }
  uVar1 = *(uint *)(unaff_EBP + 0xc) & 0x10;
  if (uVar1 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      this_val = operator_new(0x10);
      *(undefined4 **)(unaff_EBP + 0xc) = this_val;
      if (this_val == (undefined4 *)0x0) {
        this_val = (undefined4 *)0x0;
      }
      else {
        this_val[1] = 0;
        this_val_2 = *(undefined4 *)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 6;
        *this_val = &PTR_FUN_005794b8;
        FUN_00556dc5(this_val,this_val_2);
      }
      bVar2 = DAT_0074dbe8 == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar5 = DAT_0074dbe8;
      if (bVar2) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074dbe8 = DAT_0074dafc;
        iVar5 = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074dbe8 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074dbe8 = DAT_0074dafc;
      }
      iVar5 = DAT_0074dbe8;
      this_val = (undefined4 *)FUN_005575ab(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0074dbe8);
    }
    FUN_0054d31e(this_val,iVar5);
  }
  if (uVar1 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      this_val = operator_new(0xc);
      *(undefined4 **)(unaff_EBP + 0x14) = this_val;
      if (this_val == (undefined4 *)0x0) {
        this_val = (undefined4 *)0x0;
      }
      else {
        this_val[1] = 0;
        this_val[2] = 0;
        this_val_2 = *(undefined4 *)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 9;
        *this_val = &PTR_FUN_005794ac;
        FUN_00551317(this_val,this_val_2);
      }
      bVar2 = DAT_0074dbec == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar5 = DAT_0074dbec;
      if (bVar2) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074dbec = DAT_0074dafc;
        iVar5 = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074dbec == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074dbec = DAT_0074dafc;
      }
      iVar5 = DAT_0074dbec;
      this_val = (undefined4 *)FUN_00557662(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0074dbec);
    }
    FUN_0054d31e(this_val,iVar5);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 005553e5 FUN_005553e5 ==== */

uint FUN_005553e5(char *param_1,char *param_2,char *param_3,char *param_4)

{
  uint uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 == param_4) goto LAB_00555416;
    if (*param_1 < *param_3) goto LAB_00555407;
    if (*param_3 < *param_1) {
      return 1;
    }
    param_3 = param_3 + 1;
  }
  if (param_3 == param_4) {
LAB_00555416:
    uVar1 = (uint)(param_1 != param_2);
  }
  else {
LAB_00555407:
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* ==== 00555423 FUN_00555423 ==== */

undefined1 * FUN_00555423(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  uint uVar3;
  undefined1 *this_val;
  
  FUN_0055b39c();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(unaff_EBP + -0x20) = *(undefined1 *)(unaff_EBP + 0xf);
  FUN_004028f0(unaff_EBP + -0x20,0);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  uVar3 = *(int *)(unaff_EBP + 0x10) - *(int *)(unaff_EBP + 0xc);
  uVar2 = uVar3;
  while( true ) {
    FUN_0047eab0(unaff_EBP + -0x20,uVar2,0);
    FUN_00471de0(unaff_EBP + -0x20);
    iVar1 = *(int *)(unaff_EBP + -0x1c);
    FUN_00471de0(unaff_EBP + -0x20);
    if (uVar3 <= (-(uint)(iVar1 != 0) & *(int *)(unaff_EBP + -0x18) + iVar1) -
                 *(int *)(unaff_EBP + -0x1c)) {
      FUN_0055b3c0(*(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + 0xc),uVar3);
    }
    if (uVar3 <= *(uint *)(unaff_EBP + -0x18)) break;
    uVar2 = uVar3 - *(int *)(unaff_EBP + -0x18);
  }
  FUN_00555f1f(unaff_EBP + -0x20,uVar3);
  this_val = *(undefined1 **)(unaff_EBP + 8);
  *this_val = *(undefined1 *)(unaff_EBP + -0x20);
  FUN_004028f0(this_val,0);
  FUN_004093c0(this_val,unaff_EBP + -0x20,0,0xffffffff);
  *(undefined4 *)(unaff_EBP + -0x10) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004028f0(unaff_EBP + -0x20,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return this_val;
}


/* ==== 00555518 FUN_00555518 ==== */

undefined1 * __thiscall
FUN_00555518(void *this,undefined1 *this_val,undefined4 param_2,undefined4 param_3,int param_4,
            undefined1 *param_5)

{
  size_t _strlen_result;
  char *_Str;
  
  if (param_4 == 0) {
    _Str = *(char **)((int)this + 8);
  }
  else {
    if (param_4 != 1) {
      *this_val = *param_5;
      FUN_004028f0(this_val,0);
      FUN_004093c0(this_val,param_5,0,0xffffffff);
      return this_val;
    }
    _Str = *(char **)((int)this + 0xc);
  }
  *this_val = this_val._3_1_;
  FUN_004028f0(this_val,0);
  _strlen_result = _strlen(_Str);
  FUN_00402940(this_val,_Str,_strlen_result);
  return this_val;
}


/* ==== 00555589 FUN_00555589 ==== */

undefined4 * FUN_00555589(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined1 *puVar4;
  int unaff_EBP;
  uint i;
  float10 fVar5;
  
  FUN_0055b39c();
  FUN_00555f6d(unaff_EBP + -0x1c,unaff_EBP + 0xc,unaff_EBP + 0x14,*(undefined4 *)(unaff_EBP + 0x1c),
               *(undefined4 *)(unaff_EBP + 0x20));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  cVar3 = FUN_0054e9af((void *)(unaff_EBP + 0xc),(int *)(unaff_EBP + 0x14));
  puVar1 = *(uint **)(unaff_EBP + 0x24);
  if (cVar3 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    *(undefined1 *)(unaff_EBP + -0x2c) = *(undefined1 *)(unaff_EBP + 0x27);
    FUN_004028f0(unaff_EBP + -0x2c,0);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(uint *)(unaff_EBP + -0x20) < *(uint *)(unaff_EBP + -0x14)) {
      FUN_00402a00(unaff_EBP + -0x2c,*(uint *)(unaff_EBP + -0x14),0);
    }
    i = 0;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      do {
        if (*(int *)(unaff_EBP + -0x18) == 0) {
          puVar4 = &DAT_0057629c;
        }
        else {
          FUN_00471de0(unaff_EBP + -0x1c);
          puVar4 = (undefined1 *)(*(int *)(unaff_EBP + -0x18) + i);
        }
        *(undefined1 *)(unaff_EBP + 0x20) = *puVar4;
        FUN_0047eab0(unaff_EBP + -0x2c,1,*(undefined4 *)(unaff_EBP + 0x20));
        i = i + 1;
      } while (i < *(uint *)(unaff_EBP + -0x14));
    }
    puVar4 = *(undefined1 **)(unaff_EBP + -0x28);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0057629c;
    }
    DAT_0074dc60 = 0;
    fVar5 = (float10)FUN_00557ce9(puVar4,unaff_EBP + 0x1c,0);
    if ((*(undefined1 **)(unaff_EBP + 0x1c) == puVar4) || (DAT_0074dc60 != 0)) {
      **(uint **)(unaff_EBP + 0x24) = **(uint **)(unaff_EBP + 0x24) | 2;
    }
    else {
      **(double **)(unaff_EBP + 0x28) = (double)fVar5;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_004028f0(unaff_EBP + -0x2c,1);
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = *(undefined4 *)(unaff_EBP + 0x10);
  FUN_004028f0(unaff_EBP + -0x1c,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}


/* ==== 005556b5 FUN_005556b5 ==== */

undefined4 * FUN_005556b5(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int unaff_EBP;
  
  FUN_0055b39c();
  FUN_00555f6d(unaff_EBP + -0x1c,unaff_EBP + 0xc,unaff_EBP + 0x14,*(undefined4 *)(unaff_EBP + 0x1c),
               *(undefined4 *)(unaff_EBP + 0x20));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  cVar3 = FUN_0054e9af((void *)(unaff_EBP + 0xc),(int *)(unaff_EBP + 0x14));
  puVar1 = *(uint **)(unaff_EBP + 0x24);
  if (cVar3 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    FUN_004093c0(*(undefined4 *)(unaff_EBP + 0x28),unaff_EBP + -0x1c,0,0xffffffff);
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = *(undefined4 *)(unaff_EBP + 0x10);
  FUN_004028f0(unaff_EBP + -0x1c,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}


/* ==== 0055573f FUN_0055573f ==== */

undefined4 * FUN_0055573f(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 extraout_ECX;
  int unaff_EBP;
  int i;
  int local_60;
  char *pcStack_5c;
  undefined8 local_58;
  
  FUN_0055b39c();
  *(undefined4 *)(unaff_EBP + -0x18) = extraout_ECX;
  *(undefined1 *)(unaff_EBP + -0x14) = 0;
  if (*(double *)(unaff_EBP + 0x20) < 0.0) {
    *(double *)(unaff_EBP + 0x20) = -*(double *)(unaff_EBP + 0x20);
    *(undefined1 *)(unaff_EBP + -0x14) = 1;
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  while ((1e+35 <= *(double *)(unaff_EBP + 0x20) && (*(uint *)(unaff_EBP + -0x10) < 5000))) {
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 10;
    *(double *)(unaff_EBP + 0x20) = *(double *)(unaff_EBP + 0x20) * 1e-10;
  }
  *(undefined1 *)(unaff_EBP + -0x28) = *(undefined1 *)(unaff_EBP + 0x1f);
  local_58 = 0x5557ac;
  FUN_004028f0(unaff_EBP + -0x28);
  local_58 = *(undefined8 *)(unaff_EBP + 0x20);
  local_60 = unaff_EBP + -0x50;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  pcStack_5c = "%.0Lf";
  iVar3 = FUN_005587a3();
  i = 0;
  if (0 < iVar3) {
    do {
      *(undefined1 *)(unaff_EBP + 0x24) = *(undefined1 *)(unaff_EBP + -0x50 + i);
      local_58 = CONCAT44(*(undefined4 *)(unaff_EBP + 0x24),1);
      pcStack_5c = (char *)0x5557e4;
      FUN_0047eab0(unaff_EBP + -0x28);
      i = i + 1;
    } while (i < iVar3);
  }
  local_58 = CONCAT44(0x30,*(undefined4 *)(unaff_EBP + -0x10));
  pcStack_5c = (char *)0x5557f6;
  FUN_0047eab0(unaff_EBP + -0x28);
  *(int **)(unaff_EBP + 0x24) = &local_60;
  local_60 = CONCAT31(local_60._1_3_,*(undefined1 *)(unaff_EBP + -0x28));
  FUN_004028f0(&local_60,0);
  FUN_004093c0(&local_60,unaff_EBP + -0x28,0,0xffffffff);
  puVar4 = (undefined4 *)
           FUN_005567da(unaff_EBP + 0x20,*(undefined4 *)(unaff_EBP + 0xc),
                        *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
                        *(undefined4 *)(unaff_EBP + 0x18),*(undefined4 *)(unaff_EBP + 0x1c),
                        *(undefined4 *)(unaff_EBP + -0x14));
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  uVar2 = *puVar4;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *puVar1 = uVar2;
  puVar1[1] = puVar4[1];
  local_58 = 0x100555856;
  FUN_004028f0(unaff_EBP + -0x28);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar1;
}


/* ==== 00555869 FUN_00555869 ==== */

undefined4 * FUN_00555869(void)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 extraout_ECX;
  int unaff_EBP;
  byte *pbVar5;
  int i;
  undefined4 local_3c;
  undefined4 uStack_38;
  byte *pbStack_34;
  int iStack_30;
  
  FUN_0055b39c();
  *(undefined4 *)(unaff_EBP + -0x1c) = extraout_ECX;
  iStack_30 = unaff_EBP + -0x10;
  pbStack_34 = (byte *)0x555888;
  uStack_38 = FUN_004d4370(*(undefined4 *)(unaff_EBP + 0x18));
  i = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_30 = 1;
  pbStack_34 = (byte *)0x0;
  local_3c = 0x555898;
  uVar3 = FUN_0054e3e2();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x14) = uVar3;
  iStack_30 = 0x5558aa;
  std::locale::~locale((locale *)(unaff_EBP + -0x10));
  pbVar5 = *(byte **)(*(int *)(unaff_EBP + 0x20) + 4);
  if (pbVar5 == (byte *)0x0) {
    pbVar5 = &DAT_0057629c;
  }
  *(undefined1 *)(unaff_EBP + 0x20) = 0;
  if (*pbVar5 == 0x2d) {
    *(undefined1 *)(unaff_EBP + 0x20) = 1;
    pbVar5 = pbVar5 + 1;
  }
  bVar1 = *pbVar5;
  while ((*(byte *)(*(int *)(*(int *)(unaff_EBP + -0x14) + 0x10) + (uint)bVar1 * 2) >> 2 & 1) != 0)
  {
    bVar1 = pbVar5[i + 1];
    i = i + 1;
  }
  iStack_30 = 0;
  *(undefined1 *)(unaff_EBP + -0x2c) = *(undefined1 *)(unaff_EBP + 0x1b);
  pbStack_34 = (byte *)0x5558f1;
  FUN_004028f0(unaff_EBP + -0x2c);
  uStack_38 = 0x5558fb;
  pbStack_34 = pbVar5;
  iStack_30 = i;
  FUN_00402940(unaff_EBP + -0x2c);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (i == 0) {
    iStack_30 = 0x30;
    pbStack_34 = (byte *)0x1;
    uStack_38 = 0x55590d;
    FUN_0047eab0(unaff_EBP + -0x2c);
  }
  *(undefined4 **)(unaff_EBP + -0x14) = &local_3c;
  local_3c = CONCAT31(local_3c._1_3_,*(undefined1 *)(unaff_EBP + -0x2c));
  FUN_004028f0(&local_3c,0);
  FUN_004093c0(&local_3c,unaff_EBP + -0x2c,0,0xffffffff);
  puVar4 = (undefined4 *)
           FUN_005567da(unaff_EBP + -0x18,*(undefined4 *)(unaff_EBP + 0xc),
                        *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
                        *(undefined4 *)(unaff_EBP + 0x18),*(undefined4 *)(unaff_EBP + 0x1c),
                        *(undefined4 *)(unaff_EBP + 0x20));
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  uVar3 = *puVar4;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_30 = 1;
  *puVar2 = uVar3;
  puVar2[1] = puVar4[1];
  pbStack_34 = (byte *)0x55596e;
  FUN_004028f0(unaff_EBP + -0x2c);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}


/* ==== 00555989 FUN_00555989 ==== */

undefined1 * __thiscall FUN_00555989(void *this,undefined1 *this_val)

{
  char *_Str;
  size_t _strlen_result;
  
  _Str = *(char **)((int)this + 8);
  *this_val = this_val._3_1_;
  FUN_004028f0(this_val,0);
  _strlen_result = _strlen(_Str);
  FUN_00402940(this_val,_Str,_strlen_result);
  return this_val;
}


/* ==== 005559bf FUN_005559bf ==== */

undefined1 * __thiscall FUN_005559bf(void *this,undefined1 *this_val)

{
  char *_Str;
  size_t _strlen_result;
  
  _Str = *(char **)((int)this + 0x10);
  *this_val = this_val._3_1_;
  FUN_004028f0(this_val,0);
  _strlen_result = _strlen(_Str);
  FUN_00402940(this_val,_Str,_strlen_result);
  return this_val;
}


/* ==== 005559f5 FUN_005559f5 ==== */

undefined1 * __thiscall FUN_005559f5(void *this,undefined1 *this_val)

{
  char *_Str;
  size_t _strlen_result;
  
  _Str = *(char **)((int)this + 0x14);
  *this_val = this_val._3_1_;
  FUN_004028f0(this_val,0);
  _strlen_result = _strlen(_Str);
  FUN_00402940(this_val,_Str,_strlen_result);
  return this_val;
}


/* ==== 00555a2b FUN_00555a2b ==== */

undefined1 * __thiscall FUN_00555a2b(void *this,undefined1 *this_val)

{
  char *_Str;
  size_t _strlen_result;
  
  _Str = *(char **)((int)this + 0x18);
  *this_val = this_val._3_1_;
  FUN_004028f0(this_val,0);
  _strlen_result = _strlen(_Str);
  FUN_00402940(this_val,_Str,_strlen_result);
  return this_val;
}


/* ==== 00555a79 FUN_00555a79 ==== */

void FUN_00555a79(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint *in_stack_0000001c;
  int *in_stack_00000020;
  
  piVar2 = in_stack_00000020;
  uVar3 = FUN_00556df8((char *)&param_2,(int *)&stack0x00000010,0,0x17,in_stack_00000020 + 2);
  puVar1 = in_stack_0000001c;
  *in_stack_0000001c = *in_stack_0000001c | uVar3;
  if (*in_stack_0000001c == 0) {
    if ((char)param_3 == '\0') {
      Peek(&param_2);
    }
    if (param_3._1_1_ != ':') goto LAB_00555ad8;
    FUN_0054e379(&param_2);
    uVar3 = FUN_00556df8((char *)&param_2,(int *)&stack0x00000010,0,0x3b,piVar2 + 1);
    *puVar1 = *puVar1 | uVar3;
  }
  else {
LAB_00555ad8:
    *puVar1 = *puVar1 | 2;
  }
  if (*puVar1 == 0) {
    if ((char)param_3 == '\0') {
      Peek(&param_2);
    }
    if (param_3._1_1_ == ':') {
      FUN_0054e379(&param_2);
      uVar3 = FUN_00556df8((char *)&param_2,(int *)&stack0x00000010,0,0x3b,piVar2);
      *puVar1 = *puVar1 | uVar3;
      goto LAB_00555b15;
    }
  }
  *puVar1 = *puVar1 | 2;
LAB_00555b15:
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}


/* ==== 00555b2a FUN_00555b2a ==== */

void __thiscall
FUN_00555b2a(void *this,undefined4 *param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6,undefined4 param_7,uint *param_8,int param_9)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  uint uVar5;
  void *local_c;
  void *pvStack_8;
  
  iVar2 = param_9;
  puVar1 = param_8;
  local_c = this;
  pvStack_8 = this;
  puVar4 = (undefined4 *)
           (**(code **)(*(int *)this + 0x14))
                     (&local_c,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  param_3 = *puVar4;
  param_4 = puVar4[1];
  if (*puVar1 == 0) {
    if ((char)param_4 == '\0') {
      Peek(&param_3);
    }
    if (param_4._1_1_ != ' ') goto LAB_00555b9c;
    FUN_0054e379(&param_3);
    uVar5 = FUN_00556df8((char *)&param_3,&param_5,1,0x1f,(int *)(iVar2 + 0xc));
    *puVar1 = *puVar1 | uVar5;
  }
  else {
LAB_00555b9c:
    *puVar1 = *puVar1 | 2;
  }
  if (*puVar1 == 0) {
    if ((char)param_4 == '\0') {
      Peek(&param_3);
    }
    if (param_4._1_1_ == ',') {
      FUN_0054e379(&param_3);
      cVar3 = FUN_0054e9af(&param_3,&param_5);
      if (cVar3 == '\0') {
        if ((char)param_4 == '\0') {
          Peek(&param_3);
        }
        if (param_4._1_1_ == ' ') {
          FUN_0054e379(&param_3);
          puVar4 = (undefined4 *)
                   (**(code **)(*(int *)this + 0x18))
                             (&local_c,param_3,param_4,param_5,param_6,param_7,puVar1,iVar2);
          param_3 = *puVar4;
          param_4 = puVar4[1];
          goto LAB_00555c17;
        }
      }
    }
  }
  *puVar1 = *puVar1 | 2;
LAB_00555c17:
  cVar3 = FUN_0054e9af(&param_3,&param_5);
  if (cVar3 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  *param_2 = param_3;
  param_2[1] = param_4;
  return;
}


/* ==== 00555c3f FUN_00555c3f ==== */

void __thiscall FUN_00555c3f(void *this,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint *in_stack_0000001c;
  int in_stack_00000020;
  
  iVar1 = FUN_0054e7ac(&param_3,&stack0x00000010,0,*(undefined4 *)((int)this + 8));
  if (iVar1 < 0) {
    *in_stack_0000001c = *in_stack_0000001c | 2;
  }
  else {
    *(int *)(in_stack_00000020 + 0x18) = iVar1 >> 1;
  }
  *param_2 = param_3;
  param_2[1] = param_4;
  return;
}


/* ==== 00555c7d FUN_00555c7d ==== */

void __thiscall FUN_00555c7d(void *this,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint *in_stack_0000001c;
  int in_stack_00000020;
  
  iVar1 = FUN_0054e7ac(&param_3,&stack0x00000010,0,*(undefined4 *)((int)this + 0xc));
  if (iVar1 < 0) {
    *in_stack_0000001c = *in_stack_0000001c | 2;
  }
  else {
    *(int *)(in_stack_00000020 + 0x10) = iVar1 >> 1;
  }
  *param_2 = param_3;
  param_2[1] = param_4;
  return;
}


/* ==== 00555cbb FUN_00555cbb ==== */

void __thiscall
FUN_00555cbb(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint *in_stack_0000001c;
  int in_stack_00000020;
  int local_8;
  
  uVar1 = FUN_00556df8((char *)&param_3,(int *)&stack0x00000010,0,0x7f3,&local_8);
  *in_stack_0000001c = *in_stack_0000001c | uVar1;
  if ((*in_stack_0000001c & 2) == 0) {
    if (local_8 < 0x76c) {
      if (0x87 < local_8) {
        *in_stack_0000001c = *in_stack_0000001c | 2;
      }
    }
    else {
      local_8 = local_8 + -0x76c;
    }
  }
  if ((*in_stack_0000001c & 2) == 0) {
    *(int *)(in_stack_00000020 + 0x14) = local_8;
  }
  *param_2 = param_3;
  param_2[1] = param_4;
  return;
}


/* ==== 00555d21 FUN_00555d21 ==== */

undefined4 * FUN_00555d21(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int j;
  int extraout_ECX;
  int unaff_EBP;
  int i;
  
  FUN_0055b39c();
  *(char (*) [4])(unaff_EBP + -0x14) = (char  [4])0x782521;
  *(undefined1 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(unaff_EBP + -0x24) = *(undefined1 *)(unaff_EBP + 0x1f);
  FUN_004028f0(unaff_EBP + -0x24,0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(char *)(unaff_EBP + 0x20) == '\0') {
    *(undefined1 *)(unaff_EBP + -0x12) = *(undefined1 *)(unaff_EBP + 0x1c);
  }
  else {
    *(char *)(unaff_EBP + -0x12) = *(char *)(unaff_EBP + 0x20);
    *(undefined1 *)(unaff_EBP + -0x11) = *(undefined1 *)(unaff_EBP + 0x1c);
  }
  i = 0x10;
  while( true ) {
    FUN_0047eab0(unaff_EBP + -0x24,i,0);
    uVar2 = *(undefined4 *)(extraout_ECX + 8);
    *(undefined4 *)(unaff_EBP + 0x1c) = *(undefined4 *)(unaff_EBP + -0x1c);
    FUN_00471de0(unaff_EBP + -0x24);
    j = FUN_0055c701(*(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + 0x1c),
                     unaff_EBP + -0x14,*(undefined4 *)(unaff_EBP + 0x18),uVar2);
    if (j != 0) break;
    i = i * 2;
  }
  FUN_00471de0(unaff_EBP + -0x24);
  i = *(int *)(unaff_EBP + -0x20);
  while (j = j + -1, j != 0) {
    puVar1 = (undefined1 *)(i + 1);
    i = i + 1;
    *(undefined1 *)(unaff_EBP + 0x1c) = *puVar1;
    FUN_004d60a0(unaff_EBP + 0xc,*(undefined4 *)(unaff_EBP + 0x1c));
  }
  puVar3 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *puVar3 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar3[1] = *(undefined4 *)(unaff_EBP + 0x10);
  FUN_004028f0(unaff_EBP + -0x24,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar3;
}


/* ==== 00555dfa FUN_00555dfa ==== */

void * __thiscall FUN_00555dfa(void *this,byte param_2)

{
  FUN_00555e16();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 00555e16 FUN_00555e16 ==== */

void __thiscall FUN_00555e16(void *this)

{
  *(undefined ***)this = &PTR_FUN_00579550;
  FUN_0054b339(*(undefined4 *)((int)this + 8));
  FUN_0054b339(*(undefined4 *)((int)this + 0xc));
  *(undefined ***)this = &PTR_LAB_00579044;
  return;
}


/* ==== 00555e39 FUN_00555e39 ==== */

void * __thiscall FUN_00555e39(void *this,byte param_2)

{
  thunk_FUN_00555eca();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 00555e55 FUN_00555e55 ==== */

void * __thiscall FUN_00555e55(void *this,byte param_2)

{
  FUN_00555e71();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 00555e71 FUN_00555e71 ==== */

void __thiscall FUN_00555e71(void *this)

{
  *(undefined ***)this = &PTR_FUN_005794b8;
  FUN_0054b339(*(undefined4 *)((int)this + 8));
  FUN_0054b339(*(undefined4 *)((int)this + 0xc));
  *(undefined ***)this = &PTR_LAB_00579044;
  return;
}


/* ==== 00555e94 FUN_00555e94 ==== */

void * __thiscall FUN_00555e94(void *this,byte param_2)

{
  ~time_put<>();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 00555eb0 ~time_put<> ==== */

/* Library Function - Multiple Matches With Same Base Name
    protected: virtual __thiscall std::time_put<char,class std::ostreambuf_iterator<char,struct
   std::char_traits<char> > >::~time_put<char,class std::ostreambuf_iterator<char,struct
   std::char_traits<char> > >(void)
    protected: virtual __thiscall std::time_put<unsigned short,class
   std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >
   >::~time_put<unsigned short,class std::ostreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > >(void)
    protected: virtual __thiscall std::time_put<wchar_t,class
   std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > >::~time_put<wchar_t,class
   std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > >(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall ~time_put<>(void *this)

{
  *(undefined ***)this = &PTR_FUN_005794ac;
  FUN_00559d4e(*(undefined4 *)((int)this + 8));
  *(undefined ***)this = &PTR_LAB_00579044;
  return;
}


/* ==== 00555eca FUN_00555eca ==== */

void __thiscall FUN_00555eca(void *this)

{
  *(undefined ***)this = &PTR_FUN_00579578;
  FUN_0054b339(*(undefined4 *)((int)this + 8));
  FUN_0054b339(*(undefined4 *)((int)this + 0x10));
  FUN_0054b339(*(undefined4 *)((int)this + 0x14));
  FUN_0054b339(*(undefined4 *)((int)this + 0x18));
  *(undefined ***)this = &PTR_LAB_00579044;
  return;
}


/* ==== 00555efe FUN_00555efe ==== */

void * __thiscall FUN_00555efe(void *this,byte param_2)

{
  FUN_00555eca();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 00555f1a thunk_FUN_00555eca ==== */

void __thiscall thunk_FUN_00555eca(void *this)

{
  *(undefined ***)this = &PTR_FUN_00579578;
  FUN_0054b339(*(undefined4 *)((int)this + 8));
  FUN_0054b339(*(undefined4 *)((int)this + 0x10));
  FUN_0054b339(*(undefined4 *)((int)this + 0x14));
  FUN_0054b339(*(undefined4 *)((int)this + 0x18));
  *(undefined ***)this = &PTR_LAB_00579044;
  return;
}


/* ==== 00555f1f FUN_00555f1f ==== */

void __thiscall FUN_00555f1f(void *this,uint param_2)

{
  if (*(uint *)((int)this + 8) < param_2) {
    FUN_0047eab0(this,param_2 - *(uint *)((int)this + 8),0);
  }
  else {
    FUN_0040f800(this,param_2,0xffffffff);
  }
  return;
}


/* ==== 00555f45 FUN_00555f45 ==== */

void __thiscall FUN_00555f45(void *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0054e986(s_no_005b2d3c);
  *(undefined4 *)((int)this + 8) = uVar1;
  uVar1 = FUN_0054e986((char *)&PTR_DAT_005b2d40);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return;
}


/* ==== 00555f6d FUN_00555f6d ==== */

undefined1 * FUN_00555f6d(void)

{
  undefined4 *this;
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int *this_val_2;
  undefined4 *puVar5;
  char *pcVar6;
  int this_val;
  int unaff_EBP;
  uint j;
  uint uVar7;
  int i;
  char *pcVar8;
  undefined1 *this_val_3;
  
  FUN_0055b39c();
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  if (*(char *)(unaff_EBP + 0x14) == '\0') {
    uVar4 = FUN_004d4370(*(undefined4 *)(unaff_EBP + 0x18),unaff_EBP + -0x48);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    this_val_2 = (int *)FUN_00557425(uVar4,0,1);
    *(int **)(unaff_EBP + -0x28) = this_val_2;
  }
  else {
    uVar4 = FUN_004d4370(*(undefined4 *)(unaff_EBP + 0x18),unaff_EBP + -0x48);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    this_val_2 = (int *)FUN_005574e8(uVar4,0,1);
    *(int **)(unaff_EBP + -0x28) = this_val_2;
  }
  std::locale::~locale((locale *)(unaff_EBP + -0x48));
  uVar4 = FUN_004d4370(*(undefined4 *)(unaff_EBP + 0x18),unaff_EBP + -0x70);
  *(undefined4 *)(unaff_EBP + -4) = 2;
  uVar4 = FUN_0054e3e2(uVar4,0,1);
  *(undefined4 *)(unaff_EBP + -0x30) = uVar4;
  std::locale::~locale((locale *)(unaff_EBP + -0x70));
  *(undefined1 *)(unaff_EBP + 0x17) = 0;
  *(undefined1 *)(unaff_EBP + -0xd) = 0;
  *(undefined1 *)(unaff_EBP + -0x40) = *(undefined1 *)(unaff_EBP + 0x17);
  FUN_004028f0(unaff_EBP + -0x40,0);
  *(undefined4 *)(unaff_EBP + -4) = 3;
  *(undefined1 *)(unaff_EBP + -0x6c) = *(undefined1 *)(unaff_EBP + 0x17);
  FUN_004028f0(unaff_EBP + -0x6c,0);
  i = *this_val_2;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puVar5 = (undefined4 *)(**(code **)(i + 0x24))(unaff_EBP + -0x44);
  this = *(undefined4 **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x78) = *puVar5;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  do {
    j = *(uint *)(unaff_EBP + -0x2c);
    if (3 < j) break;
    cVar2 = *(char *)(unaff_EBP + -0x78 + j);
    if (cVar2 == '$') {
      FUN_0055210f(this_val_2,unaff_EBP + -0x5c);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if ((*(byte *)(*(int *)(unaff_EBP + 0x18) + 0xc) & 8) == 0) {
        if (((*(int *)(unaff_EBP + -0x2c) != 3) || (*(int *)(unaff_EBP + -0x38) != 0)) &&
           (cVar2 = FUN_0054e9af(this,*(int **)(unaff_EBP + 0x10)), cVar2 == '\0')) {
          if (*(char *)(this + 1) == '\0') {
            Peek(this);
          }
          pcVar8 = *(char **)(unaff_EBP + -0x58);
          if (pcVar8 == (char *)0x0) {
            pcVar8 = "";
          }
          if (*(char *)((int)this + 5) == *pcVar8) goto LAB_0055665b;
        }
        FUN_0040f800(unaff_EBP + -0x5c,0,0xffffffff);
      }
LAB_0055665b:
      FUN_00471de0(unaff_EBP + -0x5c);
      for (pcVar8 = *(char **)(unaff_EBP + -0x58);
          (cVar2 = FUN_0054e9af(this,*(int **)(unaff_EBP + 0x10)), cVar2 == '\0' &&
          (FUN_00471de0(unaff_EBP + -0x5c),
          pcVar8 != (char *)(-(uint)(*(int *)(unaff_EBP + -0x58) != 0) &
                            *(int *)(unaff_EBP + -0x54) + *(int *)(unaff_EBP + -0x58))));
          pcVar8 = pcVar8 + 1) {
        if (*(char *)(this + 1) == '\0') {
          Peek(this);
        }
        if (*(char *)((int)this + 5) != *pcVar8) break;
        FUN_0054e379(this);
      }
      FUN_00471de0(unaff_EBP + -0x5c);
      if (pcVar8 != (char *)(-(uint)(*(int *)(unaff_EBP + -0x58) != 0) &
                            *(int *)(unaff_EBP + -0x54) + *(int *)(unaff_EBP + -0x58))) {
        *(undefined1 *)(unaff_EBP + 0x17) = 1;
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_004028f0(unaff_EBP + -0x5c,1);
    }
    else if (cVar2 == '+') {
      cVar2 = FUN_0054e9af(this,*(int **)(unaff_EBP + 0x10));
      if (cVar2 == '\0') {
        i = FUN_00556fac(this_val_2,unaff_EBP + -0xc4);
        i = *(int *)(i + 8);
        *(undefined1 *)(unaff_EBP + -4) = 6;
        if (i == 0) {
LAB_005564bb:
          *(undefined1 *)(unaff_EBP + 0xf) = 0;
        }
        else {
          this_val = FUN_00556fac(this_val_2,unaff_EBP + -0xe4);
          i = *(int *)(this_val + 4);
          *(undefined1 *)(unaff_EBP + -4) = 7;
          if (i == 0) {
            pcVar8 = "";
          }
          else {
            FUN_00471de0(this_val);
            pcVar8 = *(char **)(this_val + 4);
          }
          if (*(char *)(this + 1) == '\0') {
            Peek(this);
          }
          *(bool *)(unaff_EBP + 0xf) = *pcVar8 == *(char *)((int)this + 5);
          FUN_004028f0(unaff_EBP + -0xe4,1);
          if (*(char *)(unaff_EBP + 0xf) == '\0') goto LAB_005564bb;
          *(undefined1 *)(unaff_EBP + 0xf) = 1;
        }
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_004028f0(unaff_EBP + -0xc4,1);
        if (*(char *)(unaff_EBP + 0xf) == '\0') {
          i = FUN_00556fc3(this_val_2,unaff_EBP + -0xd4);
          i = *(int *)(i + 8);
          *(undefined1 *)(unaff_EBP + -4) = 9;
          if (i == 0) {
LAB_00556583:
            *(undefined1 *)(unaff_EBP + 0xf) = 0;
          }
          else {
            this_val = FUN_00556fc3(this_val_2,unaff_EBP + -0xb4);
            i = *(int *)(this_val + 4);
            *(undefined1 *)(unaff_EBP + -4) = 10;
            if (i == 0) {
              pcVar8 = "";
            }
            else {
              FUN_00471de0(this_val);
              pcVar8 = *(char **)(this_val + 4);
            }
            if (*(char *)(this + 1) == '\0') {
              Peek(this);
            }
            *(bool *)(unaff_EBP + 0xf) = *pcVar8 == *(char *)((int)this + 5);
            FUN_004028f0(unaff_EBP + -0xb4,1);
            if (*(char *)(unaff_EBP + 0xf) == '\0') goto LAB_00556583;
            *(undefined1 *)(unaff_EBP + 0xf) = 1;
          }
          *(undefined1 *)(unaff_EBP + -4) = 4;
          FUN_004028f0(unaff_EBP + -0xd4,1);
          if (*(char *)(unaff_EBP + 0xf) == '\0') goto LAB_005565dd;
          FUN_0054e379(this);
          uVar4 = FUN_00556fc3(this_val_2,unaff_EBP + -0xf4);
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          FUN_004093c0(unaff_EBP + -0x40,uVar4,0,0xffffffff);
          *(undefined1 *)(unaff_EBP + -0xd) = 1;
          *(undefined1 *)(unaff_EBP + -4) = 4;
          i = unaff_EBP + -0xf4;
        }
        else {
          FUN_0054e379(this);
          uVar4 = FUN_00556fac(this_val_2,unaff_EBP + -0xa4);
          *(undefined1 *)(unaff_EBP + -4) = 8;
          FUN_004093c0(unaff_EBP + -0x40,uVar4,0,0xffffffff);
          *(undefined1 *)(unaff_EBP + -4) = 4;
          i = unaff_EBP + -0xa4;
        }
        FUN_004028f0(i,1);
      }
LAB_005565dd:
      if (*(int *)(unaff_EBP + -0x38) == 1) {
        FUN_0040f800(unaff_EBP + -0x40,0,0xffffffff);
      }
    }
    else {
      if (cVar2 != 'v') {
        if (j != 3) {
          while (cVar2 = FUN_0054e9af(this,*(int **)(unaff_EBP + 0x10)), cVar2 == '\0') {
            if (*(char *)(this + 1) == '\0') {
              Peek(this);
            }
            if ((*(byte *)(*(int *)(*(int *)(unaff_EBP + -0x30) + 0x10) +
                          (uint)*(byte *)((int)this + 5) * 2) & 0x48) == 0) break;
            FUN_0054e379(this);
          }
        }
        goto LAB_005566dc;
      }
      i = *this_val_2;
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      uVar4 = (**(code **)(i + 0x1c))();
      *(undefined4 *)(unaff_EBP + -0x4c) = uVar4;
      FUN_00553771(this_val_2,unaff_EBP + -0x94);
      pcVar8 = *(char **)(unaff_EBP + -0x90);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      if (pcVar8 == (char *)0x0) {
        pcVar8 = "";
      }
      if (*pcVar8 < '\x01') {
        while (cVar2 = FUN_0054e9af(this,*(int **)(unaff_EBP + 0x10)), cVar2 == '\0') {
          if (*(char *)(this + 1) == '\0') {
            Peek(this);
          }
          if ((*(byte *)(*(int *)(*(int *)(unaff_EBP + -0x30) + 0x10) +
                        (uint)*(byte *)((int)this + 5) * 2) >> 2 & 1) == 0) break;
          if (*(char *)(this + 1) == '\0') {
            Peek(this);
          }
          uVar4 = *this;
          uVar1 = this[1];
          FUN_0054e379(this);
          *(undefined4 *)(unaff_EBP + -0x84) = uVar4;
          *(undefined4 *)(unaff_EBP + -0x80) = uVar1;
          if ((char)uVar1 == '\0') {
            Peek(unaff_EBP + -0x84);
          }
          FUN_0047eab0(unaff_EBP + -0x6c,1,*(undefined4 *)(unaff_EBP + -0x7f));
        }
LAB_00556355:
        cVar2 = FUN_0054e9af(this,*(int **)(unaff_EBP + 0x10));
        if (cVar2 == '\0') {
          if (*(char *)(this + 1) == '\0') {
            Peek(this);
          }
          cVar2 = (**(code **)(**(int **)(unaff_EBP + -0x28) + 4))();
          if (*(char *)((int)this + 5) != cVar2) goto LAB_005563f8;
          FUN_0054e379(this);
          cVar2 = FUN_0054e9af(this,*(int **)(unaff_EBP + 0x10));
          if (cVar2 != '\0') goto LAB_005563f8;
          i = *(int *)(unaff_EBP + -0x4c);
          do {
            if (*(char *)(this + 1) == '\0') {
              Peek(this);
            }
            if ((*(byte *)(*(int *)(*(int *)(unaff_EBP + -0x30) + 0x10) +
                          (uint)*(byte *)((int)this + 5) * 2) >> 2 & 1) == 0) break;
            if (*(int *)(unaff_EBP + -0x24) < i) {
              if (*(char *)(this + 1) == '\0') {
                Peek(this);
              }
              *(undefined1 *)(unaff_EBP + -0x44) = *(undefined1 *)((int)this + 5);
              FUN_0047eab0(unaff_EBP + -0x6c,1,*(undefined4 *)(unaff_EBP + -0x44));
              *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
            }
            FUN_0054e379(this);
            cVar2 = FUN_0054e9af(this,*(int **)(unaff_EBP + 0x10));
          } while (cVar2 == '\0');
        }
        else {
LAB_005563f8:
          i = *(int *)(unaff_EBP + -0x4c);
        }
        if (*(int *)(unaff_EBP + -100) == 0) {
          *(undefined1 *)(unaff_EBP + 0x17) = 1;
        }
        else if (*(int *)(unaff_EBP + -0x24) < i) {
          i = i - *(int *)(unaff_EBP + -0x24);
          do {
            FUN_0047eab0(unaff_EBP + -0x6c,1,0x30);
            i = i + -1;
          } while (i != 0);
        }
      }
      else {
        uVar3 = (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
        *(undefined1 *)(unaff_EBP + 0xf) = uVar3;
        j = 0;
        *(undefined1 *)(unaff_EBP + -0x20) = *(undefined1 *)(unaff_EBP + 0x17);
        FUN_004028f0(unaff_EBP + -0x20,0);
        FUN_0054e333((void *)(unaff_EBP + -0x20),1,'\0');
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        cVar2 = FUN_0054e9af(this,*(int **)(unaff_EBP + 0x10));
        if (cVar2 == '\0') {
          do {
            if (*(char *)(this + 1) == '\0') {
              Peek(this);
            }
            if ((*(byte *)(*(int *)(*(int *)(unaff_EBP + -0x30) + 0x10) +
                          (uint)*(byte *)((int)this + 5) * 2) >> 2 & 1) == 0) {
              if ((*(uint *)(unaff_EBP + -0x18) < j) || (*(int *)(unaff_EBP + -0x1c) == 0)) {
                pcVar8 = "";
              }
              else {
                FUN_00471de0(unaff_EBP + -0x20);
                pcVar8 = (char *)(*(int *)(unaff_EBP + -0x1c) + j);
              }
              if (*pcVar8 == '\0') break;
              if (*(char *)(this + 1) == '\0') {
                Peek(this);
              }
              if (*(char *)((int)this + 5) != *(char *)(unaff_EBP + 0xf)) break;
              FUN_0047eab0(unaff_EBP + -0x20,1,0);
              j = j + 1;
            }
            else {
              if (*(char *)(this + 1) == '\0') {
                Peek(this);
              }
              *(undefined1 *)(unaff_EBP + -0x74) = *(undefined1 *)((int)this + 5);
              FUN_0047eab0(unaff_EBP + -0x6c,1,*(undefined4 *)(unaff_EBP + -0x74));
              if ((*(uint *)(unaff_EBP + -0x18) < j) || (*(int *)(unaff_EBP + -0x1c) == 0)) {
                pcVar8 = "";
              }
              else {
                FUN_00471de0(unaff_EBP + -0x20);
                pcVar8 = (char *)(*(int *)(unaff_EBP + -0x1c) + j);
              }
              if (*pcVar8 != '\x7f') {
                if ((*(uint *)(unaff_EBP + -0x18) < j) || (*(int *)(unaff_EBP + -0x1c) == 0)) {
                  pcVar8 = "";
                }
                else {
                  FUN_00471de0(unaff_EBP + -0x20);
                  pcVar8 = (char *)(*(int *)(unaff_EBP + -0x1c) + j);
                }
                *pcVar8 = *pcVar8 + '\x01';
              }
            }
            FUN_0054e379(this);
            cVar2 = FUN_0054e9af(this,*(int **)(unaff_EBP + 0x10));
          } while (cVar2 == '\0');
          if (j != 0) {
            if ((*(uint *)(unaff_EBP + -0x18) < j) || (*(int *)(unaff_EBP + -0x1c) == 0)) {
              pcVar8 = "";
            }
            else {
              FUN_00471de0(unaff_EBP + -0x20);
              pcVar8 = (char *)(*(int *)(unaff_EBP + -0x1c) + j);
            }
            if (*pcVar8 < '\x01') {
              *(undefined1 *)(unaff_EBP + 0x17) = 1;
            }
            else {
              j = j + 1;
            }
          }
        }
        pcVar8 = *(char **)(unaff_EBP + -0x90);
        if (pcVar8 == (char *)0x0) {
          pcVar8 = "";
        }
        if (*(char *)(unaff_EBP + 0x17) == '\0') {
          do {
            if ((j == 0) || (*pcVar8 == '\x7f')) break;
            uVar7 = j - 1;
            if (uVar7 == 0) {
LAB_005562f2:
              if (uVar7 == 0) {
                if (*(int *)(unaff_EBP + -0x1c) == 0) {
                  pcVar6 = "";
                }
                else {
                  FUN_00471de0(unaff_EBP + -0x20);
                  pcVar6 = *(char **)(unaff_EBP + -0x1c);
                }
                if (*pcVar8 < *pcVar6) goto LAB_0055631a;
              }
              if ('\0' < pcVar8[1]) {
                pcVar8 = pcVar8 + 1;
              }
            }
            else {
              if ((*(uint *)(unaff_EBP + -0x18) < uVar7) || (*(int *)(unaff_EBP + -0x1c) == 0)) {
                pcVar6 = "";
              }
              else {
                FUN_00471de0(unaff_EBP + -0x20);
                pcVar6 = (char *)(*(int *)(unaff_EBP + -0x1c) + uVar7);
              }
              if (*pcVar8 == *pcVar6) goto LAB_005562f2;
LAB_0055631a:
              *(undefined1 *)(unaff_EBP + 0x17) = 1;
            }
            j = j - 2;
          } while (*(char *)(unaff_EBP + 0x17) == '\0');
          if (*(char *)(unaff_EBP + 0x17) == '\0') {
            *(undefined1 *)(unaff_EBP + -4) = 0xc;
            FUN_004028f0(unaff_EBP + -0x20,1);
            goto LAB_00556355;
          }
        }
        FUN_004028f0(unaff_EBP + -0x20,1);
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_004028f0(unaff_EBP + -0x94,1);
      this_val_2 = *(int **)(unaff_EBP + -0x28);
    }
LAB_005566dc:
    *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 1;
  } while (*(char *)(unaff_EBP + 0x17) == '\0');
  if (*(char *)(unaff_EBP + 0x17) == '\0') {
    if (*(int *)(unaff_EBP + -0x38) != 0) {
      FUN_00471de0(unaff_EBP + -0x40);
      pcVar8 = *(char **)(unaff_EBP + -0x3c);
      while (cVar2 = FUN_0054e9af(this,*(int **)(unaff_EBP + 0x10)), cVar2 == '\0') {
        pcVar8 = pcVar8 + 1;
        FUN_00471de0(unaff_EBP + -0x40);
        if (pcVar8 == (char *)(-(uint)(*(int *)(unaff_EBP + -0x3c) != 0) &
                              *(int *)(unaff_EBP + -0x3c) + *(int *)(unaff_EBP + -0x38))) break;
        if (*(char *)(this + 1) == '\0') {
          Peek(this);
        }
        if (*(char *)((int)this + 5) != *pcVar8) break;
        FUN_0054e379(this);
      }
      FUN_00471de0(unaff_EBP + -0x40);
      if (pcVar8 != (char *)(-(uint)(*(int *)(unaff_EBP + -0x3c) != 0) &
                            *(int *)(unaff_EBP + -0x3c) + *(int *)(unaff_EBP + -0x38)))
      goto LAB_0055676b;
    }
    if (*(char *)(unaff_EBP + -0xd) != '\0') {
      FUN_00556f2d((void *)(unaff_EBP + -0x6c),0,1,'-');
    }
  }
  else {
LAB_0055676b:
    FUN_0040f800(unaff_EBP + -0x6c,0,0xffffffff);
  }
  this_val_3 = *(undefined1 **)(unaff_EBP + 8);
  *this_val_3 = *(undefined1 *)(unaff_EBP + -0x6c);
  FUN_004028f0(this_val_3,0);
  FUN_004093c0(this_val_3,unaff_EBP + -0x6c,0,0xffffffff);
  FUN_004028f0(unaff_EBP + -0x6c,1);
  FUN_004028f0(unaff_EBP + -0x40,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return this_val_3;
}


/* ==== 005567da FUN_005567da ==== */

undefined4 * FUN_005567da(void)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int *this_val;
  uint i;
  char *pcVar6;
  undefined4 *puVar7;
  int j;
  uint uVar8;
  undefined4 uVar9;
  int unaff_EBP;
  undefined1 *puVar10;
  int k;
  char *pcVar11;
  
  FUN_0055b39c();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(char *)(unaff_EBP + 0x14) == '\0') {
    uVar5 = FUN_004d4370(*(undefined4 *)(unaff_EBP + 0x18),unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    this_val = (int *)FUN_00557425(uVar5,0,1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(int **)(unaff_EBP + -0x2c) = this_val;
  }
  else {
    uVar5 = FUN_004d4370(*(undefined4 *)(unaff_EBP + 0x18),unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    this_val = (int *)FUN_005574e8(uVar5,0,1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(int **)(unaff_EBP + -0x2c) = this_val;
  }
  std::locale::~locale((locale *)(unaff_EBP + -0x28));
  i = (**(code **)(*this_val + 0x1c))();
  *(uint *)(unaff_EBP + 0x14) = i;
  FUN_00553771(this_val,unaff_EBP + -0xa4);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (i < *(uint *)(unaff_EBP + 0x2c)) {
    pcVar6 = *(char **)(unaff_EBP + -0xa0);
    pcVar11 = "";
    if (pcVar6 == (char *)0x0) {
      pcVar6 = "";
    }
    if ('\0' < *pcVar6) {
      uVar4 = (**(code **)(*this_val + 8))();
      *(undefined1 *)(unaff_EBP + -0x10) = uVar4;
      if (*(int *)(unaff_EBP + -0xa0) != 0) {
        pcVar11 = *(char **)(unaff_EBP + -0xa0);
      }
      i = *(int *)(unaff_EBP + 0x2c) - *(int *)(unaff_EBP + 0x14);
      while (((cVar1 = *pcVar11, cVar1 != '\x7f' && ('\0' < cVar1)) && ((uint)(int)cVar1 < i))) {
        i = i - (int)cVar1;
        FUN_00556f2d((void *)(unaff_EBP + 0x24),i,1,(char)*(undefined4 *)(unaff_EBP + -0x10));
        if ('\0' < pcVar11[1]) {
          pcVar11 = pcVar11 + 1;
        }
      }
    }
  }
  *(undefined1 *)(unaff_EBP + -0x44) = *(undefined1 *)(unaff_EBP + 0x17);
  FUN_004028f0(unaff_EBP + -0x44,0);
  j = *this_val;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(char *)(unaff_EBP + 0x20) == '\0') {
    puVar7 = (undefined4 *)(**(code **)(j + 0x20))(unaff_EBP + 0x20);
    *(undefined4 *)(unaff_EBP + -0x10) = *puVar7;
    uVar5 = FUN_00556fac(this_val,unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_004093c0(unaff_EBP + -0x44,uVar5,0,0xffffffff);
  }
  else {
    puVar7 = (undefined4 *)(**(code **)(j + 0x24))(unaff_EBP + 0x20);
    *(undefined4 *)(unaff_EBP + -0x10) = *puVar7;
    uVar5 = FUN_00556fc3(this_val,unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_004093c0(unaff_EBP + -0x44,uVar5,0,0xffffffff);
  }
  FUN_004028f0(unaff_EBP + -0x20,1);
  *(undefined1 *)(unaff_EBP + -0x90) = *(undefined1 *)(unaff_EBP + 0x17);
  FUN_004028f0(unaff_EBP + -0x90,0);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if ((*(uint *)(*(int *)(unaff_EBP + 0x18) + 0xc) & 8) != 0) {
    uVar5 = FUN_0055210f(this_val,unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_004093c0(unaff_EBP + -0x90,uVar5,0,0xffffffff);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_004028f0(unaff_EBP + -0x20,1);
  }
  bVar3 = false;
  uVar8 = 0;
  i = 0;
  do {
    cVar1 = *(char *)(unaff_EBP + -0x10 + i);
    if (cVar1 == ' ') {
      bVar3 = true;
    }
    else if (cVar1 == '$') {
      uVar8 = uVar8 + *(int *)(unaff_EBP + -0x88);
    }
    else if (cVar1 == '+') {
      uVar8 = uVar8 + *(int *)(unaff_EBP + -0x3c);
    }
    else if (cVar1 == 'v') {
      uVar2 = *(uint *)(unaff_EBP + 0x14);
      if (uVar2 < *(uint *)(unaff_EBP + 0x2c)) {
        j = 0;
      }
      else {
        j = (uVar2 - *(int *)(unaff_EBP + 0x2c)) + 1;
      }
      uVar8 = uVar8 + (uint)(uVar2 != 0) + *(int *)(unaff_EBP + 0x2c) + j;
    }
    i = i + 1;
  } while (i < 4);
  i = *(uint *)(*(int *)(unaff_EBP + 0x18) + 0x14);
  if (((int)i < 1) || (i <= uVar8)) {
    j = 0;
  }
  else {
    j = i - uVar8;
  }
  i = *(uint *)(*(int *)(unaff_EBP + 0x18) + 0xc);
  *(int *)(unaff_EBP + 0x20) = j;
  i = i & 0x1c0;
  *(uint *)(unaff_EBP + -0x80) = i;
  if ((i != 0x40) && ((i != 0x100 || (!bVar3)))) {
    *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + 0xc);
    *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + 0x10);
    for (; j != 0; j = j + -1) {
      FUN_004d60a0(unaff_EBP + -0x34,*(undefined4 *)(unaff_EBP + 0x1c));
    }
    *(undefined4 *)(unaff_EBP + 0x20) = 0;
    *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x34);
    *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x30);
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  uVar5 = *(undefined4 *)(unaff_EBP + 0xc);
  uVar9 = *(undefined4 *)(unaff_EBP + 0x10);
  do {
    cVar1 = *(char *)(unaff_EBP + -0x10 + *(int *)(unaff_EBP + -0x24));
    if (cVar1 == ' ') {
      if (i == 0x100) {
        j = *(int *)(unaff_EBP + 0x20);
        *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
        *(undefined4 *)(unaff_EBP + -0x14) = uVar9;
        for (; j != 0; j = j + -1) {
          FUN_004d60a0(unaff_EBP + -0x18,*(undefined4 *)(unaff_EBP + 0x1c));
        }
        uVar5 = *(undefined4 *)(unaff_EBP + -0x18);
        uVar9 = *(undefined4 *)(unaff_EBP + -0x14);
        *(undefined4 *)(unaff_EBP + 0x20) = 0;
        *(undefined4 *)(unaff_EBP + 0xc) = uVar5;
        *(undefined4 *)(unaff_EBP + 0x10) = uVar9;
      }
      goto LAB_00556cc2;
    }
    if (cVar1 == '$') {
      j = *(int *)(unaff_EBP + -0x88);
      FUN_00471de0(unaff_EBP + -0x90);
      puVar10 = *(undefined1 **)(unaff_EBP + -0x8c);
      *(undefined4 *)(unaff_EBP + -0x5c) = *(undefined4 *)(unaff_EBP + 0xc);
      *(undefined4 *)(unaff_EBP + -0x58) = *(undefined4 *)(unaff_EBP + 0x10);
      for (; j != 0; j = j + -1) {
        FUN_004d60a0(unaff_EBP + -0x5c,*puVar10);
        puVar10 = puVar10 + 1;
      }
      uVar5 = *(undefined4 *)(unaff_EBP + -0x5c);
      uVar9 = *(undefined4 *)(unaff_EBP + -0x58);
      *(undefined4 *)(unaff_EBP + 0xc) = uVar5;
LAB_00556b73:
      *(undefined4 *)(unaff_EBP + 0x10) = uVar9;
    }
    else if (cVar1 == '+') {
      if (*(int *)(unaff_EBP + -0x3c) != 0) {
        FUN_00471de0(unaff_EBP + -0x44);
        *(undefined4 *)(unaff_EBP + -0x54) = *(undefined4 *)(unaff_EBP + 0xc);
        uVar4 = **(undefined1 **)(unaff_EBP + -0x40);
        *(undefined4 *)(unaff_EBP + -0x50) = *(undefined4 *)(unaff_EBP + 0x10);
        FUN_004d60a0(unaff_EBP + -0x54,
                     CONCAT31((int3)((uint)*(undefined1 **)(unaff_EBP + -0x40) >> 8),uVar4));
        uVar5 = *(undefined4 *)(unaff_EBP + -0x54);
        uVar9 = *(undefined4 *)(unaff_EBP + -0x50);
        *(undefined4 *)(unaff_EBP + 0xc) = uVar5;
        goto LAB_00556b73;
      }
    }
    else if (cVar1 == 'v') {
      if (*(int *)(unaff_EBP + 0x14) == 0) {
        j = *(int *)(unaff_EBP + 0x2c);
        FUN_00471de0(unaff_EBP + 0x24);
        puVar10 = *(undefined1 **)(unaff_EBP + 0x28);
        *(undefined4 *)(unaff_EBP + -0x74) = *(undefined4 *)(unaff_EBP + 0xc);
        *(undefined4 *)(unaff_EBP + -0x70) = *(undefined4 *)(unaff_EBP + 0x10);
        for (; j != 0; j = j + -1) {
          FUN_004d60a0(unaff_EBP + -0x74,*puVar10);
          puVar10 = puVar10 + 1;
        }
        uVar5 = *(undefined4 *)(unaff_EBP + -0x74);
        uVar9 = *(undefined4 *)(unaff_EBP + -0x70);
        *(undefined4 *)(unaff_EBP + 0xc) = uVar5;
      }
      else {
        i = *(uint *)(unaff_EBP + 0x2c);
        if (*(uint *)(unaff_EBP + 0x14) < i) {
          FUN_00471de0(unaff_EBP + 0x24);
          j = *(int *)(unaff_EBP + 0x14);
          puVar10 = *(undefined1 **)(unaff_EBP + 0x28);
          *(undefined4 *)(unaff_EBP + -0x6c) = *(undefined4 *)(unaff_EBP + 0xc);
          *(undefined4 *)(unaff_EBP + -0x68) = *(undefined4 *)(unaff_EBP + 0x10);
          for (k = i - j; k != 0; k = k + -1) {
            FUN_004d60a0(unaff_EBP + -0x6c,*puVar10);
            puVar10 = puVar10 + 1;
          }
          *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x6c);
          *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x68);
          uVar4 = (**(code **)(**(int **)(unaff_EBP + -0x2c) + 4))();
          *(undefined1 *)(unaff_EBP + -0x30) = uVar4;
          FUN_004d60a0(unaff_EBP + 0xc,*(undefined4 *)(unaff_EBP + -0x30));
          FUN_00471de0(unaff_EBP + 0x24);
          *(undefined4 *)(unaff_EBP + -0x7c) = *(undefined4 *)(unaff_EBP + 0xc);
          puVar10 = (undefined1 *)
                    ((-(uint)(*(int *)(unaff_EBP + 0x28) != 0) &
                     *(int *)(unaff_EBP + 0x2c) + *(int *)(unaff_EBP + 0x28)) - j);
          *(undefined4 *)(unaff_EBP + -0x78) = *(undefined4 *)(unaff_EBP + 0x10);
          for (; j != 0; j = j + -1) {
            FUN_004d60a0(unaff_EBP + -0x7c,*puVar10);
            puVar10 = puVar10 + 1;
          }
          uVar5 = *(undefined4 *)(unaff_EBP + -0x7c);
          uVar9 = *(undefined4 *)(unaff_EBP + -0x78);
          *(undefined4 *)(unaff_EBP + 0xc) = uVar5;
        }
        else {
          FUN_004d60a0(unaff_EBP + 0xc,0x30);
          uVar4 = (**(code **)(**(int **)(unaff_EBP + -0x2c) + 4))();
          *(undefined1 *)(unaff_EBP + -0x94) = uVar4;
          FUN_004d60a0(unaff_EBP + 0xc,*(undefined4 *)(unaff_EBP + -0x94));
          *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + 0xc);
          *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + 0x10);
          for (j = *(int *)(unaff_EBP + 0x14) - *(int *)(unaff_EBP + 0x2c); j != 0; j = j + -1) {
            FUN_004d60a0(unaff_EBP + -0x4c,0x30);
          }
          j = *(int *)(unaff_EBP + 0x2c);
          *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x4c);
          *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x48);
          FUN_00471de0(unaff_EBP + 0x24);
          puVar10 = *(undefined1 **)(unaff_EBP + 0x28);
          *(undefined4 *)(unaff_EBP + -100) = *(undefined4 *)(unaff_EBP + 0xc);
          *(undefined4 *)(unaff_EBP + -0x60) = *(undefined4 *)(unaff_EBP + 0x10);
          for (; j != 0; j = j + -1) {
            FUN_004d60a0(unaff_EBP + -100,*puVar10);
            puVar10 = puVar10 + 1;
          }
          uVar5 = *(undefined4 *)(unaff_EBP + -100);
          uVar9 = *(undefined4 *)(unaff_EBP + -0x60);
          *(undefined4 *)(unaff_EBP + 0xc) = uVar5;
        }
      }
      goto LAB_00556b73;
    }
LAB_00556cc2:
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
    if (3 < *(uint *)(unaff_EBP + -0x24)) {
      i = *(uint *)(unaff_EBP + -0x3c);
      if (1 < i) {
        FUN_00471de0(unaff_EBP + -0x44);
        puVar10 = *(undefined1 **)(unaff_EBP + -0x40);
        *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + 0xc);
        *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + 0x10);
        while (i = i - 1, i != 0) {
          puVar10 = puVar10 + 1;
          FUN_004d60a0(unaff_EBP + -0x18,*puVar10);
        }
        uVar5 = *(undefined4 *)(unaff_EBP + -0x18);
        uVar9 = *(undefined4 *)(unaff_EBP + -0x14);
        *(undefined4 *)(unaff_EBP + 0xc) = uVar5;
        *(undefined4 *)(unaff_EBP + 0x10) = uVar9;
      }
      j = *(int *)(unaff_EBP + 0x20);
      *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
      *(undefined4 *)(unaff_EBP + -0x14) = uVar9;
      *(undefined4 *)(*(int *)(unaff_EBP + 0x18) + 0x14) = 0;
      for (; j != 0; j = j + -1) {
        FUN_004d60a0(unaff_EBP + -0x18,*(undefined4 *)(unaff_EBP + 0x1c));
      }
      puVar7 = *(undefined4 **)(unaff_EBP + 8);
      *puVar7 = *(undefined4 *)(unaff_EBP + -0x18);
      puVar7[1] = *(undefined4 *)(unaff_EBP + -0x14);
      FUN_004028f0(unaff_EBP + -0x90,1);
      FUN_004028f0(unaff_EBP + -0x44,1);
      FUN_004028f0(unaff_EBP + -0xa4,1);
      FUN_004028f0(unaff_EBP + 0x24,1);
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return puVar7;
    }
    i = *(uint *)(unaff_EBP + -0x80);
  } while( true );
}


/* ==== 00556d85 FUN_00556d85 ==== */

undefined4 * FUN_00556d85(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 *)(extraout_ECX + 10) = *(undefined1 *)(unaff_EBP + 0x10);
  *extraout_ECX = &PTR_FUN_00579578;
  FUN_00556fda();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


/* ==== 00556dc5 FUN_00556dc5 ==== */

void __thiscall FUN_00556dc5(void *this,undefined4 this_val)

{
  char *str;
  undefined4 uVar1;
  
  str = (char *)FUN_0055313b(this_val,0);
  uVar1 = FUN_0054e986(str);
  *(undefined4 *)((int)this + 8) = uVar1;
  str = (char *)FUN_00553181(this_val,0);
  uVar1 = FUN_0054e986(str);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return;
}


/* ==== 00556df8 FUN_00556df8 ==== */

byte FUN_00556df8(char *this_val_2,int *this_val,int param_3,int param_4,int *param_5)

{
  bool bVar1;
  char *this;
  char cVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  char local_24 [32];
  
  this = this_val_2;
  pcVar4 = local_24;
  cVar2 = FUN_0054e9af(this_val_2,this_val);
  if (cVar2 == '\0') {
    if (this[4] == '\0') {
      Peek(this);
    }
    if (this[5] == '+') {
      local_24[0] = '+';
    }
    else {
      if (this[4] == '\0') {
        Peek(this);
      }
      if (this[5] != '-') goto LAB_00556e4e;
      local_24[0] = '-';
    }
    pcVar4 = local_24 + 1;
    FUN_0054e379(this);
  }
LAB_00556e4e:
  bVar1 = false;
  cVar2 = FUN_0054e9af(this,this_val);
  if (cVar2 == '\0') {
    do {
      if (this[4] == '\0') {
        Peek(this);
      }
      if (this[5] != '0') break;
      bVar1 = true;
      FUN_0054e379(this);
      cVar2 = FUN_0054e9af(this,this_val);
    } while (cVar2 == '\0');
    if (bVar1) {
      *pcVar4 = '0';
      pcVar4 = pcVar4 + 1;
    }
  }
  while (cVar2 = FUN_0054e9af(this,this_val), cVar2 == '\0') {
    if (this[4] == '\0') {
      Peek(this);
    }
    cVar2 = this[5];
    *pcVar4 = cVar2;
    if ((cVar2 < '0') || ('9' < cVar2)) break;
    if (pcVar4 < local_24 + 0x1f) {
      pcVar4 = pcVar4 + 1;
    }
    bVar1 = true;
    FUN_0054e379(this);
  }
  if (!bVar1) {
    pcVar4 = local_24;
  }
  *pcVar4 = '\0';
  DAT_0074dc60 = 0;
  iVar3 = FUN_0055ae4d(local_24,&this_val_2,10);
  cVar2 = FUN_0054e9af(this,this_val);
  bVar5 = cVar2 != '\0';
  if ((((this_val_2 == local_24) || (DAT_0074dc60 != 0)) || (iVar3 < param_3)) || (param_4 < iVar3))
  {
    bVar5 = bVar5 | 2;
  }
  else {
    *param_5 = iVar3;
  }
  return bVar5;
}


/* ==== 00556f2d FUN_00556f2d ==== */

void * __thiscall FUN_00556f2d(void *this,uint param_1,uint size,char param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (*(uint *)((int)this + 8) < param_1) {
    FUN_0054b29c();
  }
  if (-*(int *)((int)this + 8) - 1U <= size) {
    FUN_0054b1b4();
  }
  if (size != 0) {
    iVar3 = size + *(int *)((int)this + 8);
    cVar1 = FUN_00402a00(this,iVar3,0);
    if (cVar1 != '\0') {
      iVar2 = *(int *)((int)this + 4) + param_1;
      FUN_005580e0(iVar2 + size,iVar2,*(int *)((int)this + 8) - param_1);
      _memset((void *)(*(int *)((int)this + 4) + param_1),(int)param_3,size);
      *(int *)((int)this + 8) = iVar3;
      *(undefined1 *)(*(int *)((int)this + 4) + iVar3) = 0;
    }
  }
  return this;
}


/* ==== 00556fac FUN_00556fac ==== */

undefined4 __thiscall FUN_00556fac(void *this,undefined4 param_2)

{
  (**(code **)(*(int *)this + 0x14))(param_2,0);
  return param_2;
}


/* ==== 00556fc3 FUN_00556fc3 ==== */

undefined4 __thiscall FUN_00556fc3(void *this,undefined4 param_2)

{
  (**(code **)(*(int *)this + 0x18))(param_2,0);
  return param_2;
}


/* ==== 00556fda FUN_00556fda ==== */

void __thiscall FUN_00556fda(void *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *str;
  int3 iVar5;
  int iVar4;
  
  iVar2 = FUN_0055a6b0();
  *(undefined1 *)((int)this + 0xc) = **(undefined1 **)(iVar2 + 0x14);
  *(undefined1 *)((int)this + 0xd) = **(undefined1 **)(iVar2 + 0x18);
  uVar3 = FUN_0054e986(*(char **)(iVar2 + 0x1c));
  *(undefined4 *)((int)this + 8) = uVar3;
  if (*(char *)((int)this + 0x28) == '\0') {
    str = *(char **)(iVar2 + 0x10);
  }
  else {
    str = *(char **)(iVar2 + 0xc);
  }
  uVar3 = FUN_0054e986(str);
  *(undefined4 *)((int)this + 0x10) = uVar3;
  if ((*(char *)(iVar2 + 0x2e) < '\0') || ('\x04' < *(char *)(iVar2 + 0x2e))) {
    str = &DAT_00712694;
  }
  else {
    str = *(char **)(iVar2 + 0x20);
  }
  uVar3 = FUN_0054e986(str);
  *(undefined4 *)((int)this + 0x14) = uVar3;
  if ((*(char *)(iVar2 + 0x2f) < '\0') || ('\x04' < *(char *)(iVar2 + 0x2f))) {
    str = s___005b755c;
  }
  else {
    str = *(char **)(iVar2 + 0x24);
  }
  uVar3 = FUN_0054e986(str);
  *(undefined4 *)((int)this + 0x18) = uVar3;
  if (*(char *)((int)this + 0x28) == '\0') {
    cVar1 = *(char *)(iVar2 + 0x29);
  }
  else {
    cVar1 = *(char *)(iVar2 + 0x28);
  }
  iVar4 = (int)cVar1;
  *(int *)((int)this + 0x1c) = iVar4;
  if ((iVar4 < 0) || (0x7e < iVar4)) {
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  iVar5 = (int3)(cVar1 >> 7);
  FUN_005570b4(this,(int)this + 0x20,CONCAT31(iVar5,*(undefined1 *)(iVar2 + 0x2b)),
               CONCAT31(iVar5,*(undefined1 *)(iVar2 + 0x2a)),
               CONCAT31(iVar5,*(undefined1 *)(iVar2 + 0x2e)));
  FUN_005570b4(this,(int)this + 0x24,*(undefined1 *)(iVar2 + 0x2d),*(undefined1 *)(iVar2 + 0x2c),
               *(undefined1 *)(iVar2 + 0x2f));
  return;
}


/* ==== 005570b4 FUN_005570b4 ==== */

void __thiscall FUN_005570b4(void *this,undefined4 param_2,byte param_3,byte param_4,char param_5)

{
  char *pcVar1;
  
  if ((((*(char *)((int)this + 0x28) == '\0') && ((param_3 & 0xfe) == 0)) && ((param_4 & 0xfe) == 0)
      ) && ((-1 < param_5 && (param_5 < '\x05')))) {
    pcVar1 = "+v$x+v$xv$+xv+$xv$+x+$vx+$vx$v+x+$vx$+vx+v $+v $v $+v+ $v $++$ v+$ v$ v++$ v$ +v" +
             (int)param_5 +
             (-(uint)(param_3 != 1) & 0xffffffd8) + (-(uint)(param_4 != 1) & 0xffffffec) + 0x3c;
  }
  else {
    pcVar1 = "$+vx";
  }
  FUN_0055b3c0(param_2,pcVar1,4);
  return;
}


/* ==== 00557115 FUN_00557115 ==== */

void FUN_00557115(void)

{
  char cVar1;
  int iVar2;
  void *operator_new_result;
  undefined4 uVar3;
  int unaff_EBP;
  
  FUN_0055b39c();
  iVar2 = DAT_0074dbfc;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    DAT_0074dafc = DAT_0074dafc + 1;
    DAT_0074dbfc = DAT_0074dafc;
    iVar2 = DAT_0074dafc;
  }
  iVar2 = FUN_0054ca8b(*(undefined4 *)(unaff_EBP + 8),iVar2,1);
  if (iVar2 == 0) {
    if (*(char *)(unaff_EBP + 0x10) != '\0') {
      cVar1 = FUN_0054caca(*(undefined4 *)(unaff_EBP + 8));
      if (cVar1 != '\0') {
        if (DAT_0074dc00 == 0) {
          operator_new_result = operator_new(0x10);
          *(void **)(unaff_EBP + 0x10) = operator_new_result;
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (operator_new_result == (void *)0x0) {
            uVar3 = 0;
          }
          else {
            uVar3 = FUN_00557719(0);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          DAT_0074dc00 = FUN_005578a5(uVar3);
        }
        goto LAB_00557198;
      }
    }
    *(char **)(unaff_EBP + 0x10) = s_missing_locale_facet_005b6f34;
    FUN_00558853(unaff_EBP + -0x18,unaff_EBP + 0x10);
    *(undefined ***)(unaff_EBP + -0x18) = &PTR_FUN_0057915c;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x18,&DAT_00584188);
  }
LAB_00557198:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 005571cc FUN_005571cc ==== */

void FUN_005571cc(void)

{
  char cVar1;
  int iVar2;
  void *operator_new_result;
  undefined4 uVar3;
  int unaff_EBP;
  
  FUN_0055b39c();
  iVar2 = DAT_0074dbf0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    DAT_0074dafc = DAT_0074dafc + 1;
    DAT_0074dbf0 = DAT_0074dafc;
    iVar2 = DAT_0074dafc;
  }
  iVar2 = FUN_0054ca8b(*(undefined4 *)(unaff_EBP + 8),iVar2,1);
  if (iVar2 == 0) {
    if (*(char *)(unaff_EBP + 0x10) != '\0') {
      cVar1 = FUN_0054caca(*(undefined4 *)(unaff_EBP + 8));
      if (cVar1 != '\0') {
        if (DAT_0074dc04 == 0) {
          operator_new_result = operator_new(0x10);
          *(void **)(unaff_EBP + 0x10) = operator_new_result;
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (operator_new_result == (void *)0x0) {
            uVar3 = 0;
          }
          else {
            uVar3 = FUN_0055776d(0);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          DAT_0074dc04 = FUN_005578cb(uVar3);
        }
        goto LAB_0055724f;
      }
    }
    *(char **)(unaff_EBP + 0x10) = s_missing_locale_facet_005b6f34;
    FUN_00558853(unaff_EBP + -0x18,unaff_EBP + 0x10);
    *(undefined ***)(unaff_EBP + -0x18) = &PTR_FUN_0057915c;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x18,&DAT_00584188);
  }
LAB_0055724f:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 00557283 FUN_00557283 ==== */

void FUN_00557283(void)

{
  char cVar1;
  int iVar2;
  undefined4 *operator_new_result;
  int unaff_EBP;
  
  FUN_0055b39c();
  iVar2 = DAT_0074dbf8;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    DAT_0074dafc = DAT_0074dafc + 1;
    DAT_0074dbf8 = DAT_0074dafc;
    iVar2 = DAT_0074dafc;
  }
  iVar2 = FUN_0054ca8b(*(undefined4 *)(unaff_EBP + 8),iVar2,1);
  if (iVar2 == 0) {
    if (*(char *)(unaff_EBP + 0x10) != '\0') {
      cVar1 = FUN_0054caca(*(undefined4 *)(unaff_EBP + 8));
      if (cVar1 != '\0') {
        if (DAT_0074dc08 == 0) {
          operator_new_result = operator_new(8);
          *(undefined4 **)(unaff_EBP + 0x10) = operator_new_result;
          if (operator_new_result == (undefined4 *)0x0) {
            operator_new_result = (undefined4 *)0x0;
          }
          else {
            operator_new_result[1] = 0;
            *(undefined1 *)(unaff_EBP + -4) = 2;
            *operator_new_result = &PTR_FUN_00579540;
            FUN_0054d3cd(s_C_005b6f4c);
            FUN_0054d486();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          DAT_0074dc08 = FUN_005578f1(operator_new_result);
        }
        goto LAB_00557320;
      }
    }
    *(char **)(unaff_EBP + 0x10) = s_missing_locale_facet_005b6f34;
    FUN_00558853(unaff_EBP + -0x18,unaff_EBP + 0x10);
    *(undefined ***)(unaff_EBP + -0x18) = &PTR_FUN_0057915c;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x18,&DAT_00584188);
  }
LAB_00557320:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 00557354 FUN_00557354 ==== */

void FUN_00557354(void)

{
  char cVar1;
  int iVar2;
  undefined4 *operator_new_result;
  int unaff_EBP;
  
  FUN_0055b39c();
  iVar2 = DAT_0074dbe0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    DAT_0074dafc = DAT_0074dafc + 1;
    DAT_0074dbe0 = DAT_0074dafc;
    iVar2 = DAT_0074dafc;
  }
  iVar2 = FUN_0054ca8b(*(undefined4 *)(unaff_EBP + 8),iVar2,1);
  if (iVar2 == 0) {
    if (*(char *)(unaff_EBP + 0x10) != '\0') {
      cVar1 = FUN_0054caca(*(undefined4 *)(unaff_EBP + 8));
      if (cVar1 != '\0') {
        if (DAT_0074dc0c == 0) {
          operator_new_result = operator_new(8);
          *(undefined4 **)(unaff_EBP + 0x10) = operator_new_result;
          if (operator_new_result == (undefined4 *)0x0) {
            operator_new_result = (undefined4 *)0x0;
          }
          else {
            operator_new_result[1] = 0;
            *(undefined1 *)(unaff_EBP + -4) = 2;
            *operator_new_result = &PTR_FUN_00579530;
            FUN_0054d3cd(s_C_005b6f4c);
            FUN_0054d486();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          DAT_0074dc0c = FUN_00557917(operator_new_result);
        }
        goto LAB_005573f1;
      }
    }
    *(char **)(unaff_EBP + 0x10) = s_missing_locale_facet_005b6f34;
    FUN_00558853(unaff_EBP + -0x18,unaff_EBP + 0x10);
    *(undefined ***)(unaff_EBP + -0x18) = &PTR_FUN_0057915c;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x18,&DAT_00584188);
  }
LAB_005573f1:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 00557425 FUN_00557425 ==== */

void FUN_00557425(void)

{
  char cVar1;
  int iVar2;
  undefined4 *operator_new_result;
  int unaff_EBP;
  bool bVar3;
  
  FUN_0055b39c();
  iVar2 = DAT_0074dbf4;
  bVar3 = DAT_0074dbf4 == 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (bVar3) {
    DAT_0074dafc = DAT_0074dafc + 1;
    DAT_0074dbf4 = DAT_0074dafc;
    iVar2 = DAT_0074dafc;
  }
  iVar2 = FUN_0054ca8b(*(undefined4 *)(unaff_EBP + 8),iVar2,1);
  if (iVar2 == 0) {
    if (*(char *)(unaff_EBP + 0x10) != '\0') {
      cVar1 = FUN_0054caca(*(undefined4 *)(unaff_EBP + 8));
      if (cVar1 != '\0') {
        if (DAT_0074dc10 == 0) {
          operator_new_result = operator_new(0x2c);
          *(undefined4 **)(unaff_EBP + 0x10) = operator_new_result;
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (operator_new_result == (undefined4 *)0x0) {
            operator_new_result = (undefined4 *)0x0;
          }
          else {
            FUN_005579d5(0,0);
            *operator_new_result = &PTR_FUN_00579504;
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          DAT_0074dc10 = FUN_0055793d(operator_new_result);
        }
        goto LAB_005574b3;
      }
    }
    *(char **)(unaff_EBP + 0x10) = s_missing_locale_facet_005b6f34;
    FUN_00558853(unaff_EBP + -0x18,unaff_EBP + 0x10);
    *(undefined ***)(unaff_EBP + -0x18) = &PTR_FUN_0057915c;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x18,&DAT_00584188);
  }
LAB_005574b3:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 005574e8 FUN_005574e8 ==== */

void FUN_005574e8(void)

{
  char cVar1;
  int iVar2;
  undefined4 *operator_new_result;
  int unaff_EBP;
  
  FUN_0055b39c();
  iVar2 = DAT_0074dbe4;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    DAT_0074dafc = DAT_0074dafc + 1;
    DAT_0074dbe4 = DAT_0074dafc;
    iVar2 = DAT_0074dafc;
  }
  iVar2 = FUN_0054ca8b(*(undefined4 *)(unaff_EBP + 8),iVar2,1);
  if (iVar2 == 0) {
    if (*(char *)(unaff_EBP + 0x10) != '\0') {
      cVar1 = FUN_0054caca(*(undefined4 *)(unaff_EBP + 8));
      if (cVar1 != '\0') {
        if (DAT_0074dc14 == 0) {
          operator_new_result = operator_new(0x2c);
          *(undefined4 **)(unaff_EBP + 0x10) = operator_new_result;
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (operator_new_result == (undefined4 *)0x0) {
            operator_new_result = (undefined4 *)0x0;
          }
          else {
            FUN_005579d5(0,1);
            *operator_new_result = &PTR_FUN_005794d8;
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          DAT_0074dc14 = FUN_00557963(operator_new_result);
        }
        goto LAB_00557577;
      }
    }
    *(char **)(unaff_EBP + 0x10) = s_missing_locale_facet_005b6f34;
    FUN_00558853(unaff_EBP + -0x18,unaff_EBP + 0x10);
    *(undefined ***)(unaff_EBP + -0x18) = &PTR_FUN_0057915c;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x18,&DAT_00584188);
  }
LAB_00557577:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 005575ab FUN_005575ab ==== */

void FUN_005575ab(void)

{
  char cVar1;
  int iVar2;
  void *operator_new_result;
  undefined4 uVar3;
  int unaff_EBP;
  
  FUN_0055b39c();
  iVar2 = DAT_0074dbe8;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    DAT_0074dafc = DAT_0074dafc + 1;
    DAT_0074dbe8 = DAT_0074dafc;
    iVar2 = DAT_0074dafc;
  }
  iVar2 = FUN_0054ca8b(*(undefined4 *)(unaff_EBP + 8),iVar2,1);
  if (iVar2 == 0) {
    if (*(char *)(unaff_EBP + 0x10) != '\0') {
      cVar1 = FUN_0054caca(*(undefined4 *)(unaff_EBP + 8));
      if (cVar1 != '\0') {
        if (DAT_0074dc18 == 0) {
          operator_new_result = operator_new(0x10);
          *(void **)(unaff_EBP + 0x10) = operator_new_result;
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (operator_new_result == (void *)0x0) {
            uVar3 = 0;
          }
          else {
            uVar3 = FUN_005577df(0);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          DAT_0074dc18 = FUN_00557989(uVar3);
        }
        goto LAB_0055762e;
      }
    }
    *(char **)(unaff_EBP + 0x10) = s_missing_locale_facet_005b6f34;
    FUN_00558853(unaff_EBP + -0x18,unaff_EBP + 0x10);
    *(undefined ***)(unaff_EBP + -0x18) = &PTR_FUN_0057915c;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x18,&DAT_00584188);
  }
LAB_0055762e:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 00557662 FUN_00557662 ==== */

void FUN_00557662(void)

{
  char cVar1;
  int iVar2;
  void *operator_new_result;
  undefined4 uVar3;
  int unaff_EBP;
  
  FUN_0055b39c();
  iVar2 = DAT_0074dbec;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    DAT_0074dafc = DAT_0074dafc + 1;
    DAT_0074dbec = DAT_0074dafc;
    iVar2 = DAT_0074dafc;
  }
  iVar2 = FUN_0054ca8b(*(undefined4 *)(unaff_EBP + 8),iVar2,1);
  if (iVar2 == 0) {
    if (*(char *)(unaff_EBP + 0x10) != '\0') {
      cVar1 = FUN_0054caca(*(undefined4 *)(unaff_EBP + 8));
      if (cVar1 != '\0') {
        if (DAT_0074dc1c == 0) {
          operator_new_result = operator_new(0xc);
          *(void **)(unaff_EBP + 0x10) = operator_new_result;
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (operator_new_result == (void *)0x0) {
            uVar3 = 0;
          }
          else {
            uVar3 = FUN_00557838(0);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          DAT_0074dc1c = FUN_005579af(uVar3);
        }
        goto LAB_005576e5;
      }
    }
    *(char **)(unaff_EBP + 0x10) = s_missing_locale_facet_005b6f34;
    FUN_00558853(unaff_EBP + -0x18,unaff_EBP + 0x10);
    *(undefined ***)(unaff_EBP + -0x18) = &PTR_FUN_0057915c;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x18,&DAT_00584188);
  }
LAB_005576e5:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 00557719 FUN_00557719 ==== */

undefined4 * FUN_00557719(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined8 uVar1;
  
  FUN_0055b39c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_FUN_00579564;
  FUN_0054d3cd(s_C_005b6f4c);
  uVar1 = FUN_00557cfe();
  *(undefined8 *)(extraout_ECX + 2) = uVar1;
  FUN_0054d486();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


/* ==== 0055776d FUN_0055776d ==== */

undefined4 * FUN_0055776d(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_FUN_00579550;
  FUN_0054d3cd(s_C_005b6f4c);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uVar1 = FUN_0054e986(s_no_005b2d3c);
  extraout_ECX[2] = uVar1;
  uVar1 = FUN_0054e986((char *)&PTR_DAT_005b2d40);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  extraout_ECX[3] = uVar1;
  FUN_0054d486();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


/* ==== 005577df FUN_005577df ==== */

undefined4 * FUN_005577df(void)

{
  undefined4 this_val;
  undefined4 *this;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(undefined4 **)(unaff_EBP + -0x10) = this;
  this[1] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *this = &PTR_FUN_005794b8;
  this_val = FUN_0054d3cd(s_C_005b6f4c);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00556dc5(this,this_val);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0054d486();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return this;
}


/* ==== 00557838 FUN_00557838 ==== */

undefined4 * FUN_00557838(void)

{
  undefined4 this_val;
  undefined4 *puVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[2] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *extraout_ECX = &PTR_FUN_005794ac;
  this_val = FUN_0054d3cd(s_C_005b6f4c);
  puVar1 = (undefined4 *)FUN_0055133f(this_val,unaff_EBP + 8);
  extraout_ECX[2] = *puVar1;
  *puVar1 = 0;
  FUN_00559d4e(*(undefined4 *)(unaff_EBP + 8));
  FUN_0054d486();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


/* ==== 005578a5 FUN_005578a5 ==== */

int FUN_005578a5(int param_1)

{
  DAT_0074dc20 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(FUN_00557a34);
  return param_1;
}


/* ==== 005578cb FUN_005578cb ==== */

int FUN_005578cb(int param_1)

{
  DAT_0074dc24 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(FUN_00557a7f);
  return param_1;
}


/* ==== 005578f1 FUN_005578f1 ==== */

int FUN_005578f1(int param_1)

{
  DAT_0074dc28 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(FUN_00557aca);
  return param_1;
}


/* ==== 00557917 FUN_00557917 ==== */

int FUN_00557917(int param_1)

{
  DAT_0074dc2c = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(FUN_00557b15);
  return param_1;
}


/* ==== 0055793d FUN_0055793d ==== */

int FUN_0055793d(int param_1)

{
  DAT_0074dc30 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(FUN_00557b60);
  return param_1;
}


/* ==== 00557963 FUN_00557963 ==== */

int FUN_00557963(int param_1)

{
  DAT_0074dc34 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(FUN_00557bab);
  return param_1;
}


/* ==== 00557989 FUN_00557989 ==== */

int FUN_00557989(int param_1)

{
  DAT_0074dc38 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(FUN_00557bf6);
  return param_1;
}


/* ==== 005579af FUN_005579af ==== */

int FUN_005579af(int param_1)

{
  DAT_0074dc3c = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(FUN_00557c41);
  return param_1;
}


/* ==== 005579d5 FUN_005579d5 ==== */

undefined4 * FUN_005579d5(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 *)(extraout_ECX + 10) = *(undefined1 *)(unaff_EBP + 0xc);
  *extraout_ECX = &PTR_FUN_00579578;
  uVar1 = FUN_0054d3cd(s_C_005b6f4c);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00556fda(extraout_ECX,uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0054d486();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


/* ==== 00557a34 FUN_00557a34 ==== */

void FUN_00557a34(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *unaff_retaddr;
  
  FUN_0055b39c();
  uVar2 = DAT_0074dc20;
  iVar1 = *(int *)(DAT_0074dc20 + 4);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(int *)(DAT_0074dc20 + 4) = iVar1 + -1;
  }
  puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar2 + 4) != 0) & uVar2);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  DAT_0074dc20 = 0;
  ExceptionList = unaff_retaddr;
  return;
}


/* ==== 00557a7f FUN_00557a7f ==== */

void FUN_00557a7f(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *unaff_retaddr;
  
  FUN_0055b39c();
  uVar2 = DAT_0074dc24;
  iVar1 = *(int *)(DAT_0074dc24 + 4);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(int *)(DAT_0074dc24 + 4) = iVar1 + -1;
  }
  puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar2 + 4) != 0) & uVar2);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  DAT_0074dc24 = 0;
  ExceptionList = unaff_retaddr;
  return;
}


/* ==== 00557aca FUN_00557aca ==== */

void FUN_00557aca(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *unaff_retaddr;
  
  FUN_0055b39c();
  uVar2 = DAT_0074dc28;
  iVar1 = *(int *)(DAT_0074dc28 + 4);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(int *)(DAT_0074dc28 + 4) = iVar1 + -1;
  }
  puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar2 + 4) != 0) & uVar2);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  DAT_0074dc28 = 0;
  ExceptionList = unaff_retaddr;
  return;
}


/* ==== 00557b15 FUN_00557b15 ==== */

void FUN_00557b15(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *unaff_retaddr;
  
  FUN_0055b39c();
  uVar2 = DAT_0074dc2c;
  iVar1 = *(int *)(DAT_0074dc2c + 4);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(int *)(DAT_0074dc2c + 4) = iVar1 + -1;
  }
  puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar2 + 4) != 0) & uVar2);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  DAT_0074dc2c = 0;
  ExceptionList = unaff_retaddr;
  return;
}


/* ==== 00557b60 FUN_00557b60 ==== */

void FUN_00557b60(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *unaff_retaddr;
  
  FUN_0055b39c();
  uVar2 = DAT_0074dc30;
  iVar1 = *(int *)(DAT_0074dc30 + 4);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(int *)(DAT_0074dc30 + 4) = iVar1 + -1;
  }
  puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar2 + 4) != 0) & uVar2);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  DAT_0074dc30 = 0;
  ExceptionList = unaff_retaddr;
  return;
}


/* ==== 00557bab FUN_00557bab ==== */

void FUN_00557bab(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *unaff_retaddr;
  
  FUN_0055b39c();
  uVar2 = DAT_0074dc34;
  iVar1 = *(int *)(DAT_0074dc34 + 4);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(int *)(DAT_0074dc34 + 4) = iVar1 + -1;
  }
  puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar2 + 4) != 0) & uVar2);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  DAT_0074dc34 = 0;
  ExceptionList = unaff_retaddr;
  return;
}


/* ==== 00557bf6 FUN_00557bf6 ==== */

void FUN_00557bf6(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *unaff_retaddr;
  
  FUN_0055b39c();
  uVar2 = DAT_0074dc38;
  iVar1 = *(int *)(DAT_0074dc38 + 4);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(int *)(DAT_0074dc38 + 4) = iVar1 + -1;
  }
  puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar2 + 4) != 0) & uVar2);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  DAT_0074dc38 = 0;
  ExceptionList = unaff_retaddr;
  return;
}


/* ==== 00557c41 FUN_00557c41 ==== */

void FUN_00557c41(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *unaff_retaddr;
  
  FUN_0055b39c();
  uVar2 = DAT_0074dc3c;
  iVar1 = *(int *)(DAT_0074dc3c + 4);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(int *)(DAT_0074dc3c + 4) = iVar1 + -1;
  }
  puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar2 + 4) != 0) & uVar2);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  DAT_0074dc3c = 0;
  ExceptionList = unaff_retaddr;
  return;
}


/* ==== 00557cad FUN_00557cad ==== */

float10 FUN_00557cad(undefined4 param_1,undefined4 param_2,int param_3)

{
  int i;
  bool bVar1;
  float10 fVar2;
  
  fVar2 = (float10)FUN_0055adb3(param_1,param_2);
  bVar1 = param_3 < 0;
  i = param_3;
  if (0 < param_3) {
    i = 0;
    do {
      fVar2 = fVar2 * (float10)10.0;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    bVar1 = false;
  }
  if (bVar1) {
    i = -i;
    do {
      fVar2 = fVar2 * (float10)0.1;
      i = i + -1;
    } while (i != 0);
  }
  return fVar2;
}


/* ==== 00557ce9 FUN_00557ce9 ==== */

void FUN_00557ce9(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00557cad(param_1,param_2,param_3);
  return;
}


/* ==== 00557cfe FUN_00557cfe ==== */

undefined8 FUN_00557cfe(void)

{
  return CONCAT44(DAT_0074dcf8,DAT_0074dce0);
}


/* ==== 00557d0a FUN_00557d0a ==== */

void __thiscall FUN_00557d0a(undefined4 param_1,code *UNRECOVERED_JUMPTABLE)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x00557d35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* ==== 00557d3e FUN_00557d3e ==== */

void FUN_00557d3e(undefined4 param_1,code *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x00557d43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* ==== 00557d45 FUN_00557d45 ==== */

void FUN_00557d45(undefined4 param_1,code *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x00557d4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* ==== 00557d4c FUN_00557d4c ==== */

void __thiscall FUN_00557d4c(void *this,PVOID target_frame,PEXCEPTION_RECORD exception_record)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(target_frame,(PVOID)0x557d74,exception_record,(PVOID)0x0);
  exception_record->ExceptionFlags = exception_record->ExceptionFlags & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}


/* ==== 00557d9b FUN_00557d9b ==== */

undefined4
FUN_00557d9b(PEXCEPTION_RECORD exception_record,PVOID this_val,undefined4 param_3,undefined4 param_4
            )

{
  int *in_EAX;
  undefined4 uVar1;
  
  uVar1 = FUN_0055d212(exception_record,this_val,param_3,param_4,in_EAX,0,(PVOID)0x0,'\0');
  return uVar1;
}


/* ==== 00557dd1 FUN_00557dd1 ==== */

undefined4
FUN_00557dd1(undefined4 this_val,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  void *local_18;
  code *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_10 = param_2;
  local_14 = FUN_00557e25;
  local_8 = param_4 + 1;
  local_c = this_val;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  uVar1 = __CallSettingFrame_12(this_val,param_3,this_val,param_5);
  ExceptionList = local_18;
  return uVar1;
}


/* ==== 00557e25 FUN_00557e25 ==== */

void FUN_00557e25(PEXCEPTION_RECORD exception_record,PVOID target_frame,undefined4 param_3)

{
  FUN_0055d212(exception_record,*(PVOID *)((int)target_frame + 0xc),param_3,0,
               *(int **)((int)target_frame + 8),*(int *)((int)target_frame + 0x10),target_frame,'\0'
              );
  return;
}


/* ==== 00557e4a FUN_00557e4a ==== */

undefined4
FUN_00557e4a(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  code *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  int local_8;
  
  local_c = &stack0xfffffffc;
  local_10 = &stack0xffffffbc;
  local_28 = FUN_00557efe;
  local_24 = param_5;
  local_20 = param_2;
  local_1c = param_6;
  local_18 = param_7;
  local_8 = 0;
  local_14 = 0x557ed0;
  local_2c = ExceptionList;
  ExceptionList = &local_2c;
  local_34 = param_1;
  local_30 = param_3;
  (*DAT_0074dd0c)(*param_1,&local_34);
  if (local_8 != 0) {
    *local_2c = *(undefined4 *)ExceptionList;
  }
  ExceptionList = local_2c;
  return 0;
}


/* ==== 00557efe FUN_00557efe ==== */

undefined4 FUN_00557efe(PEXCEPTION_RECORD exception_record,PVOID target_frame,undefined4 param_3)

{
  undefined4 uVar1;
  void *this;
  
  if ((exception_record->ExceptionFlags & 0x66) != 0) {
    *(undefined4 *)((int)target_frame + 0x24) = 1;
    return 1;
  }
  FUN_0055d212(exception_record,*(PVOID *)((int)target_frame + 0xc),param_3,0,
               *(int **)((int)target_frame + 8),*(int *)((int)target_frame + 0x10),
               *(PVOID *)((int)target_frame + 0x14),'\x01');
  if (*(int *)((int)target_frame + 0x24) == 0) {
    FUN_00557d4c(this,target_frame,exception_record);
  }
                    /* WARNING: Could not recover jumptable at 0x00557f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((int)target_frame + 0x18))();
  return uVar1;
}


/* ==== 00557f73 FUN_00557f73 ==== */

int __thiscall
FUN_00557f73(undefined4 param_1,int param_2,int param_3,int param_4,uint *param_5,uint *param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint i;
  
  i = *(uint *)(param_2 + 0xc);
  iVar1 = *(int *)(param_2 + 0x10);
  uVar4 = i;
  uVar3 = i;
  while (uVar2 = uVar4, -1 < param_3) {
    if (i == 0xffffffff) {
      FUN_0055dab2();
    }
    i = i - 1;
    if (((*(int *)(iVar1 + 4 + i * 0x14) < param_4) && (param_4 <= *(int *)(iVar1 + i * 0x14 + 8)))
       || (uVar4 = uVar2, i == 0xffffffff)) {
      param_3 = param_3 + -1;
      uVar4 = i;
      uVar3 = uVar2;
    }
  }
  i = i + 1;
  *param_5 = i;
  *param_6 = uVar3;
  if ((*(uint *)(param_2 + 0xc) < uVar3) || (uVar3 < i)) {
    FUN_0055dab2();
  }
  return iVar1 + i * 0x14;
}


