/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ccfe4  Symbol: ccTouchesEnded */

/* StageSelect::ccTouchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*) */

void StageSelect::ccTouchesEnded(CCSet *param_1,CCEvent *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  CCNode *pCVar5;
  In_App_Layer *this;
  New_Notice *pNVar6;
  int *piVar7;
  char *pcVar8;
  CCFiniteTimeAction *pCVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  int *piVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  code *pcVar16;
  undefined4 *puVar17;
  int iVar18;
  int *piVar19;
  int *piVar20;
  float fVar21;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  undefined8 uVar22;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  int local_c0;
  undefined4 local_90;
  undefined4 local_8c;
  CCPoint local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  CCPoint aCStack_70 [32];
  CCPoint aCStack_50 [8];
  CCPoint aCStack_48 [8];
  CCPoint aCStack_40 [8];
  CCPoint aCStack_38 [8];
  CCPoint aCStack_30 [8];
  CCPoint aCStack_28 [20];
  
  iVar18 = DAT_000cd2b0 + 0xccff0;
  if (**(char **)(iVar18 + DAT_000cd2b4) != '\0') {
    FUN_000cd808();
  }
  if (**(char **)(iVar18 + DAT_000cd2b8) != '\0') {
    FUN_000cd808();
  }
  if (**(char **)(iVar18 + DAT_000cd2bc) != '\0') {
    FUN_000cd808();
  }
  uVar1 = (uint)**(byte **)(iVar18 + DAT_000cd2c0);
  if (uVar1 != 0) {
    uVar1 = FUN_000cd806();
  }
  piVar20 = *(int **)(iVar18 + DAT_000cd2c4);
  piVar13 = *(int **)(iVar18 + DAT_000cd2c8);
  do {
    if (*(char *)(*piVar20 + *piVar13 * 200 + uVar1 + 6) == '\0') {
      iVar2 = __divsi3(uVar1 - 1,10);
      iVar2 = iVar2 + 1;
      goto LAB_000cd058;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 != 100);
  iVar2 = 0;
LAB_000cd058:
  iVar3 = cocos2d::CCSet::anyObject((CCSet *)param_2);
  uVar14 = *(undefined4 *)(iVar3 + 0x18);
  uVar15 = *(undefined4 *)(iVar3 + 0x1c);
  puVar17 = *(undefined4 **)(iVar18 + DAT_000cd2d0);
  uVar4 = __divsf3(*puVar17,DAT_000cd2cc);
  __divsf3(uVar14,uVar4);
  uVar4 = __divsf3(puVar17[1],DAT_000cd2d4);
  uVar22 = __divsf3(uVar15,uVar4);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_80,(float)uVar22,(float)((ulonglong)uVar22 >> 0x20));
  pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xb);
  iVar3 = Sprite_Touch2(pCVar5,local_80);
  if (iVar3 == 0) {
    pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xd);
    iVar3 = Sprite_Touch2(pCVar5,local_80);
    if (iVar3 == 0) {
      pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xe);
      iVar3 = Sprite_Touch2(pCVar5,local_80);
      if (iVar3 == 0) {
        pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xf);
        iVar3 = Sprite_Touch2(pCVar5,local_80);
        if (iVar3 != 0) {
          GamedayLibrary::GamedayLib::sharedLib();
          iVar3 = GamedayLibrary::GamedayLib::GetInternet();
          if (iVar3 == 0) {
            pNVar6 = (New_Notice *)New_Notice::node();
            (**(code **)(*(int *)param_1 + 0xcc))(param_1,pNVar6,DAT_000cd2ec,DAT_000cd2ec);
            New_Notice::noticeWithType(pNVar6,(char *)(DAT_000cd2f0 + 0xcd1b6),DAT_000cd2f4,0);
          }
          else {
            pNVar6 = (New_Notice *)New_Notice::node();
            (**(code **)(*(int *)param_1 + 0xcc))(param_1,pNVar6,DAT_000cd2ec,DAT_000cd2ec);
            New_Notice::noticeWithCoupon(pNVar6,0x1b,1);
          }
          goto LAB_000cd232;
        }
        pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,8);
        iVar3 = Sprite_Touch2(pCVar5,local_80);
        if (iVar3 == 0) {
          pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,9);
          iVar3 = Sprite_Touch2(pCVar5,local_80);
          if (iVar3 == 0) goto LAB_000cd232;
          **(int **)(iVar18 + DAT_000cd2f8) = **(int **)(iVar18 + DAT_000cd2f8) + 1;
          **(undefined4 **)(iVar18 + DAT_000cd2fc) = 0;
          if (*(char *)(*piVar20 + 1) == '\0') goto LAB_000cd232;
          pcVar8 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          cVar12 = (char)DAT_000cd304 + '.';
        }
        else {
          **(int **)(iVar18 + DAT_000cd2f8) = **(int **)(iVar18 + DAT_000cd2f8) + -1;
          **(undefined4 **)(iVar18 + DAT_000cd2fc) = 0;
          if (*(char *)(*piVar20 + 1) == '\0') goto LAB_000cd232;
          pcVar8 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          cVar12 = (char)DAT_000cd300 + -0xc;
        }
      }
      else {
        **(undefined4 **)(iVar18 + DAT_000cd2d8) = 9;
        if (*(char *)(*piVar20 + 1) == '\0') goto LAB_000cd232;
        pcVar8 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        cVar12 = (char)DAT_000cd2e8 + 'R';
      }
    }
    else {
      this = (In_App_Layer *)In_App_Layer::node();
      In_App_Layer::In_App_Layer_Init(this,0,0,0);
      (**(code **)(*(int *)param_1 + 0xcc))(param_1,this,0x13,0x13);
      if (*(char *)(*piVar20 + 1) == '\0') goto LAB_000cd232;
      pcVar8 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      cVar12 = (char)DAT_000cd2e4 + '$';
    }
  }
  else {
    **(undefined4 **)(iVar18 + DAT_000cd2d8) = 3;
    **(undefined4 **)(iVar18 + DAT_000cd2dc) = 8;
    if (*(char *)(*piVar20 + 1) == '\0') goto LAB_000cd232;
    pcVar8 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
    cVar12 = (char)DAT_000cd2e0 + -0x24;
  }
  CocosDenshion::SimpleAudioEngine::playEffect(pcVar8,(bool)cVar12);
