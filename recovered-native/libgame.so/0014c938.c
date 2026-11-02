/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014c938  Symbol: CCTransitionSlideInB */

/* cocos2d::CCTransitionSlideInB::CCTransitionSlideInB() */

CCTransitionSlideInB * __thiscall
cocos2d::CCTransitionSlideInB::CCTransitionSlideInB(CCTransitionSlideInB *this)

{
  int iVar1;
  
  CCTransitionSlideInL::CCTransitionSlideInL((CCTransitionSlideInL *)this);
  iVar1 = *(int *)(DAT_0014c95c + 0x14c948);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x10c) = iVar1 + 0x10c;
  return this;
}


