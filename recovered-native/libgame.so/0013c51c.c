/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c51c  Symbol: ~CCScaleBy */

/* cocos2d::CCScaleBy::~CCScaleBy() */

CCScaleBy * __thiscall cocos2d::CCScaleBy::~CCScaleBy(CCScaleBy *this)

{
  *(int *)this = *(int *)(DAT_0013c534 + 0x13c526) + 8;
  CCScaleTo::~CCScaleTo((CCScaleTo *)this);
  return this;
}


