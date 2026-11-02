/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011ea18  Symbol: ccTouchesEnded */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0011ecb8) */
/* WARNING: Removing unreachable block (ram,0x0011ecb8) */
/* New_Notice::ccTouchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*) */

void New_Notice::ccTouchesEnded(CCSet *param_1,CCEvent *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  CCNode *pCVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  undefined8 uVar11;
  float extraout_s1;
  CCPoint local_28 [2];
  CCPoint local_20 [12];
  
  iVar2 = cocos2d::CCSet::anyObject((CCSet *)param_2);
  uVar7 = *(undefined4 *)(iVar2 + 0x18);
  uVar8 = *(undefined4 *)(iVar2 + 0x1c);
  iVar2 = DAT_0011ed04 + 0x11ea32;
  puVar9 = *(undefined4 **)(iVar2 + DAT_0011ed0c);
  uVar3 = __divsf3(*puVar9,DAT_0011ed08);
  __divsf3(uVar7,uVar3);
  uVar3 = __divsf3(puVar9[1],DAT_0011ed10);
  uVar11 = __divsf3(uVar8,uVar3);
  cocos2d::CCPoint::CCPoint((CCPoint *)local_28,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  if (*(int *)(param_1 + 0x114) == 0x1b) {
    Touch_Coupon_Ended((CCPoint)param_1);
  }
  iVar4 = cocos2d::CCNode::getChildByTag((CCNode *)param_1,8);
  if (iVar4 == 0) goto LAB_0011ec52;
  pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,8);
  cocos2d::CCNode::setScale(pCVar5,extraout_s0);
  pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,8);
  iVar4 = Sprite_Touch2(pCVar5,local_28[0]);
  if (iVar4 == 0) goto LAB_0011ec52;
  piVar10 = *(int **)(iVar2 + DAT_0011ed14);
  if (*(char *)(*piVar10 + 1) != '\0') {
    pcVar6 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
    CocosDenshion::SimpleAudioEngine::playEffect(pcVar6,(bool)((char)DAT_0011ed18 + -0x3c));
  }
  iVar4 = *(int *)(param_1 + 0x114);
  if (iVar4 == 0x10) {
    goStageMenu();
    goto LAB_0011ec52;
  }
  if (iVar4 < 0x11) {
    if (iVar4 < 8) {
      if (4 < iVar4) {
        Inventory_is_Full_Next((New_Notice *)param_1);
        goto LAB_0011ec52;
      }
      if (iVar4 == 2) {
        Market_Shop_Item_Sell_Touch((New_Notice *)param_1);
        goto LAB_0011ec52;
      }
      if (2 < iVar4) {
        Market_Shop_Inventory_Full_Touch((New_Notice *)param_1);
        goto LAB_0011ec52;
      }
      if (iVar4 == 1) {
        Makret_Shop_Item_Buy_Touch((New_Notice *)param_1);
        goto LAB_0011ec52;
      }
    }
    else {
      if (iVar4 == 10) {
LAB_0011eb76:
        Reinforcement_Touch((New_Notice *)param_1);
        goto LAB_0011ec52;
      }
      if (iVar4 < 0xb) {
        if (iVar4 == 8) {
          Makret_CashShop_Item_Buy((New_Notice *)param_1);
          goto LAB_0011ec52;
        }
        if (iVar4 == 9) {
                    /* WARNING: Subroutine does not return */
          cocos2d::CCLog((char *)(DAT_0011ed3c + 0x11ec32));
        }
      }
      else {
        if (iVar4 == 0xe) {
          Slot_Rmove((New_Notice *)param_1);
          goto LAB_0011ec52;
        }
        if (0xe < iVar4) {
          goMainMenu((New_Notice *)param_1);
          goto LAB_0011ec52;
        }
        if (iVar4 == 0xb) {
          Resurrection_true_Touch((New_Notice *)param_1);
          goto LAB_0011ec52;
        }
      }
    }
  }
  else if (iVar4 == 0x18) {
    piVar10 = (int *)(**(code **)(*(int *)param_1 + 0x90))(param_1);
    (**(code **)(*piVar10 + 0x114))(piVar10,1);
  }
  else if (iVar4 < 0x19) {
    if (iVar4 == 0x14) {
      go_In_App((New_Notice *)param_1);
      goto LAB_0011ec52;
    }
    if (iVar4 < 0x15) {
      if (iVar4 == 0x11) {
LAB_0011ebb6:
        GameisRestart();
        goto LAB_0011ec52;
      }
      if (iVar4 == 0x13) goto LAB_0011eb76;
    }
    else {
      if (iVar4 == 0x15) {
        go_In_App_CP((New_Notice *)param_1);
        goto LAB_0011ec52;
      }
      if (iVar4 == 0x17) goto LAB_0011ebb6;
    }
  }
  else {
    if (iVar4 == 0x1b) {
      Coupon_call((New_Notice *)param_1);
      goto LAB_0011ec52;
    }
    if (iVar4 < 0x1c) {
      if (iVar4 == 0x19) {
        SkillReset();
        goto LAB_0011ec52;
      }
      if (iVar4 == 0x1a) {
        *(undefined4 *)(*piVar10 + (**(int **)(iVar2 + DAT_0011ed28) + DAT_0011ed2c) * 4 + 4) = 1;
        pCVar5 = (CCNode *)(**(code **)(*(int *)param_1 + 0x90))(param_1);
        pcVar6 = (char *)cocos2d::CCNode::getChildByTag(pCVar5,0x16);
        cocos2d::CCPoint::CCPoint(local_20,extraout_s0_00,extraout_s1);
        Tutorial_Layer::TutorialWithLayrTouch(pcVar6,DAT_0011ed38 + 0x11ec1e,true,false,1);
      }
    }
    else if ((DAT_0011ed1c <= iVar4) && ((iVar4 <= DAT_0011ed20 || (iVar4 == DAT_0011ed24)))) {
      **(undefined **)(iVar2 + DAT_0011ed40) = 1;
    }
  }
  cocos2d::CCNode::removeFromParentAndCleanup((CCNode *)param_1,true);
