/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00143cb8  Symbol: ~CCData */

/* cocos2d::CCData::~CCData() */

CCData * __thiscall cocos2d::CCData::~CCData(CCData *this)

{
  ~CCData(this);
  operator_delete(this);
  return this;
}


