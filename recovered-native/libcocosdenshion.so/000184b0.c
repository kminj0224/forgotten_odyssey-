/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000184b0  Symbol: ~__pbase_type_info */

/* __cxxabiv1::__pbase_type_info::~__pbase_type_info() */

__pbase_type_info * __thiscall
__cxxabiv1::__pbase_type_info::~__pbase_type_info(__pbase_type_info *this)

{
  ~__pbase_type_info(this);
  operator_delete(this);
  return this;
}


