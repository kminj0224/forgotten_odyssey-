/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00208228  Symbol: __do_catch */

/* __cxxabiv1::__pbase_type_info::__do_catch(std::type_info const*, void**, unsigned int) const */

undefined4 __thiscall
__cxxabiv1::__pbase_type_info::__do_catch
          (__pbase_type_info *this,type_info *param_1,void **param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00203530();
  if (iVar1 != 0) {
    return 1;
  }
  if (param_1 == (type_info *)0x0) {
                    /* WARNING: Subroutine does not return */
    __cxa_bad_typeid(*(undefined4 *)(*(int *)this + -4));
  }
  iVar1 = FUN_00203530(*(undefined4 *)(*(int *)this + -4),*(undefined4 *)(*(int *)param_1 + -4));
  if (iVar1 == 0) {
    return 0;
  }
  if ((param_3 & 1) != 0) {
    if ((*(uint *)(param_1 + 8) & ~*(uint *)(this + 8)) != 0) {
      return 0;
    }
    if ((*(uint *)(this + 8) & 1) == 0) {
      param_3 = param_3 & 0xfffffffe;
    }
    uVar2 = (**(code **)(*(int *)this + 0x18))(this,param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}


