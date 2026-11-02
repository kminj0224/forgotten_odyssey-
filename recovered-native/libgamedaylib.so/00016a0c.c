/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00016a0c  Symbol: ~__foreign_exception */

/* __cxxabiv1::__foreign_exception::~__foreign_exception() */

__foreign_exception * __thiscall
__cxxabiv1::__foreign_exception::~__foreign_exception(__foreign_exception *this)

{
  ~__foreign_exception(this);
  operator_delete(this);
  return this;
}


