/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00202268  Symbol: ~bad_exception */

/* std::bad_exception::~bad_exception() */

bad_exception * __thiscall std::bad_exception::~bad_exception(bad_exception *this)

{
  *(int *)this = *(int *)(DAT_0020228c + 0x202278) + 8;
  exception::~exception((exception *)this);
  return this;
}


