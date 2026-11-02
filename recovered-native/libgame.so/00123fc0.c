/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00123fc0  Symbol: NoticeTouchBegan */

/* GameScene::NoticeTouchBegan(cocos2d::CCPoint) */

void GameScene::NoticeTouchBegan(CCPoint param_1)

{
  CCNode *pCVar1;
  int *piVar2;
  CCSize *pCVar3;
  int iVar4;
  CCPoint in_r1;
  CCPoint in_r2;
  float extraout_s0;
  
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xd);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,2);
  pCVar3 = (CCSize *)(**(code **)(*piVar2 + 0x38))();
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,2);
  (**(code **)(*piVar2 + 0x7c))();
  iVar4 = KG_Touch(in_r1,in_r2,*pCVar3);
  if (iVar4 == 0) {
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,3);
    pCVar3 = (CCSize *)(**(code **)(*piVar2 + 0x38))();
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,3);
    (**(code **)(*piVar2 + 0x7c))();
    iVar4 = KG_Touch(in_r1,in_r2,*pCVar3);
    if (iVar4 == 0) {
      return;
    }
    iVar4 = 3;
  }
  else {
    iVar4 = 2;
  }
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,iVar4);
  cocos2d::CCNode::setScale(pCVar1,extraout_s0);
  return;
}


