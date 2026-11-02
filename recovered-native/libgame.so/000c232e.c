/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c232e  Symbol: FUN_000c232e */

/* WARNING: Removing unreachable block (ram,0x000c23aa) */
/* WARNING: Removing unreachable block (ram,0x000c2556) */

void FUN_000c232e(void)

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
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar9;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float fVar11;
  float extraout_s1_03;
  undefined8 uVar10;
  float extraout_s2;
  float extraout_s2_00;
  float fVar12;
  float extraout_s2_01;
  int *param_11;
  undefined4 in_stack_000000d4;
  undefined4 in_stack_000000d8;
  CCSize in_stack_000000dc;
  undefined4 in_stack_000000e0;
  CCPoint *in_stack_000000e4;
  CCPoint *in_stack_000000e8;
  CCFiniteTimeAction *in_stack_00000180;
  undefined4 in_stack_00000184;
  undefined4 in_stack_00000188;
  undefined4 in_stack_0000018c;
  CCFiniteTimeAction *in_stack_00000194;
  undefined4 in_stack_00000198;
  undefined4 in_stack_0000019c;
  undefined4 in_stack_000001a0;
  undefined4 in_stack_000001a4;
  undefined4 in_stack_000001a8;
  undefined4 in_stack_000001ac;
  undefined4 in_stack_000001b0;
  undefined4 in_stack_000001b4;
  undefined4 in_stack_000001b8;
  undefined4 in_stack_000001bc;
  undefined4 in_stack_000001c0;
  undefined4 in_stack_000001c4;
  undefined4 in_stack_000001c8;
  undefined4 in_stack_000001cc;
  undefined4 in_stack_000001d0;
  undefined4 in_stack_000001d4;
  undefined4 in_stack_000001d8;
  undefined4 in_stack_000001dc;
  undefined4 in_stack_000001e0;
  undefined4 in_stack_000001e4;
  undefined4 in_stack_000001e8;
  undefined4 in_stack_000001ec;
  undefined4 in_stack_000001f0;
  
  this = (CCArray *)(**(code **)(*param_11 + 0x58))(param_11);
  this_00 = this;
  if (this == (CCArray *)0x0) {
    this_00 = (CCArray *)FUN_000c2f0e();
  }
  iVar3 = cocos2d::CCArray::count(this_00);
  if (iVar3 != 0) {
    FUN_000c2f00();
  }
  FUN_000c2f0e();
  iVar3 = cocos2d::CCArray::count(this);
  if (iVar3 == 0) {
    FUN_000c2efe();
  }
  cocos2d::CCArray::objectAtIndex(this,0);
  memset(&stack0x00000194,0,0x78);
  memset(&stack0x000000e4,0,0xc);
  iVar3 = **(int **)(unaff_r6 * 4 + *unaff_r4);
  if (iVar3 == 0) {
    FUN_000c2f0e();
  }
  iVar3 = *(int *)(iVar3 + 0x40);
  if (iVar3 < 1) {
    pCVar4 = in_stack_00000194;
    if (in_stack_00000194 == (CCFiniteTimeAction *)0x0) {
      pCVar4 = (CCFiniteTimeAction *)FUN_000c2efe();
    }
    if (iVar3 == 1) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,0);
    }
    if (iVar3 == 2) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_00000198,0);
    }
    if (iVar3 == 3) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_00000198,in_stack_0000019c,0);
    }
    if ((iVar3 == 4) || (iVar3 == 5)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_00000198,in_stack_0000019c,in_stack_000001a0);
    }
    if ((iVar3 == 6) || (iVar3 == 7)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_00000198,in_stack_0000019c,in_stack_000001a0);
    }
    if ((iVar3 == 8) || (iVar3 == 9)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_00000198,in_stack_0000019c,in_stack_000001a0);
    }
    if ((iVar3 == 10) || (iVar3 == 0xb)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_00000198,in_stack_0000019c,in_stack_000001a0);
    }
    if ((iVar3 == 0xc) || (iVar3 == 0xd)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_00000198,in_stack_0000019c,in_stack_000001a0);
    }
    if ((iVar3 == 0xe) || (iVar3 == 0xf)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_00000198,in_stack_0000019c,in_stack_000001a0);
    }
    if ((iVar3 == 0x10) || (iVar3 == 0x11)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_00000198,in_stack_0000019c,in_stack_000001a0);
    }
    if ((iVar3 == 0x12) || (iVar3 == 0x13)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_00000198,in_stack_0000019c,in_stack_000001a0);
    }
    if ((iVar3 == 0x14) || (iVar3 == 0x15)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_00000198,in_stack_0000019c,in_stack_000001a0);
    }
    if ((iVar3 == 0x16) || (iVar3 == 0x17)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_00000198,in_stack_0000019c,in_stack_000001a0);
    }
    if ((iVar3 == 0x18) || (iVar3 == 0x19)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_00000198,in_stack_0000019c,in_stack_000001a0);
    }
    if ((iVar3 != 0x1a) && (iVar3 != 0x1b)) {
      if ((iVar3 != 0x1c) && (iVar3 != 0x1d)) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCLog((char *)(DAT_000c2f44 + 0xc2efc));
      }
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_00000198,in_stack_0000019c,in_stack_000001a0);
    }
                    /* WARNING: Subroutine does not return */
    cocos2d::CCSequence::actions(pCVar4,in_stack_00000198,in_stack_0000019c,in_stack_000001a0);
  }
  iVar6 = *unaff_r4;
  uVar5 = *(undefined4 *)(**(int **)(iVar6 + unaff_r6 * 4) + 0x4c);
  iVar3 = __aeabi_fcmpgt(uVar5,0);
  if (iVar3 == 0) {
    iVar6 = **(int **)(iVar6 + unaff_r6 * 4);
    pCVar8 = *(CCPoint **)(iVar6 + 0x4c);
    iVar3 = __aeabi_fcmpeq(pCVar8,0);
    if (iVar3 == 0) {
      in_stack_000000e4 = (CCPoint *)__subsf3(pCVar8,in_stack_000000e8);
    }
    else {
      in_stack_000000e4 = DAT_000c25e8;
      pCVar8 = DAT_000c25e8;
    }
    pCVar1 = in_stack_000000e4;
    in_stack_000000e8 = pCVar8;
    uVar5 = __mulsf3(*(undefined4 *)(iVar6 + 0x50),0x3f000000);
    __addsf3(uVar5,*(undefined4 *)(iVar6 + 0x20));
    uVar5 = __mulsf3(*(undefined4 *)(iVar6 + 0x54),0x3f000000);
    uVar10 = __subsf3(*(undefined4 *)(iVar6 + 0x24),uVar5);
    uVar10 = cocos2d::CCPoint::CCPoint
                       ((CCPoint *)&stack0x000000dc,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20)
                       );
                    /* WARNING: Subroutine does not return */
    KG_action((float)uVar10,(CCPoint)pCVar1,in_stack_000000dc,(float)((ulonglong)uVar10 >> 0x20),
              extraout_s2_01,SUB41(in_stack_000000e0,0),
              *(_KG_Anit **)(**(int **)(unaff_r6 * 4 + *unaff_r4) + 0x58));
  }
  in_stack_000000e8 = (CCPoint *)uVar5;
  pCVar4 = (CCFiniteTimeAction *)cocos2d::CCDelayTime::actionWithDuration(extraout_s0);
  memset(&stack0x00000180,0,0x14);
  iVar6 = **(int **)(unaff_r6 * 4 + *unaff_r4);
  iVar3 = __aeabi_fcmpgt(*(undefined4 *)(iVar6 + 0x50),DAT_000c25e4);
  fVar9 = extraout_s0_00;
  fVar11 = extraout_s1;
  if ((iVar3 == 0) &&
     (iVar3 = __aeabi_fcmpgt(*(undefined4 *)(iVar6 + 0x54),DAT_000c25e4), fVar9 = extraout_s0_01,
     fVar11 = extraout_s1_00, iVar3 == 0)) {
    iVar3 = 0;
  }
  else {
    fVar9 = (float)cocos2d::CCPoint::CCPoint((CCPoint *)&stack0x000000cc,fVar9,fVar11);
    in_stack_00000180 =
         (CCFiniteTimeAction *)cocos2d::CCMoveTo::actionWithDuration(fVar9,DAT_000c25e8);
    iVar3 = 1;
  }
  iVar7 = **(int **)(unaff_r6 * 4 + *unaff_r4);
  iVar6 = __aeabi_fcmpgt(*(undefined4 *)(iVar7 + 0x58),DAT_000c25e4);
  fVar9 = extraout_s0_02;
  fVar11 = extraout_s1_01;
  fVar12 = extraout_s2;
  if ((iVar6 != 0) ||
     (iVar6 = __aeabi_fcmpgt(*(undefined4 *)(iVar7 + 0x5c),DAT_000c25e4), fVar9 = extraout_s0_03,
     fVar11 = extraout_s1_02, fVar12 = extraout_s2_00, iVar6 != 0)) {
    uVar5 = cocos2d::CCScaleTo::actionWithDuration(fVar9,fVar11,fVar12);
    (&stack0x00000180)[iVar3] = (CCFiniteTimeAction *)uVar5;
    iVar3 = iVar3 + 1;
  }
  uVar5 = *(undefined4 *)(**(int **)(unaff_r6 * 4 + *unaff_r4) + 0x60);
  iVar6 = __aeabi_fcmplt(uVar5,DAT_000c25f0);
  if (iVar6 == 0) {
    iVar6 = __aeabi_fcmpgt(uVar5,DAT_000c25f4);
    if (iVar6 == 0) goto LAB_000c249a;
    fVar9 = (float)__fixunssfsi(uVar5);
    uVar2 = (uchar)DAT_000c25ec;
  }
  else {
    uVar2 = (uchar)DAT_000c25ec;
    fVar9 = extraout_s0_04;
  }
  uVar5 = cocos2d::CCFadeTo::actionWithDuration(fVar9,uVar2);
  (&stack0x00000180)[iVar3] = (CCFiniteTimeAction *)uVar5;
  iVar3 = iVar3 + 1;
LAB_000c249a:
  iVar6 = __aeabi_fcmpgt(*(undefined4 *)(**(int **)(unaff_r6 * 4 + *unaff_r4) + 100),DAT_000c25f8);
  if (iVar6 == 0) {
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,0);
    }
  }
  else {
    uVar5 = cocos2d::CCRotateTo::actionWithDuration(extraout_s0_05,extraout_s1_03);
    (&stack0x00000180)[iVar3] = (CCFiniteTimeAction *)uVar5;
    iVar3 = iVar3 + 1;
  }
  if (iVar3 == 1) {
    uVar5 = cocos2d::CCSpawn::actions(in_stack_00000180,0);
  }
  else if (iVar3 == 2) {
    uVar5 = cocos2d::CCSpawn::actions(in_stack_00000180,in_stack_00000184,0);
  }
  else if (iVar3 == 3) {
    uVar5 = cocos2d::CCSpawn::actions(in_stack_00000180,in_stack_00000184,in_stack_00000188,0);
  }
  else {
    uVar5 = cocos2d::CCSpawn::actions
                      (in_stack_00000180,in_stack_00000184,in_stack_00000188,in_stack_0000018c);
  }
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(pCVar4,uVar5,0);
}


