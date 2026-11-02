/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014c1e4  Symbol: ~CCTransitionMoveInT */

/* cocos2d::CCTransitionMoveInT::~CCTransitionMoveInT() */

CCTransitionMoveInT * __thiscall
cocos2d::CCTransitionMoveInT::~CCTransitionMoveInT(CCTransitionMoveInT *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0014c208 + 0x14c1ee);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x10c) = iVar1 + 0x10c;
  CCTransitionMoveInL::~CCTransitionMoveInL((CCTransitionMoveInL *)this);
  return this;
}


