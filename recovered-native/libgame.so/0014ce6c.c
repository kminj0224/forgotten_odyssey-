/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014ce6c  Symbol: CCTransitionFadeUp */

/* cocos2d::CCTransitionFadeUp::CCTransitionFadeUp() */

CCTransitionFadeUp * __thiscall
cocos2d::CCTransitionFadeUp::CCTransitionFadeUp(CCTransitionFadeUp *this)

{
  int iVar1;
  
  CCTransitionFadeTR::CCTransitionFadeTR((CCTransitionFadeTR *)this);
  iVar1 = *(int *)(DAT_0014ce90 + 0x14ce7c);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x10c) = iVar1 + 0x108;
  return this;
}


