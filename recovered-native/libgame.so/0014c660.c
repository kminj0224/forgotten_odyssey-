/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014c660  Symbol: CCTransitionMoveInL */

/* cocos2d::CCTransitionMoveInL::CCTransitionMoveInL() */

CCTransitionMoveInL * __thiscall
cocos2d::CCTransitionMoveInL::CCTransitionMoveInL(CCTransitionMoveInL *this)

{
  int iVar1;
  
  CCTransitionScene::CCTransitionScene((CCTransitionScene *)this);
  iVar1 = *(int *)(DAT_0014c684 + 0x14c670);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x10c) = iVar1 + 0x10c;
  return this;
}


