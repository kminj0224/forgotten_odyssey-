/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00015c28  Symbol: ~bad_alloc */

/* std::bad_alloc::~bad_alloc() */

bad_alloc * __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this)

{
  *(int *)this = *(int *)(DAT_00015c4c + 0x15c38) + 8;
  exception::~exception((exception *)this);
  return this;
}


