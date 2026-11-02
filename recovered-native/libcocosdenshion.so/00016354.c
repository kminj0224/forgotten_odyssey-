/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00016354  Symbol: ~bad_alloc */

/* std::bad_alloc::~bad_alloc() */

bad_alloc * __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this)

{
  *(int *)this = *(int *)(DAT_00016378 + 0x16364) + 8;
  exception::~exception((exception *)this);
  return this;
}


