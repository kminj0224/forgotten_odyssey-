/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015b708  Symbol: removeAllChildrenWithCleanup */

/* cocos2d::CCSpriteBatchNode::removeAllChildrenWithCleanup(bool) */

void __thiscall
cocos2d::CCSpriteBatchNode::removeAllChildrenWithCleanup(CCSpriteBatchNode *this,bool param_1)

{
  int iVar1;
  CCSprite *pCVar2;
  int *piVar3;
  CCSprite **ppCVar4;
  CCSprite **ppCVar5;
  
  if (((*(CCArray **)(this + 0x40) != (CCArray *)0x0) &&
      (iVar1 = CCArray::count(*(CCArray **)(this + 0x40)), iVar1 != 0)) &&
     (*(int *)(this + 0x40) != 0)) {
    piVar3 = *(int **)(*(int *)(this + 0x40) + 0x14);
    iVar1 = *piVar3;
    if (iVar1 != 0) {
      ppCVar5 = (CCSprite **)piVar3[2];
      ppCVar4 = ppCVar5 + iVar1 + -1;
      while (ppCVar5 <= ppCVar4) {
        pCVar2 = *ppCVar5;
        ppCVar5 = ppCVar5 + 1;
        if (pCVar2 == (CCSprite *)0x0) break;
        removeSpriteFromAtlas(this,pCVar2);
      }
    }
  }
  CCNode::removeAllChildrenWithCleanup((CCNode *)this,param_1);
  CCArray::removeAllObjects(*(CCArray **)(this + 0x10c));
  CCTextureAtlas::removeAllQuads(*(CCTextureAtlas **)(this + 0x100));
  return;
}


