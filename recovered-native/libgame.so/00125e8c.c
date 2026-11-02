/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00125e8c  Symbol: NoticeTouchEnded */

/* GameScene::NoticeTouchEnded(cocos2d::CCPoint) */

void GameScene::NoticeTouchEnded(CCPoint param_1)

{
  CCNode *pCVar1;
  int *piVar2;
  CCSize *pCVar3;
  int iVar4;
  undefined4 uVar5;
  CCPoint in_r1;
  CCPoint in_r2;
  int iVar6;
  code *pcVar7;
  
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xd);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,2);
  iVar6 = DAT_00125f58;
  pCVar3 = (CCSize *)(**(code **)(*piVar2 + 0x38))();
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,2);
  iVar6 = iVar6 + 0x125ebc;
  (**(code **)(*piVar2 + 0x7c))();
  iVar4 = KG_Touch(in_r1,in_r2,*pCVar3);
  if (iVar4 == 0) {
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,3);
    pCVar3 = (CCSize *)(**(code **)(*piVar2 + 0x38))();
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,3);
    (**(code **)(*piVar2 + 0x7c))();
    iVar4 = KG_Touch(in_r1,in_r2,*pCVar3);
    if (iVar4 != 0) {
      NoticeNo((GameScene *)param_1,**(int **)(iVar6 + DAT_00125f5c));
      **(undefined4 **)(iVar6 + DAT_00125f64) = **(undefined4 **)(iVar6 + DAT_00125f60);
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xd);
      KG_removeChild(pCVar1,true);
      pcVar7 = *(code **)(*(int *)param_1 + 0xd0);
      uVar5 = cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xd);
      (*pcVar7)(param_1,uVar5,1);
    }
  }
  else {
    NoticeYes((GameScene *)param_1,**(int **)(iVar6 + DAT_00125f5c));
  }
  return;
}


