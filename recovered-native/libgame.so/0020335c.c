/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0020335c  Symbol: __do_upcast */

/* __cxxabiv1::__si_class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void const*,
   __cxxabiv1::__class_type_info::__upcast_result&) const */

undefined4 __thiscall
__cxxabiv1::__si_class_type_info::__do_upcast
          (__si_class_type_info *this,__class_type_info *param_1,void *param_2,
          __upcast_result *param_3)

{
  int iVar1;
  undefined4 uVar2;
  __upcast_result *p_Var3;
  
  p_Var3 = param_3;
  iVar1 = __class_type_info::__do_upcast((__class_type_info *)this,param_1,param_2,param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar2 = (**(code **)(**(int **)(this + 8) + 0x18))
                    (*(int **)(this + 8),param_1,param_2,param_3,p_Var3);
  return uVar2;
}