LAB_000cd232:
  iVar3 = cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x11);
  if (iVar3 == 0) {
    FUN_000cd808();
    return;
  }
  uVar22 = __subsf3(DAT_000cd2d4,local_7c);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_78,(float)uVar22,(float)((ulonglong)uVar22 >> 0x20));
  local_c0 = 1;
  do {
    pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x11);
    iVar3 = cocos2d::CCNode::getChildByTag(pCVar5,local_c0);
    if (iVar3 != 0) {
      cocos2d::CCSize::CCSize((CCSize *)&local_90);
      pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x11);
      piVar7 = (int *)cocos2d::CCNode::getChildByTag(pCVar5,local_c0);
      puVar17 = (undefined4 *)(**(code **)(*piVar7 + 0x38))();
      uVar14 = *puVar17;
      uVar4 = puVar17[1];
      iVar3 = cocos2d::CCNode::getChildByTag((CCNode *)piVar7,0);
      if (iVar3 == 0) {
        pcVar16 = *(code **)(*piVar7 + 0x7c);
        piVar19 = piVar7;
      }
      else {
        piVar19 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar7,0);
        pcVar16 = *(code **)(*piVar19 + 0x7c);
      }
      puVar17 = (undefined4 *)(*pcVar16)(piVar19);
      local_90 = *puVar17;
      local_8c = puVar17[1];
      iVar3 = __aeabi_fcmplt(uVar14,local_78);
      if ((iVar3 != 0) && (iVar3 = __aeabi_fcmplt(uVar4,local_74), iVar3 != 0)) {
        uVar14 = __addsf3(uVar14,local_90);
        iVar3 = __aeabi_fcmpgt(uVar14,local_78);
        if (iVar3 != 0) {
          uVar4 = __addsf3(uVar4,local_8c);
          iVar3 = __aeabi_fcmpgt(uVar4,local_74);
          if (iVar3 != 0) {
            piVar19 = *(int **)(iVar18 + DAT_000cd6b8);
            iVar3 = *piVar20;
            if (*(char *)(iVar3 + (*piVar19 + -1) * 10 + *piVar13 * 200 + local_c0 + 5) == '\0') {
              puVar17 = (undefined4 *)(**(code **)(*piVar7 + 0x38))(piVar7);
              uVar4 = *puVar17;
              iVar3 = cocos2d::CCNode::numberOfRunningActions();
              if (iVar3 == 0) {
                uVar22 = __subsf3(uVar4,DAT_000cd80c);
                fVar21 = (float)cocos2d::CCPoint::CCPoint
                                          (aCStack_50,(float)uVar22,
                                           (float)((ulonglong)uVar22 >> 0x20));
                pCVar9 = (CCFiniteTimeAction *)
                         cocos2d::CCMoveTo::actionWithDuration(fVar21,DAT_000cd810);
                uVar22 = __addsf3(uVar4,DAT_000cd80c);
                fVar21 = (float)cocos2d::CCPoint::CCPoint
                                          (aCStack_48,(float)uVar22,
                                           (float)((ulonglong)uVar22 >> 0x20));
                uVar4 = cocos2d::CCMoveTo::actionWithDuration(fVar21,DAT_000cd810);
                fVar21 = (float)cocos2d::CCPoint::CCPoint(aCStack_40,extraout_s0,extraout_s1);
                uVar14 = cocos2d::CCMoveTo::actionWithDuration(fVar21,DAT_000cd810);
                fVar21 = (float)cocos2d::CCPoint::CCPoint(aCStack_38,extraout_s0_00,extraout_s1_00);
                uVar15 = cocos2d::CCMoveTo::actionWithDuration(fVar21,DAT_000cd810);
                fVar21 = (float)cocos2d::CCPoint::CCPoint(aCStack_30,extraout_s0_01,extraout_s1_01);
                uVar10 = cocos2d::CCMoveTo::actionWithDuration(fVar21,DAT_000cd810);
                fVar21 = (float)cocos2d::CCPoint::CCPoint(aCStack_28,extraout_s0_02,extraout_s1_02);
                uVar11 = cocos2d::CCMoveTo::actionWithDuration(fVar21,DAT_000cd810);
                    /* WARNING: Subroutine does not return */
                cocos2d::CCSequence::actions(pCVar9,uVar4,uVar14,uVar15,uVar10,uVar11,0);
              }
            }
            else {
              piVar7 = *(int **)(iVar18 + DAT_000cd6bc);
              if (*piVar7 != local_c0) {
                *piVar7 = local_c0;
                if (*(char *)(iVar3 + 1) != '\0') {
                  pcVar8 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
                  CocosDenshion::SimpleAudioEngine::playEffect
                            (pcVar8,(bool)((char)DAT_000cd6c8 + -0x3a));
                }
                pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
                piVar13 = (int *)cocos2d::CCNode::getChildByTag(pCVar5,0x10);
                pcVar16 = *(code **)(*piVar13 + 0x3c);
                iVar2 = ((*piVar19 + -1) * 10 + *piVar7) * 8;
                iVar18 = *(int *)(iVar18 + DAT_000cd6cc);
                __floatsisf(*(int *)(iVar2 + iVar18) / 2);
                uVar22 = __floatsisf(*(int *)(iVar18 + iVar2 + 4) / 2);
                cocos2d::CCPoint::CCPoint
                          (aCStack_70,(float)uVar22,(float)((ulonglong)uVar22 >> 0x20));
                (*pcVar16)(piVar13,aCStack_70);
                    /* WARNING: Subroutine does not return */
                cocos2d::CCLog((char *)(DAT_000cd6d0 + 0xcd432),
                               *(int *)(*piVar7 * 8 + iVar18) / 2 + -0xf0,
                               *(int *)(iVar18 + *piVar7 * 8 + 4) / 2 + -0xa0);
              }
              **(undefined4 **)(iVar18 + DAT_000cd6c0) = 3;
              **(undefined4 **)(iVar18 + DAT_000cd6c4) = 2;
            }
          }
        }
      }
    }
    local_c0 = local_c0 + 1;
  } while (local_c0 != 0xb);
  piVar13 = *(int **)(iVar18 + DAT_000cd820);
  if (0 < *piVar13) {
    if (*piVar13 <= iVar2) {
      return;
    }
    *piVar13 = iVar2;
    FUN_000cd808();
    return;
  }
  *piVar13 = 1;
  FUN_000cd808();
  return;
}


