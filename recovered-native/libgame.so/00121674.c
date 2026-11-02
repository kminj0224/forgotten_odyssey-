/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00121674  Symbol: Episode_Call */

/* GameScene::Episode_Call() */

void __thiscall GameScene::Episode_Call(GameScene *this)

{
  CCNode *pCVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(DAT_001216a0 + 0x12167c);
  if (*piVar3 == 5) {
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x12);
    iVar2 = cocos2d::CCNode::numberOfRunningActions();
    if (iVar2 == 0) {
      KG_removeChild(pCVar1,true);
      *piVar3 = 7;
    }
  }
  return;
}


