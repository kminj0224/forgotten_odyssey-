/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014cccc  Symbol: CCTransitionSplitCols */

/* cocos2d::CCTransitionSplitCols::CCTransitionSplitCols() */

CCTransitionSplitCols * __thiscall
cocos2d::CCTransitionSplitCols::CCTransitionSplitCols(CCTransitionSplitCols *this)

{
  int iVar1;
  
  CCTransitionScene::CCTransitionScene((CCTransitionScene *)this);
  iVar1 = *(int *)(DAT_0014ccf0 + 0x14ccdc);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x10c) = iVar1 + 0x108;
  return this;
}


