/* spel.dat — sound_lib/csslist.cpp: 7 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0049e890 FUN_0049e890 ==== */

void __thiscall
FUN_0049e890(void *this,float param_2,float param_3,float param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  FUN_0049e810(this,&local_24,local_c,&local_18);
  param_2 = param_2 - local_24;
  param_3 = param_3 - local_20;
  param_4 = param_4 - local_1c;
  fVar1 = SQRT(param_2 * param_2 + param_3 * param_3 + param_4 * param_4);
  if (fVar1 < (float)*(int *)((int)this + 0xc)) {
    if (fVar1 == 0.0) {
      local_30 = 0.0;
      local_2c = 1.0;
      local_28 = 0.0;
    }
    else {
      local_30 = param_2 / fVar1;
      local_2c = param_3 / fVar1;
      local_28 = param_4 / fVar1;
    }
    iVar2 = FUN_0049e630(this);
    if (iVar2 == 0) {
      FUN_0049e550(this,param_8);
    }
    uVar3 = FUN_0049e7d0(this,fVar1);
    *(undefined4 *)((int)this + 0x48) = uVar3;
    FUN_0049e3c0(this);
    uVar3 = FUN_0049e750(&local_30,local_c);
    FUN_0049e460(this,uVar3);
    uVar3 = FUN_0049e6f0(this,local_18,local_14,local_10,param_5,param_6,param_7,local_30,local_2c,
                         local_28);
    FUN_0049e3f0(this,uVar3);
  }
  else {
    iVar2 = FUN_0049e630(this);
    if (iVar2 != 0) {
      FUN_0049e570(this);
      return;
    }
  }
  return;
}


/* ==== 0049ea60 FUN_0049ea60 ==== */

void __thiscall FUN_0049ea60(void *this)

{
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 200;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return;
}


/* ==== 0049ea80 thunk_FUN_0049eae0 ==== */

void __thiscall thunk_FUN_0049eae0(void *this)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)this != 0) {
    iVar2 = 0;
    if (0 < *(int *)((int)this + 4)) {
      do {
        FUN_004a0100(*(int *)(*(int *)this + iVar2 * 4) != 0,
                     s__s___d__Trying_to_delete_a_NULL_p_005ae85c,
                     s_C__work_sound_lib_csslist_cpp_005ae83c,0x71,iVar2);
        iVar1 = *(int *)(*(int *)this + iVar2 * 4);
        if (iVar1 != 0) {
          FUN_0049e200(iVar1);
          FUN_0054b339(iVar1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)((int)this + 4));
    }
    FUN_0054b339(*(undefined4 *)this);
    *(undefined4 *)this = 0;
  }
  return;
}


/* ==== 0049ea90 FUN_0049ea90 ==== */

void __thiscall FUN_0049ea90(void *this,undefined4 param_2,int param_3)

{
  void *operator_new_result;
  
  *(int *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 4) = 0;
  operator_new_result = operator_new(param_3 << 2);
  *(void **)this = operator_new_result;
  FUN_004a0100(operator_new_result != (void *)0x0,s__s___d__Couldn_t_allocate_sound_s_005ae7e4,
               s_C__work_sound_lib_csslist_cpp_005ae83c,0x53,*(undefined4 *)((int)this + 8));
  *(undefined4 *)((int)this + 0xc) = param_2;
  return;
}


/* ==== 0049eae0 FUN_0049eae0 ==== */

void __thiscall FUN_0049eae0(void *this)

{
  int i;
  int this_val;
  
  if (*(int *)this != 0) {
    i = 0;
    if (0 < *(int *)((int)this + 4)) {
      do {
        FUN_004a0100(*(int *)(*(int *)this + i * 4) != 0,
                     s__s___d__Trying_to_delete_a_NULL_p_005ae85c,
                     s_C__work_sound_lib_csslist_cpp_005ae83c,0x71,i);
        this_val = *(int *)(*(int *)this + i * 4);
        if (this_val != 0) {
          FUN_0049e200(this_val);
          FUN_0054b339(this_val);
        }
        i = i + 1;
      } while (i < *(int *)((int)this + 4));
    }
    FUN_0054b339(*(undefined4 *)this);
    *(undefined4 *)this = 0;
  }
  return;
}


/* ==== 0049eb50 FUN_0049eb50 ==== */

undefined4 __thiscall FUN_0049eb50(void *this,int param_2)

{
  FUN_004a0100(*(int *)this != 0,s__s___d__Sound_sources_not_alloca_005ae898,0x92);
  FUN_004a00b0(param_2,0,*(int *)((int)this + 4) + -1,s_C__work_sound_lib_csslist_cpp_005ae83c,0x93)
  ;
  return *(undefined4 *)(*(int *)this + param_2 * 4);
}


/* ==== 0049eba0 FUN_0049eba0 ==== */

int __thiscall FUN_0049eba0(void *this,undefined4 param_2)

{
  int iVar1;
  void *this_val;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056eb2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004a0100(*(int *)this != 0,s__s___d__Sound_sources_not_alloca_005ae998,
               s_C__work_sound_lib_csslist_cpp_005ae83c,0xae);
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 < 0) || (*(int *)((int)this + 8) <= iVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  FUN_004a0100(uVar2,s__s___d__Illegal_index_number_of_s_005ae960,
               s_C__work_sound_lib_csslist_cpp_005ae83c,0xb3,iVar1);
  this_val = operator_new(0x5c);
  local_4 = 0;
  if (this_val == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    FUN_004a0100(*(int *)((int)this + 0xc) != 0,s__s___d__Sound_source_list_not_in_005ae90c,
                 s___csslist_h_005ae954,100);
    uVar2 = FUN_0049e1a0(this_val,*(undefined4 *)((int)this + 0xc),param_2,
                         *(undefined4 *)((int)this + 4));
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(*(int *)this + *(int *)((int)this + 4) * 4) = uVar2;
  FUN_004a0100(*(int *)(*(int *)this + *(int *)((int)this + 4) * 4) != 0,
               s__s___d__Couldn_t_allocate_sound_s_005ae8e0,s_C__work_sound_lib_csslist_cpp_005ae83c
               ,0xb8,*(int *)((int)this + 4));
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  ExceptionList = local_c;
  return iVar1;
}


