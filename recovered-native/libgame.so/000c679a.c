/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c679a  Symbol: FUN_000c679a */

/* WARNING: Removing unreachable block (ram,0x000c683e) */
/* WARNING: Removing unreachable block (ram,0x000c69f2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c679a(void)

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
  code *pcVar8;
  CCPoint *pCVar9;
  int *unaff_r5;
  int in_r12;
  undefined4 in_cr15;
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
  int *param_11;
  undefined4 in_stack_000000ec;
  undefined4 in_stack_000000f0;
  CCSize in_stack_000000f4;
  undefined4 in_stack_000000f8;
  CCPoint *in_stack_000000fc;
  CCPoint *in_stack_00000100;
  CCFiniteTimeAction *in_stack_00000108;
  undefined4 in_stack_0000010c;
  undefined4 in_stack_00000110;
  undefined4 in_stack_00000114;
  CCFiniteTimeAction *in_stack_0000011c;
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
  undefined4 in_stack_00000180;
  undefined4 in_stack_00000184;
  undefined4 in_stack_00000188;
  undefined4 in_stack_0000018c;
  
  pcVar8 = *(code **)(*param_11 + 0x58);
  this = (CCArray *)(*pcVar8)(param_11);
  this_00 = this;
  if (this == (CCArray *)0x0) {
    this_00 = (CCArray *)FUN_000c73a0();
  }
  iVar3 = cocos2d::CCArray::count(this_00);
  if (iVar3 != 0) {
    FUN_000c7392();
  }
  FUN_000c73a0();
  coprocessor_load(0xf,in_cr15,in_r12 + 0x3fc);
  *(code **)pcVar8 = pcVar8;
  *(code **)(pcVar8 + 4) = pcVar8;
  *(undefined4 *)(pcVar8 + 8) = 0;
  iVar3 = cocos2d::CCArray::count(this);
  if (iVar3 == 0) {
    FUN_000c7390();
  }
  cocos2d::CCArray::objectAtIndex(this,0);
  memset(&stack0x0000011c,0,0x78);
  memset(&stack0x000000fc,0,0xc);
  iVar3 = **(int **)((int)pcVar8 * 4 + *unaff_r5);
  if (iVar3 == 0) {
    FUN_000c73a0();
  }
  iVar3 = *(int *)(iVar3 + 0x40);
  if (iVar3 < 1) {
    pCVar4 = in_stack_0000011c;
    if (in_stack_0000011c == (CCFiniteTimeAction *)0x0) {
      pCVar4 = (CCFiniteTimeAction *)FUN_000c7390();
    }
    if (iVar3 == 1) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,0);
    }
    if (iVar3 == 2) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_00000120,0);
    }
    if (iVar3 == 3) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_00000120,in_stack_00000124,0);
    }
    if ((iVar3 == 4) || (iVar3 == 5)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_00000120,in_stack_00000124,in_stack_00000128);
    }
    if ((iVar3 == 6) || (iVar3 == 7)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_00000120,in_stack_00000124,in_stack_00000128);
    }
    if ((iVar3 == 8) || (iVar3 == 9)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_00000120,in_stack_00000124,in_stack_00000128);
    }
    if ((iVar3 == 10) || (iVar3 == 0xb)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_00000120,in_stack_00000124,in_stack_00000128);
    }
    if ((iVar3 == 0xc) || (iVar3 == 0xd)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_00000120,in_stack_00000124,in_stack_00000128);
    }
    if ((iVar3 == 0xe) || (iVar3 == 0xf)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_00000120,in_stack_00000124,in_stack_00000128);
    }
    if ((iVar3 == 0x10) || (iVar3 == 0x11)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_00000120,in_stack_00000124,in_stack_00000128);
    }
    if ((iVar3 == 0x12) || (iVar3 == 0x13)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_00000120,in_stack_00000124,in_stack_00000128);
    }
    if ((iVar3 == 0x14) || (iVar3 == 0x15)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_00000120,in_stack_00000124,in_stack_00000128);
    }
    if ((iVar3 == 0x16) || (iVar3 == 0x17)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_00000120,in_stack_00000124,in_stack_00000128);
    }
    if ((iVar3 == 0x18) || (iVar3 == 0x19)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_00000120,in_stack_00000124,in_stack_00000128);
    }
    if ((iVar3 != 0x1a) && (iVar3 != 0x1b)) {
      if ((iVar3 != 0x1c) && (iVar3 != 0x1d)) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCLog((char *)(DAT_000c7458 + 0xc738e));
      }
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,in_stack_00000120,in_stack_00000124,in_stack_00000128);
    }
                    /* WARNING: Subroutine does not return */
    cocos2d::CCSequence::actions(pCVar4,in_stack_00000120,in_stack_00000124,in_stack_00000128);
  }
  iVar6 = *unaff_r5;
  uVar5 = *(undefined4 *)(**(int **)(iVar6 + (int)pcVar8 * 4) + 0x4c);
  iVar3 = __aeabi_fcmpgt(uVar5,0);
  if (iVar3 == 0) {
    iVar6 = **(int **)(iVar6 + (int)pcVar8 * 4);
    pCVar9 = *(CCPoint **)(iVar6 + 0x4c);
    iVar3 = __aeabi_fcmpeq(pCVar9,0);
    if (iVar3 == 0) {
      in_stack_000000fc = (CCPoint *)__subsf3(pCVar9,in_stack_00000100);
    }
    else {
      in_stack_000000fc = _DAT_000c6c00;
      pCVar9 = _DAT_000c6c00;
    }
    pCVar1 = in_stack_000000fc;
    in_stack_00000100 = pCVar9;
    uVar5 = __mulsf3(*(undefined4 *)(iVar6 + 0x50),0x3f000000);
    __addsf3(uVar5,*(undefined4 *)(iVar6 + 0x20));
    uVar5 = __mulsf3(*(undefined4 *)(iVar6 + 0x54),0x3f000000);
    uVar11 = __subsf3(*(undefined4 *)(iVar6 + 0x24),uVar5);
    uVar11 = cocos2d::CCPoint::CCPoint
                       ((CCPoint *)&stack0x000000f4,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20)
                       );
                    /* WARNING: Subroutine does not return */
    KG_action((float)uVar11,(CCPoint)pCVar1,in_stack_000000f4,(float)((ulonglong)uVar11 >> 0x20),
              extraout_s2_01,SUB41(in_stack_000000f8,0),
              *(_KG_Anit **)(**(int **)((int)pcVar8 * 4 + *unaff_r5) + 0x58));
  }
  in_stack_00000100 = (CCPoint *)uVar5;
  pCVar4 = (CCFiniteTimeAction *)cocos2d::CCDelayTime::actionWithDuration(extraout_s0);
  memset(&stack0x00000108,0,0x14);
  iVar6 = **(int **)((int)pcVar8 * 4 + *unaff_r5);
  iVar3 = __aeabi_fcmpgt(*(undefined4 *)(iVar6 + 0x50),_DAT_000c6bfc);
  fVar10 = extraout_s0_00;
  fVar12 = extraout_s1;
  if ((iVar3 == 0) &&
     (iVar3 = __aeabi_fcmpgt(*(undefined4 *)(iVar6 + 0x54),_DAT_000c6bfc), fVar10 = extraout_s0_01,
     fVar12 = extraout_s1_00, iVar3 == 0)) {
    iVar3 = 0;
  }
  else {
    fVar10 = (float)cocos2d::CCPoint::CCPoint((CCPoint *)&stack0x000000e4,fVar10,fVar12);
    in_stack_00000108 =
         (CCFiniteTimeAction *)cocos2d::CCMoveTo::actionWithDuration(fVar10,_DAT_000c6c00);
    iVar3 = 1;
  }
  iVar7 = **(int **)((int)pcVar8 * 4 + *unaff_r5);
  iVar6 = __aeabi_fcmpgt(*(undefined4 *)(iVar7 + 0x58),_DAT_000c6bfc);
  fVar10 = extraout_s0_02;
  fVar12 = extraout_s1_01;
  fVar13 = extraout_s2;
  if ((iVar6 != 0) ||
     (iVar6 = __aeabi_fcmpgt(*(undefined4 *)(iVar7 + 0x5c),_DAT_000c6bfc), fVar10 = extraout_s0_03,
     fVar12 = extraout_s1_02, fVar13 = extraout_s2_00, iVar6 != 0)) {
    uVar5 = cocos2d::CCScaleTo::actionWithDuration(fVar10,fVar12,fVar13);
    (&stack0x00000108)[iVar3] = (CCFiniteTimeAction *)uVar5;
    iVar3 = iVar3 + 1;
  }
  uVar5 = *(undefined4 *)(**(int **)((int)pcVar8 * 4 + *unaff_r5) + 0x60);
  iVar6 = __aeabi_fcmplt(uVar5,_DAT_000c6c08);
  if (iVar6 == 0) {
    iVar6 = __aeabi_fcmpgt(uVar5,_DAT_000c6c0c);
    if (iVar6 == 0) goto LAB_000c692e;
    fVar10 = (float)__fixunssfsi(uVar5);
    uVar2 = (uchar)_DAT_000c6c04;
  }
  else {
    uVar2 = (uchar)_DAT_000c6c04;
    fVar10 = extraout_s0_04;
  }
  uVar5 = cocos2d::CCFadeTo::actionWithDuration(fVar10,uVar2);
  (&stack0x00000108)[iVar3] = (CCFiniteTimeAction *)uVar5;
  iVar3 = iVar3 + 1;
LAB_000c692e:
  iVar6 = __aeabi_fcmpgt(*(undefined4 *)(**(int **)((int)pcVar8 * 4 + *unaff_r5) + 100),
                         _DAT_000c6c10);
  if (iVar6 == 0) {
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar4,0);
    }
  }
  else {
    uVar5 = cocos2d::CCRotateTo::actionWithDuration(extraout_s0_05,extraout_s1_03);
    (&stack0x00000108)[iVar3] = (CCFiniteTimeAction *)uVar5;
    iVar3 = iVar3 + 1;
  }
  if (iVar3 == 1) {
    uVar5 = cocos2d::CCSpawn::actions(in_stack_00000108,0);
  }
  else if (iVar3 == 2) {
    uVar5 = cocos2d::CCSpawn::actions(in_stack_00000108,in_stack_0000010c,0);
  }
  else if (iVar3 == 3) {
    uVar5 = cocos2d::CCSpawn::actions(in_stack_00000108,in_stack_0000010c,in_stack_00000110,0);
  }
  else {
    uVar5 = cocos2d::CCSpawn::actions
                      (in_stack_00000108,in_stack_0000010c,in_stack_00000110,in_stack_00000114);
  }
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(pCVar4,uVar5,0);
}


