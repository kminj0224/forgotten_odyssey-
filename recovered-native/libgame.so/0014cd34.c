/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014cd34  Symbol: CCTransitionSplitRows */

/* cocos2d::CCTransitionSplitRows::CCTransitionSplitRows() */

CCTransitionSplitRows * __thiscall
cocos2d::CCTransitionSplitRows::CCTransitionSplitRows(CCTransitionSplitRows *this)

{
  int iVar1;
  
  CCTransitionSplitCols::CCTransitionSplitCols((CCTransitionSplitCols *)this);
  iVar1 = *(int *)(DAT_0014cd58 + 0x14cd44);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x10c) = iVar1 + 0x108;
  return this;
}


