/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00018230  Symbol: ~bad_cast */

/* std::bad_cast::~bad_cast() */

bad_cast * __thiscall std::bad_cast::~bad_cast(bad_cast *this)

{
  *(int *)this = *(int *)(DAT_00018254 + 0x18240) + 8;
  exception::~exception((exception *)this);
  return this;
}


