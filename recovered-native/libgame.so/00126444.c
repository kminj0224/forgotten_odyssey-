/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00126444  Symbol: GameTouchEnded */

/* GameScene::GameTouchEnded(cocos2d::CCPoint) */

void GameScene::GameTouchEnded(CCPoint param_1)

{
  int iVar1;
  int *piVar2;
  CCSize *pCVar3;
  int iVar4;
  undefined4 *puVar5;
  CCNode *pCVar6;
  char *pcVar7;
  int *piVar8;
  char cVar9;
  CCPoint in_r1;
  CCPoint in_r2;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  CCNode **ppCVar13;
  float extraout_s0;
  float extraout_s1;
  CCPoint local_60;
  int local_5c;
  
  iVar1 = DAT_001267e8 + 0x126454;
  ppCVar13 = *(CCNode ***)(iVar1 + DAT_001267ec);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar13,0x20);
  pCVar3 = (CCSize *)(**(code **)(*piVar2 + 0x38))();
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar13,0x20);
  (**(code **)(*piVar2 + 0x7c))();
  iVar4 = KG_Touch(in_r1,in_r2,*pCVar3);
  if (iVar4 == 0) {
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar13,0x19);
    pCVar3 = (CCSize *)(**(code **)(*piVar2 + 0x38))();
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar13,0x19);
    (**(code **)(*piVar2 + 0x7c))();
    iVar4 = KG_Touch(in_r1,in_r2,*pCVar3);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCLog((char *)(DAT_00126808 + 0x126538));
    }
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar13,0);
    pCVar3 = (CCSize *)(**(code **)(*piVar2 + 0x38))();
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar13,0);
    (**(code **)(*piVar2 + 0x7c))();
    KG_Touch(in_r1,in_r2,*pCVar3);
  }
  else {
    piVar2 = *(int **)(iVar1 + DAT_001267f0);
    if (*piVar2 == 0xb) {
      cocos2d::CCPoint::CCPoint((CCPoint *)&local_60,extraout_s0,extraout_s1);
      vDrawScript_Lode((char *)(DAT_001267fc + 0x1264c0),(char *)(DAT_00126800 + 0x1264c2),
                       (CCNode *)param_1,local_60,local_5c,0xc,true,true);
      if (***(char ***)(iVar1 + DAT_00126804) == '\0') {
        pCVar6 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xc);
        piVar8 = (int *)cocos2d::CCNode::getChildByTag(pCVar6,4);
        (**(code **)(*piVar8 + 0xf4))();
      }
      *piVar2 = 0x10;
    }
  }
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar13,9);
  pCVar3 = (CCSize *)(**(code **)(*piVar2 + 0x38))();
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar13,9);
  (**(code **)(*piVar2 + 0x7c))();
  iVar4 = KG_Touch(in_r1,in_r2,*pCVar3);
  if (iVar4 == 0) {
    FUN_00127176();
  }
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar13,10);
  pCVar3 = (CCSize *)(**(code **)(*piVar2 + 0x38))();
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar13,10);
  puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0x7c))();
  uVar10 = *puVar5;
  uVar11 = puVar5[1];
  iVar4 = KG_Touch(in_r1,in_r2,*pCVar3);
  if (iVar4 == 0) {
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar13,0xb);
    pCVar3 = (CCSize *)(**(code **)(*piVar2 + 0x38))();
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar13,0xb);
    puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0x7c))();
    uVar10 = *puVar5;
    uVar11 = puVar5[1];
    iVar4 = KG_Touch(in_r1,in_r2,*pCVar3);
    if (iVar4 == 0) {
      piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar13,0xc);
      pCVar3 = (CCSize *)(**(code **)(*piVar2 + 0x38))();
      piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar13,0xc);
      puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0x7c))();
      uVar10 = *puVar5;
      uVar11 = puVar5[1];
      iVar4 = KG_Touch(in_r1,in_r2,*pCVar3);
      if (iVar4 == 0) {
        piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar13,0xd);
        pCVar3 = (CCSize *)(**(code **)(*piVar2 + 0x38))();
        piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar13,0xd);
        puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0x7c))();
        uVar10 = *puVar5;
        uVar11 = puVar5[1];
        iVar4 = KG_Touch(in_r1,in_r2,*pCVar3);
        if (iVar4 == 0) {
          piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar13,0xe);
          pCVar3 = (CCSize *)(**(code **)(*piVar2 + 0x38))();
          piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar13,0xe);
          puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0x7c))();
          uVar10 = *puVar5;
          uVar11 = puVar5[1];
          iVar4 = KG_Touch(in_r1,in_r2,*pCVar3);
          if (iVar4 == 0) {
            piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar13,0xf);
            pCVar3 = (CCSize *)(**(code **)(*piVar2 + 0x38))();
            piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar13,0xf);
            puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0x7c))();
            uVar10 = *puVar5;
            uVar11 = puVar5[1];
            iVar4 = KG_Touch(in_r1,in_r2,*pCVar3);
            if (iVar4 == 0) {
              piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar13,0x10);
              pCVar3 = (CCSize *)(**(code **)(*piVar2 + 0x38))();
              piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar13,0x10);
              puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0x7c))();
              uVar10 = *puVar5;
              uVar11 = puVar5[1];
              iVar4 = KG_Touch(in_r1,in_r2,*pCVar3);
              if (iVar4 == 0) {
                piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar13,0x11);
                pCVar3 = (CCSize *)(**(code **)(*piVar2 + 0x38))();
                piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar13,0x11);
                puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0x7c))();
                uVar10 = *puVar5;
                uVar11 = puVar5[1];
                iVar4 = KG_Touch(in_r1,in_r2,*pCVar3);
                if (iVar4 == 0) {
                  piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar13,0x12);
                  pCVar3 = (CCSize *)(**(code **)(*piVar2 + 0x38))();
                  piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar13,0x12);
                  puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0x7c))();
                  uVar10 = *puVar5;
                  uVar11 = puVar5[1];
                  iVar4 = KG_Touch(in_r1,in_r2,*pCVar3);
                  if (iVar4 == 0) goto code_r0x00127176;
                  piVar2 = *(int **)(iVar1 + DAT_00127250);
                  puVar5 = *(undefined4 **)(iVar1 + DAT_0012725c);
                  if ((*(char *)(*piVar2 + **(int **)(iVar1 + DAT_00127254) * 9 + DAT_00127274) !=
                       '\0') &&
                     (iVar4 = __aeabi_fcmpge(*(undefined4 *)*puVar5,DAT_00127278,DAT_0012725c,
                                             (undefined4 *)*puVar5,uVar10,uVar11), iVar4 != 0)) {
                    pCVar6 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar13,0x12);
                    iVar4 = cocos2d::CCNode::getChildByTag(pCVar6,0);
                    if (iVar4 == 0) {
                      Unit_Draw_Test((CCNode *)param_1,0xb4);
                      puVar12 = (undefined4 *)*puVar5;
                      uVar10 = __subsf3(*puVar12,DAT_00127278);
                      *puVar12 = uVar10;
                      iVar4 = *(int *)(*(int *)(param_1 + 0x120) + 0x118);
                      uVar10 = __divsf3(*(undefined4 *)*puVar5,((undefined4 *)*puVar5)[1]);
                      *(undefined4 *)(iVar4 + 0x118) = uVar10;
                      Unit_Loading((GameScene *)param_1,0x12);
                      if (*(char *)(*piVar2 + 1) != '\0') {
                        pcVar7 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
                        cVar9 = (char)DAT_0012727c + 'Z';
                        goto LAB_0012715a;
                      }
                      goto code_r0x00127176;
                    }
                  }
                  uVar10 = *(undefined4 *)*puVar5;
                  iVar4 = __aeabi_fcmplt(uVar10,DAT_00127278);
                  uVar11 = DAT_00127278;
                }
                else {
                  piVar2 = *(int **)(iVar1 + DAT_00127250);
                  puVar5 = *(undefined4 **)(iVar1 + DAT_0012725c);
                  if ((*(char *)(*piVar2 + **(int **)(iVar1 + DAT_00127254) * 9 + DAT_00127268) !=
                       '\0') &&
                     (iVar4 = __aeabi_fcmpge(*(undefined4 *)*puVar5,DAT_0012726c,DAT_0012725c,
                                             (undefined4 *)*puVar5,uVar10,uVar11), iVar4 != 0)) {
                    pCVar6 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar13,0x11);
                    iVar4 = cocos2d::CCNode::getChildByTag(pCVar6,0);
                    if (iVar4 == 0) {
                      Unit_Draw_Test((CCNode *)param_1,0x104);
                      puVar12 = (undefined4 *)*puVar5;
                      uVar10 = __subsf3(*puVar12,DAT_0012726c);
                      *puVar12 = uVar10;
                      iVar4 = *(int *)(*(int *)(param_1 + 0x120) + 0x118);
                      uVar10 = __divsf3(*(undefined4 *)*puVar5,((undefined4 *)*puVar5)[1]);
                      *(undefined4 *)(iVar4 + 0x118) = uVar10;
                      Unit_Loading((GameScene *)param_1,0x11);
                      if (*(char *)(*piVar2 + 1) != '\0') {
                        pcVar7 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
                        cVar9 = (char)DAT_00127270 + -0x70;
                        goto LAB_0012715a;
                      }
                      goto code_r0x00127176;
                    }
                  }
                  uVar10 = *(undefined4 *)*puVar5;
                  iVar4 = __aeabi_fcmplt(uVar10,DAT_0012726c);
                  uVar11 = DAT_0012726c;
                }
              }
              else {
                piVar2 = *(int **)(iVar1 + DAT_00127250);
                puVar5 = *(undefined4 **)(iVar1 + DAT_0012725c);
                if ((*(char *)(*piVar2 + **(int **)(iVar1 + DAT_00127254) * 9 + DAT_00127258) !=
                     '\0') &&
                   (iVar4 = __aeabi_fcmpge(*(undefined4 *)*puVar5,DAT_00127260,DAT_0012725c,
                                           (undefined4 *)*puVar5,uVar10,uVar11), iVar4 != 0)) {
                  pCVar6 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar13,0x10);
                  iVar4 = cocos2d::CCNode::getChildByTag(pCVar6,0);
                  if (iVar4 == 0) {
                    Unit_Draw_Test((CCNode *)param_1,0xe6);
                    puVar12 = (undefined4 *)*puVar5;
                    uVar10 = __subsf3(*puVar12,DAT_00127260);
                    *puVar12 = uVar10;
                    iVar1 = *(int *)(*(int *)(param_1 + 0x120) + 0x118);
                    uVar10 = __divsf3(*(undefined4 *)*puVar5,((undefined4 *)*puVar5)[1]);
                    *(undefined4 *)(iVar1 + 0x118) = uVar10;
                    Unit_Loading((GameScene *)param_1,0x10);
                    if (*(char *)(*piVar2 + 1) == '\0') {
                      FUN_00127176();
                      return;
                    }
                    pcVar7 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
                    cVar9 = (char)DAT_00127264 + -0x3c;
                    goto LAB_0012715a;
                  }
                }
                uVar10 = *(undefined4 *)*puVar5;
                iVar4 = __aeabi_fcmplt(uVar10,DAT_00127260);
                uVar11 = DAT_00127260;
              }
            }
            else {
              piVar2 = *(int **)(iVar1 + DAT_00126ec0);
              cVar9 = *(char *)(*piVar2 + **(int **)(iVar1 + DAT_00126ec4) * 9 + DAT_00126ef0);
              puVar5 = *(undefined4 **)(iVar1 + DAT_00126ecc);
              if ((cVar9 != '\0') &&
                 (iVar4 = __aeabi_fcmpge(*(undefined4 *)*puVar5,DAT_00126ef4,cVar9,
                                         (undefined4 *)*puVar5,uVar10,uVar11), iVar4 != 0)) {
                pCVar6 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar13,0xf);
                iVar4 = cocos2d::CCNode::getChildByTag(pCVar6,0);
                if (iVar4 == 0) {
                  Unit_Draw_Test((CCNode *)param_1,0xa0);
                  puVar12 = (undefined4 *)*puVar5;
                  uVar10 = __subsf3(*puVar12,DAT_00126ef4);
                  *puVar12 = uVar10;
                  iVar1 = *(int *)(*(int *)(param_1 + 0x120) + 0x118);
                  uVar10 = __divsf3(*(undefined4 *)*puVar5,((undefined4 *)*puVar5)[1]);
                  *(undefined4 *)(iVar1 + 0x118) = uVar10;
                  Unit_Loading((GameScene *)param_1,0xf);
                  if (*(char *)(*piVar2 + 1) == '\0') {
                    FUN_00127176();
                    return;
                  }
                  pcVar7 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
                  cVar9 = (char)DAT_00126ef8 + -0x46;
                  goto LAB_0012715a;
                }
              }
              uVar10 = *(undefined4 *)*puVar5;
              iVar4 = __aeabi_fcmplt(uVar10,DAT_00127298);
              uVar11 = DAT_00126ef4;
            }
          }
          else {
            piVar2 = *(int **)(iVar1 + DAT_00126ec0);
            puVar5 = *(undefined4 **)(iVar1 + DAT_00126ecc);
            if ((*(char *)(*piVar2 + **(int **)(iVar1 + DAT_00126ec4) * 9 + DAT_00126ee4) != '\0')
               && (iVar4 = __aeabi_fcmpge(*(undefined4 *)*puVar5,DAT_00126ee8,DAT_00126ecc,
                                          (undefined4 *)*puVar5,uVar10,uVar11), iVar4 != 0)) {
              pCVar6 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar13,0xe);
              iVar4 = cocos2d::CCNode::getChildByTag(pCVar6,0);
              if (iVar4 == 0) {
                Unit_Draw_Test((CCNode *)param_1,0xaa);
                puVar12 = (undefined4 *)*puVar5;
                uVar10 = __subsf3(*puVar12,DAT_00126ee8);
                *puVar12 = uVar10;
                iVar1 = *(int *)(*(int *)(param_1 + 0x120) + 0x118);
                uVar10 = __divsf3(*(undefined4 *)*puVar5,((undefined4 *)*puVar5)[1]);
                *(undefined4 *)(iVar1 + 0x118) = uVar10;
                Unit_Loading((GameScene *)param_1,0xe);
                if (*(char *)(*piVar2 + 1) == '\0') {
                  FUN_00127176();
                  return;
                }
                pcVar7 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
                cVar9 = (char)DAT_00126eec + -0x16;
                goto LAB_0012715a;
              }
            }
            uVar10 = *(undefined4 *)*puVar5;
            iVar4 = __aeabi_fcmplt(uVar10,DAT_00127294);
            uVar11 = DAT_00126ee8;
          }
        }
        else {
          piVar2 = *(int **)(iVar1 + DAT_00126ec0);
          puVar5 = *(undefined4 **)(iVar1 + DAT_00126ecc);
          if ((*(char *)(*piVar2 + **(int **)(iVar1 + DAT_00126ec4) * 9 + DAT_00126ed8) != '\0') &&
             (iVar4 = __aeabi_fcmpge(*(undefined4 *)*puVar5,DAT_00126edc,DAT_00126ecc,
                                     (undefined4 *)*puVar5,uVar10,uVar11), iVar4 != 0)) {
            pCVar6 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar13,0xd);
            iVar4 = cocos2d::CCNode::getChildByTag(pCVar6,0);
            if (iVar4 == 0) {
              Unit_Draw_Test((CCNode *)param_1,0x96);
              puVar12 = (undefined4 *)*puVar5;
              uVar10 = __subsf3(*puVar12,DAT_00126edc);
              *puVar12 = uVar10;
              iVar1 = *(int *)(*(int *)(param_1 + 0x120) + 0x118);
              uVar10 = __divsf3(*(undefined4 *)*puVar5,((undefined4 *)*puVar5)[1]);
              *(undefined4 *)(iVar1 + 0x118) = uVar10;
              Unit_Loading((GameScene *)param_1,0xd);
              if (*(char *)(*piVar2 + 1) == '\0') {
                FUN_00127176();
                return;
              }
              pcVar7 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
              cVar9 = (char)DAT_00126ee0 + ' ';
              goto LAB_0012715a;
            }
          }
          uVar10 = *(undefined4 *)*puVar5;
          iVar4 = __aeabi_fcmplt(uVar10,DAT_00127290);
          uVar11 = DAT_00126edc;
        }
      }
      else {
        piVar2 = *(int **)(iVar1 + DAT_00126ec0);
        puVar5 = *(undefined4 **)(iVar1 + DAT_00126ecc);
        if ((*(char *)(*piVar2 + **(int **)(iVar1 + DAT_00126ec4) * 9 + DAT_00126ec8) != '\0') &&
           (iVar4 = __aeabi_fcmpge(*(undefined4 *)*puVar5,DAT_00126ed0,DAT_00126ecc,
                                   (undefined4 *)*puVar5,uVar10,uVar11), iVar4 != 0)) {
          pCVar6 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar13,0xc);
          iVar4 = cocos2d::CCNode::getChildByTag(pCVar6,0);
          if (iVar4 == 0) {
            Unit_Draw_Test((CCNode *)param_1,0x82);
            puVar12 = (undefined4 *)*puVar5;
            uVar10 = __subsf3(*puVar12,DAT_00126ed0);
            *puVar12 = uVar10;
            iVar1 = *(int *)(*(int *)(param_1 + 0x120) + 0x118);
            uVar10 = __divsf3(*(undefined4 *)*puVar5,((undefined4 *)*puVar5)[1]);
            *(undefined4 *)(iVar1 + 0x118) = uVar10;
            Unit_Loading((GameScene *)param_1,0xc);
            if (*(char *)(*piVar2 + 1) == '\0') {
              FUN_00127176();
              return;
            }
            pcVar7 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
            cVar9 = (char)DAT_00126ed4 + 'R';
            goto LAB_0012715a;
          }
        }
        uVar10 = *(undefined4 *)*puVar5;
        iVar4 = __aeabi_fcmplt(uVar10,DAT_0012728c);
        uVar11 = DAT_00126ed0;
      }
    }
    else {
      piVar2 = *(int **)(iVar1 + DAT_00126b64);
      puVar5 = *(undefined4 **)(iVar1 + DAT_00126b70);
      if ((*(char *)(*piVar2 + **(int **)(iVar1 + DAT_00126b68) * 9 + DAT_00126b7c) != '\0') &&
         (iVar4 = __aeabi_fcmpge(*(undefined4 *)*puVar5,DAT_00126b80,DAT_00126b70,
                                 (undefined4 *)*puVar5,uVar10,uVar11), iVar4 != 0)) {
        pCVar6 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar13,0xb);
        iVar4 = cocos2d::CCNode::getChildByTag(pCVar6,0);
        if (iVar4 == 0) {
          Unit_Draw_Test((CCNode *)param_1,0x78);
          puVar12 = (undefined4 *)*puVar5;
          uVar10 = __subsf3(*puVar12,DAT_00126b80);
          *puVar12 = uVar10;
          iVar1 = *(int *)(*(int *)(param_1 + 0x120) + 0x118);
          uVar10 = __divsf3(*(undefined4 *)*puVar5,((undefined4 *)*puVar5)[1]);
          *(undefined4 *)(iVar1 + 0x118) = uVar10;
          Unit_Loading((GameScene *)param_1,0xb);
          if (*(char *)(*piVar2 + 1) == '\0') {
            FUN_00127176();
            return;
          }
          pcVar7 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          cVar9 = (char)DAT_00126b84 + 'V';
          goto LAB_0012715a;
        }
      }
      uVar10 = *(undefined4 *)*puVar5;
      iVar4 = __aeabi_fcmplt(uVar10,DAT_00127288);
      uVar11 = DAT_00126b80;
    }
  }
  else {
    piVar2 = *(int **)(iVar1 + DAT_00126b64);
    puVar5 = *(undefined4 **)(iVar1 + DAT_00126b70);
    if ((*(char *)(*piVar2 + **(int **)(iVar1 + DAT_00126b68) * 9 + DAT_00126b6c) != '\0') &&
       (iVar4 = __aeabi_fcmpge(*(undefined4 *)*puVar5,DAT_00126b74,DAT_00126b70,
                               (undefined4 *)*puVar5,uVar10,uVar11), iVar4 != 0)) {
      pCVar6 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar13,10);
      iVar4 = cocos2d::CCNode::getChildByTag(pCVar6,0);
      if (iVar4 == 0) {
        Unit_Draw_Test((CCNode *)param_1,0x6e);
        puVar12 = (undefined4 *)*puVar5;
        uVar10 = __subsf3(*puVar12,DAT_00126b74);
        *puVar12 = uVar10;
        iVar1 = *(int *)(*(int *)(param_1 + 0x120) + 0x118);
        uVar10 = __divsf3(*(undefined4 *)*puVar5,((undefined4 *)*puVar5)[1]);
        *(undefined4 *)(iVar1 + 0x118) = uVar10;
        Unit_Loading((GameScene *)param_1,10);
        if (*(char *)(*piVar2 + 1) == '\0') {
          FUN_00127176();
          return;
        }
        pcVar7 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        cVar9 = (char)DAT_00126b78 + -0x78;
LAB_0012715a:
        CocosDenshion::SimpleAudioEngine::playEffect(pcVar7,(bool)cVar9);
        FUN_00127176();
        return;
      }
    }
    uVar10 = *(undefined4 *)*puVar5;
    iVar4 = __aeabi_fcmplt(uVar10,DAT_00127284);
    uVar11 = DAT_00126b74;
  }
  if (iVar4 != 0) {
    __subsf3(uVar11,uVar10);
    __fixsfsi();
    OpenPopup(param_1,1);
  }
code_r0x00127176:
  piVar2 = *(int **)(iVar1 + DAT_00127280);
  if (*piVar2 != 0) {
    piVar8 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar13,0x2c);
    (**(code **)(*piVar8 + 0x6c))(piVar8,0);
    piVar8 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar13,0x2d);
    (**(code **)(*piVar8 + 0x6c))(piVar8,0);
    *piVar2 = 0;
  }
  return;
}


