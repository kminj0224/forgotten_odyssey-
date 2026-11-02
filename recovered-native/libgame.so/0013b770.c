/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013b770  Symbol: ~CCFlipY */

/* cocos2d::CCFlipY::~CCFlipY() */

CCFlipY * __thiscall cocos2d::CCFlipY::~CCFlipY(CCFlipY *this)

{
  *(int *)this = *(int *)(DAT_0013b788 + 0x13b77a) + 8;
  CCActionInstant::~CCActionInstant((CCActionInstant *)this);
  return this;
}


