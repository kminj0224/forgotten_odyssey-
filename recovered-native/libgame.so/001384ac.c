/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001384ac  Symbol: ~CCEaseBackIn */

/* cocos2d::CCEaseBackIn::~CCEaseBackIn() */

CCEaseBackIn * __thiscall cocos2d::CCEaseBackIn::~CCEaseBackIn(CCEaseBackIn *this)

{
  *(int *)this = *(int *)(DAT_001384c4 + 0x1384b6) + 8;
  CCActionEase::~CCActionEase((CCActionEase *)this);
  return this;
}


