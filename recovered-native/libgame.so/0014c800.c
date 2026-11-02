/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014c800  Symbol: CCTransitionSlideInL */

/* cocos2d::CCTransitionSlideInL::CCTransitionSlideInL() */

CCTransitionSlideInL * __thiscall
cocos2d::CCTransitionSlideInL::CCTransitionSlideInL(CCTransitionSlideInL *this)

{
  int iVar1;
  
  CCTransitionScene::CCTransitionScene((CCTransitionScene *)this);
  iVar1 = *(int *)(DAT_0014c824 + 0x14c810);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x10c) = iVar1 + 0x10c;
  return this;
}


