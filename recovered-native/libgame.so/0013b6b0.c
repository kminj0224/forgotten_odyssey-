/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013b6b0  Symbol: ~CCShow */

/* cocos2d::CCShow::~CCShow() */

CCShow * __thiscall cocos2d::CCShow::~CCShow(CCShow *this)

{
  *(int *)this = *(int *)(DAT_0013b6c8 + 0x13b6ba) + 8;
  CCActionInstant::~CCActionInstant((CCActionInstant *)this);
  return this;
}


