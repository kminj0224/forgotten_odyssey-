/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001384dc  Symbol: ~CCEaseBackOut */

/* cocos2d::CCEaseBackOut::~CCEaseBackOut() */

CCEaseBackOut * __thiscall cocos2d::CCEaseBackOut::~CCEaseBackOut(CCEaseBackOut *this)

{
  *(int *)this = *(int *)(DAT_001384f4 + 0x1384e6) + 8;
  CCActionEase::~CCActionEase((CCActionEase *)this);
  return this;
}


