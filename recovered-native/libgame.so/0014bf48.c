/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014bf48  Symbol: ~CCTransitionSplitCols */

/* cocos2d::CCTransitionSplitCols::~CCTransitionSplitCols() */

CCTransitionSplitCols * __thiscall
cocos2d::CCTransitionSplitCols::~CCTransitionSplitCols(CCTransitionSplitCols *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0014bf6c + 0x14bf52);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x10c) = iVar1 + 0x108;
  CCTransitionScene::~CCTransitionScene((CCTransitionScene *)this);
  return this;
}


