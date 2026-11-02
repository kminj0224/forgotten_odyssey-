/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014c8d0  Symbol: CCTransitionSlideInT */

/* cocos2d::CCTransitionSlideInT::CCTransitionSlideInT() */

CCTransitionSlideInT * __thiscall
cocos2d::CCTransitionSlideInT::CCTransitionSlideInT(CCTransitionSlideInT *this)

{
  int iVar1;
  
  CCTransitionSlideInL::CCTransitionSlideInL((CCTransitionSlideInL *)this);
  iVar1 = *(int *)(DAT_0014c8f4 + 0x14c8e0);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x10c) = iVar1 + 0x10c;
  return this;
}


