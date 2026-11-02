/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014bf70  Symbol: ~CCTransitionSplitRows */

/* cocos2d::CCTransitionSplitRows::~CCTransitionSplitRows() */

CCTransitionSplitRows * __thiscall
cocos2d::CCTransitionSplitRows::~CCTransitionSplitRows(CCTransitionSplitRows *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0014bf94 + 0x14bf7a);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x10c) = iVar1 + 0x108;
  CCTransitionSplitCols::~CCTransitionSplitCols((CCTransitionSplitCols *)this);
  return this;
}


