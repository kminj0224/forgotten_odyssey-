/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00016994  Symbol: ~bad_exception */

/* std::bad_exception::~bad_exception() */

bad_exception * __thiscall std::bad_exception::~bad_exception(bad_exception *this)

{
  *(int *)this = *(int *)(DAT_000169b8 + 0x169a4) + 8;
  exception::~exception((exception *)this);
  return this;
}


