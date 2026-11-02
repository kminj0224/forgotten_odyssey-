/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015cdb8  Symbol: ~CCArray */

/* cocos2d::CCArray::~CCArray() */

CCArray * __thiscall cocos2d::CCArray::~CCArray(CCArray *this)

{
  ~CCArray(this);
  operator_delete(this);
  return this;
}


