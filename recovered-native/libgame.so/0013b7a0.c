/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013b7a0  Symbol: ~CCPlace */

/* cocos2d::CCPlace::~CCPlace() */

CCPlace * __thiscall cocos2d::CCPlace::~CCPlace(CCPlace *this)

{
  *(int *)this = *(int *)(DAT_0013b7b8 + 0x13b7aa) + 8;
  CCActionInstant::~CCActionInstant((CCActionInstant *)this);
  return this;
}


