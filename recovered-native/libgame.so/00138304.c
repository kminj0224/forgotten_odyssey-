/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00138304  Symbol: ~CCEaseSineInOut */

/* cocos2d::CCEaseSineInOut::~CCEaseSineInOut() */

CCEaseSineInOut * __thiscall cocos2d::CCEaseSineInOut::~CCEaseSineInOut(CCEaseSineInOut *this)

{
  *(int *)this = *(int *)(DAT_0013831c + 0x13830e) + 8;
  CCActionEase::~CCActionEase((CCActionEase *)this);
  return this;
}


