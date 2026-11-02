/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014c134  Symbol: ~CCTransitionSlideInR */

/* cocos2d::CCTransitionSlideInR::~CCTransitionSlideInR() */

CCTransitionSlideInR * __thiscall
cocos2d::CCTransitionSlideInR::~CCTransitionSlideInR(CCTransitionSlideInR *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0014c158 + 0x14c13e);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x10c) = iVar1 + 0x10c;
  CCTransitionSlideInL::~CCTransitionSlideInL((CCTransitionSlideInL *)this);
  return this;
}


