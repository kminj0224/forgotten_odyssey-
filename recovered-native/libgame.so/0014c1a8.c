/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014c1a8  Symbol: ~CCTransitionMoveInB */

/* cocos2d::CCTransitionMoveInB::~CCTransitionMoveInB() */

CCTransitionMoveInB * __thiscall
cocos2d::CCTransitionMoveInB::~CCTransitionMoveInB(CCTransitionMoveInB *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0014c1cc + 0x14c1b2);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x10c) = iVar1 + 0x10c;
  CCTransitionMoveInL::~CCTransitionMoveInL((CCTransitionMoveInL *)this);
  return this;
}


