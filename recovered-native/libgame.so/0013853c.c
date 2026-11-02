/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013853c  Symbol: ~CCEaseRateAction */

/* cocos2d::CCEaseRateAction::~CCEaseRateAction() */

CCEaseRateAction * __thiscall cocos2d::CCEaseRateAction::~CCEaseRateAction(CCEaseRateAction *this)

{
  *(int *)this = *(int *)(DAT_00138554 + 0x138546) + 8;
  CCActionEase::~CCActionEase((CCActionEase *)this);
  return this;
}


