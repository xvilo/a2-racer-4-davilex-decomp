/* spel.dat — dx3d/Txformat.cpp: 2 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004c1cb0 FUN_004c1cb0 ==== */

void * __thiscall FUN_004c1cb0(void *this)

{
  char *_Dest;
  char *_Dest_00;
  undefined4 *operator_new_result_2;
  undefined4 *puVar1;
  void *operator_new_result;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056f7bb;
  local_c = ExceptionList;
  _Dest = (char *)((int)this + 0x14);
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0xc) = 0;
  _strncpy(_Dest,s_m_txf_drv_info_005b3030,0x19);
  _Dest_00 = (char *)((int)this + 0x2d);
  _strncpy(_Dest_00,s_c_txf_drv_info_005b3020,0x19);
  if (*(int *)((int)this + 0xc) != 0) {
    if (*(int *)((int)this + 0xc) == 1) {
      FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,_Dest_00,_Dest,
                   *(undefined4 *)((int)this + 4));
      iVar2 = *(int *)this;
      if (iVar2 != 0) {
        FUN_005586c5(iVar2,0xb0,*(undefined4 *)(iVar2 + -4),FUN_004d1400);
        FUN_0054b339(iVar2 + -4);
      }
    }
    if (*(int *)((int)this + 0xc) != 0) {
      FUN_0054b339(*(undefined4 *)((int)this + 0x10));
      *(undefined4 *)((int)this + 0xc) = 0;
    }
    FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  }
  operator_new_result_2 = operator_new(0x44c4);
  local_4 = 0;
  if (operator_new_result_2 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = operator_new_result_2 + 1;
    *operator_new_result_2 = 100;
    FUN_00558643(puVar1,0xb0,100,&LAB_004c1c60,FUN_004d1400);
  }
  local_4 = 0xffffffff;
  *(undefined4 **)this = puVar1;
  *(undefined4 *)((int)this + 4) = 100;
  *(undefined4 *)((int)this + 8) = 0;
  operator_new_result = operator_new(100);
  *(void **)((int)this + 0x10) = operator_new_result;
  FUN_004c3fa0(s_T_ARRAY___alloc___16_16s___16_16_005af664,_Dest_00,_Dest,
               *(undefined4 *)((int)this + 4));
  *(undefined4 *)((int)this + 0xc) = 1;
  iVar2 = 0;
  do {
    iVar3 = iVar2 + 1;
    *(undefined1 *)(iVar2 + *(int *)((int)this + 0x10)) = 0;
    iVar2 = iVar3;
  } while (iVar3 < 100);
  *(undefined4 *)((int)this + 0x46) = 0xffffffff;
  *(undefined4 *)((int)this + 0x4a) = 0xffffffff;
  *(undefined4 *)((int)this + 0x4e) = 0xffffffff;
  *(undefined4 *)((int)this + 0x52) = 0xffffffff;
  *(undefined4 *)((int)this + 0x5a) = 0;
  *(undefined4 *)((int)this + 0x5e) = 0;
  ExceptionList = local_c;
  return this;
}


/* ==== 004c1e10 FUN_004c1e10 ==== */

void __thiscall FUN_004c1e10(void *this)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_004c3fa0(s_TXFORMAT___STARTING_ENUM_TEXTURE_005b30a8);
  iVar1 = (**(code **)(*DAT_0073b4b4 + 0x24))(DAT_0073b4b4,&LAB_004c1e60,this);
  if (iVar1 != 0) {
    uVar2 = FUN_004bb290(iVar1);
    FUN_004c4150(s__s__d____D3DError_EnumDevice_____005b3068,s_D__Work_DX3D_Txformat_cpp_005b308c,
                 199,uVar2);
  }
  FUN_004c3fa0(s_TXFORMAT___END_ENUM_TEXTURE_FORM_005b3040);
  return;
}


