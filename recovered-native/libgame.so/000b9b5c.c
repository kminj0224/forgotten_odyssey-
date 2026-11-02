/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000b9b5c  Symbol: ani_ani */

/* ani_ani(cocos2d::CCSprite*, _KG_Anit*) */

void ani_ani(CCSprite *param_1,_KG_Anit *param_2)

{
  CCPoint CVar1;
  uchar uVar2;
  CCArray *this;
  CCArray *this_00;
  int iVar3;
  CCFiniteTimeAction *pCVar4;
  CCFiniteTimeAction *pCVar5;
  uint uVar6;
  CCPoint CVar7;
  undefined4 uVar8;
  int iVar9;
  float extraout_s0;
  float fVar10;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s1;
  float extraout_s1_00;
  float fVar12;
  float extraout_s1_01;
  undefined8 uVar11;
  float extraout_s2;
  float extraout_s2_00;
  float fVar13;
  float extraout_s2_01;
  CCSize CStack_b8;
  undefined uStack_b4;
  CCPoint CStack_b0;
  CCPoint CStack_ac;
  CCFiniteTimeAction *apCStack_a4 [5];
  CCFiniteTimeAction *pCStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  this = (CCArray *)(**(code **)(*(int *)param_1 + 0x58))();
  this_00 = this;
  if (this == (CCArray *)0x0) {
    this_00 = (CCArray *)FUN_000ba4c0();
  }
  iVar3 = cocos2d::CCArray::count(this_00);
  if (iVar3 == 0) {
    FUN_000ba4c0();
  }
  FUN_000ba4aa();
  cocos2d::CCArray::objectAtIndex(this,0);
  memset(&pCStack_90,0,0x78);
  memset(&CStack_b0,0,0xc);
  iVar3 = *(int *)(*(int *)param_2 + 0x40);
  if (iVar3 < 1) {
    if (pCStack_90 == (CCFiniteTimeAction *)0x0) {
LAB_000ba4a2:
      uVar6 = cocos2d::CCArray::count(this);
      if (1 < uVar6) {
        FUN_000b9b88();
      }
      FUN_000ba4c0();
      return;
    }
    if (iVar3 == 1) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCStack_90,0);
    }
    if (iVar3 == 2) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCStack_90,uStack_8c,0);
    }
    if (iVar3 == 3) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCStack_90,uStack_8c,uStack_88,0);
    }
    if (iVar3 == 4) {
      uStack_80 = 0;
    }
    else if (iVar3 != 5) {
      if (iVar3 == 6) {
        uStack_78 = 0;
      }
      else if (iVar3 != 7) {
        if (iVar3 == 8) {
          uStack_70 = 0;
        }
        else if (iVar3 != 9) {
          if (iVar3 == 10) {
            uStack_68 = 0;
          }
          else if (iVar3 != 0xb) {
            if (iVar3 == 0xc) {
              uStack_60 = 0;
            }
            else if (iVar3 != 0xd) {
              if (iVar3 == 0xe) {
                uStack_58 = 0;
              }
              else if (iVar3 != 0xf) {
                if (iVar3 == 0x10) {
                  uStack_50 = 0;
                }
                else if (iVar3 != 0x11) {
                  if (iVar3 == 0x12) {
                    uStack_48 = 0;
                  }
                  else if (iVar3 != 0x13) {
                    if (iVar3 == 0x14) {
                      uStack_40 = 0;
                    }
                    else if (iVar3 != 0x15) {
                      if (iVar3 == 0x16) {
                        uStack_38 = 0;
                      }
                      else if (iVar3 != 0x17) {
                        if (iVar3 == 0x18) {
                          uStack_30 = 0;
                        }
                        else if (iVar3 != 0x19) {
                          if (iVar3 == 0x1a) {
                            uStack_28 = 0;
                          }
                          else if (iVar3 != 0x1b) {
                            if (iVar3 == 0x1c) {
                              uStack_20 = 0;
                            }
                            else if (iVar3 != 0x1d) goto LAB_000ba4a2;
                    /* WARNING: Subroutine does not return */
                            cocos2d::CCSequence::actions
                                      (pCStack_90,uStack_8c,uStack_88,uStack_84,uStack_80,uStack_7c,
                                       uStack_78,uStack_74,uStack_70,uStack_6c,uStack_68,uStack_64,
                                       uStack_60,uStack_5c,uStack_58,uStack_54,uStack_50,uStack_4c,
                                       uStack_48,uStack_44,uStack_40,uStack_3c,uStack_38,uStack_34,
                                       uStack_30,uStack_2c,uStack_28,uStack_24,uStack_20);
                          }
                    /* WARNING: Subroutine does not return */
                          cocos2d::CCSequence::actions
                                    (pCStack_90,uStack_8c,uStack_88,uStack_84,uStack_80,uStack_7c,
                                     uStack_78,uStack_74,uStack_70,uStack_6c,uStack_68,uStack_64,
                                     uStack_60,uStack_5c,uStack_58,uStack_54,uStack_50,uStack_4c,
                                     uStack_48,uStack_44,uStack_40,uStack_3c,uStack_38,uStack_34,
                                     uStack_30,uStack_2c,uStack_28);
                        }
                    /* WARNING: Subroutine does not return */
                        cocos2d::CCSequence::actions
                                  (pCStack_90,uStack_8c,uStack_88,uStack_84,uStack_80,uStack_7c,
                                   uStack_78,uStack_74,uStack_70,uStack_6c,uStack_68,uStack_64,
                                   uStack_60,uStack_5c,uStack_58,uStack_54,uStack_50,uStack_4c,
                                   uStack_48,uStack_44,uStack_40,uStack_3c,uStack_38,uStack_34,
                                   uStack_30);
                      }
                    /* WARNING: Subroutine does not return */
                      cocos2d::CCSequence::actions
                                (pCStack_90,uStack_8c,uStack_88,uStack_84,uStack_80,uStack_7c,
                                 uStack_78,uStack_74,uStack_70,uStack_6c,uStack_68,uStack_64,
                                 uStack_60,uStack_5c,uStack_58,uStack_54,uStack_50,uStack_4c,
                                 uStack_48,uStack_44,uStack_40,uStack_3c,uStack_38);
                    }
                    /* WARNING: Subroutine does not return */
                    cocos2d::CCSequence::actions
                              (pCStack_90,uStack_8c,uStack_88,uStack_84,uStack_80,uStack_7c,
                               uStack_78,uStack_74,uStack_70,uStack_6c,uStack_68,uStack_64,uStack_60
                               ,uStack_5c,uStack_58,uStack_54,uStack_50,uStack_4c,uStack_48,
                               uStack_44,uStack_40);
                  }
                    /* WARNING: Subroutine does not return */
                  cocos2d::CCSequence::actions
                            (pCStack_90,uStack_8c,uStack_88,uStack_84,uStack_80,uStack_7c,uStack_78,
                             uStack_74,uStack_70,uStack_6c,uStack_68,uStack_64,uStack_60,uStack_5c,
                             uStack_58,uStack_54,uStack_50,uStack_4c,uStack_48);
                }
                    /* WARNING: Subroutine does not return */
                cocos2d::CCSequence::actions
                          (pCStack_90,uStack_8c,uStack_88,uStack_84,uStack_80,uStack_7c,uStack_78,
                           uStack_74,uStack_70,uStack_6c,uStack_68,uStack_64,uStack_60,uStack_5c,
                           uStack_58,uStack_54,uStack_50);
              }
                    /* WARNING: Subroutine does not return */
              cocos2d::CCSequence::actions
                        (pCStack_90,uStack_8c,uStack_88,uStack_84,uStack_80,uStack_7c,uStack_78,
                         uStack_74,uStack_70,uStack_6c,uStack_68,uStack_64,uStack_60,uStack_5c,
                         uStack_58);
            }
                    /* WARNING: Subroutine does not return */
            cocos2d::CCSequence::actions
                      (pCStack_90,uStack_8c,uStack_88,uStack_84,uStack_80,uStack_7c,uStack_78,
                       uStack_74,uStack_70,uStack_6c,uStack_68,uStack_64,uStack_60);
          }
                    /* WARNING: Subroutine does not return */
          cocos2d::CCSequence::actions
                    (pCStack_90,uStack_8c,uStack_88,uStack_84,uStack_80,uStack_7c,uStack_78,
                     uStack_74,uStack_70,uStack_6c,uStack_68);
        }
                    /* WARNING: Subroutine does not return */
        cocos2d::CCSequence::actions
                  (pCStack_90,uStack_8c,uStack_88,uStack_84,uStack_80,uStack_7c,uStack_78,uStack_74,
                   uStack_70);
      }
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions
                (pCStack_90,uStack_8c,uStack_88,uStack_84,uStack_80,uStack_7c,uStack_78);
    }
                    /* WARNING: Subroutine does not return */
    cocos2d::CCSequence::actions(pCStack_90,uStack_8c,uStack_88,uStack_84,uStack_80);
  }
  uVar8 = *(undefined4 *)(*(int *)param_2 + 0x4c);
  iVar3 = __aeabi_fcmpgt(uVar8,0);
  if (iVar3 == 0) {
    iVar9 = *(int *)param_2;
    CVar7 = *(CCPoint *)(iVar9 + 0x4c);
    iVar3 = __aeabi_fcmpeq(CVar7,0);
    if (iVar3 == 0) {
      CStack_b0 = __subsf3(CVar7,CStack_ac);
    }
    else {
      CStack_b0 = DAT_000b9f44;
      CVar7 = DAT_000b9f44;
    }
    CVar1 = CStack_b0;
    CStack_ac = CVar7;
    uVar8 = __mulsf3(*(undefined4 *)(iVar9 + 0x50),0x3f000000);
    __addsf3(uVar8,*(undefined4 *)(iVar9 + 0x20));
    uVar8 = __mulsf3(*(undefined4 *)(iVar9 + 0x54),0x3f000000);
    uVar11 = __subsf3(*(undefined4 *)(iVar9 + 0x24),uVar8);
    uVar11 = cocos2d::CCPoint::CCPoint
                       ((CCPoint *)&CStack_b8,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
                    /* WARNING: Subroutine does not return */
    KG_action((float)uVar11,CVar1,CStack_b8,(float)((ulonglong)uVar11 >> 0x20),extraout_s2_01,
              (bool)uStack_b4,*(_KG_Anit **)(*(int *)param_2 + 0x58));
  }
  CStack_ac = uVar8;
  fVar10 = (float)cocos2d::CCDelayTime::actionWithDuration(extraout_s0);
  pCVar4 = (CCFiniteTimeAction *)cocos2d::CCDelayTime::actionWithDuration(fVar10);
  memset(apCStack_a4,0,0x14);
  iVar9 = *(int *)param_2;
  iVar3 = __aeabi_fcmpgt(*(undefined4 *)(iVar9 + 0x58),DAT_000b9f40);
  fVar10 = extraout_s0_00;
  fVar12 = extraout_s1;
  fVar13 = extraout_s2;
  if ((iVar3 == 0) &&
     (iVar3 = __aeabi_fcmpgt(*(undefined4 *)(iVar9 + 0x5c),DAT_000b9f40), fVar10 = extraout_s0_01,
     fVar12 = extraout_s1_00, fVar13 = extraout_s2_00, iVar3 == 0)) {
    iVar3 = 0;
  }
  else {
    apCStack_a4[0] =
         (CCFiniteTimeAction *)cocos2d::CCScaleTo::actionWithDuration(fVar10,fVar12,fVar13);
    iVar3 = 1;
  }
  uVar8 = *(undefined4 *)(*(int *)param_2 + 0x60);
  iVar9 = __aeabi_fcmplt(uVar8,DAT_000b9f48);
  if (iVar9 == 0) {
    iVar9 = __aeabi_fcmpgt(uVar8,DAT_000b9f4c);
    if (iVar9 == 0) goto LAB_000b9c52;
    fVar10 = (float)__fixunssfsi(uVar8);
    uVar2 = (uchar)DAT_000b9f44;
  }
  else {
    uVar2 = (uchar)DAT_000b9f44;
    fVar10 = extraout_s0_02;
  }
  pCVar5 = (CCFiniteTimeAction *)cocos2d::CCFadeTo::actionWithDuration(fVar10,uVar2);
  apCStack_a4[iVar3] = pCVar5;
  iVar3 = iVar3 + 1;
LAB_000b9c52:
  iVar9 = __aeabi_fcmpgt(*(undefined4 *)(*(int *)param_2 + 100),DAT_000b9f50);
  if (iVar9 == 0) {
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,0);
    }
  }
  else {
    pCVar5 = (CCFiniteTimeAction *)
             cocos2d::CCRotateTo::actionWithDuration(extraout_s0_03,extraout_s1_01);
    apCStack_a4[iVar3] = pCVar5;
    iVar3 = iVar3 + 1;
  }
  if (iVar3 == 1) {
    uVar8 = cocos2d::CCSpawn::actions(apCStack_a4[0],0);
  }
  else if (iVar3 == 2) {
    uVar8 = cocos2d::CCSpawn::actions(apCStack_a4[0],apCStack_a4[1],0);
  }
  else {
    uVar8 = cocos2d::CCSpawn::actions(apCStack_a4[0],apCStack_a4[1],apCStack_a4[2],0);
  }
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(pCVar4,uVar8,0);
}


