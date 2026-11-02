/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0001718c  Symbol: ~exception */

/* std::exception::~exception() */

exception * __thiscall std::exception::~exception(exception *this)

{
  ~exception(this);
  operator_delete(this);
  return this;
}


