/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014c730  Symbol: CCTransitionMoveInT */

/* cocos2d::CCTransitionMoveInT::CCTransitionMoveInT() */

CCTransitionMoveInT * __thiscall
cocos2d::CCTransitionMoveInT::CCTransitionMoveInT(CCTransitionMoveInT *this)

{
  int iVar1;
  
  CCTransitionMoveInL::CCTransitionMoveInL((CCTransitionMoveInL *)this);
  iVar1 = *(int *)(DAT_0014c754 + 0x14c740);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x10c) = iVar1 + 0x10c;
  return this;
}


