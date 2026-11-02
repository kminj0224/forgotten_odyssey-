/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014c868  Symbol: CCTransitionSlideInR */

/* cocos2d::CCTransitionSlideInR::CCTransitionSlideInR() */

CCTransitionSlideInR * __thiscall
cocos2d::CCTransitionSlideInR::CCTransitionSlideInR(CCTransitionSlideInR *this)

{
  int iVar1;
  
  CCTransitionSlideInL::CCTransitionSlideInL((CCTransitionSlideInL *)this);
  iVar1 = *(int *)(DAT_0014c88c + 0x14c878);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x10c) = iVar1 + 0x10c;
  return this;
}


