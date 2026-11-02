/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00138558  Symbol: ~CCEaseIn */

/* cocos2d::CCEaseIn::~CCEaseIn() */

CCEaseIn * __thiscall cocos2d::CCEaseIn::~CCEaseIn(CCEaseIn *this)

{
  *(int *)this = *(int *)(DAT_00138570 + 0x138562) + 8;
  CCEaseRateAction::~CCEaseRateAction((CCEaseRateAction *)this);
  return this;
}


