/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001555b0  Symbol: ~CCString */

/* cocos2d::CCString::~CCString() */

CCString * __thiscall cocos2d::CCString::~CCString(CCString *this)

{
  ~CCString(this);
  operator_delete(this);
  return this;
}


