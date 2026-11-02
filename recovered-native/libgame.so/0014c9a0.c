/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014c9a0  Symbol: CCTransitionShrinkGrow */

/* cocos2d::CCTransitionShrinkGrow::CCTransitionShrinkGrow() */

CCTransitionShrinkGrow * __thiscall
cocos2d::CCTransitionShrinkGrow::CCTransitionShrinkGrow(CCTransitionShrinkGrow *this)

{
  int iVar1;
  
  CCTransitionScene::CCTransitionScene((CCTransitionScene *)this);
  iVar1 = *(int *)(DAT_0014c9c4 + 0x14c9b0);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x10c) = iVar1 + 0x104;
  return this;
}


