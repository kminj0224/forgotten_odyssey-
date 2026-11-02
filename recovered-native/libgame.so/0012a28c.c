/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012a28c  Symbol: GameEndTouchEnded */

/* GameScene::GameEndTouchEnded(cocos2d::CCPoint) */

void GameScene::GameEndTouchEnded(CCPoint param_1)

{
  bool bVar1;
  CCNode *pCVar2;
  int *piVar3;
  CCSize *pCVar4;
  New_Notice *this;
  CCNode *this_00;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  CCPoint in_r1;
  char *pcVar11;
  CCPoint in_r2;
  code *pcVar12;
  int iVar13;
  undefined8 uVar14;
  int local_38;
  CCPoint aCStack_20 [12];
  
  if (**(char **)(DAT_0012a600 + 0x12a2a4) != '\0') {
    return;
  }
  pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xe);
  iVar13 = 8;
  do {
    piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,iVar13);
    iVar13 = iVar13 + 1;
    (**(code **)(*piVar3 + 0x6c))(piVar3,1);
  } while (iVar13 != 0xb);
  if ((**(char **)(DAT_0012a604 + 0x12a2d4) == '\0') ||
     (99 < *(int *)((**(int **)(DAT_0012a610 + 0x12a2ec) + DAT_0012a60c) * 4 +
                   **(int **)(DAT_0012a608 + 0x12a2e4)))) {
    piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,8);
    pCVar4 = (CCSize *)(**(code **)(*piVar3 + 0x38))();
    piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,8);
    (**(code **)(*piVar3 + 0x7c))();
    iVar13 = KG_Touch(in_r1,in_r2,*pCVar4);
    if (iVar13 == 0) {
      piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,9);
      pCVar4 = (CCSize *)(**(code **)(*piVar3 + 0x38))();
      piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,9);
      (**(code **)(*piVar3 + 0x7c))();
      iVar13 = KG_Touch(in_r1,in_r2,*pCVar4);
      if (iVar13 == 0) {
        piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,10);
        pCVar4 = (CCSize *)(**(code **)(*piVar3 + 0x38))();
        piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,10);
        (**(code **)(*piVar3 + 0x7c))();
        iVar13 = KG_Touch(in_r1,in_r2,*pCVar4);
        if (iVar13 != 0) {
          iVar13 = cocos2d::CCScheduler::sharedScheduler();
          *(undefined4 *)(iVar13 + 0x14) = 0x3f800000;
          bVar1 = (bool)CocosDenshion::SimpleAudioEngine::sharedEngine();
          CocosDenshion::SimpleAudioEngine::stopBackgroundMusic(bVar1);
          CocosDenshion::SimpleAudioEngine::sharedEngine();
          CocosDenshion::SimpleAudioEngine::stopAllEffects();
          Lode_EndSroty();
        }
        goto LAB_0012a4be;
      }
      this = (New_Notice *)New_Notice::node();
      iVar13 = 0x11;
      pcVar11 = (char *)(DAT_0012a628 + 0x12a456);
    }
    else {
      this = (New_Notice *)New_Notice::node();
      iVar13 = 0xf;
      pcVar11 = (char *)(DAT_0012a624 + 0x12a414);
    }
    New_Notice::noticeWithType(this,pcVar11,iVar13,1);
    pcVar12 = *(code **)(*(int *)param_1 + 0xcc);
    uVar6 = 0xf;
  }
  else {
    piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,8);
    pCVar4 = (CCSize *)(**(code **)(*piVar3 + 0x38))();
    piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,8);
    (**(code **)(*piVar3 + 0x7c))();
    iVar13 = KG_Touch(in_r1,in_r2,*pCVar4);
    if (iVar13 == 0) {
      piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,9);
      pCVar4 = (CCSize *)(**(code **)(*piVar3 + 0x38))();
      piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,9);
      (**(code **)(*piVar3 + 0x7c))();
      iVar13 = KG_Touch(in_r1,in_r2,*pCVar4);
      if (iVar13 == 0) {
        piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,10);
        pCVar4 = (CCSize *)(**(code **)(*piVar3 + 0x38))();
        piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,10);
        (**(code **)(*piVar3 + 0x7c))();
        iVar13 = KG_Touch(in_r1,in_r2,*pCVar4);
        if (iVar13 == 0) goto LAB_0012a4be;
        this = (New_Notice *)New_Notice::node();
        iVar13 = 5;
        pcVar11 = (char *)(DAT_0012a61c + 0x12a3be);
      }
      else {
        this = (New_Notice *)New_Notice::node();
        iVar13 = 6;
        pcVar11 = (char *)(DAT_0012a618 + 0x12a37a);
      }
    }
    else {
      this = (New_Notice *)New_Notice::node();
      iVar13 = 7;
      pcVar11 = (char *)(DAT_0012a614 + 0x12a338);
    }
    New_Notice::noticeWithType(this,pcVar11,iVar13,1);
    pcVar12 = *(code **)(*(int *)param_1 + 0xcc);
    uVar6 = DAT_0012a620;
  }
  (*pcVar12)(param_1,this,uVar6,uVar6);
LAB_0012a4be:
  iVar13 = __aeabi_fcmpgt(in_r1,DAT_0012a62c);
  if ((((iVar13 != 0) && (iVar13 = __aeabi_fcmpgt(in_r2,DAT_0012a630), iVar13 != 0)) &&
      (iVar13 = __aeabi_fcmplt(in_r1,DAT_0012a634), iVar13 != 0)) &&
     (iVar13 = __aeabi_fcmplt(in_r2,DAT_0012a638), iVar13 != 0)) {
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xe);
    this_00 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar2,0);
    piVar3 = (int *)cocos2d::CCNode::getChildByTag(this_00,0);
    local_38 = 0x25;
    for (iVar13 = 0; iVar13 < *(int *)(param_1 + DAT_0012a644); iVar13 = iVar13 + 1) {
      puVar5 = (undefined4 *)(**(code **)(*piVar3 + 0x38))(piVar3);
      uVar6 = __subsf3(in_r1,DAT_0012a62c);
      uVar6 = __addsf3(uVar6,DAT_0012a63c);
      iVar7 = __aeabi_fcmplt(*puVar5,uVar6);
      if (iVar7 != 0) {
        puVar5 = (undefined4 *)(**(code **)(*piVar3 + 0x38))(piVar3);
        uVar8 = __floatsisf(local_38);
        uVar8 = __addsf3(uVar8,*puVar5);
        iVar7 = __aeabi_fcmpgt(uVar8,uVar6);
        if (iVar7 != 0) {
          if (*(char *)(param_1 + 0x530) == '\0') {
            piVar9 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar3,DAT_0012a640);
            pcVar12 = *(code **)(*piVar9 + 0x3c);
            piVar10 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar3,iVar13);
            puVar5 = (undefined4 *)(**(code **)(*piVar10 + 0x38))();
            __addsf3(*puVar5,0x3f800000);
            piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar3,iVar13);
            iVar7 = (**(code **)(*piVar3 + 0x38))();
            uVar14 = __addsf3(*(undefined4 *)(iVar7 + 4),0x3f800000);
            cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
            (*pcVar12)(piVar9,aCStack_20);
            iVar7 = param_1 + iVar13 * 0x14;
            Inventory_Item_Popup
                      ((CCNode *)param_1,(int)pCVar2,*(int *)(iVar7 + 300),iVar13,0,
                       *(int *)(iVar7 + 0x130));
          }
          break;
        }
      }
      local_38 = local_38 + 0x25;
    }
  }
  *(undefined *)(param_1 + DAT_0012a648) = 0;
  return;
}


