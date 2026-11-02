/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00105278  Symbol: ~Money */

/* Money::~Money() */

Money * __thiscall Money::~Money(Money *this)

{
  ~Money(this);
  operator_delete(this);
  return this;
}


