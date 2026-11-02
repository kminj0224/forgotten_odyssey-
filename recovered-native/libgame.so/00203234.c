/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00203234  Symbol: ~__pointer_type_info */

/* __cxxabiv1::__pointer_type_info::~__pointer_type_info() */

__pointer_type_info * __thiscall
__cxxabiv1::__pointer_type_info::~__pointer_type_info(__pointer_type_info *this)

{
  *(int *)this = *(int *)(DAT_00203258 + 0x203244) + 8;
  __pbase_type_info::~__pbase_type_info((__pbase_type_info *)this);
  return this;
}


