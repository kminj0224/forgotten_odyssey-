/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0020325c  Symbol: ~__pointer_type_info */

/* __cxxabiv1::__pointer_type_info::~__pointer_type_info() */

__pointer_type_info * __thiscall
__cxxabiv1::__pointer_type_info::~__pointer_type_info(__pointer_type_info *this)

{
  ~__pointer_type_info(this);
  operator_delete(this);
  return this;
}


