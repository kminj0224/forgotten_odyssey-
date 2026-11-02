/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00017788  Symbol: ~__pointer_type_info */

/* __cxxabiv1::__pointer_type_info::~__pointer_type_info() */

__pointer_type_info * __thiscall
__cxxabiv1::__pointer_type_info::~__pointer_type_info(__pointer_type_info *this)

{
  *(int *)this = *(int *)(DAT_000177ac + 0x17798) + 8;
  __pbase_type_info::~__pbase_type_info((__pbase_type_info *)this);
  return this;
}


