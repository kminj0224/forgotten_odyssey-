/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010511c  Symbol: ~Monster_HP */

/* Monster_HP::~Monster_HP() */

Monster_HP * __thiscall Monster_HP::~Monster_HP(Monster_HP *this)

{
  ~Monster_HP(this);
  operator_delete(this);
  return this;
}


