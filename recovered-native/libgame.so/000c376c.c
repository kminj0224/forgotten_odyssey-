/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c376c  Symbol: FUN_000c376c */

/* WARNING: Removing unreachable block (ram,0x000c37c2) */
/* WARNING: Removing unreachable block (ram,0x000c398a) */

void FUN_000c376c(void)

{
  uchar uVar1;
  uint uVar2;
  CCFiniteTimeAction *pCVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  CCPoint *pCVar7;
  int *unaff_r4;
  uint unaff_r5;
  int iVar8;
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
  CCArray *param_33;
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
  undefined4 in_stack_000001f4;
  undefined4 in_stack_000001f8;
  
  uVar2 = cocos2d::CCArray::count(param_33);
  if (uVar2 <= unaff_r5) {
    FUN_000c431e();
  }
  cocos2d::CCArray::objectAtIndex(param_33,unaff_r5);
  memset(&stack0x000001ec,0,0x78);
  memset(&stack0x000000fc,0,0xc);
  iVar6 = *(int *)(unaff_r5 * 4 + *(int *)(unaff_r6 * 4 + *unaff_r4));
  if (iVar6 == 0) {
    FUN_000c432e();
  }
  iVar6 = *(int *)(iVar6 + 0x40);
  if (iVar6 < 1) {
    pCVar3 = param_49;
    if (param_49 == (CCFiniteTimeAction *)0x0) {
      pCVar3 = (CCFiniteTimeAction *)FUN_000c431e();
    }
    if (iVar6 == 1) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,0);
    }
    if (iVar6 == 2) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,param_50,0);
    }
    if (iVar6 == 3) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,param_50,in_stack_000001f4,0);
    }
    if ((iVar6 == 4) || (iVar6 == 5)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,param_50,in_stack_000001f4,in_stack_000001f8);
    }
    if ((iVar6 == 6) || (iVar6 == 7)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,param_50,in_stack_000001f4,in_stack_000001f8);
    }
    if ((iVar6 == 8) || (iVar6 == 9)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,param_50,in_stack_000001f4,in_stack_000001f8);
    }
    if ((iVar6 == 10) || (iVar6 == 0xb)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,param_50,in_stack_000001f4,in_stack_000001f8);
    }
    if ((iVar6 == 0xc) || (iVar6 == 0xd)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,param_50,in_stack_000001f4,in_stack_000001f8);
    }
    if ((iVar6 == 0xe) || (iVar6 == 0xf)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,param_50,in_stack_000001f4,in_stack_000001f8);
    }
    if ((iVar6 == 0x10) || (iVar6 == 0x11)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,param_50,in_stack_000001f4,in_stack_000001f8);
    }
    if ((iVar6 == 0x12) || (iVar6 == 0x13)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,param_50,in_stack_000001f4,in_stack_000001f8);
    }
    if ((iVar6 == 0x14) || (iVar6 == 0x15)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,param_50,in_stack_000001f4,in_stack_000001f8);
    }
    if ((iVar6 == 0x16) || (iVar6 == 0x17)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,param_50,in_stack_000001f4,in_stack_000001f8);
    }
    if ((iVar6 == 0x18) || (iVar6 == 0x19)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,param_50,in_stack_000001f4,in_stack_000001f8);
    }
    if ((iVar6 != 0x1a) && (iVar6 != 0x1b)) {
      if ((iVar6 != 0x1c) && (iVar6 != 0x1d)) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCLog((char *)(DAT_000c435c + 0xc431c));
      }
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,param_50,in_stack_000001f4,in_stack_000001f8);
    }
                    /* WARNING: Subroutine does not return */
    cocos2d::CCSequence::actions(pCVar3,param_50,in_stack_000001f4,in_stack_000001f8);
  }
  iVar8 = *unaff_r4;
  uVar4 = *(undefined4 *)(*(int *)(unaff_r5 * 4 + *(int *)(iVar8 + unaff_r6 * 4)) + 0x4c);
  iVar6 = __aeabi_fcmpgt(uVar4,0);
  if (iVar6 == 0) {
    iVar8 = *(int *)(unaff_r5 * 4 + *(int *)(iVar8 + unaff_r6 * 4));
    pCVar7 = *(CCPoint **)(iVar8 + 0x4c);
    iVar6 = __aeabi_fcmpeq(pCVar7,0);
    if (iVar6 == 0) {
      param_43 = (CCPoint *)__subsf3(pCVar7,param_44);
      param_44 = pCVar7;
    }
    else {
      param_43 = DAT_000c3a10;
      param_44 = DAT_000c3a10;
    }
    pCVar7 = param_43;
    uVar4 = __mulsf3(*(undefined4 *)(iVar8 + 0x50),0x3f000000);
    __addsf3(uVar4,*(undefined4 *)(iVar8 + 0x20));
    uVar4 = __mulsf3(*(undefined4 *)(iVar8 + 0x54),0x3f000000);
    uVar10 = __subsf3(*(undefined4 *)(iVar8 + 0x24),uVar4);
    uVar10 = cocos2d::CCPoint::CCPoint
                       ((CCPoint *)&stack0x000000f4,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20)
                       );
                    /* WARNING: Subroutine does not return */
    KG_action((float)uVar10,(CCPoint)pCVar7,param_41,(float)((ulonglong)uVar10 >> 0x20),
              extraout_s2_01,SUB41(param_42,0),
              *(_KG_Anit **)(*(int *)(unaff_r5 * 4 + *(int *)(unaff_r6 * 4 + *unaff_r4)) + 0x58));
  }
  param_44 = (CCPoint *)uVar4;
  pCVar3 = (CCFiniteTimeAction *)cocos2d::CCDelayTime::actionWithDuration(extraout_s0);
  memset(&stack0x000001d8,0,0x14);
  iVar8 = *(int *)(unaff_r5 * 4 + *(int *)(unaff_r6 * 4 + *unaff_r4));
  uVar4 = *(undefined4 *)(iVar8 + 0x50);
  iVar6 = __aeabi_fcmpgt(uVar4,DAT_000c3a0c);
  if ((iVar6 == 0) &&
     (iVar6 = __aeabi_fcmpgt(*(undefined4 *)(iVar8 + 0x54),DAT_000c3a0c), iVar6 == 0)) {
    iVar6 = 0;
  }
  else {
    __addsf3(uVar4,*(undefined4 *)(iVar8 + 0x20));
    uVar10 = __subsf3(*(undefined4 *)(iVar8 + 0x24),*(undefined4 *)(iVar8 + 0x54));
    fVar9 = (float)cocos2d::CCPoint::CCPoint
                             ((CCPoint *)&stack0x000000e4,(float)uVar10,
                              (float)((ulonglong)uVar10 >> 0x20));
    param_45 = (CCFiniteTimeAction *)cocos2d::CCMoveTo::actionWithDuration(fVar9,DAT_000c3a10);
    iVar6 = 1;
  }
  iVar5 = *(int *)(unaff_r5 * 4 + *(int *)(unaff_r6 * 4 + *unaff_r4));
  iVar8 = __aeabi_fcmpgt(*(undefined4 *)(iVar5 + 0x58),DAT_000c3a0c);
  fVar9 = extraout_s0_00;
  fVar11 = extraout_s1;
  fVar12 = extraout_s2;
  if ((iVar8 != 0) ||
     (iVar8 = __aeabi_fcmpgt(*(undefined4 *)(iVar5 + 0x5c),DAT_000c3a0c), fVar9 = extraout_s0_01,
     fVar11 = extraout_s1_00, fVar12 = extraout_s2_00, iVar8 != 0)) {
    uVar4 = cocos2d::CCScaleTo::actionWithDuration(fVar9,fVar11,fVar12);
    (&stack0x000001d8)[iVar6] = (CCFiniteTimeAction *)uVar4;
    iVar6 = iVar6 + 1;
  }
  uVar4 = *(undefined4 *)(*(int *)(unaff_r5 * 4 + *(int *)(unaff_r6 * 4 + *unaff_r4)) + 0x60);
  iVar8 = __aeabi_fcmplt(uVar4,DAT_000c3a18);
  if (iVar8 == 0) {
    iVar8 = __aeabi_fcmpgt(uVar4,DAT_000c3a1c);
    if (iVar8 == 0) goto LAB_000c38ca;
    fVar9 = (float)__fixunssfsi(uVar4);
    uVar1 = (uchar)DAT_000c3a14;
  }
  else {
    uVar1 = (uchar)DAT_000c3a14;
    fVar9 = extraout_s0_02;
  }
  uVar4 = cocos2d::CCFadeTo::actionWithDuration(fVar9,uVar1);
  (&stack0x000001d8)[iVar6] = (CCFiniteTimeAction *)uVar4;
  iVar6 = iVar6 + 1;
LAB_000c38ca:
  iVar8 = __aeabi_fcmpgt(*(undefined4 *)
                          (*(int *)(unaff_r5 * 4 + *(int *)(unaff_r6 * 4 + *unaff_r4)) + 100),
                         DAT_000c3a1c);
  if (iVar8 == 0) {
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,0);
    }
  }
  else {
    uVar4 = cocos2d::CCRotateTo::actionWithDuration(extraout_s0_03,extraout_s1_01);
    (&stack0x000001d8)[iVar6] = (CCFiniteTimeAction *)uVar4;
    iVar6 = iVar6 + 1;
  }
  if (iVar6 == 1) {
    uVar4 = cocos2d::CCSpawn::actions(param_45,0);
  }
  else if (iVar6 == 2) {
    uVar4 = cocos2d::CCSpawn::actions(param_45,param_46,0);
  }
  else if (iVar6 == 3) {
    uVar4 = cocos2d::CCSpawn::actions(param_45,param_46,param_47,0);
  }
  else {
    uVar4 = cocos2d::CCSpawn::actions(param_45,param_46,param_47,param_48);
  }
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(pCVar3,uVar4,0);
}


