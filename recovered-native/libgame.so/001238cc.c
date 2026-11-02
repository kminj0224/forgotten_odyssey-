/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001238cc  Symbol: GameTouchMove */

/* GameScene::GameTouchMove(cocos2d::CCPoint) */

void GameScene::GameTouchMove(CCPoint param_1)

{
  CCNode *pCVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  CCPoint in_r1;
  CCPoint in_r2;
  int **ppiVar6;
  CCPoint **ppCVar7;
  CCPoint *pCVar8;
  
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(*(CCNode **)(param_1 + 0x120),1);
  iVar2 = Sprite_Touch2(pCVar1,in_r1);
  if (iVar2 == 0) {
    iVar2 = 6;
    do {
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(*(CCNode **)(param_1 + 0x120),iVar2);
      iVar3 = Sprite_Touch2(pCVar1,in_r1);
      if (iVar3 != 0) {
        return;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0xf);
    ppiVar6 = *(int ***)(DAT_00123988 + 0x123954);
    ppCVar7 = (CCPoint **)(DAT_0012398c + 0x123958);
    puVar4 = (undefined4 *)(**(code **)(**ppiVar6 + 0x38))();
    pCVar8 = *ppCVar7;
    uVar5 = __subsf3(*pCVar8,in_r1);
    uVar5 = __subsf3(*puVar4,uVar5);
    iVar2 = __aeabi_fcmplt(uVar5,0);
    if (iVar2 != 0) {
      puVar4 = (undefined4 *)(**(code **)(**ppiVar6 + 0x38))();
      uVar5 = __subsf3(*pCVar8,in_r1);
      uVar5 = __subsf3(*puVar4,uVar5);
      iVar2 = __aeabi_fcmpgt(uVar5,DAT_00123984);
      if (iVar2 != 0) {
        KG_BG_Move((CCNode *)param_1,in_r1,in_r2);
      }
    }
    *pCVar8 = in_r1;
    pCVar8[1] = in_r2;
  }
  return;
}


