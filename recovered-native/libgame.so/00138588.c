/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00138588  Symbol: ~CCEaseOut */

/* cocos2d::CCEaseOut::~CCEaseOut() */

CCEaseOut * __thiscall cocos2d::CCEaseOut::~CCEaseOut(CCEaseOut *this)

{
  *(int *)this = *(int *)(DAT_001385a0 + 0x138592) + 8;
  CCEaseRateAction::~CCEaseRateAction((CCEaseRateAction *)this);
  return this;
}


