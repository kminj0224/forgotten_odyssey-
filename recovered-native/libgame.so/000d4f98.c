/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d4f98  Symbol: STEP_CASH_ITEM_TOUCH_ENDED */

/* In_App_Layer::STEP_CASH_ITEM_TOUCH_ENDED(cocos2d::CCPoint) */

void In_App_Layer::STEP_CASH_ITEM_TOUCH_ENDED(CCPoint param_1)

{
  int iVar1;
  CCNode *pCVar2;
  New_Notice *pNVar3;
  CCPoint in_r1;
  char *pcVar4;
  undefined4 in_r2;
  int *piVar5;
  int iVar6;
  
  iVar6 = DAT_000d51a0 + 0xd4fa8;
  if (**(char **)(iVar6 + DAT_000d51a4) != '\0') {
    return;
  }
  cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
  iVar1 = __aeabi_fcmpgt(in_r1,DAT_000d51a8);
  if ((((iVar1 == 0) || (iVar1 = __aeabi_fcmplt(in_r1,DAT_000d51ac), iVar1 == 0)) ||
      (iVar1 = __aeabi_fcmpgt(in_r2,0x42000000), iVar1 == 0)) ||
     (iVar1 = __aeabi_fcmplt(in_r2,DAT_000d51b0), iVar1 == 0)) {
    iVar1 = __aeabi_fcmpgt(in_r1,DAT_000d51ac);
    if (((iVar1 == 0) || (iVar1 = __aeabi_fcmplt(in_r1,DAT_000d51b4), iVar1 == 0)) ||
       ((iVar1 = __aeabi_fcmpgt(in_r2,0x42000000), iVar1 == 0 ||
        (iVar1 = __aeabi_fcmplt(in_r2,DAT_000d51b0), iVar1 == 0)))) {
      pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,3);
      iVar1 = Sprite_Touch2(pCVar2,in_r1);
      if (iVar1 == 0) {
        pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,4);
        iVar1 = Sprite_Touch2(pCVar2,in_r1);
        if (iVar1 != 0) {
          cocos2d::CCNode::removeFromParentAndCleanup((CCNode *)param_1,true);
          **(undefined **)(iVar6 + DAT_000d51ec) = 1;
        }
      }
      else {
        iVar1 = *(int *)(param_1 + 0x118);
        piVar5 = *(int **)(iVar6 + DAT_000d51b8);
        if (iVar1 == 8) {
          if (*(char *)(*piVar5 + **(int **)(iVar6 + DAT_000d51bc) * 9 + DAT_000d51c0) != '\0') {
            pNVar3 = (New_Notice *)New_Notice::node();
            pcVar4 = (char *)(DAT_000d51c4 + 0xd507c);
            goto LAB_000d50a2;
          }
        }
        else if (iVar1 == 9) {
          if (*(char *)(*piVar5 + **(int **)(iVar6 + DAT_000d51bc) * 9 + DAT_000d51c8) != '\0') {
            pNVar3 = (New_Notice *)New_Notice::node();
            pcVar4 = (char *)(DAT_000d51cc + 0xd50a4);
LAB_000d50a2:
            New_Notice::noticeWithType(pNVar3,pcVar4,DAT_000d51d0,0);
            (**(code **)(*(int *)param_1 + 0xcc))(param_1,pNVar3,DAT_000d51d4,DAT_000d51d4);
            return;
          }
        }
        else if ((iVar1 == 10) &&
                (*(char *)(*piVar5 + **(int **)(iVar6 + DAT_000d51bc) * 9 + DAT_000d51d8) != '\0'))
        {
          pNVar3 = (New_Notice *)New_Notice::node();
          pcVar4 = (char *)(DAT_000d51dc + 0xd50e6);
          goto LAB_000d50a2;
        }
        if (iVar1 - 7U < 2) {
          if (*(int *)(*piVar5 + (**(int **)(iVar6 + DAT_000d51bc) + DAT_000d51e4) * 4 + 4) <
              *(int *)(*(int *)(iVar6 + DAT_000d51e0) + (iVar1 + 0x97) * 0x18)) {
            Not_is_Money((In_App_Layer *)param_1);
            return;
          }
        }
        else if (*(int *)(*piVar5 + DAT_000d51e8) <
                 *(int *)(*(int *)(iVar6 + DAT_000d51e0) + (iVar1 + 0x97) * 0x18)) {
          Not_is_CP((In_App_Layer *)param_1);
          return;
        }
        if (iVar1 != -1) {
          pNVar3 = (New_Notice *)New_Notice::node();
          New_Notice::noticeWithTypeItem
                    (pNVar3,8,(char *)0x0,*(int *)(param_1 + 0x118),1,4,
                     *(int *)(param_1 + 0x118) + 0x97);
          (**(code **)(*(int *)param_1 + 0xcc))(param_1,pNVar3,DAT_000d51d4,DAT_000d51d4);
        }
      }
    }
    else {
      In_App_Layer_Init((In_App_Layer *)param_1,0);
      *(undefined4 *)(param_1 + 0x118) = 0xffffffff;
    }
  }
  if (*(int *)(param_1 + 0x118) != -1) {
    Item_Text_View_Layer::Set_Item_Text
              (*(Item_Text_View_Layer **)(param_1 + 0x110),*(int *)(param_1 + 0x118),5);
  }
  return;
}


