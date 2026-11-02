/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013b7ce  Symbol: ~CCActionInstant */

/* cocos2d::CCActionInstant::~CCActionInstant() */

CCActionInstant * __thiscall cocos2d::CCActionInstant::~CCActionInstant(CCActionInstant *this)

{
  ~CCActionInstant(this);
  operator_delete(this);
  return this;
}


