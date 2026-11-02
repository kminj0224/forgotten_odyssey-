/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013850c  Symbol: ~CCEaseBackInOut */

/* cocos2d::CCEaseBackInOut::~CCEaseBackInOut() */

CCEaseBackInOut * __thiscall cocos2d::CCEaseBackInOut::~CCEaseBackInOut(CCEaseBackInOut *this)

{
  *(int *)this = *(int *)(DAT_00138524 + 0x138516) + 8;
  CCActionEase::~CCActionEase((CCActionEase *)this);
  return this;
}


