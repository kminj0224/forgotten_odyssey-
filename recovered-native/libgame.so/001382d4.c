/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001382d4  Symbol: ~CCEaseSineOut */

/* cocos2d::CCEaseSineOut::~CCEaseSineOut() */

CCEaseSineOut * __thiscall cocos2d::CCEaseSineOut::~CCEaseSineOut(CCEaseSineOut *this)

{
  *(int *)this = *(int *)(DAT_001382ec + 0x1382de) + 8;
  CCActionEase::~CCActionEase((CCActionEase *)this);
  return this;
}


