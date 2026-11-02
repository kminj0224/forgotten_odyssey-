/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c0322  Symbol: FUN_000c0322 */

/* WARNING: Removing unreachable block (ram,0x000c03e0) */
/* WARNING: Removing unreachable block (ram,0x000c05ae) */

void FUN_000c0322(void)

{
  uchar uVar1;
  uint uVar2;
  undefined4 uVar3;
  CCFiniteTimeAction *pCVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  CCPoint *pCVar8;
  int *piVar9;
  int **unaff_r5;
  uint unaff_r6;
  int unaff_r7;
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
  CCArray *param_37;
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
  undefined4 param_73;
  undefined4 param_74;
  undefined4 param_75;
  undefined4 param_76;
  undefined4 param_77;
  int in_stack_00000238;
  
  uVar2 = cocos2d::CCArray::count(param_37);
  if (uVar2 <= unaff_r6) {
    FUN_000c0f58();
  }
  cocos2d::CCArray::objectAtIndex(param_37,unaff_r6);
  cocos2d::CCPoint::CCPoint((CCPoint *)&stack0x0000009c);
  iVar5 = unaff_r6 * 4;
  iVar7 = *(int *)(iVar5 + (*unaff_r5)[unaff_r7]);
  iVar6 = *(int *)(iVar5 + **unaff_r5);
  *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar6 + 8);
  *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(iVar6 + 0xc);
  iVar7 = *(int *)(iVar5 + (*unaff_r5)[unaff_r7]);
  iVar6 = *(int *)(iVar5 + **unaff_r5);
  *(undefined4 *)(iVar7 + 0x20) = *(undefined4 *)(iVar6 + 0x20);
  *(undefined4 *)(iVar7 + 0x24) = *(undefined4 *)(iVar6 + 0x24);
  memset(&stack0x000000dc,0,0x78);
  memset(&stack0x000000bc,0,0xc);
  iVar5 = *(int *)(iVar5 + (*unaff_r5)[unaff_r7]);
  if (iVar5 == 0) {
    FUN_000c0f68();
  }
  iVar5 = *(int *)(iVar5 + 0x40);
  if (iVar5 < 1) {
LAB_000c06b8:
    pCVar4 = param_49;
    if (param_49 == (CCFiniteTimeAction *)0x0) {
      pCVar4 = (CCFiniteTimeAction *)FUN_000c0f58();
    }
    if (iVar5 == 1) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,0);
    }
    if (iVar5 == 2) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,param_50,0);
    }
    if (iVar5 == 3) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,param_50,param_51,0);
    }
    if ((iVar5 == 4) || (iVar5 == 5)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,param_50,param_51,param_52);
    }
    if ((iVar5 == 6) || (iVar5 == 7)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,param_50,param_51,param_52);
    }
    if ((iVar5 == 8) || (iVar5 == 9)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,param_50,param_51,param_52);
    }
    if ((iVar5 == 10) || (iVar5 == 0xb)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,param_50,param_51,param_52);
    }
    if ((iVar5 == 0xc) || (iVar5 == 0xd)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,param_50,param_51,param_52);
    }
    if ((iVar5 == 0xe) || (iVar5 == 0xf)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,param_50,param_51,param_52);
    }
    if ((iVar5 == 0x10) || (iVar5 == 0x11)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,param_50,param_51,param_52);
    }
    if ((iVar5 == 0x12) || (iVar5 == 0x13)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,param_50,param_51,param_52);
    }
    if ((iVar5 == 0x14) || (iVar5 == 0x15)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,param_50,param_51,param_52);
    }
    if ((iVar5 == 0x16) || (iVar5 == 0x17)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,param_50,param_51,param_52);
    }
    if ((iVar5 == 0x18) || (iVar5 == 0x19)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,param_50,param_51,param_52);
    }
    if ((iVar5 != 0x1a) && (iVar5 != 0x1b)) {
      if ((iVar5 != 0x1c) && (iVar5 != 0x1d)) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCLog((char *)(DAT_000c0f98 + 0xc0f56));
      }
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,param_50,param_51,param_52);
    }
                    /* WARNING: Subroutine does not return */
    cocos2d::CCSequence::actions(pCVar4,param_50,param_51,param_52);
  }
  iVar7 = *(int *)(*(int *)(unaff_r6 * 4 + (*unaff_r5)[unaff_r7]) + 0x4c);
  iVar6 = __aeabi_fcmpeq(iVar7,DAT_000c0588);
  if (iVar6 != 0) goto LAB_000c06b8;
  if (in_stack_00000238 == 2) {
    piVar9 = unaff_r5[1];
    iVar5 = __aeabi_fcmplt(piVar9[0x10],iVar7);
    if (iVar5 != 0) {
      piVar9[0x10] = iVar7;
    }
  }
  piVar9 = *unaff_r5;
  uVar3 = *(undefined4 *)(*(int *)(unaff_r6 * 4 + piVar9[unaff_r7]) + 0x4c);
  iVar5 = __aeabi_fcmpgt(uVar3,0);
  if (iVar5 == 0) {
    iVar6 = *(int *)(unaff_r6 * 4 + piVar9[unaff_r7]);
    pCVar8 = *(CCPoint **)(iVar6 + 0x4c);
    iVar5 = __aeabi_fcmpeq(pCVar8,0);
    if (iVar5 == 0) {
      param_43 = (CCPoint *)__subsf3(pCVar8,param_44);
      param_44 = pCVar8;
    }
    else {
      param_43 = DAT_000c0590;
      param_44 = DAT_000c0590;
    }
    pCVar8 = param_43;
    uVar3 = __mulsf3(*(undefined4 *)(iVar6 + 0x50),0x3f000000);
    __addsf3(uVar3,*(undefined4 *)(iVar6 + 0x20));
    uVar3 = __mulsf3(*(undefined4 *)(iVar6 + 0x54),0x3f000000);
    uVar11 = __subsf3(*(undefined4 *)(iVar6 + 0x24),uVar3);
    uVar11 = cocos2d::CCPoint::CCPoint
                       ((CCPoint *)&stack0x000000b4,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20)
                       );
                    /* WARNING: Subroutine does not return */
    KG_action((float)uVar11,(CCPoint)pCVar8,param_41,(float)((ulonglong)uVar11 >> 0x20),
              extraout_s2_01,SUB41(param_42,0),
              *(_KG_Anit **)(*(int *)(unaff_r6 * 4 + (*unaff_r5)[unaff_r7]) + 0x58));
  }
  param_44 = (CCPoint *)uVar3;
  pCVar4 = (CCFiniteTimeAction *)cocos2d::CCDelayTime::actionWithDuration(extraout_s0);
  memset(&stack0x000000c8,0,0x14);
  iVar6 = *(int *)(unaff_r6 * 4 + (*unaff_r5)[unaff_r7]);
  iVar5 = __aeabi_fcmpgt(*(undefined4 *)(iVar6 + 0x50),DAT_000c058c);
  fVar10 = extraout_s0_00;
  fVar12 = extraout_s1;
  if ((iVar5 == 0) &&
     (iVar5 = __aeabi_fcmpgt(*(undefined4 *)(iVar6 + 0x54),DAT_000c058c), fVar10 = extraout_s0_01,
     fVar12 = extraout_s1_00, iVar5 == 0)) {
    iVar5 = 0;
  }
  else {
    fVar10 = (float)cocos2d::CCPoint::CCPoint((CCPoint *)&stack0x000000a4,fVar10,fVar12);
    param_45 = (CCFiniteTimeAction *)cocos2d::CCMoveTo::actionWithDuration(fVar10,DAT_000c0590);
    iVar5 = 1;
  }
  iVar7 = *(int *)(unaff_r6 * 4 + (*unaff_r5)[unaff_r7]);
  iVar6 = __aeabi_fcmpgt(*(undefined4 *)(iVar7 + 0x58),DAT_000c0594);
  fVar10 = extraout_s0_02;
  fVar12 = extraout_s1_01;
  fVar13 = extraout_s2;
  if ((iVar6 != 0) ||
     (iVar6 = __aeabi_fcmpgt(*(undefined4 *)(iVar7 + 0x5c),DAT_000c058c), fVar10 = extraout_s0_03,
     fVar12 = extraout_s1_02, fVar13 = extraout_s2_00, iVar6 != 0)) {
    uVar3 = cocos2d::CCScaleTo::actionWithDuration(fVar10,fVar12,fVar13);
    (&stack0x000000c8)[iVar5] = (CCFiniteTimeAction *)uVar3;
    iVar5 = iVar5 + 1;
  }
  uVar3 = *(undefined4 *)(*(int *)(unaff_r6 * 4 + (*unaff_r5)[unaff_r7]) + 0x60);
  iVar6 = __aeabi_fcmpgt(uVar3,DAT_000c0594);
  if (iVar6 == 0) {
    iVar6 = __aeabi_fcmpeq(uVar3,DAT_000c0594);
    if (iVar6 == 0) goto LAB_000c04d2;
    uVar1 = (uchar)DAT_000c0590;
    fVar10 = extraout_s0_04;
  }
  else {
    fVar10 = (float)__fixunssfsi(uVar3);
    uVar1 = (uchar)DAT_000c0590;
  }
  uVar3 = cocos2d::CCFadeTo::actionWithDuration(fVar10,uVar1);
  (&stack0x000000c8)[iVar5] = (CCFiniteTimeAction *)uVar3;
  iVar5 = iVar5 + 1;
LAB_000c04d2:
  iVar6 = __aeabi_fcmpgt(*(undefined4 *)(*(int *)(unaff_r6 * 4 + (*unaff_r5)[unaff_r7]) + 100),
                         DAT_000c0594);
  if (iVar6 == 0) {
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,0);
    }
  }
  else {
    uVar3 = cocos2d::CCRotateTo::actionWithDuration(extraout_s0_05,extraout_s1_03);
    (&stack0x000000c8)[iVar5] = (CCFiniteTimeAction *)uVar3;
    iVar5 = iVar5 + 1;
  }
  if (iVar5 == 1) {
    uVar3 = cocos2d::CCSpawn::actions(param_45,0);
  }
  else if (iVar5 == 2) {
    uVar3 = cocos2d::CCSpawn::actions(param_45,param_46,0);
  }
  else if (iVar5 == 3) {
    uVar3 = cocos2d::CCSpawn::actions(param_45,param_46,param_47,0);
  }
  else {
    uVar3 = cocos2d::CCSpawn::actions(param_45,param_46,param_47,param_48);
  }
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(pCVar4,uVar3,0);
}


