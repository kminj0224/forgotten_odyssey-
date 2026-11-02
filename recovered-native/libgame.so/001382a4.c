/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001382a4  Symbol: ~CCEaseSineIn */

/* cocos2d::CCEaseSineIn::~CCEaseSineIn() */

CCEaseSineIn * __thiscall cocos2d::CCEaseSineIn::~CCEaseSineIn(CCEaseSineIn *this)

{
  *(int *)this = *(int *)(DAT_001382bc + 0x1382ae) + 8;
  CCActionEase::~CCActionEase((CCActionEase *)this);
  return this;
}


