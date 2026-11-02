/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c58c  Symbol: ~CCFadeIn */

/* cocos2d::CCFadeIn::~CCFadeIn() */

CCFadeIn * __thiscall cocos2d::CCFadeIn::~CCFadeIn(CCFadeIn *this)

{
  *(int *)this = *(int *)(DAT_0013c5a4 + 0x13c596) + 8;
  CCActionInterval::~CCActionInterval((CCActionInterval *)this);
  return this;
}


