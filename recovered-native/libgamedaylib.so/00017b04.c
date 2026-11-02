/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00017b04  Symbol: ~bad_cast */

/* std::bad_cast::~bad_cast() */

bad_cast * __thiscall std::bad_cast::~bad_cast(bad_cast *this)

{
  *(int *)this = *(int *)(DAT_00017b28 + 0x17b14) + 8;
  exception::~exception((exception *)this);
  return this;
}


