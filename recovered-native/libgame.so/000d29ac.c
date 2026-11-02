/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d29ac  Symbol: ccTouchesEnded */

/* InventoryLayer::ccTouchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*) */

void InventoryLayer::ccTouchesEnded(CCSet *param_1,CCEvent *param_2)

{
  int iVar1;
  undefined4 uVar2;
  CCArray *this;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  uint uVar6;
  CCNode *pCVar7;
  int *piVar8;
  int iVar9;
  CCPoint *pCVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  code *pcVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  undefined8 uVar19;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  uint local_84;
  undefined4 local_58;
  undefined4 local_54;
  CCPoint local_50 [2];
  CCPoint aCStack_48 [8];
  CCPoint aCStack_40 [8];
  CCPoint aCStack_38 [8];
  CCPoint aCStack_30 [8];
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  iVar16 = DAT_000d2d04 + 0xd29b8;
  if (**(char **)(iVar16 + DAT_000d2d08) == '\0') {
    iVar1 = cocos2d::CCSet::anyObject((CCSet *)param_2);
    uVar11 = *(undefined4 *)(iVar1 + 0x18);
    uVar12 = *(undefined4 *)(iVar1 + 0x1c);
    puVar14 = *(undefined4 **)(iVar16 + DAT_000d2d10);
    uVar2 = __divsf3(*puVar14,DAT_000d2d0c);
    __divsf3(uVar11,uVar2);
    uVar2 = __divsf3(puVar14[1],DAT_000d2d14);
    uVar19 = __divsf3(uVar12,uVar2);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_58,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20))
    ;
    if ((**(char **)(iVar16 + DAT_000d2d18) == '\0') && (param_1[0x130] == (CCSet)0x0)) {
      iVar1 = __aeabi_fcmpgt(local_58,DAT_000d2d1c);
      if ((iVar1 == 0) ||
         (((iVar1 = __aeabi_fcmplt(local_58,DAT_000d2d20), iVar1 == 0 ||
           (iVar1 = __aeabi_fcmpgt(local_54,DAT_000d2d24), iVar1 == 0)) ||
          (iVar1 = __aeabi_fcmplt(local_54,DAT_000d2d28), iVar1 == 0)))) {
        *(undefined4 *)(param_1 + 0x134) = 0xffffffff;
        pCVar7 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
        piVar8 = (int *)cocos2d::CCNode::getChildByTag(pCVar7,DAT_000d2e14);
        pcVar13 = *(code **)(*piVar8 + 0x3c);
        cocos2d::CCPoint::CCPoint(aCStack_20,extraout_s0_03,extraout_s1_03);
        pCVar10 = aCStack_20;
LAB_000d2e0c:
        (*pcVar13)(piVar8,pCVar10);
      }
      else {
        puVar14 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x38))(param_1);
        __subsf3(local_58,*puVar14);
        iVar1 = (**(code **)(*(int *)param_1 + 0x38))(param_1);
        uVar2 = __addsf3(local_54,*(undefined4 *)(iVar1 + 4));
        piVar8 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
        iVar1 = (**(code **)(*piVar8 + 0x38))();
        uVar19 = __addsf3(uVar2,*(undefined4 *)(iVar1 + 4));
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)local_50,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
        piVar8 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
        this = (CCArray *)(**(code **)(*piVar8 + 0x58))();
        for (local_84 = 0; uVar6 = cocos2d::CCArray::count(this), local_84 < uVar6;
            local_84 = local_84 + 1) {
          piVar8 = (int *)cocos2d::CCArray::objectAtIndex(this,local_84);
          iVar1 = Sprite_Touch2((CCNode *)piVar8,local_50[0]);
          if (iVar1 != 0) {
            iVar17 = *(int *)(param_1 + 0x134);
            iVar1 = (**(code **)(*piVar8 + 0xa0))(piVar8);
            if (iVar17 == iVar1) {
              piVar8 = *(int **)(iVar16 + DAT_000d2d2c);
              iVar1 = *(int *)(param_1 + 0x134);
              iVar17 = *(int *)(*piVar8 + iVar1 * 0x14 + **(int **)(iVar16 + DAT_000d2d30) * 2000 +
                               DAT_000d2d34);
              if ((iVar17 != 0) && (**(int **)(iVar16 + DAT_000d2d38) == 2)) {
                iVar15 = **(int **)(iVar16 + DAT_000d2d3c);
                if (iVar15 == 1) {
                  iVar9 = 7;
                  iVar3 = 0;
                }
                else if (iVar15 == 2) {
                  iVar9 = 7;
                  iVar3 = 1;
                }
                else {
                  iVar9 = 5;
                  iVar3 = 2;
                  if (iVar15 != 4) {
                    if (iVar15 == 3) {
                      iVar9 = 6;
                      iVar3 = 4;
                    }
                    else if (iVar15 == 5) {
                      iVar9 = 5;
                      iVar3 = 3;
                    }
                    else {
                      iVar9 = 0;
                      iVar3 = 0;
                    }
                  }
                }
                iVar18 = iVar17 * 0x18 + *(int *)(iVar16 + DAT_000d2d44);
                if ((*(int *)(iVar18 + 8) <=
                     *(int *)(*piVar8 + (**(int **)(iVar16 + DAT_000d2d30) * 9 + iVar15 +
                                        DAT_000d2d40) * 4 + 4)) && (iVar17 != 0x9e)) {
                  iVar15 = *(int *)(iVar18 + 0x14);
                  if (iVar15 == iVar3) {
                    Item_Set_Equip((InventoryLayer *)param_1,0,iVar1,iVar17);
                    *(undefined4 *)(param_1 + 0x134) = 0xfffffffe;
                    if (*(char *)(*piVar8 + 1) != '\0') {
                      pcVar4 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
                      CocosDenshion::SimpleAudioEngine::playEffect
                                (pcVar4,(bool)((char)DAT_000d2d48 + -0x20));
                    }
                    pCVar7 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
                    piVar8 = (int *)cocos2d::CCNode::getChildByTag(pCVar7,DAT_000d2d4c);
                    pcVar13 = *(code **)(*piVar8 + 0x3c);
                    cocos2d::CCPoint::CCPoint(aCStack_48,extraout_s0,extraout_s1);
                    pCVar10 = aCStack_48;
                    goto LAB_000d2e0c;
                  }
                  if (iVar15 == iVar9) {
                    Item_Set_Equip((InventoryLayer *)param_1,1,iVar1,iVar17);
                    *(undefined4 *)(param_1 + 0x134) = 0xfffffffe;
                    if (*(char *)(*piVar8 + 1) != '\0') {
                      pcVar4 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
                      CocosDenshion::SimpleAudioEngine::playEffect
                                (pcVar4,(bool)((char)DAT_000d2d54 + '2'));
                    }
                    pCVar7 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
                    piVar8 = (int *)cocos2d::CCNode::getChildByTag(pCVar7,DAT_000d2d4c);
                    pcVar13 = *(code **)(*piVar8 + 0x3c);
                    cocos2d::CCPoint::CCPoint(aCStack_40,extraout_s0_00,extraout_s1_00);
                    pCVar10 = aCStack_40;
                    goto LAB_000d2e0c;
                  }
                  if (iVar15 - 8U < 3) {
                    Item_Set_Equip((InventoryLayer *)param_1,3,iVar1,iVar17);
                    *(undefined4 *)(param_1 + 0x134) = 0xfffffffe;
                    if (*(char *)(*piVar8 + 1) != '\0') {
                      pcVar4 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
                      CocosDenshion::SimpleAudioEngine::playEffect
                                (pcVar4,(bool)((char)DAT_000d2d58 + -0x78));
                    }
                    pCVar7 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
                    piVar8 = (int *)cocos2d::CCNode::getChildByTag(pCVar7,DAT_000d2d4c);
                    pcVar13 = *(code **)(*piVar8 + 0x3c);
                    cocos2d::CCPoint::CCPoint(aCStack_38,extraout_s0_01,extraout_s1_01);
                    pCVar10 = aCStack_38;
                    goto LAB_000d2e0c;
                  }
                  if (iVar15 - 0xbU < 4) {
                    Item_Set_Equip((InventoryLayer *)param_1,2,iVar1,iVar17);
                    *(undefined4 *)(param_1 + 0x134) = 0xfffffffe;
                    if (*(char *)(*piVar8 + 1) != '\0') {
                      pcVar4 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
                      CocosDenshion::SimpleAudioEngine::playEffect
                                (pcVar4,(bool)((char)DAT_000d2d5c + -0x22));
                    }
                    pCVar7 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
                    piVar8 = (int *)cocos2d::CCNode::getChildByTag(pCVar7,DAT_000d2d4c);
                    pcVar13 = *(code **)(*piVar8 + 0x3c);
                    cocos2d::CCPoint::CCPoint(aCStack_30,extraout_s0_02,extraout_s1_02);
                    pCVar10 = aCStack_30;
                    goto LAB_000d2e0c;
                  }
                }
              }
            }
            else {
              iVar1 = (**(code **)(*piVar8 + 0xa0))(piVar8);
              if (iVar1 != DAT_000d2e14) {
                uVar2 = (**(code **)(*piVar8 + 0xa0))(piVar8);
                *(undefined4 *)(param_1 + 0x134) = uVar2;
                pCVar7 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
                piVar5 = (int *)cocos2d::CCNode::getChildByTag(pCVar7,DAT_000d2e14);
                pcVar13 = *(code **)(*piVar5 + 0x3c);
                puVar14 = (undefined4 *)(**(code **)(*piVar8 + 0x38))(piVar8);
                __addsf3(*puVar14,0x3f800000);
                iVar16 = (**(code **)(*piVar8 + 0x38))(piVar8);
                uVar19 = __addsf3(*(undefined4 *)(iVar16 + 4),0x3f800000);
                cocos2d::CCPoint::CCPoint
                          (aCStack_28,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
                (*pcVar13)(piVar5,aCStack_28);
                return;
              }
            }
          }
        }
      }
    }
  }
  return;
}


