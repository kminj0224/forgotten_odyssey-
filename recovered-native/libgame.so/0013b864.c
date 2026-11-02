/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013b864  Symbol: ~CCCallFunc */

/* cocos2d::CCCallFunc::~CCCallFunc() */

CCCallFunc * __thiscall cocos2d::CCCallFunc::~CCCallFunc(CCCallFunc *this)

{
  ~CCCallFunc(this);
  operator_delete(this);
  return this;
}


