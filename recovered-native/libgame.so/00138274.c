/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00138274  Symbol: ~CCEaseExponentialInOut */

/* cocos2d::CCEaseExponentialInOut::~CCEaseExponentialInOut() */

CCEaseExponentialInOut * __thiscall
cocos2d::CCEaseExponentialInOut::~CCEaseExponentialInOut(CCEaseExponentialInOut *this)

{
  *(int *)this = *(int *)(DAT_0013828c + 0x13827e) + 8;
  CCActionEase::~CCActionEase((CCActionEase *)this);
  return this;
}


