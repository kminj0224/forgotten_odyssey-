/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000dacb4  Symbol: FUN_000dacb4 */

void FUN_000dacb4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  CCNode *pCVar9;
  char cVar10;
  undefined4 *puVar11;
  undefined4 extraout_r1;
  int iVar12;
  int iVar13;
  code *pcVar14;
  int iVar15;
  undefined4 *puVar16;
  int *unaff_r5;
  undefined4 uVar17;
  int *piVar18;
  int *piVar19;
  float extraout_s0;
  undefined8 uVar20;
  float extraout_s1;
  undefined4 param_7;
  int param_8;
  int param_9;
  int param_13;
  int param_14;
  int param_16;
  undefined4 param_24;
  undefined4 param_25;
  
  uVar20 = __subsf3(*(undefined4 *)(*(int *)(param_9 + DAT_000dad2c) + 4),param_7);
  cocos2d::CCPoint::CCPoint
            ((CCPoint *)&stack0x00000058,(float)uVar20,(float)((ulonglong)uVar20 >> 0x20));
  uVar2 = param_25;
  uVar1 = param_24;
  if ((((*(char *)(unaff_r5 + 0x4b) == '\0') &&
       (iVar3 = __aeabi_fcmpgt(param_24,DAT_000dad30), iVar3 != 0)) &&
      (iVar3 = __aeabi_fcmplt(uVar1,DAT_000dad34), iVar3 != 0)) &&
     ((iVar3 = __aeabi_fcmpgt(uVar2,DAT_000dad38), iVar3 != 0 &&
      (iVar3 = __aeabi_fcmplt(uVar2,DAT_000dad3c), iVar3 != 0)))) {
    param_14 = 0;
    for (param_8 = 0;
        iVar3 = __divsi3(*(undefined4 *)
                          ((**(int **)(param_9 + DAT_000db108) + DAT_000db110) * 4 +
                          **(int **)(param_9 + DAT_000db10c)),5), param_8 < iVar3;
        param_8 = param_8 + 1) {
      param_13 = 0;
      param_16 = 0;
      do {
        piVar18 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5,99);
        iVar3 = (**(code **)(*piVar18 + 0x38))();
        uVar17 = *(undefined4 *)(iVar3 + 4);
        uVar5 = __subsf3(uVar1,DAT_000db0e4);
        uVar4 = __floatsisf(param_13);
        iVar3 = __aeabi_fcmpgt(uVar5,uVar4);
        if (iVar3 != 0) {
          uVar4 = __floatsisf(param_13 + 0x25);
          iVar3 = __aeabi_fcmplt(uVar5,uVar4);
          if (iVar3 != 0) {
            uVar5 = __subsf3(uVar2,DAT_000db0e8);
            __subsf3(DAT_000db0ec,uVar17);
            __fixsfsi();
            uVar4 = __floatsisf();
            uVar5 = __addsf3(uVar5,uVar4);
            uVar4 = __floatsisf(param_14);
            iVar3 = __aeabi_fcmpgt(uVar5,uVar4);
            if (iVar3 != 0) {
              uVar4 = __floatsisf(param_14 + 0x25);
              iVar3 = __aeabi_fcmplt(uVar5,uVar4);
              if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
                cocos2d::CCLog((char *)(DAT_000db0f0 + 0xdade0),param_16 + param_8 * 5);
              }
            }
          }
        }
        param_16 = param_16 + 1;
        param_13 = param_13 + 0x25;
      } while (param_13 != 0xb9);
      param_14 = param_14 + -0x25;
    }
  }
  param_13 = 0;
  param_8 = 0;
  do {
    iVar15 = *(int *)(param_9 + DAT_000db42c);
    puVar11 = (undefined4 *)(param_13 + iVar15);
    uVar5 = __floatsisf(*puVar11);
    iVar3 = __aeabi_fcmplt(uVar5,uVar1);
    if (iVar3 != 0) {
      uVar5 = __floatsisf(puVar11[1]);
      iVar3 = __aeabi_fcmpgt(uVar5,uVar1);
      if (iVar3 != 0) {
        uVar5 = __floatsisf(puVar11[2]);
        iVar3 = __aeabi_fcmplt(uVar5,uVar2);
        if (iVar3 != 0) {
          uVar5 = __floatsisf(puVar11[3]);
          iVar3 = __aeabi_fcmpgt(uVar5,uVar2);
          if (iVar3 != 0) {
            iVar3 = unaff_r5[0x4e];
            piVar18 = *(int **)(param_9 + DAT_000db430);
            piVar19 = *(int **)(param_9 + DAT_000db434);
            if (iVar3 == param_8) {
              iVar6 = cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5,param_8 + 0x5a);
              if (iVar6 != 0) {
                iVar12 = 0;
                iVar6 = 0;
                do {
                  if ((iVar6 < *(int *)((*piVar19 + DAT_000db438) * 4 + *piVar18)) &&
                     (*(int *)(*piVar18 + *piVar19 * 2000 + iVar12 + DAT_000db43c) == 0)) {
                    pcVar14 = *(code **)(*unaff_r5 + 0xd0);
                    uVar5 = cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5,param_8 + 0x5a);
                    (*pcVar14)(unaff_r5,uVar5,1);
                    iVar13 = *piVar18 + iVar6 * 0x14 + *piVar19 * 2000;
                    puVar16 = (undefined4 *)(iVar13 + DAT_000db43c);
                    iVar12 = *piVar19 * 0x2d0;
                    *puVar16 = *(undefined4 *)
                                (unaff_r5[0x4e] * 0x14 + (unaff_r5[0x44] + -8) * 0x50 + iVar12 +
                                 *piVar18 + DAT_000db440);
                    puVar16[1] = *(undefined4 *)
                                  ((unaff_r5[0x44] + -8) * 0x50 + unaff_r5[0x4e] * 0x14 + iVar12 +
                                   *piVar18 + DAT_000db440 + 4);
                    puVar16 = (undefined4 *)(iVar13 + DAT_000db444);
                    puVar16[1] = *(undefined4 *)
                                  ((unaff_r5[0x44] + -8) * 0x50 + unaff_r5[0x4e] * 0x14 + iVar12 +
                                   *piVar18 + DAT_000db448 + 4);
                    *(undefined4 *)(iVar13 + DAT_000db44c) =
                         *(undefined4 *)
                          ((unaff_r5[0x44] + -8) * 0x50 + unaff_r5[0x4e] * 0x14 + iVar12 + *piVar18
                          + 0x2680);
                    *puVar16 = *(undefined4 *)
                                (*piVar18 +
                                 unaff_r5[0x4e] * 0x14 + (unaff_r5[0x44] + -8) * 0x50 + iVar12 +
                                DAT_000db448);
                    InventoryLayer::Item_SetInventory((InventoryLayer *)unaff_r5[0x5c],iVar6);
                    if (iVar3 < 2) {
                      if (*(char *)(*piVar18 + 1) != '\0') {
                        pcVar7 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
                        cVar10 = (char)DAT_000db450 + '(';
LAB_000db334:
                        CocosDenshion::SimpleAudioEngine::playEffect(pcVar7,(bool)cVar10);
                      }
                    }
                    else if (*(char *)(*piVar18 + 1) != '\0') {
                      pcVar7 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
                      cVar10 = (char)DAT_000db454 + '6';
                      goto LAB_000db334;
                    }
                    iVar6 = iVar3 * 0x14;
                    iVar12 = *piVar19 * 0x2d0;
                    *(undefined4 *)
                     (DAT_000db440 + *piVar18 + iVar6 + (unaff_r5[0x44] + -8) * 0x50 + iVar12) = 0;
                    *(undefined4 *)
                     ((unaff_r5[0x44] + -8) * 0x50 + iVar6 + iVar12 + *piVar18 + DAT_000db440 + 4) =
                         0;
                    *(undefined4 *)
                     ((unaff_r5[0x44] + -8) * 0x50 + iVar6 + iVar12 + *piVar18 + DAT_000db448 + 4) =
                         0;
                    *(undefined4 *)
                     ((unaff_r5[0x44] + -8) * 0x50 + iVar6 + iVar12 + *piVar18 + 0x2680) = 0;
                    *(undefined4 *)
                     (*piVar18 + iVar6 + (unaff_r5[0x44] + -8) * 0x50 + iVar12 + DAT_000db448) = 0;
                    Market_Equip::SetHeroState((Market_Equip *)unaff_r5);
                    if (iVar3 == 0) {
                      unaff_r5[0x45] = -1;
                      Market_Equip::Image_Name((Market_Equip *)unaff_r5,unaff_r5[0x44]);
                    }
                    break;
                  }
                  iVar6 = iVar6 + 1;
                  iVar12 = iVar12 + 0x14;
                } while (iVar6 != 100);
              }
            }
            else {
              unaff_r5[0x4e] = param_8;
              unaff_r5[0x4c] = -1;
              unaff_r5[0x4d] = -1;
              if (*(char *)(*piVar18 + 1) != '\0') {
                pcVar7 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
                CocosDenshion::SimpleAudioEngine::playEffect
                          (pcVar7,(bool)((char)DAT_000db6f4 + 'x'));
              }
            }
            piVar8 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5,0x66);
            pcVar14 = *(code **)(*piVar8 + 0x3c);
            __floatsisf(*(undefined4 *)(iVar15 + param_13));
            uVar20 = __floatsisf(puVar11[2]);
            cocos2d::CCPoint::CCPoint
                      ((CCPoint *)&stack0x00000068,(float)uVar20,(float)((ulonglong)uVar20 >> 0x20))
            ;
            (*pcVar14)(piVar8,&stack0x00000068);
            piVar8 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5,0x66);
            (**(code **)(*piVar8 + 0xf4))();
            cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5,0x66);
            cocos2d::CCNode::stopAllActions();
            piVar8 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5,0x66);
            (**(code **)(*piVar8 + 0xec))(piVar8,0xff);
            piVar8 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5,0x66);
            (**(code **)(*piVar8 + 0x6c))(piVar8,1);
            pCVar9 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5,99);
            piVar8 = (int *)cocos2d::CCNode::getChildByTag(pCVar9,DAT_000db6f8);
            pcVar14 = *(code **)(*piVar8 + 0x3c);
            cocos2d::CCPoint::CCPoint((CCPoint *)&stack0x00000070,extraout_s0,extraout_s1);
            (*pcVar14)(piVar8,&stack0x00000070);
            piVar8 = (int *)(*piVar18 +
                             param_8 * 0x14 + (unaff_r5[0x44] + -8) * 0x50 + *piVar19 * 0x2d0 +
                            DAT_000db700);
            Market_Equip::Inventory_Item_Popup
                      ((Market_Equip *)unaff_r5,*piVar8,param_8,0,piVar8[1],1);
            iVar15 = 9;
            iVar3 = *(int *)(*piVar18 +
                             param_8 * 0x14 + (unaff_r5[0x44] + -8) * 0x50 + *piVar19 * 0x2d0 +
                            DAT_000db700);
            if (iVar3 == 0) {
              do {
                pCVar9 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5,0);
                iVar3 = cocos2d::CCNode::getChildByTag(pCVar9,iVar15);
                if (iVar3 != 0) {
                  pCVar9 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5,0);
                  pCVar9 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar9,iVar15);
                  piVar18 = (int *)cocos2d::CCNode::getChildByTag(pCVar9,0);
                  (**(code **)(*piVar18 + 0x6c))(piVar18,0);
                  pCVar9 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5,0);
                  pCVar9 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar9,iVar15);
                  piVar18 = (int *)cocos2d::CCNode::getChildByTag(pCVar9,1);
                  (**(code **)(*piVar18 + 0x6c))(piVar18,0);
                }
                iVar15 = iVar15 + 1;
              } while (iVar15 != 0x11);
            }
            else {
              iVar3 = __divsi3(iVar3 + -1,10);
              Market_Equip::Item_Equip((Market_Equip *)unaff_r5,iVar3,unaff_r5[0x4c],0);
            }
          }
        }
      }
    }
    param_8 = param_8 + 1;
    param_13 = param_13 + 0x10;
    if (param_13 == 0x40) {
      uVar20 = __extendsfdf2(uVar1);
      __extendsfdf2(uVar2);
                    /* WARNING: Subroutine does not return */
      cocos2d::CCLog((char *)(DAT_000db704 + 0xdb616),extraout_r1,(int)uVar20,
                     (int)((ulonglong)uVar20 >> 0x20));
    }
  } while( true );
}


