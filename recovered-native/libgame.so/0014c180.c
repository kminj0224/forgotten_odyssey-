/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014c180  Symbol: ~CCTransitionMoveInL */

/* cocos2d::CCTransitionMoveInL::~CCTransitionMoveInL() */

CCTransitionMoveInL * __thiscall
cocos2d::CCTransitionMoveInL::~CCTransitionMoveInL(CCTransitionMoveInL *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0014c1a4 + 0x14c18a);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x10c) = iVar1 + 0x10c;
  CCTransitionScene::~CCTransitionScene((CCTransitionScene *)this);
  return this;
}


