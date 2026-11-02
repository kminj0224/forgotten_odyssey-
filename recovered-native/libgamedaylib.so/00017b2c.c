/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00017b2c  Symbol: ~bad_cast */

/* std::bad_cast::~bad_cast() */

bad_cast * __thiscall std::bad_cast::~bad_cast(bad_cast *this)

{
  ~bad_cast(this);
  operator_delete(this);
  return this;
}


