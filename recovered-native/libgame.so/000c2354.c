/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c2354  Symbol: FUN_000c2354 */

/* WARNING: Removing unreachable block (ram,0x000c23aa) */
/* WARNING: Removing unreachable block (ram,0x000c2556) */

void FUN_000c2354(void)

{
  CCPoint *pCVar1;
  uchar uVar2;
  uint uVar3;
  CCFiniteTimeAction *pCVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  CCPoint *pCVar9;
  int *unaff_r4;
  uint unaff_r5;
  int unaff_r6;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar10;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float fVar12;
  float extraout_s1_03;
  undefined8 uVar11;
  float extraout_s2;
  float extraout_s2_00;
  float fVar13;
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
  CCFiniteTimeAction *param_49;
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
  
  uVar3 = cocos2d::CCArray::count(param_34);
  if (uVar3 <= unaff_r5) {
    FUN_000c2efe();
  }
  cocos2d::CCArray::objectAtIndex(param_34,unaff_r5);
  memset(&stack0x00000194,0,0x78);
  memset(&stack0x000000e4,0,0xc);
  iVar8 = *(int *)(unaff_r5 * 4 + *(int *)(unaff_r6 * 4 + *unaff_r4));
  if (iVar8 == 0) {
    FUN_000c2f0e();
  }
  iVar8 = *(int *)(iVar8 + 0x40);
  if (iVar8 < 1) {
    pCVar4 = param_49;
    if (param_49 == (CCFiniteTimeAction *)0x0) {
      pCVar4 = (CCFiniteTimeAction *)FUN_000c2efe();
    }
    if (iVar8 == 1) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,0);
    }
    if (iVar8 == 2) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,param_50,0);
    }
    if (iVar8 == 3) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,param_50,param_51,0);
    }
    if ((iVar8 == 4) || (iVar8 == 5)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,param_50,param_51,param_52);
    }
    if ((iVar8 == 6) || (iVar8 == 7)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,param_50,param_51,param_52);
    }
    if ((iVar8 == 8) || (iVar8 == 9)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,param_50,param_51,param_52);
    }
    if ((iVar8 == 10) || (iVar8 == 0xb)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,param_50,param_51,param_52);
    }
    if ((iVar8 == 0xc) || (iVar8 == 0xd)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,param_50,param_51,param_52);
    }
    if ((iVar8 == 0xe) || (iVar8 == 0xf)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,param_50,param_51,param_52);
    }
    if ((iVar8 == 0x10) || (iVar8 == 0x11)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,param_50,param_51,param_52);
    }
    if ((iVar8 == 0x12) || (iVar8 == 0x13)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,param_50,param_51,param_52);
    }
    if ((iVar8 == 0x14) || (iVar8 == 0x15)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,param_50,param_51,param_52);
    }
    if ((iVar8 == 0x16) || (iVar8 == 0x17)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,param_50,param_51,param_52);
    }
    if ((iVar8 == 0x18) || (iVar8 == 0x19)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,param_50,param_51,param_52);
    }
    if ((iVar8 != 0x1a) && (iVar8 != 0x1b)) {
      if ((iVar8 != 0x1c) && (iVar8 != 0x1d)) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCLog((char *)(DAT_000c2f44 + 0xc2efc));
      }
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,param_50,param_51,param_52);
    }
                    /* WARNING: Subroutine does not return */
    cocos2d::CCSequence::actions(pCVar4,param_50,param_51,param_52);
  }
  iVar6 = *unaff_r4;
  uVar5 = *(undefined4 *)(*(int *)(unaff_r5 * 4 + *(int *)(iVar6 + unaff_r6 * 4)) + 0x4c);
  iVar8 = __aeabi_fcmpgt(uVar5,0);
  if (iVar8 == 0) {
    iVar6 = *(int *)(unaff_r5 * 4 + *(int *)(iVar6 + unaff_r6 * 4));
    pCVar9 = *(CCPoint **)(iVar6 + 0x4c);
    iVar8 = __aeabi_fcmpeq(pCVar9,0);
    if (iVar8 == 0) {
      param_43 = (CCPoint *)__subsf3(pCVar9,param_44);
    }
    else {
      param_43 = DAT_000c25e8;
      pCVar9 = DAT_000c25e8;
    }
    pCVar1 = param_43;
    param_44 = pCVar9;
    uVar5 = __mulsf3(*(undefined4 *)(iVar6 + 0x50),0x3f000000);
    __addsf3(uVar5,*(undefined4 *)(iVar6 + 0x20));
    uVar5 = __mulsf3(*(undefined4 *)(iVar6 + 0x54),0x3f000000);
    uVar11 = __subsf3(*(undefined4 *)(iVar6 + 0x24),uVar5);
    uVar11 = cocos2d::CCPoint::CCPoint
                       ((CCPoint *)&stack0x000000dc,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20)
                       );
                    /* WARNING: Subroutine does not return */
    KG_action((float)uVar11,(CCPoint)pCVar1,param_41,(float)((ulonglong)uVar11 >> 0x20),
              extraout_s2_01,SUB41(param_42,0),
              *(_KG_Anit **)(*(int *)(unaff_r5 * 4 + *(int *)(unaff_r6 * 4 + *unaff_r4)) + 0x58));
  }
  param_44 = (CCPoint *)uVar5;
  pCVar4 = (CCFiniteTimeAction *)cocos2d::CCDelayTime::actionWithDuration(extraout_s0);
  memset(&stack0x00000180,0,0x14);
  iVar6 = *(int *)(unaff_r5 * 4 + *(int *)(unaff_r6 * 4 + *unaff_r4));
  iVar8 = __aeabi_fcmpgt(*(undefined4 *)(iVar6 + 0x50),DAT_000c25e4);
  fVar10 = extraout_s0_00;
  fVar12 = extraout_s1;
  if ((iVar8 == 0) &&
     (iVar8 = __aeabi_fcmpgt(*(undefined4 *)(iVar6 + 0x54),DAT_000c25e4), fVar10 = extraout_s0_01,
     fVar12 = extraout_s1_00, iVar8 == 0)) {
    iVar8 = 0;
  }
  else {
    fVar10 = (float)cocos2d::CCPoint::CCPoint((CCPoint *)&stack0x000000cc,fVar10,fVar12);
    param_45 = (CCFiniteTimeAction *)cocos2d::CCMoveTo::actionWithDuration(fVar10,DAT_000c25e8);
    iVar8 = 1;
  }
  iVar7 = *(int *)(unaff_r5 * 4 + *(int *)(unaff_r6 * 4 + *unaff_r4));
  iVar6 = __aeabi_fcmpgt(*(undefined4 *)(iVar7 + 0x58),DAT_000c25e4);
  fVar10 = extraout_s0_02;
  fVar12 = extraout_s1_01;
  fVar13 = extraout_s2;
  if ((iVar6 != 0) ||
     (iVar6 = __aeabi_fcmpgt(*(undefined4 *)(iVar7 + 0x5c),DAT_000c25e4), fVar10 = extraout_s0_03,
     fVar12 = extraout_s1_02, fVar13 = extraout_s2_00, iVar6 != 0)) {
    uVar5 = cocos2d::CCScaleTo::actionWithDuration(fVar10,fVar12,fVar13);
    (&stack0x00000180)[iVar8] = (CCFiniteTimeAction *)uVar5;
    iVar8 = iVar8 + 1;
  }
  uVar5 = *(undefined4 *)(*(int *)(unaff_r5 * 4 + *(int *)(unaff_r6 * 4 + *unaff_r4)) + 0x60);
  iVar6 = __aeabi_fcmplt(uVar5,DAT_000c25f0);
  if (iVar6 == 0) {
    iVar6 = __aeabi_fcmpgt(uVar5,DAT_000c25f4);
    if (iVar6 == 0) goto LAB_000c249a;
    fVar10 = (float)__fixunssfsi(uVar5);
    uVar2 = (uchar)DAT_000c25ec;
  }
  else {
    uVar2 = (uchar)DAT_000c25ec;
    fVar10 = extraout_s0_04;
  }
  uVar5 = cocos2d::CCFadeTo::actionWithDuration(fVar10,uVar2);
  (&stack0x00000180)[iVar8] = (CCFiniteTimeAction *)uVar5;
  iVar8 = iVar8 + 1;
LAB_000c249a:
  iVar6 = __aeabi_fcmpgt(*(undefined4 *)
                          (*(int *)(unaff_r5 * 4 + *(int *)(unaff_r6 * 4 + *unaff_r4)) + 100),
                         DAT_000c25f8);
  if (iVar6 == 0) {
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,0);
    }
  }
  else {
    uVar5 = cocos2d::CCRotateTo::actionWithDuration(extraout_s0_05,extraout_s1_03);
    (&stack0x00000180)[iVar8] = (CCFiniteTimeAction *)uVar5;
    iVar8 = iVar8 + 1;
  }
  if (iVar8 == 1) {
    uVar5 = cocos2d::CCSpawn::actions(param_45,0);
  }
  else if (iVar8 == 2) {
    uVar5 = cocos2d::CCSpawn::actions(param_45,param_46,0);
  }
  else if (iVar8 == 3) {
    uVar5 = cocos2d::CCSpawn::actions(param_45,param_46,param_47,0);
  }
  else {
    uVar5 = cocos2d::CCSpawn::actions(param_45,param_46,param_47,param_48);
  }
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(pCVar4,uVar5,0);
}


