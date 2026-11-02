/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 002013bc  Symbol: __do_upcast */

/* __cxxabiv1::__class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void const*,
   __cxxabiv1::__class_type_info::__upcast_result&) const */

undefined4 __thiscall
__cxxabiv1::__class_type_info::__do_upcast
          (__class_type_info *this,__class_type_info *param_1,void *param_2,__upcast_result *param_3
          )

{
  int iVar1;
  
  iVar1 = FUN_00203530();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_3 + 0xc) = 8;
  *(void **)param_3 = param_2;
  *(undefined4 *)(param_3 + 4) = 6;
  return 1;
}


