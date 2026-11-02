/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000182c8  Symbol: __do_upcast */

/* __cxxabiv1::__class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void**) const */

bool __thiscall
__cxxabiv1::__class_type_info::__do_upcast
          (__class_type_info *this,__class_type_info *param_1,void **param_2)

{
  bool bVar1;
  void *local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0x10;
  local_20 = (void *)0x0;
  local_1c = 0;
  local_14 = 0;
  (**(code **)(*(int *)this + 0x18))(this,param_1,*param_2,&local_20);
  bVar1 = (local_1c & 6) == 6;
  if (bVar1) {
    *param_2 = local_20;
  }
  return bVar1;
}


