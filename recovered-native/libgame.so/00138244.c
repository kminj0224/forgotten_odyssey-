/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00138244  Symbol: ~CCEaseExponentialOut */

/* cocos2d::CCEaseExponentialOut::~CCEaseExponentialOut() */

CCEaseExponentialOut * __thiscall
cocos2d::CCEaseExponentialOut::~CCEaseExponentialOut(CCEaseExponentialOut *this)

{
  *(int *)this = *(int *)(DAT_0013825c + 0x13824e) + 8;
  CCActionEase::~CCActionEase((CCActionEase *)this);
  return this;
}


