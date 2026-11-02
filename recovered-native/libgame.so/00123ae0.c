/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00123ae0  Symbol: GameEndTouchBegan */

/* GameScene::GameEndTouchBegan(cocos2d::CCPoint) */

void GameScene::GameEndTouchBegan(CCPoint param_1)

{
  CCNode *pCVar1;
  int *piVar2;
  CCSize *pCVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  CCPoint in_r1;
  CCPoint in_r2;
  code *pcVar7;
  
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xe);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,8);
  pCVar3 = (CCSize *)(**(code **)(*piVar2 + 0x38))();
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,8);
  (**(code **)(*piVar2 + 0x7c))();
  iVar4 = KG_Touch(in_r1,in_r2,*pCVar3);
  if (iVar4 == 0) {
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,9);
    pCVar3 = (CCSize *)(**(code **)(*piVar2 + 0x38))();
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,9);
    (**(code **)(*piVar2 + 0x7c))();
    iVar4 = KG_Touch(in_r1,in_r2,*pCVar3);
    if (iVar4 == 0) {
      piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,10);
      pCVar3 = (CCSize *)(**(code **)(*piVar2 + 0x38))();
      piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,10);
      (**(code **)(*piVar2 + 0x7c))();
      iVar4 = KG_Touch(in_r1,in_r2,*pCVar3);
      if (iVar4 == 0) {
        if (0 < *(int *)(param_1 + DAT_00123c7c)) {
          iVar4 = __aeabi_fcmpgt(in_r1,DAT_00123c80);
          if (iVar4 != 0) {
            iVar4 = __aeabi_fcmpgt(in_r2,DAT_00123c84);
            if (((iVar4 != 0) && (iVar4 = __aeabi_fcmplt(in_r1,DAT_00123c88), iVar4 != 0)) &&
               (iVar4 = __aeabi_fcmplt(in_r2,DAT_00123c8c), iVar4 != 0)) {
              *(undefined *)(param_1 + DAT_00123c90) = 1;
              *(undefined *)(param_1 + 0x530) = 0;
              iVar4 = DAT_00123c94;
              *(CCPoint *)(param_1 + DAT_00123c94) = in_r1;
              *(CCPoint *)(param_1 + iVar4 + 4) = in_r2;
              *(CCPoint *)(param_1 + 0x528) = in_r1;
              *(CCPoint *)(param_1 + 0x52c) = in_r2;
            }
          }
        }
        pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xe);
        iVar4 = cocos2d::CCNode::getChildByTag(pCVar1,DAT_00123c98);
        if (iVar4 != 0) {
          piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xe);
          pcVar7 = *(code **)(*piVar2 + 0xd0);
          pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xe);
          uVar6 = cocos2d::CCNode::getChildByTag(pCVar1,DAT_00123c98);
          (*pcVar7)(piVar2,uVar6,1);
        }
        return;
      }
      piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,10);
      (**(code **)(*piVar2 + 0x6c))(piVar2,0);
      pcVar5 = (char *)(DAT_00123c78 + 0x123bd0);
    }
    else {
      piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,9);
      (**(code **)(*piVar2 + 0x6c))(piVar2,0);
      pcVar5 = (char *)(DAT_00123c74 + 0x123b86);
    }
  }
  else {
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,8);
    (**(code **)(*piVar2 + 0x6c))(piVar2,0);
    pcVar5 = (char *)(DAT_00123c70 + 0x123b3c);
  }
                    /* WARNING: Subroutine does not return */
  cocos2d::CCLog(pcVar5);
}


