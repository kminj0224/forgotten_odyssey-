/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00017f98  Symbol: ~__si_class_type_info */

/* __cxxabiv1::__si_class_type_info::~__si_class_type_info() */

__si_class_type_info * __thiscall
__cxxabiv1::__si_class_type_info::~__si_class_type_info(__si_class_type_info *this)

{
  *(int *)this = *(int *)(DAT_00017fbc + 0x17fa8) + 8;
  __class_type_info::~__class_type_info((__class_type_info *)this);
  return this;
}


