/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000183b0  Symbol: __do_dyncast */

/* __cxxabiv1::__class_type_info::__do_dyncast(int, __cxxabiv1::__class_type_info::__sub_kind,
   __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info const*, void
   const*, __cxxabiv1::__class_type_info::__dyncast_result&) const */

undefined4 __thiscall
__cxxabiv1::__class_type_info::__do_dyncast
          (__class_type_info *this,int param_1,__sub_kind param_2,__class_type_info *param_3,
          void *param_4,__class_type_info *param_5,void *param_6,__dyncast_result *param_7)

{
  int iVar1;
  
  if ((param_4 == param_6) && (iVar1 = FUN_000181b0(this,param_5), iVar1 != 0)) {
    *(__sub_kind *)(param_7 + 8) = param_2;
  }
  else {
    iVar1 = FUN_000181b0(this,param_3);
    if (iVar1 != 0) {
      *(void **)param_7 = param_4;
      *(__sub_kind *)(param_7 + 4) = param_2;
      *(undefined4 *)(param_7 + 0xc) = 1;
    }
  }
  return 0;
}


