/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014ced4  Symbol: CCTransitionFadeDown */

/* cocos2d::CCTransitionFadeDown::CCTransitionFadeDown() */

CCTransitionFadeDown * __thiscall
cocos2d::CCTransitionFadeDown::CCTransitionFadeDown(CCTransitionFadeDown *this)

{
  int iVar1;
  
  CCTransitionFadeTR::CCTransitionFadeTR((CCTransitionFadeTR *)this);
  iVar1 = *(int *)(DAT_0014cef8 + 0x14cee4);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x10c) = iVar1 + 0x108;
  return this;
}


