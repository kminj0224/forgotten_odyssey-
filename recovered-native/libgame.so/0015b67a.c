/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015b67a  Symbol: removeSpriteFromAtlas */

/* cocos2d::CCSpriteBatchNode::removeSpriteFromAtlas(cocos2d::CCSprite*) */

undefined8 __thiscall
cocos2d::CCSpriteBatchNode::removeSpriteFromAtlas(CCSpriteBatchNode *this,CCSprite *param_1)

{
  CCSprite *pCVar1;
  CCArray *this_00;
  int iVar2;
  CCSprite **ppCVar3;
  CCSprite **ppCVar4;
  CCSprite *local_1c;
  
  CCTextureAtlas::removeQuadAtIndex(*(CCTextureAtlas **)(this + 0x100),*(uint *)(param_1 + 0x10c));
  CCSprite::useSelfRender(param_1);
  pCVar1 = (CCSprite *)CCArray::indexOfObject(*(CCObject **)(this + 0x10c));
  local_1c = param_1;
  if (pCVar1 != (CCSprite *)0xffffffff) {
    CCArray::removeObjectAtIndex(*(uint *)(this + 0x10c));
    local_1c = (CCSprite *)CCArray::count(*(CCArray **)(this + 0x10c));
    for (; pCVar1 < local_1c; pCVar1 = pCVar1 + 1) {
      iVar2 = CCArray::objectAtIndex(*(CCArray **)(this + 0x10c),(uint)pCVar1);
      *(int *)(iVar2 + 0x10c) = *(int *)(iVar2 + 0x10c) + -1;
    }
  }
  this_00 = (CCArray *)(**(code **)(*(int *)param_1 + 0x58))(param_1);
  if ((this_00 != (CCArray *)0x0) && (iVar2 = CCArray::count(this_00), iVar2 != 0)) {
    iVar2 = **(int **)(this_00 + 0x14);
    if (iVar2 != 0) {
      ppCVar4 = (CCSprite **)(*(int **)(this_00 + 0x14))[2];
      ppCVar3 = ppCVar4 + iVar2 + -1;
      while (ppCVar4 <= ppCVar3) {
        pCVar1 = *ppCVar4;
        ppCVar4 = ppCVar4 + 1;
        if (pCVar1 == (CCSprite *)0x0) break;
        removeSpriteFromAtlas(this,pCVar1);
      }
    }
  }
  return CONCAT44(local_1c,this);
}


