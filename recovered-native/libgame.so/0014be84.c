/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014be84  Symbol: ~CCTransitionFadeDown */

/* cocos2d::CCTransitionFadeDown::~CCTransitionFadeDown() */

CCTransitionFadeDown * __thiscall
cocos2d::CCTransitionFadeDown::~CCTransitionFadeDown(CCTransitionFadeDown *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0014bea8 + 0x14be8e);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x10c) = iVar1 + 0x108;
  CCTransitionFadeTR::~CCTransitionFadeTR((CCTransitionFadeTR *)this);
  return this;
}


