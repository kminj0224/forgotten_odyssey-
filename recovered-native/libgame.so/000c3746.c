/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c3746  Symbol: FUN_000c3746 */

/* WARNING: Removing unreachable block (ram,0x000c37c2) */
/* WARNING: Removing unreachable block (ram,0x000c398a) */

void FUN_000c3746(void)

{
  uchar uVar1;
  CCArray *this;
  CCArray *this_00;
  int iVar2;
  CCFiniteTimeAction *pCVar3;
  undefined4 uVar4;
  int iVar5;
  CCPoint *pCVar6;
  int *unaff_r4;
  int iVar7;
  int unaff_r6;
  float extraout_s0;
  float fVar8;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s1;
  float extraout_s1_00;
  float fVar10;
  float extraout_s1_01;
  undefined8 uVar9;
  float extraout_s2;
  float extraout_s2_00;
  float fVar11;
  float extraout_s2_01;
  int *param_12;
  undefined4 in_stack_000000ec;
  undefined4 in_stack_000000f0;
  CCSize in_stack_000000f4;
  undefined4 in_stack_000000f8;
  CCPoint *in_stack_000000fc;
  CCPoint *in_stack_00000100;
  CCFiniteTimeAction *in_stack_000001d8;
  undefined4 in_stack_000001dc;
  undefined4 in_stack_000001e0;
  undefined4 in_stack_000001e4;
  CCFiniteTimeAction *in_stack_000001ec;
  undefined4 in_stack_000001f0;
  undefined4 in_stack_000001f4;
  undefined4 in_stack_000001f8;
  
  this = (CCArray *)(**(code **)(*param_12 + 0x58))(param_12);
  this_00 = this;
  if (this == (CCArray *)0x0) {
    this_00 = (CCArray *)FUN_000c432e();
  }
  iVar2 = cocos2d::CCArray::count(this_00);
  if (iVar2 != 0) {
    FUN_000c4320();
  }
  FUN_000c432e();
  iVar2 = cocos2d::CCArray::count(this);
  if (iVar2 == 0) {
    FUN_000c431e();
  }
  cocos2d::CCArray::objectAtIndex(this,0);
  memset(&stack0x000001ec,0,0x78);
  memset(&stack0x000000fc,0,0xc);
  iVar2 = **(int **)(unaff_r6 * 4 + *unaff_r4);
  if (iVar2 == 0) {
    FUN_000c432e();
  }
  iVar2 = *(int *)(iVar2 + 0x40);
  if (iVar2 < 1) {
    pCVar3 = in_stack_000001ec;
    if (in_stack_000001ec == (CCFiniteTimeAction *)0x0) {
      pCVar3 = (CCFiniteTimeAction *)FUN_000c431e();
    }
    if (iVar2 == 1) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,0);
    }
    if (iVar2 == 2) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,in_stack_000001f0,0);
    }
    if (iVar2 == 3) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,in_stack_000001f0,in_stack_000001f4,0);
    }
    if ((iVar2 == 4) || (iVar2 == 5)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,in_stack_000001f0,in_stack_000001f4,in_stack_000001f8);
    }
    if ((iVar2 == 6) || (iVar2 == 7)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,in_stack_000001f0,in_stack_000001f4,in_stack_000001f8);
    }
    if ((iVar2 == 8) || (iVar2 == 9)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,in_stack_000001f0,in_stack_000001f4,in_stack_000001f8);
    }
    if ((iVar2 == 10) || (iVar2 == 0xb)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,in_stack_000001f0,in_stack_000001f4,in_stack_000001f8);
    }
    if ((iVar2 == 0xc) || (iVar2 == 0xd)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,in_stack_000001f0,in_stack_000001f4,in_stack_000001f8);
    }
    if ((iVar2 == 0xe) || (iVar2 == 0xf)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,in_stack_000001f0,in_stack_000001f4,in_stack_000001f8);
    }
    if ((iVar2 == 0x10) || (iVar2 == 0x11)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,in_stack_000001f0,in_stack_000001f4,in_stack_000001f8);
    }
    if ((iVar2 == 0x12) || (iVar2 == 0x13)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,in_stack_000001f0,in_stack_000001f4,in_stack_000001f8);
    }
    if ((iVar2 == 0x14) || (iVar2 == 0x15)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,in_stack_000001f0,in_stack_000001f4,in_stack_000001f8);
    }
    if ((iVar2 == 0x16) || (iVar2 == 0x17)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,in_stack_000001f0,in_stack_000001f4,in_stack_000001f8);
    }
    if ((iVar2 == 0x18) || (iVar2 == 0x19)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,in_stack_000001f0,in_stack_000001f4,in_stack_000001f8);
    }
    if ((iVar2 != 0x1a) && (iVar2 != 0x1b)) {
      if ((iVar2 != 0x1c) && (iVar2 != 0x1d)) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCLog((char *)(DAT_000c435c + 0xc431c));
      }
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,in_stack_000001f0,in_stack_000001f4,in_stack_000001f8);
    }
                    /* WARNING: Subroutine does not return */
    cocos2d::CCSequence::actions(pCVar3,in_stack_000001f0,in_stack_000001f4,in_stack_000001f8);
  }
  iVar7 = *unaff_r4;
  uVar4 = *(undefined4 *)(**(int **)(iVar7 + unaff_r6 * 4) + 0x4c);
  iVar2 = __aeabi_fcmpgt(uVar4,0);
  if (iVar2 == 0) {
    iVar7 = **(int **)(iVar7 + unaff_r6 * 4);
    pCVar6 = *(CCPoint **)(iVar7 + 0x4c);
    iVar2 = __aeabi_fcmpeq(pCVar6,0);
    if (iVar2 == 0) {
      in_stack_000000fc = (CCPoint *)__subsf3(pCVar6,in_stack_00000100);
      in_stack_00000100 = pCVar6;
    }
    else {
      in_stack_000000fc = DAT_000c3a10;
      in_stack_00000100 = DAT_000c3a10;
    }
    pCVar6 = in_stack_000000fc;
    uVar4 = __mulsf3(*(undefined4 *)(iVar7 + 0x50),0x3f000000);
    __addsf3(uVar4,*(undefined4 *)(iVar7 + 0x20));
    uVar4 = __mulsf3(*(undefined4 *)(iVar7 + 0x54),0x3f000000);
    uVar9 = __subsf3(*(undefined4 *)(iVar7 + 0x24),uVar4);
    uVar9 = cocos2d::CCPoint::CCPoint
                      ((CCPoint *)&stack0x000000f4,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
                    /* WARNING: Subroutine does not return */
    KG_action((float)uVar9,(CCPoint)pCVar6,in_stack_000000f4,(float)((ulonglong)uVar9 >> 0x20),
              extraout_s2_01,SUB41(in_stack_000000f8,0),
              *(_KG_Anit **)(**(int **)(unaff_r6 * 4 + *unaff_r4) + 0x58));
  }
  in_stack_00000100 = (CCPoint *)uVar4;
  pCVar3 = (CCFiniteTimeAction *)cocos2d::CCDelayTime::actionWithDuration(extraout_s0);
  memset(&stack0x000001d8,0,0x14);
  iVar7 = **(int **)(unaff_r6 * 4 + *unaff_r4);
  uVar4 = *(undefined4 *)(iVar7 + 0x50);
  iVar2 = __aeabi_fcmpgt(uVar4,DAT_000c3a0c);
  if ((iVar2 == 0) &&
     (iVar2 = __aeabi_fcmpgt(*(undefined4 *)(iVar7 + 0x54),DAT_000c3a0c), iVar2 == 0)) {
    iVar2 = 0;
  }
  else {
    __addsf3(uVar4,*(undefined4 *)(iVar7 + 0x20));
    uVar9 = __subsf3(*(undefined4 *)(iVar7 + 0x24),*(undefined4 *)(iVar7 + 0x54));
    fVar8 = (float)cocos2d::CCPoint::CCPoint
                             ((CCPoint *)&stack0x000000e4,(float)uVar9,
                              (float)((ulonglong)uVar9 >> 0x20));
    in_stack_000001d8 =
         (CCFiniteTimeAction *)cocos2d::CCMoveTo::actionWithDuration(fVar8,DAT_000c3a10);
    iVar2 = 1;
  }
  iVar5 = **(int **)(unaff_r6 * 4 + *unaff_r4);
  iVar7 = __aeabi_fcmpgt(*(undefined4 *)(iVar5 + 0x58),DAT_000c3a0c);
  fVar8 = extraout_s0_00;
  fVar10 = extraout_s1;
  fVar11 = extraout_s2;
  if ((iVar7 != 0) ||
     (iVar7 = __aeabi_fcmpgt(*(undefined4 *)(iVar5 + 0x5c),DAT_000c3a0c), fVar8 = extraout_s0_01,
     fVar10 = extraout_s1_00, fVar11 = extraout_s2_00, iVar7 != 0)) {
    uVar4 = cocos2d::CCScaleTo::actionWithDuration(fVar8,fVar10,fVar11);
    (&stack0x000001d8)[iVar2] = (CCFiniteTimeAction *)uVar4;
    iVar2 = iVar2 + 1;
  }
  uVar4 = *(undefined4 *)(**(int **)(unaff_r6 * 4 + *unaff_r4) + 0x60);
  iVar7 = __aeabi_fcmplt(uVar4,DAT_000c3a18);
  if (iVar7 == 0) {
    iVar7 = __aeabi_fcmpgt(uVar4,DAT_000c3a1c);
    if (iVar7 == 0) goto LAB_000c38ca;
    fVar8 = (float)__fixunssfsi(uVar4);
    uVar1 = (uchar)DAT_000c3a14;
  }
  else {
    uVar1 = (uchar)DAT_000c3a14;
    fVar8 = extraout_s0_02;
  }
  uVar4 = cocos2d::CCFadeTo::actionWithDuration(fVar8,uVar1);
  (&stack0x000001d8)[iVar2] = (CCFiniteTimeAction *)uVar4;
  iVar2 = iVar2 + 1;
LAB_000c38ca:
  iVar7 = __aeabi_fcmpgt(*(undefined4 *)(**(int **)(unaff_r6 * 4 + *unaff_r4) + 100),DAT_000c3a1c);
  if (iVar7 == 0) {
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,0);
    }
  }
  else {
    uVar4 = cocos2d::CCRotateTo::actionWithDuration(extraout_s0_03,extraout_s1_01);
    (&stack0x000001d8)[iVar2] = (CCFiniteTimeAction *)uVar4;
    iVar2 = iVar2 + 1;
  }
  if (iVar2 == 1) {
    uVar4 = cocos2d::CCSpawn::actions(in_stack_000001d8,0);
  }
  else if (iVar2 == 2) {
    uVar4 = cocos2d::CCSpawn::actions(in_stack_000001d8,in_stack_000001dc,0);
  }
  else if (iVar2 == 3) {
    uVar4 = cocos2d::CCSpawn::actions(in_stack_000001d8,in_stack_000001dc,in_stack_000001e0,0);
  }
  else {
    uVar4 = cocos2d::CCSpawn::actions
                      (in_stack_000001d8,in_stack_000001dc,in_stack_000001e0,in_stack_000001e4);
  }
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(pCVar3,uVar4,0);
}


