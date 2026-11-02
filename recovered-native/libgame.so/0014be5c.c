/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014be5c  Symbol: ~CCTransitionFadeTR */

/* cocos2d::CCTransitionFadeTR::~CCTransitionFadeTR() */

CCTransitionFadeTR * __thiscall
cocos2d::CCTransitionFadeTR::~CCTransitionFadeTR(CCTransitionFadeTR *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0014be80 + 0x14be66);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x10c) = iVar1 + 0x108;
  CCTransitionScene::~CCTransitionScene((CCTransitionScene *)this);
  return this;
}


