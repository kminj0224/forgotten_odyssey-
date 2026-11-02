/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010a304  Symbol: ~Unit */

/* Unit::~Unit() */

Unit * __thiscall Unit::~Unit(Unit *this)

{
  ~Unit(this);
  operator_delete(this);
  return this;
}


