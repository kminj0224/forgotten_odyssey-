/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 002012b4  Symbol: ~bad_cast */

/* std::bad_cast::~bad_cast() */

bad_cast * __thiscall std::bad_cast::~bad_cast(bad_cast *this)

{
  *(int *)this = *(int *)(DAT_002012d8 + 0x2012c4) + 8;
  exception::~exception((exception *)this);
  return this;
}


