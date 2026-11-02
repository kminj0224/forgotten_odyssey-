/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00201330  Symbol: ~bad_typeid */

/* std::bad_typeid::~bad_typeid() */

bad_typeid * __thiscall std::bad_typeid::~bad_typeid(bad_typeid *this)

{
  ~bad_typeid(this);
  operator_delete(this);
  return this;
}


