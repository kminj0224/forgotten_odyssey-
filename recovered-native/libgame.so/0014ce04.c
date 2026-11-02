/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014ce04  Symbol: CCTransitionFadeBL */

/* cocos2d::CCTransitionFadeBL::CCTransitionFadeBL() */

CCTransitionFadeBL * __thiscall
cocos2d::CCTransitionFadeBL::CCTransitionFadeBL(CCTransitionFadeBL *this)

{
  int iVar1;
  
  CCTransitionFadeTR::CCTransitionFadeTR((CCTransitionFadeTR *)this);
  iVar1 = *(int *)(DAT_0014ce28 + 0x14ce14);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x10c) = iVar1 + 0x108;
  return this;
}


