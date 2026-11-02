/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00017eb4  Symbol: ~__pointer_type_info */

/* __cxxabiv1::__pointer_type_info::~__pointer_type_info() */

__pointer_type_info * __thiscall
__cxxabiv1::__pointer_type_info::~__pointer_type_info(__pointer_type_info *this)

{
  *(int *)this = *(int *)(DAT_00017ed8 + 0x17ec4) + 8;
  __pbase_type_info::~__pbase_type_info((__pbase_type_info *)this);
  return this;
}


