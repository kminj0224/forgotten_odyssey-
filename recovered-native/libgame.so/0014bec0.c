/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014bec0  Symbol: ~CCTransitionFadeUp */

/* cocos2d::CCTransitionFadeUp::~CCTransitionFadeUp() */

CCTransitionFadeUp * __thiscall
cocos2d::CCTransitionFadeUp::~CCTransitionFadeUp(CCTransitionFadeUp *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0014bee4 + 0x14beca);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x10c) = iVar1 + 0x108;
  CCTransitionFadeTR::~CCTransitionFadeTR((CCTransitionFadeTR *)this);
  return this;
}


