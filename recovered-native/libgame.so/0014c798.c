/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014c798  Symbol: CCTransitionMoveInB */

/* cocos2d::CCTransitionMoveInB::CCTransitionMoveInB() */

CCTransitionMoveInB * __thiscall
cocos2d::CCTransitionMoveInB::CCTransitionMoveInB(CCTransitionMoveInB *this)

{
  int iVar1;
  
  CCTransitionMoveInL::CCTransitionMoveInL((CCTransitionMoveInL *)this);
  iVar1 = *(int *)(DAT_0014c7bc + 0x14c7a8);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x10c) = iVar1 + 0x10c;
  return this;
}


