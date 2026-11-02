/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012387c  Symbol: GameTouchBegan */

/* GameScene::GameTouchBegan(cocos2d::CCPoint) */

undefined8 GameScene::GameTouchBegan(CCPoint param_1)

{
  CCNode *pCVar1;
  int iVar2;
  int iVar3;
  CCPoint in_r1;
  CCPoint in_r2;
  CCPoint *pCVar4;
  
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(*(CCNode **)(param_1 + 0x120),1);
  iVar2 = Sprite_Touch2(pCVar1,in_r1);
  if (iVar2 == 0) {
    iVar2 = 6;
    do {
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(*(CCNode **)(param_1 + 0x120),iVar2);
      iVar3 = Sprite_Touch2(pCVar1,in_r1);
      if (iVar3 == 0) {
        pCVar4 = *(CCPoint **)(DAT_001238c8 + 0x1238b8);
        *pCVar4 = in_r1;
        pCVar4[1] = in_r2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0xf);
  }
  return CONCAT44(in_r2,in_r1);
}


