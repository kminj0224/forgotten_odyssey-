/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000170c0  Symbol: ~bad_exception */

/* std::bad_exception::~bad_exception() */

bad_exception * __thiscall std::bad_exception::~bad_exception(bad_exception *this)

{
  *(int *)this = *(int *)(DAT_000170e4 + 0x170d0) + 8;
  exception::~exception((exception *)this);
  return this;
}


