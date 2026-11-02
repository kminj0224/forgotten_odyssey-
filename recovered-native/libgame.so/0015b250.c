/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015b250  Symbol: draw */

/* cocos2d::CCSpriteBatchNode::draw() */

void __thiscall cocos2d::CCSpriteBatchNode::draw(CCSpriteBatchNode *this)

{
  bool bVar1;
  int iVar2;
  CCSprite *this_00;
  int *piVar3;
  CCSprite **ppCVar4;
  CCSprite **ppCVar5;
  
  CCNode::draw();
  iVar2 = (**(code **)(**(int **)(this + 0x100) + 0x14))();
  if (iVar2 != 0) {
    if (((*(CCArray **)(this + 0x10c) != (CCArray *)0x0) &&
        (iVar2 = CCArray::count(*(CCArray **)(this + 0x10c)), iVar2 != 0)) &&
       (*(int *)(this + 0x10c) != 0)) {
      piVar3 = *(int **)(*(int *)(this + 0x10c) + 0x14);
      iVar2 = *piVar3;
      if (iVar2 != 0) {
        ppCVar5 = (CCSprite **)piVar3[2];
        ppCVar4 = ppCVar5 + iVar2 + -1;
        while (ppCVar5 <= ppCVar4) {
          this_00 = *ppCVar5;
          ppCVar5 = ppCVar5 + 1;
          if (this_00 == (CCSprite *)0x0) break;
          CCSprite::updateTransform(this_00);
        }
      }
    }
    if ((*(int *)(this + 0x104) != 1) || (bVar1 = false, *(int *)(this + 0x108) != DAT_0015b2d4)) {
      glBlendFunc(*(int *)(this + 0x104),*(undefined4 *)(this + 0x108));
      bVar1 = true;
    }
    CCTextureAtlas::drawQuads(*(CCTextureAtlas **)(this + 0x100));
    if (bVar1) {
      glBlendFunc(1,DAT_0015b2d4);
    }
  }
  return;
}


