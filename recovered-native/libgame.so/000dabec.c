/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000dabec  Symbol: FUN_000dabec */

void FUN_000dabec(void)

{
  undefined4 uVar1;
  CCNode *pCVar2;
  int *piVar3;
  CCSize *pCVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  char cVar13;
  undefined4 *puVar14;
  undefined4 extraout_r1;
  int iVar15;
  int iVar16;
  int *unaff_r4;
  undefined4 *puVar17;
  int *unaff_r5;
  int iVar18;
  undefined4 uVar19;
  code *pcVar20;
  float extraout_s0;
  undefined8 uVar21;
  float extraout_s1;
  CCPoint param_7;
  CCPoint param_8;
  int param_9;
  int iStack00000020;
  int iStack00000024;
  int iStack0000002c;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  
  pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5,0);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,0x10);
  pCVar4 = (CCSize *)(**(code **)(*piVar3 + 0x38))();
  pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5,0);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,0x10);
  (**(code **)(*piVar3 + 0x7c))();
  iVar5 = KG_Touch(param_8,param_7,*pCVar4);
  if (iVar5 != 0) {
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5,0);
    piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,0x10);
    (**(code **)(*piVar3 + 0xec))(piVar3,0xff);
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5,0);
    piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,100);
    pcVar20 = *(code **)(*piVar3 + 0x3c);
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5,0);
    piVar6 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,0x10);
    uVar7 = (**(code **)(*piVar6 + 0x38))();
    (*pcVar20)(piVar3,uVar7);
    InventoryLayer::Set_Hero_Item_Cheking((InventoryLayer *)unaff_r5[0x5c],8);
    Market_Equip::Image_Name((Market_Equip *)unaff_r5,0x10);
    iVar5 = 0;
    do {
      iVar18 = iVar5 + 1;
      Market_Equip::Draw_Item((Market_Equip *)unaff_r5,iVar5);
      iVar5 = iVar18;
    } while (iVar18 != 4);
    if (*(char *)(*unaff_r4 + 1) != '\0') {
      pcVar8 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      CocosDenshion::SimpleAudioEngine::playEffect(pcVar8,(bool)((char)DAT_000dad28 + -0x50));
    }
  }
  uVar21 = __subsf3(*(undefined4 *)(*(int *)(param_9 + DAT_000dad2c) + 4),param_7);
  cocos2d::CCPoint::CCPoint
            ((CCPoint *)&stack0x00000058,(float)uVar21,(float)((ulonglong)uVar21 >> 0x20));
  uVar1 = in_stack_0000005c;
  uVar7 = in_stack_00000058;
  if ((((*(char *)(unaff_r5 + 0x4b) == '\0') &&
       (iVar5 = __aeabi_fcmpgt(in_stack_00000058,DAT_000dad30), iVar5 != 0)) &&
      (iVar5 = __aeabi_fcmplt(uVar7,DAT_000dad34), iVar5 != 0)) &&
     ((iVar5 = __aeabi_fcmpgt(uVar1,DAT_000dad38), iVar5 != 0 &&
      (iVar5 = __aeabi_fcmplt(uVar1,DAT_000dad3c), iVar5 != 0)))) {
    iStack00000024 = 0;
    for (param_8 = 0;
        iVar5 = __divsi3(*(undefined4 *)
                          ((**(int **)(param_9 + DAT_000db108) + DAT_000db110) * 4 +
                          **(int **)(param_9 + DAT_000db10c)),5), (int)param_8 < iVar5;
        param_8 = param_8 + 1) {
      iStack00000020 = 0;
      iStack0000002c = 0;
      do {
        piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5,99);
        iVar5 = (**(code **)(*piVar3 + 0x38))();
        uVar19 = *(undefined4 *)(iVar5 + 4);
        uVar10 = __subsf3(uVar7,DAT_000db0e4);
        uVar9 = __floatsisf(iStack00000020);
        iVar5 = __aeabi_fcmpgt(uVar10,uVar9);
        if (iVar5 != 0) {
          uVar9 = __floatsisf(iStack00000020 + 0x25);
          iVar5 = __aeabi_fcmplt(uVar10,uVar9);
          if (iVar5 != 0) {
            uVar10 = __subsf3(uVar1,DAT_000db0e8);
            __subsf3(DAT_000db0ec,uVar19);
            __fixsfsi();
            uVar9 = __floatsisf();
            uVar10 = __addsf3(uVar10,uVar9);
            uVar9 = __floatsisf(iStack00000024);
            iVar5 = __aeabi_fcmpgt(uVar10,uVar9);
            if (iVar5 != 0) {
              uVar9 = __floatsisf(iStack00000024 + 0x25);
              iVar5 = __aeabi_fcmplt(uVar10,uVar9);
              if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
                cocos2d::CCLog((char *)(DAT_000db0f0 + 0xdade0),iStack0000002c + param_8 * 5);
              }
            }
          }
        }
        iStack0000002c = iStack0000002c + 1;
        iStack00000020 = iStack00000020 + 0x25;
      } while (iStack00000020 != 0xb9);
      iStack00000024 = iStack00000024 + -0x25;
    }
  }
  iStack00000020 = 0;
  param_8 = 0;
  do {
    iVar18 = *(int *)(param_9 + DAT_000db42c);
    puVar14 = (undefined4 *)(iStack00000020 + iVar18);
    uVar10 = __floatsisf(*puVar14);
    iVar5 = __aeabi_fcmplt(uVar10,uVar7);
    if (iVar5 != 0) {
      uVar10 = __floatsisf(puVar14[1]);
      iVar5 = __aeabi_fcmpgt(uVar10,uVar7);
      if (iVar5 != 0) {
        uVar10 = __floatsisf(puVar14[2]);
        iVar5 = __aeabi_fcmplt(uVar10,uVar1);
        if (iVar5 != 0) {
          uVar10 = __floatsisf(puVar14[3]);
          iVar5 = __aeabi_fcmpgt(uVar10,uVar1);
          if (iVar5 != 0) {
            iVar5 = unaff_r5[0x4e];
            piVar3 = *(int **)(param_9 + DAT_000db430);
            piVar6 = *(int **)(param_9 + DAT_000db434);
            if (iVar5 == param_8) {
              iVar11 = cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5,param_8 + 0x5a);
              if (iVar11 != 0) {
                iVar15 = 0;
                iVar11 = 0;
                do {
                  if ((iVar11 < *(int *)((*piVar6 + DAT_000db438) * 4 + *piVar3)) &&
                     (*(int *)(*piVar3 + *piVar6 * 2000 + iVar15 + DAT_000db43c) == 0)) {
                    pcVar20 = *(code **)(*unaff_r5 + 0xd0);
                    uVar10 = cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5,param_8 + 0x5a);
                    (*pcVar20)(unaff_r5,uVar10,1);
                    iVar16 = *piVar3 + iVar11 * 0x14 + *piVar6 * 2000;
                    puVar17 = (undefined4 *)(iVar16 + DAT_000db43c);
                    iVar15 = *piVar6 * 0x2d0;
                    *puVar17 = *(undefined4 *)
                                (unaff_r5[0x4e] * 0x14 + (unaff_r5[0x44] + -8) * 0x50 + iVar15 +
                                 *piVar3 + DAT_000db440);
                    puVar17[1] = *(undefined4 *)
                                  ((unaff_r5[0x44] + -8) * 0x50 + unaff_r5[0x4e] * 0x14 + iVar15 +
                                   *piVar3 + DAT_000db440 + 4);
                    puVar17 = (undefined4 *)(iVar16 + DAT_000db444);
                    puVar17[1] = *(undefined4 *)
                                  ((unaff_r5[0x44] + -8) * 0x50 + unaff_r5[0x4e] * 0x14 + iVar15 +
                                   *piVar3 + DAT_000db448 + 4);
                    *(undefined4 *)(iVar16 + DAT_000db44c) =
                         *(undefined4 *)
                          ((unaff_r5[0x44] + -8) * 0x50 + unaff_r5[0x4e] * 0x14 + iVar15 + *piVar3 +
                          0x2680);
                    *puVar17 = *(undefined4 *)
                                (*piVar3 + unaff_r5[0x4e] * 0x14 + (unaff_r5[0x44] + -8) * 0x50 +
                                           iVar15 + DAT_000db448);
                    InventoryLayer::Item_SetInventory((InventoryLayer *)unaff_r5[0x5c],iVar11);
                    if (iVar5 < 2) {
                      if (*(char *)(*piVar3 + 1) != '\0') {
                        pcVar8 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
                        cVar13 = (char)DAT_000db450 + '(';
LAB_000db334:
                        CocosDenshion::SimpleAudioEngine::playEffect(pcVar8,(bool)cVar13);
                      }
                    }
                    else if (*(char *)(*piVar3 + 1) != '\0') {
                      pcVar8 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
                      cVar13 = (char)DAT_000db454 + '6';
                      goto LAB_000db334;
                    }
                    iVar11 = iVar5 * 0x14;
                    iVar15 = *piVar6 * 0x2d0;
                    *(undefined4 *)
                     (DAT_000db440 + *piVar3 + iVar11 + (unaff_r5[0x44] + -8) * 0x50 + iVar15) = 0;
                    *(undefined4 *)
                     ((unaff_r5[0x44] + -8) * 0x50 + iVar11 + iVar15 + *piVar3 + DAT_000db440 + 4) =
                         0;
                    *(undefined4 *)
                     ((unaff_r5[0x44] + -8) * 0x50 + iVar11 + iVar15 + *piVar3 + DAT_000db448 + 4) =
                         0;
                    *(undefined4 *)
                     ((unaff_r5[0x44] + -8) * 0x50 + iVar11 + iVar15 + *piVar3 + 0x2680) = 0;
                    *(undefined4 *)
                     (*piVar3 + iVar11 + (unaff_r5[0x44] + -8) * 0x50 + iVar15 + DAT_000db448) = 0;
                    Market_Equip::SetHeroState((Market_Equip *)unaff_r5);
                    if (iVar5 == 0) {
                      unaff_r5[0x45] = -1;
                      Market_Equip::Image_Name((Market_Equip *)unaff_r5,unaff_r5[0x44]);
                    }
                    break;
                  }
                  iVar11 = iVar11 + 1;
                  iVar15 = iVar15 + 0x14;
                } while (iVar11 != 100);
              }
            }
            else {
              unaff_r5[0x4e] = param_8;
              unaff_r5[0x4c] = -1;
              unaff_r5[0x4d] = -1;
              if (*(char *)(*piVar3 + 1) != '\0') {
                pcVar8 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
                CocosDenshion::SimpleAudioEngine::playEffect
                          (pcVar8,(bool)((char)DAT_000db6f4 + 'x'));
              }
            }
            piVar12 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5,0x66);
            pcVar20 = *(code **)(*piVar12 + 0x3c);
            __floatsisf(*(undefined4 *)(iVar18 + iStack00000020));
            uVar21 = __floatsisf(puVar14[2]);
            cocos2d::CCPoint::CCPoint
                      ((CCPoint *)&stack0x00000068,(float)uVar21,(float)((ulonglong)uVar21 >> 0x20))
            ;
            (*pcVar20)(piVar12,&stack0x00000068);
            piVar12 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5,0x66);
            (**(code **)(*piVar12 + 0xf4))();
            cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5,0x66);
            cocos2d::CCNode::stopAllActions();
            piVar12 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5,0x66);
            (**(code **)(*piVar12 + 0xec))(piVar12,0xff);
            piVar12 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5,0x66);
            (**(code **)(*piVar12 + 0x6c))(piVar12,1);
            pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5,99);
            piVar12 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,DAT_000db6f8);
            pcVar20 = *(code **)(*piVar12 + 0x3c);
            cocos2d::CCPoint::CCPoint((CCPoint *)&stack0x00000070,extraout_s0,extraout_s1);
            (*pcVar20)(piVar12,&stack0x00000070);
            piVar12 = (int *)(*piVar3 + param_8 * 0x14 + (unaff_r5[0x44] + -8) * 0x50 +
                                        *piVar6 * 0x2d0 + DAT_000db700);
            Market_Equip::Inventory_Item_Popup
                      ((Market_Equip *)unaff_r5,*piVar12,param_8,0,piVar12[1],1);
            iVar18 = 9;
            iVar5 = *(int *)(*piVar3 + param_8 * 0x14 + (unaff_r5[0x44] + -8) * 0x50 +
                                       *piVar6 * 0x2d0 + DAT_000db700);
            if (iVar5 == 0) {
              do {
                pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5,0);
                iVar5 = cocos2d::CCNode::getChildByTag(pCVar2,iVar18);
                if (iVar5 != 0) {
                  pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5,0);
                  pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar2,iVar18);
                  piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,0);
                  (**(code **)(*piVar3 + 0x6c))(piVar3,0);
                  pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5,0);
                  pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar2,iVar18);
                  piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,1);
                  (**(code **)(*piVar3 + 0x6c))(piVar3,0);
                }
                iVar18 = iVar18 + 1;
              } while (iVar18 != 0x11);
            }
            else {
              iVar5 = __divsi3(iVar5 + -1,10);
              Market_Equip::Item_Equip((Market_Equip *)unaff_r5,iVar5,unaff_r5[0x4c],0);
            }
          }
        }
      }
    }
    param_8 = param_8 + 1;
    iStack00000020 = iStack00000020 + 0x10;
    if (iStack00000020 == 0x40) {
      uVar21 = __extendsfdf2(uVar7);
      __extendsfdf2(uVar1);
                    /* WARNING: Subroutine does not return */
      cocos2d::CCLog((char *)(DAT_000db704 + 0xdb616),extraout_r1,(int)uVar21,
                     (int)((ulonglong)uVar21 >> 0x20));
    }
  } while( true );
}


