/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000da1a8  Symbol: MARKET_EQUIP_TOUCH */

/* Market_Equip::MARKET_EQUIP_TOUCH(cocos2d::CCPoint) */

void Market_Equip::MARKET_EQUIP_TOUCH(CCPoint param_1)

{
  CCNode *pCVar1;
  int iVar2;
  int *piVar3;
  CCSize *pCVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  char cVar11;
  CCPoint in_r1;
  undefined4 *puVar12;
  CCPoint in_r2;
  int iVar13;
  int iVar14;
  code *pcVar15;
  int iVar16;
  _System **pp_Var17;
  undefined4 *puVar18;
  undefined4 uVar19;
  code *pcVar20;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s1;
  undefined8 uVar21;
  float extraout_s1_00;
  undefined8 uVar22;
  int local_84;
  int iStack_70;
  int iStack_6c;
  int iStack_64;
  CCPoint aCStack_40 [8];
  undefined4 uStack_38;
  undefined4 uStack_34;
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  pcVar15 = (code *)(DAT_000da538 + 0xda1b4);
  iVar16 = 9;
  do {
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
    iVar2 = cocos2d::CCNode::getChildByTag(pCVar1,iVar16);
    if (iVar2 != 0) {
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,iVar16);
      (**(code **)(*piVar3 + 0xec))(piVar3,0xff);
    }
    iVar16 = iVar16 + 1;
  } while (iVar16 != 0x11);
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
  (**(code **)(*piVar3 + 0xec))(piVar3,0xff);
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,2);
  (**(code **)(*piVar3 + 0xec))(piVar3,0xff);
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,1);
  (**(code **)(*piVar3 + 0xec))(piVar3,0xff);
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,5);
  (**(code **)(*piVar3 + 0xec))(piVar3,0xff);
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,6);
  (**(code **)(*piVar3 + 0xec))(piVar3,0xff);
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,7);
  (**(code **)(*piVar3 + 0xec))(piVar3,0xff);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x58);
  (**(code **)(*piVar3 + 0xec))(piVar3,0xff);
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x58);
  iVar16 = Sprite_Touch(pCVar1,in_r1);
  if (iVar16 == 0) {
    pcVar20 = (code *)0x0;
    pCVar1 = (CCNode *)param_1;
  }
  else {
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
    piVar3 = *(int **)(pcVar15 + DAT_000da53c);
    piVar6 = *(int **)(pcVar15 + DAT_000da544);
    pCVar1 = (CCNode *)
             cocos2d::CCNode::getChildByTag
                       (pCVar1,*(char *)(*piVar3 + *piVar6 + DAT_000da540 + 4) + 8);
    iVar16 = cocos2d::CCNode::getChildByTag(pCVar1,3);
    pcVar20 = pcVar15;
    if (iVar16 != 0) {
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      piVar10 = (int *)cocos2d::CCNode::getChildByTag
                                 (pCVar1,*(char *)(*piVar3 + *piVar6 + DAT_000da540 + 4) + 8);
      pcVar20 = *(code **)(*piVar10 + 0xd0);
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      pCVar1 = (CCNode *)
               cocos2d::CCNode::getChildByTag
                         (pCVar1,*(char *)(*piVar3 + *piVar6 + DAT_000da540 + 4) + 8);
      uVar5 = cocos2d::CCNode::getChildByTag(pCVar1,3);
      (*pcVar20)(piVar10,uVar5,1);
    }
    if (8 < *(int *)(param_1 + 0x114)) {
      *(char *)(*piVar3 + *piVar6 + DAT_000da540 + 4) = (char)*(int *)(param_1 + 0x114) + -8;
    }
    if (*piVar3 + DAT_000da548 != 0) {
      piVar10 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000da54c + 0xda356));
      pcVar20 = *(code **)(*piVar10 + 0x74);
      cocos2d::CCPoint::CCPoint(aCStack_40,extraout_s0,extraout_s1);
      (*pcVar20)(piVar10,aCStack_40);
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      piVar3 = (int *)cocos2d::CCNode::getChildByTag
                                (pCVar1,*(char *)(*piVar3 + *piVar6 + DAT_000da540 + 4) + 8);
      pcVar20 = *(code **)(*piVar3 + 0xcc);
      (*pcVar20)(piVar3,piVar10,3,3);
    }
    FileSave();
    pCVar1 = (CCNode *)FUN_000dacb4();
  }
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,(int)pcVar20);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,(int)pcVar20);
  pCVar4 = (CCSize *)(**(code **)(*piVar3 + 0x38))();
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,(int)pcVar20);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,(int)pcVar20);
  (**(code **)(*piVar3 + 0x7c))();
  iVar16 = KG_Touch(in_r1,in_r2,*pCVar4);
  if (iVar16 != 0) {
    **(undefined4 **)(pcVar15 + DAT_000da550) = 4;
    if (*(char *)(**(int **)(pcVar15 + DAT_000da53c) + 1) == '\0') {
      FUN_000dacb4();
    }
    uVar5 = CocosDenshion::SimpleAudioEngine::sharedEngine();
    FUN_000dacb0(uVar5,DAT_000da554 + 0xda404,pcVar20);
  }
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,iVar16);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,2);
  pCVar4 = (CCSize *)(**(code **)(*piVar3 + 0x38))();
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,iVar16);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,2);
  (**(code **)(*piVar3 + 0x7c))();
  iVar2 = KG_Touch(in_r1,in_r2,*pCVar4);
  if (iVar2 == 0) {
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
    piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,1);
    pCVar4 = (CCSize *)(**(code **)(*piVar3 + 0x38))();
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
    piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,1);
    (**(code **)(*piVar3 + 0x7c))();
    iVar16 = KG_Touch(in_r1,in_r2,*pCVar4);
    if (iVar16 != 0) {
      **(undefined4 **)(pcVar15 + DAT_000da550) = 1;
      if (*(char *)(**(int **)(pcVar15 + DAT_000da53c) + 1) == '\0') {
        FUN_000dacb4();
      }
      uVar5 = CocosDenshion::SimpleAudioEngine::sharedEngine();
      FUN_000dacb0(uVar5,DAT_000da55c + 0xda4d0,0);
    }
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,iVar16);
    piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,5);
    pCVar4 = (CCSize *)(**(code **)(*piVar3 + 0x38))();
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,iVar16);
    piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,5);
    (**(code **)(*piVar3 + 0x7c))();
    iVar2 = KG_Touch(in_r1,in_r2,*pCVar4);
    if (iVar2 == 0) {
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,6);
      pCVar4 = (CCSize *)(**(code **)(*piVar3 + 0x38))();
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,6);
      (**(code **)(*piVar3 + 0x7c))();
      iVar16 = KG_Touch(in_r1,in_r2,*pCVar4);
      if (iVar16 != 0) {
        Draw_Cahs(param_1);
        setInventory_Plus((Market_Equip *)param_1,false);
        FUN_000dacb4();
        return;
      }
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,8);
      pCVar4 = (CCSize *)(**(code **)(*piVar3 + 0x38))();
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,8);
      (**(code **)(*piVar3 + 0x7c))();
      iVar16 = KG_Touch(in_r1,in_r2,*pCVar4);
      pp_Var17 = *(_System ***)(pcVar15 + DAT_000da974);
      if (iVar16 != 0) {
        pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
        piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,8);
        (**(code **)(*piVar3 + 0xec))(piVar3,0xff);
        Array_Call(*pp_Var17);
        InventoryLayer::reset(*(InventoryLayer **)(param_1 + 0x170));
        FUN_000dacb4();
        return;
      }
      if ((*pp_Var17)[DAT_000da97c + **(int **)(pcVar15 + DAT_000da978) * 9] == (_System)0x0) {
        FUN_000db62a();
      }
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,9);
      pCVar4 = (CCSize *)(**(code **)(*piVar3 + 0x38))();
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,9);
      (**(code **)(*piVar3 + 0x7c))();
      iVar16 = KG_Touch(in_r1,in_r2,*pCVar4);
      if (iVar16 == 0) {
        FUN_000db62a();
      }
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,9);
      (**(code **)(*piVar3 + 0xec))(piVar3,0xff);
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,100);
      pcVar20 = *(code **)(*piVar3 + 0x3c);
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      piVar6 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,9);
      uVar5 = (**(code **)(*piVar6 + 0x38))();
      (*pcVar20)(piVar3,uVar5);
      remove_Item((Market_Equip *)param_1);
      InventoryLayer::Set_Hero_Item_Cheking(*(InventoryLayer **)(param_1 + 0x170),1);
      Image_Name((Market_Equip *)param_1,9);
      iVar16 = 0;
      do {
        iVar2 = iVar16 + 1;
        Draw_Item((Market_Equip *)param_1,iVar16);
        iVar16 = iVar2;
      } while (iVar2 != 4);
      if ((*pp_Var17)[1] == (_System)0x0) {
        FUN_000dacb4();
        return;
      }
      pcVar7 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      CocosDenshion::SimpleAudioEngine::playEffect(pcVar7,(bool)((char)DAT_000da980 + '\x10'));
      uVar21 = __subsf3(*(undefined4 *)(*(int *)(pcVar15 + DAT_000dad2c) + 4),in_r2);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&uStack_38,(float)uVar21,(float)((ulonglong)uVar21 >> 0x20));
      if ((((*(char *)(param_1 + 300) == '\0') &&
           (iVar16 = __aeabi_fcmpgt(uStack_38,DAT_000dad30), iVar16 != 0)) &&
          (iVar16 = __aeabi_fcmplt(uStack_38,DAT_000dad34), iVar16 != 0)) &&
         ((iVar16 = __aeabi_fcmpgt(uStack_34,DAT_000dad38), iVar16 != 0 &&
          (iVar16 = __aeabi_fcmplt(uStack_34,DAT_000dad3c), iVar16 != 0)))) {
        iStack_6c = 0;
        for (local_84 = 0;
            iVar16 = __divsi3(*(undefined4 *)
                               ((**(int **)(pcVar15 + DAT_000db108) + DAT_000db110) * 4 +
                               **(int **)(pcVar15 + DAT_000db10c)),5), local_84 < iVar16;
            local_84 = local_84 + 1) {
          iStack_70 = 0;
          iStack_64 = 0;
          do {
            piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,99);
            iVar16 = (**(code **)(*piVar3 + 0x38))();
            uVar19 = *(undefined4 *)(iVar16 + 4);
            uVar5 = __subsf3(uStack_38,DAT_000db0e4);
            uVar8 = __floatsisf(iStack_70);
            iVar16 = __aeabi_fcmpgt(uVar5,uVar8);
            if (iVar16 != 0) {
              uVar8 = __floatsisf(iStack_70 + 0x25);
              iVar16 = __aeabi_fcmplt(uVar5,uVar8);
              if (iVar16 != 0) {
                uVar5 = __subsf3(uStack_34,DAT_000db0e8);
                __subsf3(DAT_000db0ec,uVar19);
                __fixsfsi();
                uVar8 = __floatsisf();
                uVar5 = __addsf3(uVar5,uVar8);
                uVar8 = __floatsisf(iStack_6c);
                iVar16 = __aeabi_fcmpgt(uVar5,uVar8);
                if (iVar16 != 0) {
                  uVar8 = __floatsisf(iStack_6c + 0x25);
                  iVar16 = __aeabi_fcmplt(uVar5,uVar8);
                  if (iVar16 != 0) {
                    /* WARNING: Subroutine does not return */
                    cocos2d::CCLog((char *)(DAT_000db0f0 + 0xdade0),iStack_64 + local_84 * 5);
                  }
                }
              }
            }
            iStack_64 = iStack_64 + 1;
            iStack_70 = iStack_70 + 0x25;
          } while (iStack_70 != 0xb9);
          iStack_6c = iStack_6c + -0x25;
        }
      }
      iStack_70 = 0;
      local_84 = 0;
      do {
        iVar2 = *(int *)(pcVar15 + DAT_000db42c);
        puVar12 = (undefined4 *)(iStack_70 + iVar2);
        uVar5 = __floatsisf(*puVar12);
        iVar16 = __aeabi_fcmplt(uVar5,uStack_38);
        if (iVar16 != 0) {
          uVar5 = __floatsisf(puVar12[1]);
          iVar16 = __aeabi_fcmpgt(uVar5,uStack_38);
          if (iVar16 != 0) {
            uVar5 = __floatsisf(puVar12[2]);
            iVar16 = __aeabi_fcmplt(uVar5,uStack_34);
            if (iVar16 != 0) {
              uVar5 = __floatsisf(puVar12[3]);
              iVar16 = __aeabi_fcmpgt(uVar5,uStack_34);
              if (iVar16 != 0) {
                iVar16 = *(int *)(param_1 + 0x138);
                piVar3 = *(int **)(pcVar15 + DAT_000db430);
                piVar6 = *(int **)(pcVar15 + DAT_000db434);
                if (iVar16 == local_84) {
                  iVar9 = cocos2d::CCNode::getChildByTag((CCNode *)param_1,local_84 + 0x5a);
                  if (iVar9 != 0) {
                    iVar13 = 0;
                    iVar9 = 0;
                    do {
                      if ((iVar9 < *(int *)((*piVar6 + DAT_000db438) * 4 + *piVar3)) &&
                         (*(int *)(*piVar3 + *piVar6 * 2000 + iVar13 + DAT_000db43c) == 0)) {
                        pcVar20 = *(code **)(*(int *)param_1 + 0xd0);
                        uVar5 = cocos2d::CCNode::getChildByTag((CCNode *)param_1,local_84 + 0x5a);
                        (*pcVar20)(param_1,uVar5,1);
                        iVar14 = *piVar3 + iVar9 * 0x14 + *piVar6 * 2000;
                        puVar18 = (undefined4 *)(iVar14 + DAT_000db43c);
                        iVar13 = *piVar6 * 0x2d0;
                        *puVar18 = *(undefined4 *)
                                    (*(int *)(param_1 + 0x138) * 0x14 +
                                     (*(int *)(param_1 + 0x110) + -8) * 0x50 + iVar13 + *piVar3 +
                                    DAT_000db440);
                        puVar18[1] = *(undefined4 *)
                                      ((*(int *)(param_1 + 0x110) + -8) * 0x50 +
                                       *(int *)(param_1 + 0x138) * 0x14 + iVar13 + *piVar3 +
                                       DAT_000db440 + 4);
                        puVar18 = (undefined4 *)(iVar14 + DAT_000db444);
                        puVar18[1] = *(undefined4 *)
                                      ((*(int *)(param_1 + 0x110) + -8) * 0x50 +
                                       *(int *)(param_1 + 0x138) * 0x14 + iVar13 + *piVar3 +
                                       DAT_000db448 + 4);
                        *(undefined4 *)(iVar14 + DAT_000db44c) =
                             *(undefined4 *)
                              ((*(int *)(param_1 + 0x110) + -8) * 0x50 +
                               *(int *)(param_1 + 0x138) * 0x14 + iVar13 + *piVar3 + 0x2680);
                        *puVar18 = *(undefined4 *)
                                    (*piVar3 + *(int *)(param_1 + 0x138) * 0x14 +
                                               (*(int *)(param_1 + 0x110) + -8) * 0x50 + iVar13 +
                                    DAT_000db448);
                        InventoryLayer::Item_SetInventory
                                  (*(InventoryLayer **)(param_1 + 0x170),iVar9);
                        if (iVar16 < 2) {
                          if (*(char *)(*piVar3 + 1) != '\0') {
                            pcVar7 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
                            cVar11 = (char)DAT_000db450 + '(';
LAB_000db334:
                            CocosDenshion::SimpleAudioEngine::playEffect(pcVar7,(bool)cVar11);
                          }
                        }
                        else if (*(char *)(*piVar3 + 1) != '\0') {
                          pcVar7 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
                          cVar11 = (char)DAT_000db454 + '6';
                          goto LAB_000db334;
                        }
                        iVar9 = iVar16 * 0x14;
                        iVar13 = *piVar6 * 0x2d0;
                        *(undefined4 *)
                         (DAT_000db440 +
                         *piVar3 + iVar9 + (*(int *)(param_1 + 0x110) + -8) * 0x50 + iVar13) = 0;
                        *(undefined4 *)
                         ((*(int *)(param_1 + 0x110) + -8) * 0x50 + iVar9 + iVar13 + *piVar3 +
                          DAT_000db440 + 4) = 0;
                        *(undefined4 *)
                         ((*(int *)(param_1 + 0x110) + -8) * 0x50 + iVar9 + iVar13 + *piVar3 +
                          DAT_000db448 + 4) = 0;
                        *(undefined4 *)
                         ((*(int *)(param_1 + 0x110) + -8) * 0x50 + iVar9 + iVar13 + *piVar3 +
                         0x2680) = 0;
                        *(undefined4 *)
                         (*piVar3 + iVar9 + (*(int *)(param_1 + 0x110) + -8) * 0x50 + iVar13 +
                         DAT_000db448) = 0;
                        SetHeroState((Market_Equip *)param_1);
                        if (iVar16 == 0) {
                          *(undefined4 *)(param_1 + 0x114) = 0xffffffff;
                          Image_Name((Market_Equip *)param_1,*(int *)(param_1 + 0x110));
                        }
                        break;
                      }
                      iVar9 = iVar9 + 1;
                      iVar13 = iVar13 + 0x14;
                    } while (iVar9 != 100);
                  }
                }
                else {
                  *(int *)(param_1 + 0x138) = local_84;
                  *(undefined4 *)(param_1 + 0x130) = 0xffffffff;
                  *(undefined4 *)(param_1 + 0x134) = 0xffffffff;
                  if (*(char *)(*piVar3 + 1) != '\0') {
                    pcVar7 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
                    CocosDenshion::SimpleAudioEngine::playEffect
                              (pcVar7,(bool)((char)DAT_000db6f4 + 'x'));
                  }
                }
                piVar10 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x66);
                pcVar20 = *(code **)(*piVar10 + 0x3c);
                __floatsisf(*(undefined4 *)(iVar2 + iStack_70));
                uVar21 = __floatsisf(puVar12[2]);
                cocos2d::CCPoint::CCPoint
                          (aCStack_28,(float)uVar21,(float)((ulonglong)uVar21 >> 0x20));
                (*pcVar20)(piVar10,aCStack_28);
                piVar10 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x66);
                (**(code **)(*piVar10 + 0xf4))();
                cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x66);
                cocos2d::CCNode::stopAllActions();
                piVar10 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x66);
                (**(code **)(*piVar10 + 0xec))(piVar10,0xff);
                piVar10 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x66);
                (**(code **)(*piVar10 + 0x6c))(piVar10,1);
                pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,99);
                piVar10 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,DAT_000db6f8);
                pcVar20 = *(code **)(*piVar10 + 0x3c);
                cocos2d::CCPoint::CCPoint(aCStack_20,extraout_s0_00,extraout_s1_00);
                (*pcVar20)(piVar10,aCStack_20);
                piVar10 = (int *)(*piVar3 + local_84 * 0x14 +
                                            (*(int *)(param_1 + 0x110) + -8) * 0x50 +
                                            *piVar6 * 0x2d0 + DAT_000db700);
                Inventory_Item_Popup((Market_Equip *)param_1,*piVar10,local_84,0,piVar10[1],1);
                iVar2 = 9;
                iVar16 = *(int *)(*piVar3 + local_84 * 0x14 +
                                            (*(int *)(param_1 + 0x110) + -8) * 0x50 +
                                            *piVar6 * 0x2d0 + DAT_000db700);
                if (iVar16 == 0) {
                  do {
                    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
                    iVar16 = cocos2d::CCNode::getChildByTag(pCVar1,iVar2);
                    if (iVar16 != 0) {
                      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
                      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,iVar2);
                      piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
                      (**(code **)(*piVar3 + 0x6c))(piVar3,0);
                      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
                      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,iVar2);
                      piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,1);
                      (**(code **)(*piVar3 + 0x6c))(piVar3,0);
                    }
                    iVar2 = iVar2 + 1;
                  } while (iVar2 != 0x11);
                }
                else {
                  iVar16 = __divsi3(iVar16 + -1,10);
                  Item_Equip((Market_Equip *)param_1,iVar16,*(int *)(param_1 + 0x130),0);
                }
              }
            }
          }
        }
        local_84 = local_84 + 1;
        iStack_70 = iStack_70 + 0x10;
        if (iStack_70 == 0x40) {
          uVar21 = __extendsfdf2(uStack_38);
          uVar22 = __extendsfdf2(uStack_34);
          uVar5 = (undefined4)((ulonglong)uVar22 >> 0x20);
                    /* WARNING: Subroutine does not return */
          cocos2d::CCLog((char *)(DAT_000db704 + 0xdb616),uVar5,(int)uVar21,
                         (int)((ulonglong)uVar21 >> 0x20),(int)uVar22,uVar5);
        }
      } while( true );
    }
    **(undefined4 **)(pcVar15 + DAT_000da550) = 4;
    if (*(char *)(**(int **)(pcVar15 + DAT_000da53c) + 1) == '\0') {
      FUN_000dacb4();
      return;
    }
    uVar5 = CocosDenshion::SimpleAudioEngine::sharedEngine();
    iVar2 = DAT_000da560 + 0xda534;
  }
  else {
    **(undefined4 **)(pcVar15 + DAT_000da550) = 2;
    if (*(char *)(**(int **)(pcVar15 + DAT_000da53c) + 1) == '\0') {
      FUN_000dacb4();
    }
    uVar5 = CocosDenshion::SimpleAudioEngine::sharedEngine();
    iVar2 = DAT_000da558 + 0xda46a;
  }
  FUN_000dacb0(uVar5,iVar2,iVar16);
  return;
}


