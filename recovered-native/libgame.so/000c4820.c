/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c4820  Symbol: FUN_000c4820 */

/* WARNING: Removing unreachable block (ram,0x000c489c) */
/* WARNING: Removing unreachable block (ram,0x000c4a82) */

void FUN_000c4820(void)

{
  uchar uVar1;
  CCArray *this;
  CCArray *this_00;
  int iVar2;
  CCFiniteTimeAction *pCVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  CCPoint *pCVar7;
  int *unaff_r4;
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
  int *param_11;
  undefined4 in_stack_000000ec;
  undefined4 in_stack_000000f0;
  CCSize in_stack_000000f4;
  undefined4 in_stack_000000f8;
  CCPoint *in_stack_000000fc;
  CCPoint *in_stack_00000100;
  CCFiniteTimeAction *in_stack_00000128;
  undefined4 in_stack_0000012c;
  undefined4 in_stack_00000130;
  undefined4 in_stack_00000134;
  int in_stack_0000013c;
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
  undefined4 in_stack_00000180;
  undefined4 in_stack_00000184;
  undefined4 in_stack_00000188;
  undefined4 in_stack_0000018c;
  undefined4 in_stack_00000190;
  undefined4 in_stack_00000194;
  undefined4 in_stack_00000198;
  undefined4 in_stack_0000019c;
  undefined4 in_stack_000001a0;
  undefined4 in_stack_000001a4;
  undefined4 in_stack_000001a8;
  undefined4 in_stack_000001ac;
  
  this = (CCArray *)(**(code **)(*param_11 + 0x58))(param_11);
  this_00 = this;
  if (this == (CCArray *)0x0) {
    this_00 = (CCArray *)FUN_000c5416();
  }
  iVar2 = cocos2d::CCArray::count(this_00);
  if (iVar2 != 0) {
    FUN_000c5408();
  }
  FUN_000c5416();
  iVar2 = cocos2d::CCArray::count(this);
  if (iVar2 == 0) {
    FUN_000c5406();
  }
  cocos2d::CCArray::objectAtIndex(this,0);
  memset(&stack0x0000013c,0,0x78);
  memset(&stack0x000000fc,0,0xc);
  iVar2 = **(int **)(unaff_r6 * 4 + *unaff_r4);
  if (iVar2 == 0) {
    FUN_000c5416();
  }
  uVar9 = CONCAT44(*(int *)(iVar2 + 0x40),in_stack_0000013c);
  if (*(int *)(iVar2 + 0x40) < 1) {
    if (in_stack_0000013c == 0) {
      uVar9 = FUN_000c5406();
    }
    iVar2 = (int)((ulonglong)uVar9 >> 0x20);
    pCVar3 = (CCFiniteTimeAction *)uVar9;
    if (iVar2 == 1) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,0);
    }
    if (iVar2 == 2) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,in_stack_00000140,0);
    }
    if (iVar2 == 3) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,in_stack_00000140,in_stack_00000144,0);
    }
    if ((iVar2 == 4) || (iVar2 == 5)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,in_stack_00000140,in_stack_00000144,in_stack_00000148);
    }
    if ((iVar2 == 6) || (iVar2 == 7)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,in_stack_00000140,in_stack_00000144,in_stack_00000148);
    }
    if ((iVar2 == 8) || (iVar2 == 9)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,in_stack_00000140,in_stack_00000144,in_stack_00000148);
    }
    if ((iVar2 == 10) || (iVar2 == 0xb)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,in_stack_00000140,in_stack_00000144,in_stack_00000148);
    }
    if ((iVar2 == 0xc) || (iVar2 == 0xd)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,in_stack_00000140,in_stack_00000144,in_stack_00000148);
    }
    if ((iVar2 == 0xe) || (iVar2 == 0xf)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,in_stack_00000140,in_stack_00000144,in_stack_00000148);
    }
    if ((iVar2 == 0x10) || (iVar2 == 0x11)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,in_stack_00000140,in_stack_00000144,in_stack_00000148);
    }
    if ((iVar2 == 0x12) || (iVar2 == 0x13)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,in_stack_00000140,in_stack_00000144,in_stack_00000148);
    }
    if ((iVar2 == 0x14) || (iVar2 == 0x15)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,in_stack_00000140,in_stack_00000144,in_stack_00000148);
    }
    if ((iVar2 == 0x16) || (iVar2 == 0x17)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,in_stack_00000140,in_stack_00000144,in_stack_00000148);
    }
    if ((iVar2 == 0x18) || (iVar2 == 0x19)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,in_stack_00000140,in_stack_00000144,in_stack_00000148);
    }
    if ((iVar2 != 0x1a) && (iVar2 != 0x1b)) {
      if ((iVar2 != 0x1c) && (iVar2 != 0x1d)) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCLog((char *)(DAT_000c5444 + 0xc5404));
      }
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,in_stack_00000140,in_stack_00000144,in_stack_00000148);
    }
                    /* WARNING: Subroutine does not return */
    cocos2d::CCSequence::actions(pCVar3,in_stack_00000140,in_stack_00000144,in_stack_00000148);
  }
  iVar5 = *unaff_r4;
  uVar4 = *(undefined4 *)(**(int **)(iVar5 + unaff_r6 * 4) + 0x4c);
  iVar2 = __aeabi_fcmpgt(uVar4,0);
  if (iVar2 == 0) {
    iVar5 = **(int **)(iVar5 + unaff_r6 * 4);
    pCVar7 = *(CCPoint **)(iVar5 + 0x4c);
    iVar2 = __aeabi_fcmpeq(pCVar7,0);
    if (iVar2 == 0) {
      in_stack_000000fc = (CCPoint *)__subsf3(pCVar7,in_stack_00000100);
      in_stack_00000100 = pCVar7;
    }
    else {
      in_stack_000000fc = DAT_000c4a5c;
      in_stack_00000100 = DAT_000c4a5c;
    }
    pCVar7 = in_stack_000000fc;
    uVar4 = __mulsf3(*(undefined4 *)(iVar5 + 0x50),0x3f000000);
    __addsf3(uVar4,*(undefined4 *)(iVar5 + 0x20));
    uVar4 = __mulsf3(*(undefined4 *)(iVar5 + 0x54),0x3f000000);
    uVar9 = __subsf3(*(undefined4 *)(iVar5 + 0x24),uVar4);
    uVar9 = cocos2d::CCPoint::CCPoint
                      ((CCPoint *)&stack0x000000f4,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
                    /* WARNING: Subroutine does not return */
    KG_action((float)uVar9,(CCPoint)pCVar7,in_stack_000000f4,(float)((ulonglong)uVar9 >> 0x20),
              extraout_s2_01,SUB41(in_stack_000000f8,0),
              *(_KG_Anit **)(**(int **)(unaff_r6 * 4 + *unaff_r4) + 0x58));
  }
  in_stack_00000100 = (CCPoint *)uVar4;
  pCVar3 = (CCFiniteTimeAction *)cocos2d::CCDelayTime::actionWithDuration(extraout_s0);
  memset(&stack0x00000128,0,0x14);
  iVar5 = **(int **)(unaff_r6 * 4 + *unaff_r4);
  uVar4 = *(undefined4 *)(iVar5 + 0x50);
  iVar2 = __aeabi_fcmpgt(uVar4,DAT_000c4a58);
  if ((iVar2 == 0) &&
     (iVar2 = __aeabi_fcmpgt(*(undefined4 *)(iVar5 + 0x54),DAT_000c4a58), iVar2 == 0)) {
    iVar2 = 0;
  }
  else {
    __addsf3(uVar4,*(undefined4 *)(iVar5 + 0x20));
    uVar9 = __subsf3(*(undefined4 *)(iVar5 + 0x24),*(undefined4 *)(iVar5 + 0x54));
    fVar8 = (float)cocos2d::CCPoint::CCPoint
                             ((CCPoint *)&stack0x000000e4,(float)uVar9,
                              (float)((ulonglong)uVar9 >> 0x20));
    in_stack_00000128 =
         (CCFiniteTimeAction *)cocos2d::CCMoveTo::actionWithDuration(fVar8,DAT_000c4a5c);
    iVar2 = 1;
  }
  iVar6 = **(int **)(unaff_r6 * 4 + *unaff_r4);
  iVar5 = __aeabi_fcmpgt(*(undefined4 *)(iVar6 + 0x58),DAT_000c4a58);
  fVar8 = extraout_s0_00;
  fVar10 = extraout_s1;
  fVar11 = extraout_s2;
  if ((iVar5 != 0) ||
     (iVar5 = __aeabi_fcmpgt(*(undefined4 *)(iVar6 + 0x5c),DAT_000c4a58), fVar8 = extraout_s0_01,
     fVar10 = extraout_s1_00, fVar11 = extraout_s2_00, iVar5 != 0)) {
    uVar4 = cocos2d::CCScaleTo::actionWithDuration(fVar8,fVar10,fVar11);
    (&stack0x00000128)[iVar2] = (CCFiniteTimeAction *)uVar4;
    iVar2 = iVar2 + 1;
  }
  uVar4 = *(undefined4 *)(**(int **)(unaff_r6 * 4 + *unaff_r4) + 0x60);
  iVar5 = __aeabi_fcmplt(uVar4,DAT_000c4a64);
  if (iVar5 == 0) {
    iVar5 = __aeabi_fcmpgt(uVar4,DAT_000c4a68);
    if (iVar5 == 0) goto LAB_000c49a2;
    fVar8 = (float)__fixunssfsi(uVar4);
    uVar1 = (uchar)DAT_000c4a60;
  }
  else {
    uVar1 = (uchar)DAT_000c4a60;
    fVar8 = extraout_s0_02;
  }
  uVar4 = cocos2d::CCFadeTo::actionWithDuration(fVar8,uVar1);
  (&stack0x00000128)[iVar2] = (CCFiniteTimeAction *)uVar4;
  iVar2 = iVar2 + 1;
LAB_000c49a2:
  iVar5 = __aeabi_fcmpgt(*(undefined4 *)(**(int **)(unaff_r6 * 4 + *unaff_r4) + 100),DAT_000c4a50);
  if (iVar5 == 0) {
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,0);
    }
  }
  else {
    uVar4 = cocos2d::CCRotateTo::actionWithDuration(extraout_s0_03,extraout_s1_01);
    (&stack0x00000128)[iVar2] = (CCFiniteTimeAction *)uVar4;
    iVar2 = iVar2 + 1;
  }
  if (iVar2 == 1) {
    uVar4 = cocos2d::CCSpawn::actions(in_stack_00000128,0);
  }
  else if (iVar2 == 2) {
    uVar4 = cocos2d::CCSpawn::actions(in_stack_00000128,in_stack_0000012c,0);
  }
  else if (iVar2 == 3) {
    uVar4 = cocos2d::CCSpawn::actions(in_stack_00000128,in_stack_0000012c,in_stack_00000130,0);
  }
  else {
    uVar4 = cocos2d::CCSpawn::actions
                      (in_stack_00000128,in_stack_0000012c,in_stack_00000130,in_stack_00000134);
  }
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(pCVar3,uVar4,0);
}


