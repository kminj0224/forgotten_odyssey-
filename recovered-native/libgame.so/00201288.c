/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00201288  Symbol: ~bad_alloc */

/* std::bad_alloc::~bad_alloc() */

bad_alloc * __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this)

{
  ~bad_alloc(this);
  operator_delete(this);
  return this;
}


