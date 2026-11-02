/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00017b58  Symbol: ~bad_typeid */

/* std::bad_typeid::~bad_typeid() */

bad_typeid * __thiscall std::bad_typeid::~bad_typeid(bad_typeid *this)

{
  *(int *)this = *(int *)(DAT_00017b7c + 0x17b68) + 8;
  exception::~exception((exception *)this);
  return this;
}


