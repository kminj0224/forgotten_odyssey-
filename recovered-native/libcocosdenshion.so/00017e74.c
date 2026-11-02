/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00017e74  Symbol: ~__fundamental_type_info */

/* __cxxabiv1::__fundamental_type_info::~__fundamental_type_info() */

__fundamental_type_info * __thiscall
__cxxabiv1::__fundamental_type_info::~__fundamental_type_info(__fundamental_type_info *this)

{
  ~__fundamental_type_info(this);
  operator_delete(this);
  return this;
}


