/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0001786c  Symbol: ~__si_class_type_info */

/* __cxxabiv1::__si_class_type_info::~__si_class_type_info() */

__si_class_type_info * __thiscall
__cxxabiv1::__si_class_type_info::~__si_class_type_info(__si_class_type_info *this)

{
  *(int *)this = *(int *)(DAT_00017890 + 0x1787c) + 8;
  __class_type_info::~__class_type_info((__class_type_info *)this);
  return this;
}


