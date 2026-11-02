/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00159a94  Symbol: removeAllChildrenWithCleanup */

/* cocos2d::CCSprite::removeAllChildrenWithCleanup(bool) */

undefined8 cocos2d::CCSprite::removeAllChildrenWithCleanup(bool param_1)

{
  CCNode *this;
  CCSprite *pCVar1;
  undefined4 in_r1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  this = (CCNode *)(uint)param_1;
  if ((this[0x128] != (CCNode)0x0) && (*(int *)(this + 0x40) != 0)) {
    piVar2 = *(int **)(*(int *)(this + 0x40) + 0x14);
    iVar3 = *piVar2;
    if (iVar3 != 0) {
      piVar2 = (int *)piVar2[2];
      piVar4 = piVar2 + iVar3 + -1;
      while (piVar2 <= piVar4) {
        iVar3 = *piVar2;
        piVar2 = piVar2 + 1;
        if (iVar3 == 0) break;
        pCVar1 = (CCSprite *)
                 __dynamic_cast(iVar3,*(undefined4 *)(DAT_00159af8 + 0x159ada),
                                *(undefined4 *)(DAT_00159afc + 0x159adc),0);
        if (pCVar1 != (CCSprite *)0x0) {
          CCSpriteBatchNode::removeSpriteFromAtlas(*(CCSpriteBatchNode **)(this + 0x110),pCVar1);
        }
      }
    }
  }
  CCNode::removeAllChildrenWithCleanup(this,SUB41(in_r1,0));
  this[0x11a] = (CCNode)0x0;
  return CONCAT44(in_r1,this);
}


