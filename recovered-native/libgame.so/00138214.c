/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00138214  Symbol: ~CCEaseExponentialIn */

/* cocos2d::CCEaseExponentialIn::~CCEaseExponentialIn() */

CCEaseExponentialIn * __thiscall
cocos2d::CCEaseExponentialIn::~CCEaseExponentialIn(CCEaseExponentialIn *this)

{
  *(int *)this = *(int *)(DAT_0013822c + 0x13821e) + 8;
  CCActionEase::~CCActionEase((CCActionEase *)this);
  return this;
}