LAB_0011ec52:
  if ((*(int *)(param_1 + 0x110) == 1) &&
     (iVar4 = cocos2d::CCNode::getChildByTag((CCNode *)param_1,9), iVar4 != 0)) {
    pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,9);
    cocos2d::CCNode::setScale(pCVar5,extraout_s0_01);
    pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,9);
    iVar4 = Sprite_Touch2(pCVar5,local_28[0]);
    if (iVar4 != 0) {
      piVar10 = *(int **)(iVar2 + DAT_0011ed14);
      if (*(char *)(*piVar10 + 1) != '\0') {
        pcVar6 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::playEffect(pcVar6,(bool)((char)DAT_0011ed44 + -0x56));
      }
      switch(*(undefined4 *)(param_1 + 0x114)) {
      case 5:
        iVar4 = cocos2d::CCScheduler::sharedScheduler();
        *(undefined4 *)(iVar4 + 0x14) = 0x3f800000;
        bVar1 = (bool)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::stopBackgroundMusic(bVar1);
        CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::stopAllEffects();
        GameScene::Lode_EndSroty();
        break;
      case 6:
        GameisRestart();
        break;
      case 7:
        goMainMenu((New_Notice *)param_1);
        break;
      case 0xb:
      case 0x17:
        goMarket();
        break;
      case 0x19:
        cocos2d::CCNode::removeFromParentAndCleanup((CCNode *)param_1,true);
        break;
      case 0x1a:
        *(undefined4 *)(*piVar10 + (**(int **)(iVar2 + DAT_0011edcc) + DAT_0011edd0) * 4 + 4) = 1000
        ;
        piVar10 = (int *)(**(code **)(*(int *)param_1 + 0x90))(param_1);
        (**(code **)(*piVar10 + 0x114))(piVar10,1);
        cocos2d::CCNode::removeFromParentAndCleanup((CCNode *)param_1,true);
        **(undefined **)(iVar2 + DAT_0011edd4) = 0;
      }
      iVar4 = *(int *)(param_1 + 0x114);
      if ((((iVar4 != 0x17) && (iVar4 != 0xb)) && (iVar4 != 0x1a)) && (iVar4 != 0x19)) {
        cocos2d::CCNode::removeFromParentAndCleanup((CCNode *)param_1,true);
      }
      **(undefined **)(iVar2 + DAT_0011edd8) = 1;
    }
  }
  return;
}


