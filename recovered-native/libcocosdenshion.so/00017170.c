/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00017170  Symbol: ~bad_exception */

/* std::bad_exception::~bad_exception() */

bad_exception * __thiscall std::bad_exception::~bad_exception(bad_exception *this)

{
  ~bad_exception(this);
  operator_delete(this);
  return this;
}


