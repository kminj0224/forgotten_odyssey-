/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00104f4c  Symbol: ~Unit_Money */

/* Unit_Money::~Unit_Money() */

Unit_Money * __thiscall Unit_Money::~Unit_Money(Unit_Money *this)

{
  ~Unit_Money(this);
  operator_delete(this);
  return this;
}


