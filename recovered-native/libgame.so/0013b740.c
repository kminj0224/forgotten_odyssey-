/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013b740  Symbol: ~CCFlipX */

/* cocos2d::CCFlipX::~CCFlipX() */

CCFlipX * __thiscall cocos2d::CCFlipX::~CCFlipX(CCFlipX *this)

{
  *(int *)this = *(int *)(DAT_0013b758 + 0x13b74a) + 8;
  CCActionInstant::~CCActionInstant((CCActionInstant *)this);
  return this;
}


