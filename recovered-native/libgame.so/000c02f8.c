/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c02f8  Symbol: FUN_000c02f8 */

/* WARNING: Removing unreachable block (ram,0x000c03e0) */
/* WARNING: Removing unreachable block (ram,0x000c05ae) */

void FUN_000c02f8(void)

{
  uchar uVar1;
  int *piVar2;
  CCArray *this;
  CCArray *this_00;
  int iVar3;
  CCFiniteTimeAction *pCVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  CCPoint *pCVar8;
  int *unaff_r5;
  int unaff_r7;
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
  CCNode *param_12;
  int param_13;
  undefined4 in_stack_000000ac;
  undefined4 in_stack_000000b0;
  CCSize in_stack_000000b4;
  undefined4 in_stack_000000b8;
  CCPoint *in_stack_000000bc;
  CCPoint *in_stack_000000c0;
  CCFiniteTimeAction *in_stack_000000c8;
  undefined4 in_stack_000000cc;
  undefined4 in_stack_000000d0;
  undefined4 in_stack_000000d4;
  CCFiniteTimeAction *in_stack_000000dc;
  undefined4 in_stack_000000e0;
  undefined4 in_stack_000000e4;
  undefined4 in_stack_000000e8;
  undefined4 in_stack_000000ec;
  undefined4 in_stack_000000f0;
  undefined4 in_stack_000000f4;
  undefined4 in_stack_000000f8;
  undefined4 in_stack_000000fc;
  undefined4 in_stack_00000100;
  undefined4 in_stack_00000104;
  undefined4 in_stack_00000108;
  undefined4 in_stack_0000010c;
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
  int in_stack_00000238;
  
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(param_12,param_13);
  this = (CCArray *)(**(code **)(*piVar2 + 0x58))();
  this_00 = this;
  if (this == (CCArray *)0x0) {
    this_00 = (CCArray *)FUN_000c0f68();
  }
  iVar3 = cocos2d::CCArray::count(this_00);
  if (iVar3 != 0) {
    FUN_000c0f5a();
  }
  FUN_000c0f68();
  iVar3 = cocos2d::CCArray::count(this);
  if (iVar3 == 0) {
    FUN_000c0f58();
  }
  cocos2d::CCArray::objectAtIndex(this,0);
  cocos2d::CCPoint::CCPoint((CCPoint *)&stack0x0000009c);
  iVar6 = *((int **)*unaff_r5)[unaff_r7];
  iVar3 = **(int **)*unaff_r5;
  *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar3 + 8);
  *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(iVar3 + 0xc);
  iVar6 = *((int **)*unaff_r5)[unaff_r7];
  iVar3 = **(int **)*unaff_r5;
  *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)(iVar3 + 0x20);
  *(undefined4 *)(iVar6 + 0x24) = *(undefined4 *)(iVar3 + 0x24);
  memset(&stack0x000000dc,0,0x78);
  memset(&stack0x000000bc,0,0xc);
  iVar3 = **(int **)(unaff_r7 * 4 + *unaff_r5);
  if (iVar3 == 0) {
    FUN_000c0f68();
  }
  iVar3 = *(int *)(iVar3 + 0x40);
  if (iVar3 < 1) {
LAB_000c06b8:
    pCVar4 = in_stack_000000dc;
    if (in_stack_000000dc == (CCFiniteTimeAction *)0x0) {
      pCVar4 = (CCFiniteTimeAction *)FUN_000c0f58();
    }
    if (iVar3 == 1) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,0);
    }
    if (iVar3 == 2) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_000000e0,0);
    }
    if (iVar3 == 3) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_000000e0,in_stack_000000e4,0);
    }
    if ((iVar3 == 4) || (iVar3 == 5)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_000000e0,in_stack_000000e4,in_stack_000000e8);
    }
    if ((iVar3 == 6) || (iVar3 == 7)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_000000e0,in_stack_000000e4,in_stack_000000e8);
    }
    if ((iVar3 == 8) || (iVar3 == 9)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_000000e0,in_stack_000000e4,in_stack_000000e8);
    }
    if ((iVar3 == 10) || (iVar3 == 0xb)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_000000e0,in_stack_000000e4,in_stack_000000e8);
    }
    if ((iVar3 == 0xc) || (iVar3 == 0xd)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_000000e0,in_stack_000000e4,in_stack_000000e8);
    }
    if ((iVar3 == 0xe) || (iVar3 == 0xf)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_000000e0,in_stack_000000e4,in_stack_000000e8);
    }
    if ((iVar3 == 0x10) || (iVar3 == 0x11)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_000000e0,in_stack_000000e4,in_stack_000000e8);
    }
    if ((iVar3 == 0x12) || (iVar3 == 0x13)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_000000e0,in_stack_000000e4,in_stack_000000e8);
    }
    if ((iVar3 == 0x14) || (iVar3 == 0x15)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_000000e0,in_stack_000000e4,in_stack_000000e8);
    }
    if ((iVar3 == 0x16) || (iVar3 == 0x17)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_000000e0,in_stack_000000e4,in_stack_000000e8);
    }
    if ((iVar3 == 0x18) || (iVar3 == 0x19)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_000000e0,in_stack_000000e4,in_stack_000000e8);
    }
    if ((iVar3 != 0x1a) && (iVar3 != 0x1b)) {
      if ((iVar3 != 0x1c) && (iVar3 != 0x1d)) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCLog((char *)(DAT_000c0f98 + 0xc0f56));
      }
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_000000e0,in_stack_000000e4,in_stack_000000e8);
    }
                    /* WARNING: Subroutine does not return */
    cocos2d::CCSequence::actions(pCVar4,in_stack_000000e0,in_stack_000000e4,in_stack_000000e8);
  }
  uVar7 = *(undefined4 *)(**(int **)(unaff_r7 * 4 + *unaff_r5) + 0x4c);
  iVar6 = __aeabi_fcmpeq(uVar7,DAT_000c0588);
  if (iVar6 != 0) goto LAB_000c06b8;
  if (in_stack_00000238 == 2) {
    iVar6 = unaff_r5[1];
    iVar3 = __aeabi_fcmplt(*(undefined4 *)(iVar6 + 0x40),uVar7);
    if (iVar3 != 0) {
      *(undefined4 *)(iVar6 + 0x40) = uVar7;
    }
  }
  iVar6 = *unaff_r5;
  uVar7 = *(undefined4 *)(**(int **)(iVar6 + unaff_r7 * 4) + 0x4c);
  iVar3 = __aeabi_fcmpgt(uVar7,0);
  if (iVar3 == 0) {
    iVar6 = **(int **)(iVar6 + unaff_r7 * 4);
    pCVar8 = *(CCPoint **)(iVar6 + 0x4c);
    iVar3 = __aeabi_fcmpeq(pCVar8,0);
    if (iVar3 == 0) {
      in_stack_000000bc = (CCPoint *)__subsf3(pCVar8,in_stack_000000c0);
      in_stack_000000c0 = pCVar8;
    }
    else {
      in_stack_000000bc = DAT_000c0590;
      in_stack_000000c0 = DAT_000c0590;
    }
    pCVar8 = in_stack_000000bc;
    uVar7 = __mulsf3(*(undefined4 *)(iVar6 + 0x50),0x3f000000);
    __addsf3(uVar7,*(undefined4 *)(iVar6 + 0x20));
    uVar7 = __mulsf3(*(undefined4 *)(iVar6 + 0x54),0x3f000000);
    uVar10 = __subsf3(*(undefined4 *)(iVar6 + 0x24),uVar7);
    uVar10 = cocos2d::CCPoint::CCPoint
                       ((CCPoint *)&stack0x000000b4,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20)
                       );
                    /* WARNING: Subroutine does not return */
    KG_action((float)uVar10,(CCPoint)pCVar8,in_stack_000000b4,(float)((ulonglong)uVar10 >> 0x20),
              extraout_s2_01,SUB41(in_stack_000000b8,0),
              *(_KG_Anit **)(**(int **)(unaff_r7 * 4 + *unaff_r5) + 0x58));
  }
  in_stack_000000c0 = (CCPoint *)uVar7;
  pCVar4 = (CCFiniteTimeAction *)cocos2d::CCDelayTime::actionWithDuration(extraout_s0);
  memset(&stack0x000000c8,0,0x14);
  iVar6 = **(int **)(unaff_r7 * 4 + *unaff_r5);
  iVar3 = __aeabi_fcmpgt(*(undefined4 *)(iVar6 + 0x50),DAT_000c058c);
  fVar9 = extraout_s0_00;
  fVar11 = extraout_s1;
  if ((iVar3 == 0) &&
     (iVar3 = __aeabi_fcmpgt(*(undefined4 *)(iVar6 + 0x54),DAT_000c058c), fVar9 = extraout_s0_01,
     fVar11 = extraout_s1_00, iVar3 == 0)) {
    iVar3 = 0;
  }
  else {
    fVar9 = (float)cocos2d::CCPoint::CCPoint((CCPoint *)&stack0x000000a4,fVar9,fVar11);
    in_stack_000000c8 =
         (CCFiniteTimeAction *)cocos2d::CCMoveTo::actionWithDuration(fVar9,DAT_000c0590);
    iVar3 = 1;
  }
  iVar5 = **(int **)(unaff_r7 * 4 + *unaff_r5);
  iVar6 = __aeabi_fcmpgt(*(undefined4 *)(iVar5 + 0x58),DAT_000c0594);
  fVar9 = extraout_s0_02;
  fVar11 = extraout_s1_01;
  fVar12 = extraout_s2;
  if ((iVar6 != 0) ||
     (iVar6 = __aeabi_fcmpgt(*(undefined4 *)(iVar5 + 0x5c),DAT_000c058c), fVar9 = extraout_s0_03,
     fVar11 = extraout_s1_02, fVar12 = extraout_s2_00, iVar6 != 0)) {
    uVar7 = cocos2d::CCScaleTo::actionWithDuration(fVar9,fVar11,fVar12);
    (&stack0x000000c8)[iVar3] = (CCFiniteTimeAction *)uVar7;
    iVar3 = iVar3 + 1;
  }
  uVar7 = *(undefined4 *)(**(int **)(unaff_r7 * 4 + *unaff_r5) + 0x60);
  iVar6 = __aeabi_fcmpgt(uVar7,DAT_000c0594);
  if (iVar6 == 0) {
    iVar6 = __aeabi_fcmpeq(uVar7,DAT_000c0594);
    if (iVar6 == 0) goto LAB_000c04d2;
    uVar1 = (uchar)DAT_000c0590;
    fVar9 = extraout_s0_04;
  }
  else {
    fVar9 = (float)__fixunssfsi(uVar7);
    uVar1 = (uchar)DAT_000c0590;
  }
  uVar7 = cocos2d::CCFadeTo::actionWithDuration(fVar9,uVar1);
  (&stack0x000000c8)[iVar3] = (CCFiniteTimeAction *)uVar7;
  iVar3 = iVar3 + 1;
LAB_000c04d2:
  iVar6 = __aeabi_fcmpgt(*(undefined4 *)(**(int **)(unaff_r7 * 4 + *unaff_r5) + 100),DAT_000c0594);
  if (iVar6 == 0) {
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,0);
    }
  }
  else {
    uVar7 = cocos2d::CCRotateTo::actionWithDuration(extraout_s0_05,extraout_s1_03);
    (&stack0x000000c8)[iVar3] = (CCFiniteTimeAction *)uVar7;
    iVar3 = iVar3 + 1;
  }
  if (iVar3 == 1) {
    uVar7 = cocos2d::CCSpawn::actions(in_stack_000000c8,0);
  }
  else if (iVar3 == 2) {
    uVar7 = cocos2d::CCSpawn::actions(in_stack_000000c8,in_stack_000000cc,0);
  }
  else if (iVar3 == 3) {
    uVar7 = cocos2d::CCSpawn::actions(in_stack_000000c8,in_stack_000000cc,in_stack_000000d0,0);
  }
  else {
    uVar7 = cocos2d::CCSpawn::actions
                      (in_stack_000000c8,in_stack_000000cc,in_stack_000000d0,in_stack_000000d4);
  }
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(pCVar4,uVar7,0);
}


