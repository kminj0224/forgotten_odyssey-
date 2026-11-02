/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00158390  Symbol: ~CCApplication */

/* cocos2d::CCApplication::~CCApplication() */

CCApplication * __thiscall cocos2d::CCApplication::~CCApplication(CCApplication *this)

{
  ~CCApplication(this);
  operator_delete(this);
  return this;
}


