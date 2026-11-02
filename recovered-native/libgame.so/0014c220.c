/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014c220  Symbol: ~CCTransitionMoveInR */

/* cocos2d::CCTransitionMoveInR::~CCTransitionMoveInR() */

CCTransitionMoveInR * __thiscall
cocos2d::CCTransitionMoveInR::~CCTransitionMoveInR(CCTransitionMoveInR *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0014c244 + 0x14c22a);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x10c) = iVar1 + 0x10c;
  CCTransitionMoveInL::~CCTransitionMoveInL((CCTransitionMoveInL *)this);
  return this;
}


