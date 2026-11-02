/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014c6c8  Symbol: CCTransitionMoveInR */

/* cocos2d::CCTransitionMoveInR::CCTransitionMoveInR() */

CCTransitionMoveInR * __thiscall
cocos2d::CCTransitionMoveInR::CCTransitionMoveInR(CCTransitionMoveInR *this)

{
  int iVar1;
  
  CCTransitionMoveInL::CCTransitionMoveInL((CCTransitionMoveInL *)this);
  iVar1 = *(int *)(DAT_0014c6ec + 0x14c6d8);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x10c) = iVar1 + 0x10c;
  return this;
}


