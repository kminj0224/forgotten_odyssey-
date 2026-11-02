/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00163606  Symbol: removeAllChildrenWithCleanup */

/* cocos2d::CCParallaxNode::removeAllChildrenWithCleanup(bool) */

void __thiscall
cocos2d::CCParallaxNode::removeAllChildrenWithCleanup(CCParallaxNode *this,bool param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(this + 0xfc);
  while (*piVar2 != 0) {
    iVar1 = *piVar2 + -1;
    *piVar2 = iVar1;
    CCObject::release(*(CCObject **)(iVar1 * 4 + piVar2[2]));
  }
  CCNode::removeAllChildrenWithCleanup((CCNode *)this,param_1);
  return;
}


