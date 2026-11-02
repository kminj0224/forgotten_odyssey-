/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014c0bc  Symbol: ~CCTransitionSlideInB */

/* cocos2d::CCTransitionSlideInB::~CCTransitionSlideInB() */

CCTransitionSlideInB * __thiscall
cocos2d::CCTransitionSlideInB::~CCTransitionSlideInB(CCTransitionSlideInB *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0014c0e0 + 0x14c0c6);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x10c) = iVar1 + 0x10c;
  CCTransitionSlideInL::~CCTransitionSlideInL((CCTransitionSlideInL *)this);
  return this;
}


