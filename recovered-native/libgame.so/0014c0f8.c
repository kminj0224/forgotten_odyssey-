/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014c0f8  Symbol: ~CCTransitionSlideInT */

/* cocos2d::CCTransitionSlideInT::~CCTransitionSlideInT() */

CCTransitionSlideInT * __thiscall
cocos2d::CCTransitionSlideInT::~CCTransitionSlideInT(CCTransitionSlideInT *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0014c11c + 0x14c102);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x10c) = iVar1 + 0x10c;
  CCTransitionSlideInL::~CCTransitionSlideInL((CCTransitionSlideInL *)this);
  return this;
}


