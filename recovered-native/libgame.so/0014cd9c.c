/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014cd9c  Symbol: CCTransitionFadeTR */

/* cocos2d::CCTransitionFadeTR::CCTransitionFadeTR() */

CCTransitionFadeTR * __thiscall
cocos2d::CCTransitionFadeTR::CCTransitionFadeTR(CCTransitionFadeTR *this)

{
  int iVar1;
  
  CCTransitionScene::CCTransitionScene((CCTransitionScene *)this);
  iVar1 = *(int *)(DAT_0014cdc0 + 0x14cdac);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x10c) = iVar1 + 0x108;
  return this;
}


