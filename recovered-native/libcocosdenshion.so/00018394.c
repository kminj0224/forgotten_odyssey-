/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00018394  Symbol: ~__class_type_info */

/* __cxxabiv1::__class_type_info::~__class_type_info() */

__class_type_info * __thiscall
__cxxabiv1::__class_type_info::~__class_type_info(__class_type_info *this)

{
  ~__class_type_info(this);
  operator_delete(this);
  return this;
}


