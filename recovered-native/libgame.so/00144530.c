/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00144530  Symbol: ~CCSet */

/* cocos2d::CCSet::~CCSet() */

CCSet * __thiscall cocos2d::CCSet::~CCSet(CCSet *this)

{
  ~CCSet(this);
  operator_delete(this);
  return this;
}


