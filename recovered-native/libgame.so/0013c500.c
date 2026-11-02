/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c500  Symbol: ~CCScaleTo */

/* cocos2d::CCScaleTo::~CCScaleTo() */

CCScaleTo * __thiscall cocos2d::CCScaleTo::~CCScaleTo(CCScaleTo *this)

{
  *(int *)this = *(int *)(DAT_0013c518 + 0x13c50a) + 8;
  CCActionInterval::~CCActionInterval((CCActionInterval *)this);
  return this;
}


