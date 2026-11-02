/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00018284  Symbol: ~bad_typeid */

/* std::bad_typeid::~bad_typeid() */

bad_typeid * __thiscall std::bad_typeid::~bad_typeid(bad_typeid *this)

{
  *(int *)this = *(int *)(DAT_000182a8 + 0x18294) + 8;
  exception::~exception((exception *)this);
  return this;
}


