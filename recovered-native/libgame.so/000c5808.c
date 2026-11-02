/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c5808  Symbol: FUN_000c5808 */

/* WARNING: Removing unreachable block (ram,0x000c5884) */
/* WARNING: Removing unreachable block (ram,0x000c5a44) */

void FUN_000c5808(void)

{
  CCPoint *pCVar1;
  uchar uVar2;
  CCArray *this;
  CCArray *this_00;
  int iVar3;
  CCFiniteTimeAction *pCVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  CCPoint *pCVar8;
  int *unaff_r4;
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
  int *param_11;
  undefined4 in_stack_000000dc;
  undefined4 in_stack_000000e0;
  CCSize in_stack_000000e4;
  undefined4 in_stack_000000e8;
  CCPoint *in_stack_000000ec;
  CCPoint *in_stack_000000f0;
  CCFiniteTimeAction *in_stack_000000f8;
  undefined4 in_stack_000000fc;
  undefined4 in_stack_00000100;
  undefined4 in_stack_00000104;
  CCFiniteTimeAction *in_stack_0000010c;
  undefined4 in_stack_00000110;
  undefined4 in_stack_00000114;
  undefined4 in_stack_00000118;
  undefined4 in_stack_0000011c;
  undefined4 in_stack_00000120;
  undefined4 in_stack_00000124;
  undefined4 in_stack_00000128;
  undefined4 in_stack_0000012c;
  undefined4 in_stack_00000130;
  undefined4 in_stack_00000134;
  undefined4 in_stack_00000138;
  undefined4 in_stack_0000013c;
  undefined4 in_stack_00000140;
  undefined4 in_stack_00000144;
  undefined4 in_stack_00000148;
  undefined4 in_stack_0000014c;
  undefined4 in_stack_00000150;
  undefined4 in_stack_00000154;
  undefined4 in_stack_00000158;
  undefined4 in_stack_0000015c;
  undefined4 in_stack_00000160;
  undefined4 in_stack_00000164;
  undefined4 in_stack_00000168;
  undefined4 in_stack_0000016c;
  undefined4 in_stack_00000170;
  undefined4 in_stack_00000174;
  undefined4 in_stack_00000178;
  undefined4 in_stack_0000017c;
  
  this = (CCArray *)(**(code **)(*param_11 + 0x58))(param_11);
  this_00 = this;
  if (this == (CCArray *)0x0) {
    this_00 = (CCArray *)FUN_000c63f2();
  }
  iVar3 = cocos2d::CCArray::count(this_00);
  if (iVar3 != 0) {
    FUN_000c63e4();
  }
  FUN_000c63f2();
  iVar3 = cocos2d::CCArray::count(this);
  if (iVar3 == 0) {
    FUN_000c63e2();
  }
  cocos2d::CCArray::objectAtIndex(this,0);
  memset(&stack0x0000010c,0,0x78);
  memset(&stack0x000000ec,0,0xc);
  iVar3 = **(int **)(unaff_r6 * 4 + *unaff_r4);
  if (iVar3 == 0) {
    FUN_000c63f2();
  }
  iVar3 = *(int *)(iVar3 + 0x40);
  if (iVar3 < 1) {
    pCVar4 = in_stack_0000010c;
    if (in_stack_0000010c == (CCFiniteTimeAction *)0x0) {
      pCVar4 = (CCFiniteTimeAction *)FUN_000c63e2();
    }
    if (iVar3 == 1) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,0);
    }
    if (iVar3 == 2) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_00000110,0);
    }
    if (iVar3 == 3) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_00000110,in_stack_00000114,0);
    }
    if ((iVar3 == 4) || (iVar3 == 5)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_00000110,in_stack_00000114,in_stack_00000118);
    }
    if ((iVar3 == 6) || (iVar3 == 7)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_00000110,in_stack_00000114,in_stack_00000118);
    }
    if ((iVar3 == 8) || (iVar3 == 9)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_00000110,in_stack_00000114,in_stack_00000118);
    }
    if ((iVar3 == 10) || (iVar3 == 0xb)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_00000110,in_stack_00000114,in_stack_00000118);
    }
    if ((iVar3 == 0xc) || (iVar3 == 0xd)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_00000110,in_stack_00000114,in_stack_00000118);
    }
    if ((iVar3 == 0xe) || (iVar3 == 0xf)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_00000110,in_stack_00000114,in_stack_00000118);
    }
    if ((iVar3 == 0x10) || (iVar3 == 0x11)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_00000110,in_stack_00000114,in_stack_00000118);
    }
    if ((iVar3 == 0x12) || (iVar3 == 0x13)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_00000110,in_stack_00000114,in_stack_00000118);
    }
    if ((iVar3 == 0x14) || (iVar3 == 0x15)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_00000110,in_stack_00000114,in_stack_00000118);
    }
    if ((iVar3 == 0x16) || (iVar3 == 0x17)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_00000110,in_stack_00000114,in_stack_00000118);
    }
    if ((iVar3 == 0x18) || (iVar3 == 0x19)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_00000110,in_stack_00000114,in_stack_00000118);
    }
    if ((iVar3 != 0x1a) && (iVar3 != 0x1b)) {
      if ((iVar3 != 0x1c) && (iVar3 != 0x1d)) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCLog((char *)(DAT_000c6428 + 0xc63e0));
      }
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_00000110,in_stack_00000114,in_stack_00000118);
    }
                    /* WARNING: Subroutine does not return */
    cocos2d::CCSequence::actions(pCVar4,in_stack_00000110,in_stack_00000114,in_stack_00000118);
  }
  iVar6 = *unaff_r4;
  uVar5 = *(undefined4 *)(**(int **)(iVar6 + unaff_r6 * 4) + 0x4c);
  iVar3 = __aeabi_fcmpgt(uVar5,0);
  if (iVar3 == 0) {
    iVar6 = **(int **)(iVar6 + unaff_r6 * 4);
    pCVar8 = *(CCPoint **)(iVar6 + 0x4c);
    iVar3 = __aeabi_fcmpeq(pCVar8,0);
    if (iVar3 == 0) {
      in_stack_000000ec = (CCPoint *)__subsf3(pCVar8,in_stack_000000f0);
    }
    else {
      in_stack_000000ec = DAT_000c5c28;
      pCVar8 = DAT_000c5c28;
    }
    pCVar1 = in_stack_000000ec;
    in_stack_000000f0 = pCVar8;
    uVar5 = __mulsf3(*(undefined4 *)(iVar6 + 0x50),0x3f000000);
    __addsf3(uVar5,*(undefined4 *)(iVar6 + 0x20));
    uVar5 = __mulsf3(*(undefined4 *)(iVar6 + 0x54),0x3f000000);
    uVar10 = __subsf3(*(undefined4 *)(iVar6 + 0x24),uVar5);
    uVar10 = cocos2d::CCPoint::CCPoint
                       ((CCPoint *)&stack0x000000e4,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20)
                       );
                    /* WARNING: Subroutine does not return */
    KG_action((float)uVar10,(CCPoint)pCVar1,in_stack_000000e4,(float)((ulonglong)uVar10 >> 0x20),
              extraout_s2_01,SUB41(in_stack_000000e8,0),
              *(_KG_Anit **)(**(int **)(unaff_r6 * 4 + *unaff_r4) + 0x58));
  }
  in_stack_000000f0 = (CCPoint *)uVar5;
  pCVar4 = (CCFiniteTimeAction *)cocos2d::CCDelayTime::actionWithDuration(extraout_s0);
  memset(&stack0x000000f8,0,0x14);
  iVar6 = **(int **)(unaff_r6 * 4 + *unaff_r4);
  uVar5 = *(undefined4 *)(iVar6 + 0x50);
  iVar3 = __aeabi_fcmpgt(uVar5,DAT_000c5c24);
  if ((iVar3 == 0) &&
     (iVar3 = __aeabi_fcmpgt(*(undefined4 *)(iVar6 + 0x54),DAT_000c5c24), iVar3 == 0)) {
    iVar3 = 0;
  }
  else {
    __addsf3(uVar5,*(undefined4 *)(iVar6 + 0x20));
    uVar10 = __subsf3(*(undefined4 *)(iVar6 + 0x24),*(undefined4 *)(iVar6 + 0x54));
    fVar9 = (float)cocos2d::CCPoint::CCPoint
                             ((CCPoint *)&stack0x000000d4,(float)uVar10,
                              (float)((ulonglong)uVar10 >> 0x20));
    in_stack_000000f8 =
         (CCFiniteTimeAction *)cocos2d::CCMoveTo::actionWithDuration(fVar9,DAT_000c5c28);
    iVar3 = 1;
  }
  iVar7 = **(int **)(unaff_r6 * 4 + *unaff_r4);
  iVar6 = __aeabi_fcmpgt(*(undefined4 *)(iVar7 + 0x58),DAT_000c5c24);
  fVar9 = extraout_s0_00;
  fVar11 = extraout_s1;
  fVar12 = extraout_s2;
  if ((iVar6 != 0) ||
     (iVar6 = __aeabi_fcmpgt(*(undefined4 *)(iVar7 + 0x5c),DAT_000c5c24), fVar9 = extraout_s0_01,
     fVar11 = extraout_s1_00, fVar12 = extraout_s2_00, iVar6 != 0)) {
    uVar5 = cocos2d::CCScaleTo::actionWithDuration(fVar9,fVar11,fVar12);
    (&stack0x000000f8)[iVar3] = (CCFiniteTimeAction *)uVar5;
    iVar3 = iVar3 + 1;
  }
  uVar5 = *(undefined4 *)(**(int **)(unaff_r6 * 4 + *unaff_r4) + 0x60);
  iVar6 = __aeabi_fcmplt(uVar5,DAT_000c5c30);
  if (iVar6 == 0) {
    iVar6 = __aeabi_fcmpgt(uVar5,DAT_000c5c34);
    if (iVar6 == 0) goto LAB_000c5988;
    fVar9 = (float)__fixunssfsi(uVar5);
    uVar2 = (uchar)DAT_000c5c2c;
  }
  else {
    uVar2 = (uchar)DAT_000c5c2c;
    fVar9 = extraout_s0_02;
  }
  uVar5 = cocos2d::CCFadeTo::actionWithDuration(fVar9,uVar2);
  (&stack0x000000f8)[iVar3] = (CCFiniteTimeAction *)uVar5;
  iVar3 = iVar3 + 1;
LAB_000c5988:
  iVar6 = __aeabi_fcmpgt(*(undefined4 *)(**(int **)(unaff_r6 * 4 + *unaff_r4) + 100),DAT_000c5c38);
  if (iVar6 == 0) {
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,0);
    }
  }
  else {
    uVar5 = cocos2d::CCRotateTo::actionWithDuration(extraout_s0_03,extraout_s1_01);
    (&stack0x000000f8)[iVar3] = (CCFiniteTimeAction *)uVar5;
    iVar3 = iVar3 + 1;
  }
  if (iVar3 == 1) {
    uVar5 = cocos2d::CCSpawn::actions(in_stack_000000f8,0);
  }
  else if (iVar3 == 2) {
    uVar5 = cocos2d::CCSpawn::actions(in_stack_000000f8,in_stack_000000fc,0);
  }
  else if (iVar3 == 3) {
    uVar5 = cocos2d::CCSpawn::actions(in_stack_000000f8,in_stack_000000fc,in_stack_00000100,0);
  }
  else {
    uVar5 = cocos2d::CCSpawn::actions
                      (in_stack_000000f8,in_stack_000000fc,in_stack_00000100,in_stack_00000104);
  }
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(pCVar4,uVar5,0);
}


