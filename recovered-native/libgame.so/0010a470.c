/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010a470  Symbol: ~Unit_Test */

/* Unit_Test::~Unit_Test() */

Unit_Test * __thiscall Unit_Test::~Unit_Test(Unit_Test *this)

{
  ~Unit_Test(this);
  operator_delete(this);
  return this;
}


