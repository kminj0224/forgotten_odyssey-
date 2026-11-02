/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00105190  Symbol: ~Hero_HP */

/* Hero_HP::~Hero_HP() */

Hero_HP * __thiscall Hero_HP::~Hero_HP(Hero_HP *this)

{
  ~Hero_HP(this);
  operator_delete(this);
  return this;
}


