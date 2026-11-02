/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014befc  Symbol: ~CCTransitionFadeBL */

/* cocos2d::CCTransitionFadeBL::~CCTransitionFadeBL() */

CCTransitionFadeBL * __thiscall
cocos2d::CCTransitionFadeBL::~CCTransitionFadeBL(CCTransitionFadeBL *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0014bf20 + 0x14bf06);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x10c) = iVar1 + 0x108;
  CCTransitionFadeTR::~CCTransitionFadeTR((CCTransitionFadeTR *)this);
  return this;
}


