/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001010bc  Symbol: ~Monster */

/* Monster::~Monster() */

Monster * __thiscall Monster::~Monster(Monster *this)

{
  ~Monster(this);
  operator_delete(this);
  return this;
}


