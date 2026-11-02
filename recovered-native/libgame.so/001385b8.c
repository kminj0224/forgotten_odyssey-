/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001385b8  Symbol: ~CCEaseInOut */

/* cocos2d::CCEaseInOut::~CCEaseInOut() */

CCEaseInOut * __thiscall cocos2d::CCEaseInOut::~CCEaseInOut(CCEaseInOut *this)

{
  *(int *)this = *(int *)(DAT_001385d0 + 0x1385c2) + 8;
  CCEaseRateAction::~CCEaseRateAction((CCEaseRateAction *)this);
  return this;
}


