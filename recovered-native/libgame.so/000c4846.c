/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c4846  Symbol: FUN_000c4846 */

/* WARNING: Removing unreachable block (ram,0x000c489c) */
/* WARNING: Removing unreachable block (ram,0x000c4a82) */

void FUN_000c4846(void)

{
  uchar uVar1;
  uint uVar2;
  CCFiniteTimeAction *pCVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  CCPoint *pCVar8;
  int *unaff_r4;
  uint unaff_r5;
  int unaff_r6;
  float extraout_s0;
  float fVar9;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s1;
  float extraout_s1_00;
  float fVar11;
  float extraout_s1_01;
  undefined8 uVar10;
  float extraout_s2;
  float extraout_s2_00;
  float fVar12;
  float extraout_s2_01;
  CCArray *param_34;
  undefined4 param_39;
  undefined4 param_40;
  CCSize param_41;
  undefined4 param_42;
  CCPoint *param_43;
  CCPoint *param_44;
  CCFiniteTimeAction *param_45;
  undefined4 param_46;
  undefined4 param_47;
  undefined4 param_48;
  int param_49;
  undefined4 param_50;
  undefined4 param_51;
  undefined4 param_52;
  undefined4 param_53;
  undefined4 param_54;
  undefined4 param_55;
  undefined4 param_56;
  undefined4 param_57;
  undefined4 param_58;
  undefined4 param_59;
  undefined4 param_60;
  undefined4 param_61;
  undefined4 param_62;
  undefined4 param_63;
  undefined4 param_64;
  undefined4 param_65;
  undefined4 param_66;
  undefined4 param_67;
  undefined4 param_68;
  undefined4 param_69;
  undefined4 param_70;
  undefined4 param_71;
  undefined4 param_72;
  undefined4 param_73;
  undefined4 param_74;
  undefined4 param_75;
  undefined4 param_76;
  undefined4 param_77;
  
  uVar2 = cocos2d::CCArray::count(param_34);
  if (uVar2 <= unaff_r5) {
    FUN_000c5406();
  }
  cocos2d::CCArray::objectAtIndex(param_34,unaff_r5);
  memset(&stack0x0000013c,0,0x78);
  memset(&stack0x000000fc,0,0xc);
  iVar7 = *(int *)(unaff_r5 * 4 + *(int *)(unaff_r6 * 4 + *unaff_r4));
  if (iVar7 == 0) {
    FUN_000c5416();
  }
  uVar10 = CONCAT44(*(int *)(iVar7 + 0x40),param_49);
  if (*(int *)(iVar7 + 0x40) < 1) {
    if (param_49 == 0) {
      uVar10 = FUN_000c5406();
    }
    iVar7 = (int)((ulonglong)uVar10 >> 0x20);
    pCVar3 = (CCFiniteTimeAction *)uVar10;
    if (iVar7 == 1) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,0);
    }
    if (iVar7 == 2) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,param_50,0);
    }
    if (iVar7 == 3) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,param_50,param_51,0);
    }
    if ((iVar7 == 4) || (iVar7 == 5)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,param_50,param_51,param_52);
    }
    if ((iVar7 == 6) || (iVar7 == 7)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,param_50,param_51,param_52);
    }
    if ((iVar7 == 8) || (iVar7 == 9)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,param_50,param_51,param_52);
    }
    if ((iVar7 == 10) || (iVar7 == 0xb)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,param_50,param_51,param_52);
    }
    if ((iVar7 == 0xc) || (iVar7 == 0xd)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,param_50,param_51,param_52);
    }
    if ((iVar7 == 0xe) || (iVar7 == 0xf)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,param_50,param_51,param_52);
    }
    if ((iVar7 == 0x10) || (iVar7 == 0x11)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,param_50,param_51,param_52);
    }
    if ((iVar7 == 0x12) || (iVar7 == 0x13)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,param_50,param_51,param_52);
    }
    if ((iVar7 == 0x14) || (iVar7 == 0x15)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,param_50,param_51,param_52);
    }
    if ((iVar7 == 0x16) || (iVar7 == 0x17)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,param_50,param_51,param_52);
    }
    if ((iVar7 == 0x18) || (iVar7 == 0x19)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,param_50,param_51,param_52);
    }
    if ((iVar7 != 0x1a) && (iVar7 != 0x1b)) {
      if ((iVar7 != 0x1c) && (iVar7 != 0x1d)) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCLog((char *)(DAT_000c5444 + 0xc5404));
      }
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,param_50,param_51,param_52);
    }
                    /* WARNING: Subroutine does not return */
    cocos2d::CCSequence::actions(pCVar3,param_50,param_51,param_52);
  }
  iVar5 = *unaff_r4;
  uVar4 = *(undefined4 *)(*(int *)(unaff_r5 * 4 + *(int *)(iVar5 + unaff_r6 * 4)) + 0x4c);
  iVar7 = __aeabi_fcmpgt(uVar4,0);
  if (iVar7 == 0) {
    iVar5 = *(int *)(unaff_r5 * 4 + *(int *)(iVar5 + unaff_r6 * 4));
    pCVar8 = *(CCPoint **)(iVar5 + 0x4c);
    iVar7 = __aeabi_fcmpeq(pCVar8,0);
    if (iVar7 == 0) {
      param_43 = (CCPoint *)__subsf3(pCVar8,param_44);
      param_44 = pCVar8;
    }
    else {
      param_43 = DAT_000c4a5c;
      param_44 = DAT_000c4a5c;
    }
    pCVar8 = param_43;
    uVar4 = __mulsf3(*(undefined4 *)(iVar5 + 0x50),0x3f000000);
    __addsf3(uVar4,*(undefined4 *)(iVar5 + 0x20));
    uVar4 = __mulsf3(*(undefined4 *)(iVar5 + 0x54),0x3f000000);
    uVar10 = __subsf3(*(undefined4 *)(iVar5 + 0x24),uVar4);
    uVar10 = cocos2d::CCPoint::CCPoint
                       ((CCPoint *)&stack0x000000f4,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20)
                       );
                    /* WARNING: Subroutine does not return */
    KG_action((float)uVar10,(CCPoint)pCVar8,param_41,(float)((ulonglong)uVar10 >> 0x20),
              extraout_s2_01,SUB41(param_42,0),
              *(_KG_Anit **)(*(int *)(unaff_r5 * 4 + *(int *)(unaff_r6 * 4 + *unaff_r4)) + 0x58));
  }
  param_44 = (CCPoint *)uVar4;
  pCVar3 = (CCFiniteTimeAction *)cocos2d::CCDelayTime::actionWithDuration(extraout_s0);
  memset(&stack0x00000128,0,0x14);
  iVar5 = *(int *)(unaff_r5 * 4 + *(int *)(unaff_r6 * 4 + *unaff_r4));
  uVar4 = *(undefined4 *)(iVar5 + 0x50);
  iVar7 = __aeabi_fcmpgt(uVar4,DAT_000c4a58);
  if ((iVar7 == 0) &&
     (iVar7 = __aeabi_fcmpgt(*(undefined4 *)(iVar5 + 0x54),DAT_000c4a58), iVar7 == 0)) {
    iVar7 = 0;
  }
  else {
    __addsf3(uVar4,*(undefined4 *)(iVar5 + 0x20));
    uVar10 = __subsf3(*(undefined4 *)(iVar5 + 0x24),*(undefined4 *)(iVar5 + 0x54));
    fVar9 = (float)cocos2d::CCPoint::CCPoint
                             ((CCPoint *)&stack0x000000e4,(float)uVar10,
                              (float)((ulonglong)uVar10 >> 0x20));
    param_45 = (CCFiniteTimeAction *)cocos2d::CCMoveTo::actionWithDuration(fVar9,DAT_000c4a5c);
    iVar7 = 1;
  }
  iVar6 = *(int *)(unaff_r5 * 4 + *(int *)(unaff_r6 * 4 + *unaff_r4));
  iVar5 = __aeabi_fcmpgt(*(undefined4 *)(iVar6 + 0x58),DAT_000c4a58);
  fVar9 = extraout_s0_00;
  fVar11 = extraout_s1;
  fVar12 = extraout_s2;
  if ((iVar5 != 0) ||
     (iVar5 = __aeabi_fcmpgt(*(undefined4 *)(iVar6 + 0x5c),DAT_000c4a58), fVar9 = extraout_s0_01,
     fVar11 = extraout_s1_00, fVar12 = extraout_s2_00, iVar5 != 0)) {
    uVar4 = cocos2d::CCScaleTo::actionWithDuration(fVar9,fVar11,fVar12);
    (&stack0x00000128)[iVar7] = (CCFiniteTimeAction *)uVar4;
    iVar7 = iVar7 + 1;
  }
  uVar4 = *(undefined4 *)(*(int *)(unaff_r5 * 4 + *(int *)(unaff_r6 * 4 + *unaff_r4)) + 0x60);
  iVar5 = __aeabi_fcmplt(uVar4,DAT_000c4a64);
  if (iVar5 == 0) {
    iVar5 = __aeabi_fcmpgt(uVar4,DAT_000c4a68);
    if (iVar5 == 0) goto LAB_000c49a2;
    fVar9 = (float)__fixunssfsi(uVar4);
    uVar1 = (uchar)DAT_000c4a60;
  }
  else {
    uVar1 = (uchar)DAT_000c4a60;
    fVar9 = extraout_s0_02;
  }
  uVar4 = cocos2d::CCFadeTo::actionWithDuration(fVar9,uVar1);
  (&stack0x00000128)[iVar7] = (CCFiniteTimeAction *)uVar4;
  iVar7 = iVar7 + 1;
LAB_000c49a2:
  iVar5 = __aeabi_fcmpgt(*(undefined4 *)
                          (*(int *)(unaff_r5 * 4 + *(int *)(unaff_r6 * 4 + *unaff_r4)) + 100),
                         DAT_000c4a50);
  if (iVar5 == 0) {
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,0);
    }
  }
  else {
    uVar4 = cocos2d::CCRotateTo::actionWithDuration(extraout_s0_03,extraout_s1_01);
    (&stack0x00000128)[iVar7] = (CCFiniteTimeAction *)uVar4;
    iVar7 = iVar7 + 1;
  }
  if (iVar7 == 1) {
    uVar4 = cocos2d::CCSpawn::actions(param_45,0);
  }
  else if (iVar7 == 2) {
    uVar4 = cocos2d::CCSpawn::actions(param_45,param_46,0);
  }
  else if (iVar7 == 3) {
    uVar4 = cocos2d::CCSpawn::actions(param_45,param_46,param_47,0);
  }
  else {
    uVar4 = cocos2d::CCSpawn::actions(param_45,param_46,param_47,param_48);
  }
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(pCVar3,uVar4,0);
}


