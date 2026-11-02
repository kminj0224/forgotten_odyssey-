/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00017138  Symbol: ~__foreign_exception */

/* __cxxabiv1::__foreign_exception::~__foreign_exception() */

__foreign_exception * __thiscall
__cxxabiv1::__foreign_exception::~__foreign_exception(__foreign_exception *this)

{
  ~__foreign_exception(this);
  operator_delete(this);
  return this;
}


