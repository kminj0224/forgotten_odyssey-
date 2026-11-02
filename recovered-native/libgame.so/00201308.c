/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00201308  Symbol: ~bad_typeid */

/* std::bad_typeid::~bad_typeid() */

bad_typeid * __thiscall std::bad_typeid::~bad_typeid(bad_typeid *this)

{
  *(int *)this = *(int *)(DAT_0020132c + 0x201318) + 8;
  exception::~exception((exception *)this);
  return this;
}


