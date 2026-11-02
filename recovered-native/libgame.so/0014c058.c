/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014c058  Symbol: ~CCTransitionShrinkGrow */

/* cocos2d::CCTransitionShrinkGrow::~CCTransitionShrinkGrow() */

CCTransitionShrinkGrow * __thiscall
cocos2d::CCTransitionShrinkGrow::~CCTransitionShrinkGrow(CCTransitionShrinkGrow *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0014c07c + 0x14c062);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x10c) = iVar1 + 0x104;
  CCTransitionScene::~CCTransitionScene((CCTransitionScene *)this);
  return this;
}


