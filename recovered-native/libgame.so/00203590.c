/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00203590  Symbol: ~__vmi_class_type_info */

/* __cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info() */

__vmi_class_type_info * __thiscall
__cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info(__vmi_class_type_info *this)

{
  *(int *)this = *(int *)(DAT_002035b4 + 0x2035a0) + 8;
  __class_type_info::~__class_type_info((__class_type_info *)this);
  return this;
}


