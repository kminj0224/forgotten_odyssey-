/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00163cda  Symbol: removeTileAt */

/* cocos2d::CCTMXLayer::removeTileAt(cocos2d::CCPoint const&) */

undefined8 __thiscall cocos2d::CCTMXLayer::removeTileAt(CCTMXLayer *this,CCPoint *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  CCNode *pCVar6;
  uint *puVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  
  iVar1 = tileGIDAt((CCPoint *)this);
  if (iVar1 != 0) {
    uVar2 = __mulsf3(param_1[1],*(undefined4 *)(this + 0x110));
    __addsf3(uVar2,*param_1);
    uVar3 = __fixunssfsi();
    uVar4 = atlasIndexForExistantZ(this,uVar3);
    *(undefined4 *)(uVar3 * 4 + *(int *)(this + 0x120)) = 0;
    puVar7 = *(uint **)(this + 0x150);
    uVar5 = *puVar7;
    *puVar7 = uVar5 - 1;
    iVar1 = uVar4 << 2;
    for (uVar8 = uVar4; uVar8 < uVar5 - 1; uVar8 = uVar8 + 1) {
      *(undefined4 *)(puVar7[2] + iVar1) = *(undefined4 *)(puVar7[2] + iVar1 + 4);
      iVar1 = iVar1 + 4;
    }
    pCVar6 = (CCNode *)CCNode::getChildByTag((CCNode *)this,uVar3);
    if (pCVar6 == (CCNode *)0x0) {
      CCTextureAtlas::removeQuadAtIndex(*(CCTextureAtlas **)(this + 0x100),uVar4);
      if (((*(CCArray **)(this + 0x40) != (CCArray *)0x0) &&
          (iVar1 = CCArray::count(*(CCArray **)(this + 0x40)), iVar1 != 0)) &&
         (*(int *)(this + 0x40) != 0)) {
        piVar9 = *(int **)(*(int *)(this + 0x40) + 0x14);
        iVar1 = *piVar9;
        if (iVar1 != 0) {
          piVar10 = (int *)piVar9[2];
          piVar9 = piVar10 + iVar1 + -1;
          while (piVar10 <= piVar9) {
            iVar1 = *piVar10;
            piVar10 = piVar10 + 1;
            if (iVar1 == 0) break;
            if (uVar4 <= *(uint *)(iVar1 + 0x10c)) {
              *(uint *)(iVar1 + 0x10c) = *(uint *)(iVar1 + 0x10c) - 1;
            }
          }
        }
      }
    }
    else {
      CCSpriteBatchNode::removeChild((CCSpriteBatchNode *)this,pCVar6,true);
    }
  }
  return CONCAT44(param_1,this);
}


