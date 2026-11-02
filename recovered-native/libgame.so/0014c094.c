/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014c094  Symbol: ~CCTransitionSlideInL */

/* cocos2d::CCTransitionSlideInL::~CCTransitionSlideInL() */

CCTransitionSlideInL * __thiscall
cocos2d::CCTransitionSlideInL::~CCTransitionSlideInL(CCTransitionSlideInL *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0014c0b8 + 0x14c09e);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x10c) = iVar1 + 0x10c;
  CCTransitionScene::~CCTransitionScene((CCTransitionScene *)this);
  return this;
}


