/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c5bc  Symbol: ~CCFadeOut */

/* cocos2d::CCFadeOut::~CCFadeOut() */

CCFadeOut * __thiscall cocos2d::CCFadeOut::~CCFadeOut(CCFadeOut *this)

{
  *(int *)this = *(int *)(DAT_0013c5d4 + 0x13c5c6) + 8;
  CCActionInterval::~CCActionInterval((CCActionInterval *)this);
  return this;
}


