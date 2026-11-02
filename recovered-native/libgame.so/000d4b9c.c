/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d4b9c  Symbol: STEP_CASH_ENDED */

/* In_App_Layer::STEP_CASH_ENDED(cocos2d::CCPoint) */

void In_App_Layer::STEP_CASH_ENDED(CCPoint param_1)

{
  int iVar1;
  CCNode *pCVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  CCPoint in_r1;
  undefined4 in_r2;
  int iVar6;
  code *pcVar7;
  
  iVar6 = DAT_000d4d60;
  cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
  iVar6 = iVar6 + 0xd4bbe;
  iVar1 = __aeabi_fcmpgt(in_r1,DAT_000d4d64);
  if ((((iVar1 == 0) || (iVar1 = __aeabi_fcmplt(in_r1,DAT_000d4d68), iVar1 == 0)) ||
      (iVar1 = __aeabi_fcmpgt(in_r2,0x42000000), iVar1 == 0)) ||
     (iVar1 = __aeabi_fcmplt(in_r2,DAT_000d4d6c), iVar1 == 0)) {
    iVar1 = __aeabi_fcmpgt(in_r1,DAT_000d4d68);
    if (((iVar1 == 0) || (iVar1 = __aeabi_fcmplt(in_r1,DAT_000d4d70), iVar1 == 0)) ||
       ((iVar1 = __aeabi_fcmpgt(in_r2,0x42000000), iVar1 == 0 ||
        (iVar1 = __aeabi_fcmplt(in_r2,DAT_000d4d6c), iVar1 == 0)))) {
      pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,3);
      iVar1 = Sprite_Touch2(pCVar2,in_r1);
      if (iVar1 == 0) {
        pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,4);
        iVar1 = Sprite_Touch2(pCVar2,in_r1);
        if ((iVar1 != 0) && (**(char **)(iVar6 + DAT_000d4d78) == '\0')) {
          if ((**(int **)(iVar6 + DAT_000d4d80) != 0) && (**(int **)(iVar6 + DAT_000d4d84) == 0)) {
            MarketLayer::reset(**(MarketLayer ***)(iVar6 + DAT_000d4d88));
          }
          cocos2d::CCNode::removeFromParentAndCleanup((CCNode *)param_1,true);
          **(undefined **)(iVar6 + DAT_000d4d8c) = 1;
        }
      }
      else if (*(int *)(param_1 + 0x114) != -1) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCLog((char *)(DAT_000d4d74 + 0xd4c54));
      }
    }
  }
  else {
    In_App_Layer_Init((In_App_Layer *)param_1,1);
    *(undefined4 *)(param_1 + 0x114) = 0xffffffff;
  }
  if ((*(int *)(param_1 + 0x11c) == 0) &&
     (iVar6 = cocos2d::CCNode::getChildByTag((CCNode *)param_1,0), iVar6 != 0)) {
    iVar6 = 5;
    do {
      pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,iVar6);
      iVar1 = Sprite_Touch2(pCVar2,in_r1);
      if (iVar1 != 0) {
        piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xe);
        pcVar7 = *(code **)(*piVar3 + 0x3c);
        piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,iVar6);
        uVar5 = (**(code **)(*piVar4 + 0x38))();
        (*pcVar7)(piVar3,uVar5);
        Item_Text_View_Layer::Set_Item_Text
                  (*(Item_Text_View_Layer **)(param_1 + 0x110),iVar6 + -5,4);
        *(int *)(param_1 + 0x114) = iVar6 + -5;
      }
      piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,iVar6);
      iVar6 = iVar6 + 1;
      (**(code **)(*piVar3 + 0x108))(piVar3,0x3f800000);
    } while (iVar6 != 0xb);
  }
  return;
}


