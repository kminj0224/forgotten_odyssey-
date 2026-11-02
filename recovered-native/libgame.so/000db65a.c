/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000db65a  Symbol: FUN_000db65a */

void FUN_000db65a(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  CCNode *pCVar7;
  int iVar8;
  char cVar9;
  undefined4 *puVar10;
  undefined4 extraout_r1;
  int iVar11;
  int iVar12;
  code *pcVar13;
  int iVar14;
  undefined4 *puVar15;
  int *unaff_r4;
  int *unaff_r5;
  undefined4 uVar16;
  int *unaff_r6;
  int *piVar17;
  int unaff_r7;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar18;
  int in_stack_0000000c;
  int in_stack_00000010;
  undefined4 in_stack_00000014;
  int in_stack_00000018;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  undefined4 in_stack_00000030;
  
  if (*(char *)(*unaff_r4 + *unaff_r6 * 9 + DAT_000db710) != '\0') {
    FUN_000da8aa();
  }
  if (*(char *)(*unaff_r4 + *unaff_r6 * 9 + DAT_000db714) != '\0') {
    FUN_000da990();
  }
  if (*(char *)(*unaff_r4 + *unaff_r6 * 9 + DAT_000db718) != '\0') {
    FUN_000daa5a();
  }
  if (*(char *)(*unaff_r4 + *unaff_r6 * 9 + DAT_000db71c) != '\0') {
    FUN_000dab24();
  }
  if (*(char *)(*unaff_r4 + *unaff_r6 * 9 + 0x23c0) == '\0') {
    FUN_000dacb4();
  }
  FUN_000dabec();
  iVar8 = (**(code **)(*unaff_r4 + 0xa0))(unaff_r4);
  if ((10 < *(int *)(in_stack_00000028 + iVar8 * 0x18 + 0x14)) &&
     (iVar8 = (**(code **)(*unaff_r4 + 0xa0))(unaff_r4),
     *(int *)(in_stack_00000028 + iVar8 * 0x18 + 0x14) < 0xf)) {
    iVar8 = unaff_r5[0x4c];
    iVar14 = (**(code **)(*unaff_r4 + 0xa0))(unaff_r4);
    Market_Equip::Item_Set_Equip((Market_Equip *)unaff_r5,2,iVar8,iVar14);
    unaff_r5[0x4c] = unaff_r7;
    unaff_r5[0x4e] = unaff_r7;
    Market_Equip::SetHeroState((Market_Equip *)unaff_r5);
    goto LAB_000db09a;
  }
  do {
    in_stack_0000002c = in_stack_0000002c + 1;
    in_stack_00000020 = in_stack_00000020 + 0x25;
    if (in_stack_00000020 == 0xb9) {
LAB_000db09a:
      in_stack_0000000c = in_stack_0000000c + 1;
      iVar8 = __divsi3(*(undefined4 *)
                        ((**(int **)(in_stack_00000010 + DAT_000db108) + DAT_000db110) * 4 +
                        **(int **)(in_stack_00000010 + DAT_000db10c)),5);
      if (iVar8 <= in_stack_0000000c) {
        in_stack_00000020 = 0;
        in_stack_0000000c = 0;
        do {
          iVar14 = *(int *)(in_stack_00000010 + DAT_000db42c);
          puVar10 = (undefined4 *)(in_stack_00000020 + iVar14);
          uVar2 = __floatsisf(*puVar10);
          iVar8 = __aeabi_fcmplt(uVar2,in_stack_00000030);
          if (iVar8 != 0) {
            uVar2 = __floatsisf(puVar10[1]);
            iVar8 = __aeabi_fcmpgt(uVar2,in_stack_00000030);
            if (iVar8 != 0) {
              uVar2 = __floatsisf(puVar10[2]);
              iVar8 = __aeabi_fcmplt(uVar2,in_stack_00000014);
              if (iVar8 != 0) {
                uVar2 = __floatsisf(puVar10[3]);
                iVar8 = __aeabi_fcmpgt(uVar2,in_stack_00000014);
                if (iVar8 != 0) {
                  iVar8 = unaff_r5[0x4e];
                  piVar1 = *(int **)(in_stack_00000010 + DAT_000db430);
                  piVar17 = *(int **)(in_stack_00000010 + DAT_000db434);
                  if (iVar8 == in_stack_0000000c) {
                    iVar4 = cocos2d::CCNode::getChildByTag
                                      ((CCNode *)unaff_r5,in_stack_0000000c + 0x5a);
                    if (iVar4 != 0) {
                      iVar11 = 0;
                      iVar4 = 0;
                      do {
                        if ((iVar4 < *(int *)((*piVar17 + DAT_000db438) * 4 + *piVar1)) &&
                           (*(int *)(*piVar1 + *piVar17 * 2000 + iVar11 + DAT_000db43c) == 0)) {
                          pcVar13 = *(code **)(*unaff_r5 + 0xd0);
                          uVar2 = cocos2d::CCNode::getChildByTag
                                            ((CCNode *)unaff_r5,in_stack_0000000c + 0x5a);
                          (*pcVar13)(unaff_r5,uVar2,1);
                          iVar12 = *piVar1 + iVar4 * 0x14 + *piVar17 * 2000;
                          puVar15 = (undefined4 *)(iVar12 + DAT_000db43c);
                          iVar11 = *piVar17 * 0x2d0;
                          *puVar15 = *(undefined4 *)
                                      (unaff_r5[0x4e] * 0x14 + (unaff_r5[0x44] + -8) * 0x50 + iVar11
                                       + *piVar1 + DAT_000db440);
                          puVar15[1] = *(undefined4 *)
                                        ((unaff_r5[0x44] + -8) * 0x50 + unaff_r5[0x4e] * 0x14 +
                                         iVar11 + *piVar1 + DAT_000db440 + 4);
                          puVar15 = (undefined4 *)(iVar12 + DAT_000db444);
                          puVar15[1] = *(undefined4 *)
                                        ((unaff_r5[0x44] + -8) * 0x50 + unaff_r5[0x4e] * 0x14 +
                                         iVar11 + *piVar1 + DAT_000db448 + 4);
                          *(undefined4 *)(iVar12 + DAT_000db44c) =
                               *(undefined4 *)
                                ((unaff_r5[0x44] + -8) * 0x50 + unaff_r5[0x4e] * 0x14 + iVar11 +
                                 *piVar1 + 0x2680);
                          *puVar15 = *(undefined4 *)
                                      (*piVar1 + unaff_r5[0x4e] * 0x14 +
                                                 (unaff_r5[0x44] + -8) * 0x50 + iVar11 +
                                      DAT_000db448);
                          InventoryLayer::Item_SetInventory((InventoryLayer *)unaff_r5[0x5c],iVar4);
                          if (iVar8 < 2) {
                            if (*(char *)(*piVar1 + 1) != '\0') {
                              pcVar5 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
                              cVar9 = (char)DAT_000db450 + '(';
LAB_000db334:
                              CocosDenshion::SimpleAudioEngine::playEffect(pcVar5,(bool)cVar9);
                            }
                          }
                          else if (*(char *)(*piVar1 + 1) != '\0') {
                            pcVar5 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
                            cVar9 = (char)DAT_000db454 + '6';
                            goto LAB_000db334;
                          }
                          iVar4 = iVar8 * 0x14;
                          iVar11 = *piVar17 * 0x2d0;
                          *(undefined4 *)
                           (DAT_000db440 + *piVar1 + iVar4 + (unaff_r5[0x44] + -8) * 0x50 + iVar11)
                               = 0;
                          *(undefined4 *)
                           ((unaff_r5[0x44] + -8) * 0x50 + iVar4 + iVar11 + *piVar1 + DAT_000db440 +
                           4) = 0;
                          *(undefined4 *)
                           ((unaff_r5[0x44] + -8) * 0x50 + iVar4 + iVar11 + *piVar1 + DAT_000db448 +
                           4) = 0;
                          *(undefined4 *)
                           ((unaff_r5[0x44] + -8) * 0x50 + iVar4 + iVar11 + *piVar1 + 0x2680) = 0;
                          *(undefined4 *)
                           (*piVar1 + iVar4 + (unaff_r5[0x44] + -8) * 0x50 + iVar11 + DAT_000db448)
                               = 0;
                          Market_Equip::SetHeroState((Market_Equip *)unaff_r5);
                          if (iVar8 == 0) {
                            unaff_r5[0x45] = -1;
                            Market_Equip::Image_Name((Market_Equip *)unaff_r5,unaff_r5[0x44]);
                          }
                          break;
                        }
                        iVar4 = iVar4 + 1;
                        iVar11 = iVar11 + 0x14;
                      } while (iVar4 != 100);
                    }
                  }
                  else {
                    unaff_r5[0x4e] = in_stack_0000000c;
                    unaff_r5[0x4c] = -1;
                    unaff_r5[0x4d] = -1;
                    if (*(char *)(*piVar1 + 1) != '\0') {
                      pcVar5 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
                      CocosDenshion::SimpleAudioEngine::playEffect
                                (pcVar5,(bool)((char)DAT_000db6f4 + 'x'));
                    }
                  }
                  piVar6 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5,0x66);
                  pcVar13 = *(code **)(*piVar6 + 0x3c);
                  __floatsisf(*(undefined4 *)(iVar14 + in_stack_00000020));
                  uVar18 = __floatsisf(puVar10[2]);
                  cocos2d::CCPoint::CCPoint
                            ((CCPoint *)&stack0x00000068,(float)uVar18,
                             (float)((ulonglong)uVar18 >> 0x20));
                  (*pcVar13)(piVar6,&stack0x00000068);
                  piVar6 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5,0x66);
                  (**(code **)(*piVar6 + 0xf4))();
                  cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5,0x66);
                  cocos2d::CCNode::stopAllActions();
                  piVar6 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5,0x66);
                  (**(code **)(*piVar6 + 0xec))(piVar6,0xff);
                  piVar6 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5,0x66);
                  (**(code **)(*piVar6 + 0x6c))(piVar6,1);
                  pCVar7 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5,99);
                  piVar6 = (int *)cocos2d::CCNode::getChildByTag(pCVar7,DAT_000db6f8);
                  pcVar13 = *(code **)(*piVar6 + 0x3c);
                  cocos2d::CCPoint::CCPoint((CCPoint *)&stack0x00000070,extraout_s0,extraout_s1);
                  (*pcVar13)(piVar6,&stack0x00000070);
                  piVar6 = (int *)(*piVar1 + in_stack_0000000c * 0x14 + (unaff_r5[0x44] + -8) * 0x50
                                             + *piVar17 * 0x2d0 + DAT_000db700);
                  Market_Equip::Inventory_Item_Popup
                            ((Market_Equip *)unaff_r5,*piVar6,in_stack_0000000c,0,piVar6[1],1);
                  iVar14 = 9;
                  iVar8 = *(int *)(*piVar1 + in_stack_0000000c * 0x14 + (unaff_r5[0x44] + -8) * 0x50
                                             + *piVar17 * 0x2d0 + DAT_000db700);
                  if (iVar8 == 0) {
                    do {
                      pCVar7 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5,0);
                      iVar8 = cocos2d::CCNode::getChildByTag(pCVar7,iVar14);
                      if (iVar8 != 0) {
                        pCVar7 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5,0);
                        pCVar7 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar7,iVar14);
                        piVar1 = (int *)cocos2d::CCNode::getChildByTag(pCVar7,0);
                        (**(code **)(*piVar1 + 0x6c))(piVar1,0);
                        pCVar7 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5,0);
                        pCVar7 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar7,iVar14);
                        piVar1 = (int *)cocos2d::CCNode::getChildByTag(pCVar7,1);
                        (**(code **)(*piVar1 + 0x6c))(piVar1,0);
                      }
                      iVar14 = iVar14 + 1;
                    } while (iVar14 != 0x11);
                  }
                  else {
                    iVar8 = __divsi3(iVar8 + -1,10);
                    Market_Equip::Item_Equip((Market_Equip *)unaff_r5,iVar8,unaff_r5[0x4c],0);
                  }
                }
              }
            }
          }
          in_stack_0000000c = in_stack_0000000c + 1;
          in_stack_00000020 = in_stack_00000020 + 0x10;
          if (in_stack_00000020 == 0x40) {
            uVar18 = __extendsfdf2(in_stack_00000030);
            __extendsfdf2(in_stack_00000014);
                    /* WARNING: Subroutine does not return */
            cocos2d::CCLog((char *)(DAT_000db704 + 0xdb616),extraout_r1,(int)uVar18,
                           (int)((ulonglong)uVar18 >> 0x20));
          }
        } while( true );
      }
      in_stack_00000018 = in_stack_00000024;
      in_stack_00000020 = 0;
      in_stack_0000002c = 0;
      in_stack_00000024 = in_stack_00000024 + -0x25;
    }
    piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5,99);
    iVar8 = (**(code **)(*piVar1 + 0x38))();
    uVar16 = *(undefined4 *)(iVar8 + 4);
    uVar2 = __subsf3(in_stack_00000030,DAT_000db0e4);
    uVar3 = __floatsisf(in_stack_00000020);
    iVar8 = __aeabi_fcmpgt(uVar2,uVar3);
    if (iVar8 != 0) {
      uVar3 = __floatsisf(in_stack_00000020 + 0x25);
      iVar8 = __aeabi_fcmplt(uVar2,uVar3);
      if (iVar8 != 0) {
        uVar2 = __subsf3(in_stack_00000014,DAT_000db0e8);
        __subsf3(DAT_000db0ec,uVar16);
        __fixsfsi();
        uVar3 = __floatsisf();
        uVar2 = __addsf3(uVar2,uVar3);
        uVar3 = __floatsisf(in_stack_00000024);
        iVar8 = __aeabi_fcmpgt(uVar2,uVar3);
        if (iVar8 != 0) {
          uVar3 = __floatsisf(in_stack_00000018);
          iVar8 = __aeabi_fcmplt(uVar2,uVar3);
          if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
            cocos2d::CCLog((char *)(DAT_000db0f0 + 0xdade0),
                           in_stack_0000002c + in_stack_0000000c * 5);
          }
        }
      }
    }
  } while( true );
}


