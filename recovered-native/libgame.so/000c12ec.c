/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c12ec  Symbol: FUN_000c12ec */

void FUN_000c12ec(void)

{
  byte bVar1;
  CCPoint *pCVar2;
  uchar uVar3;
  CCArray *this;
  CCArray *this_00;
  int iVar4;
  code *pcVar5;
  CCFiniteTimeAction *pCVar6;
  undefined4 uVar7;
  undefined2 extraout_r1;
  int iVar8;
  code *pcVar9;
  int iVar10;
  CCPoint *pCVar11;
  code *pcVar12;
  int *unaff_r5;
  code **ppcVar13;
  int in_r12;
  undefined4 in_cr15;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar14;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float fVar16;
  float extraout_s1_03;
  undefined8 uVar15;
  float extraout_s2;
  float extraout_s2_00;
  float fVar17;
  float extraout_s2_01;
  float extraout_s2_02;
  int in_stack_0000006c;
  int in_stack_00000070;
  int *param_12;
  CCSize in_stack_000000cc;
  undefined4 in_stack_000000d0;
  CCSize in_stack_000000d4;
  undefined4 in_stack_000000d8;
  CCPoint *in_stack_000000dc;
  CCPoint *in_stack_000000e0;
  CCFiniteTimeAction *in_stack_000000e8;
  undefined4 in_stack_000000ec;
  undefined4 in_stack_000000f0;
  undefined4 in_stack_000000f4;
  CCFiniteTimeAction *in_stack_000000fc;
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
  undefined4 in_stack_00000150;
  undefined4 in_stack_00000154;
  undefined4 in_stack_00000158;
  undefined4 in_stack_0000015c;
  undefined4 in_stack_00000160;
  undefined4 in_stack_00000164;
  undefined4 in_stack_00000168;
  undefined4 in_stack_0000016c;
  
  pcVar9 = *(code **)(*param_12 + 0x58);
  this = (CCArray *)(*pcVar9)(param_12);
  this_00 = this;
  if (this == (CCArray *)0x0) {
    this_00 = (CCArray *)FUN_000c1ef8();
  }
  iVar4 = cocos2d::CCArray::count(this_00);
  if (iVar4 != 0) {
    FUN_000c1eea();
  }
  FUN_000c1ef8();
  bVar1 = bRam0000001c;
  coprocessor_load(0xf,in_cr15,in_r12 + 0x3fc);
  pcVar12 = (code *)(uint)bRam0000001c;
  *(short *)(unaff_r5 + 8) = (short)param_12;
  *(ushort *)(unaff_r5 + 6) = (ushort)bVar1;
  *(undefined2 *)(pcVar9 + 0x18) = extraout_r1;
  ppcVar13 = (code **)(uint)(byte)pcVar9[0x15];
  *ppcVar13 = pcVar9;
  ppcVar13[1] = pcVar9;
  ppcVar13[2] = pcVar12;
  *(short *)(pcVar12 + 10) = (short)unaff_r5;
  pcVar5 = (code *)cocos2d::CCArray::count(this);
  if (pcVar5 <= pcVar12) {
    FUN_000c1ee8();
  }
  cocos2d::CCArray::objectAtIndex(this,(uint)pcVar12);
  memset(&stack0x000000fc,0,0x78);
  memset(&stack0x000000dc,0,0xc);
  iVar10 = *(int *)((int)pcVar9 * 4 + *unaff_r5);
  iVar4 = *(int *)((int)pcVar12 * 4 + iVar10);
  if (iVar4 == 0) {
    FUN_000c1ef8();
  }
  iVar4 = *(int *)(iVar4 + 0x40);
  if (iVar4 == 0) {
    *(undefined4 *)((int)(pcVar12 + 0x50) * 4 + iVar10) = 0;
    FUN_000c1ee8();
    pcVar12 = pcVar9;
    pcVar9 = (code *)0x0;
  }
  else {
    in_stack_0000006c = 0;
    in_stack_00000070 = 0;
    if (iVar4 < 1) {
      pCVar6 = in_stack_000000fc;
      if (in_stack_000000fc == (CCFiniteTimeAction *)0x0) {
        pCVar6 = (CCFiniteTimeAction *)FUN_000c1ee8();
      }
      if (iVar4 == 1) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCSequence::actions(pCVar6,0);
      }
      if (iVar4 == 2) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCSequence::actions(pCVar6,in_stack_00000100,0);
      }
      if (iVar4 == 3) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCSequence::actions(pCVar6,in_stack_00000100,in_stack_00000104,0);
      }
      if ((iVar4 == 4) || (iVar4 == 5)) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCSequence::actions(pCVar6,in_stack_00000100,in_stack_00000104,in_stack_00000108);
      }
      if ((iVar4 == 6) || (iVar4 == 7)) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCSequence::actions(pCVar6,in_stack_00000100,in_stack_00000104,in_stack_00000108);
      }
      if ((iVar4 == 8) || (iVar4 == 9)) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCSequence::actions(pCVar6,in_stack_00000100,in_stack_00000104,in_stack_00000108);
      }
      if ((iVar4 == 10) || (iVar4 == 0xb)) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCSequence::actions(pCVar6,in_stack_00000100,in_stack_00000104,in_stack_00000108);
      }
      if ((iVar4 == 0xc) || (iVar4 == 0xd)) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCSequence::actions(pCVar6,in_stack_00000100,in_stack_00000104,in_stack_00000108);
      }
      if ((iVar4 == 0xe) || (iVar4 == 0xf)) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCSequence::actions(pCVar6,in_stack_00000100,in_stack_00000104,in_stack_00000108);
      }
      if ((iVar4 == 0x10) || (iVar4 == 0x11)) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCSequence::actions(pCVar6,in_stack_00000100,in_stack_00000104,in_stack_00000108);
      }
      if ((iVar4 == 0x12) || (iVar4 == 0x13)) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCSequence::actions(pCVar6,in_stack_00000100,in_stack_00000104,in_stack_00000108);
      }
      if ((iVar4 == 0x14) || (iVar4 == 0x15)) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCSequence::actions(pCVar6,in_stack_00000100,in_stack_00000104,in_stack_00000108);
      }
      if ((iVar4 == 0x16) || (iVar4 == 0x17)) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCSequence::actions(pCVar6,in_stack_00000100,in_stack_00000104,in_stack_00000108);
      }
      if ((iVar4 == 0x18) || (iVar4 == 0x19)) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCSequence::actions(pCVar6,in_stack_00000100,in_stack_00000104,in_stack_00000108);
      }
      if ((iVar4 != 0x1a) && (iVar4 != 0x1b)) {
        if ((iVar4 != 0x1c) && (iVar4 != 0x1d)) {
                    /* WARNING: Subroutine does not return */
          cocos2d::CCLog((char *)(DAT_000c1f30 + 0xc1ee6));
        }
                    /* WARNING: Subroutine does not return */
        cocos2d::CCSequence::actions(pCVar6,in_stack_00000100,in_stack_00000104,in_stack_00000108);
      }
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar6,in_stack_00000100,in_stack_00000104,in_stack_00000108);
    }
  }
  iVar4 = *unaff_r5;
  if (in_stack_0000006c != 0) {
LAB_000c1508:
    iVar10 = *(int *)((int)pcVar12 * 4 + *(int *)(iVar4 + (int)pcVar9 * 4));
    pCVar11 = *(CCPoint **)(iVar10 + in_stack_0000006c * 0x1c + 0x4c);
    iVar4 = __aeabi_fcmpeq(pCVar11,0);
    if (iVar4 == 0) {
      in_stack_000000dc = (CCPoint *)__subsf3(pCVar11,in_stack_000000e0);
    }
    else {
      in_stack_000000dc = DAT_000c1758;
      pCVar11 = DAT_000c1758;
    }
    pCVar2 = in_stack_000000dc;
    in_stack_000000e0 = pCVar11;
    if (in_stack_00000070 == 0) {
      iVar4 = iVar10 + in_stack_0000006c * 0x1c;
      uVar7 = __mulsf3(*(undefined4 *)(iVar4 + 0x50),0x3f000000);
      __addsf3(uVar7,*(undefined4 *)(iVar10 + 0x20));
      uVar7 = __mulsf3(*(undefined4 *)(iVar4 + 0x54),0x3f000000);
      uVar15 = __subsf3(*(undefined4 *)(iVar10 + 0x24),uVar7);
      uVar15 = cocos2d::CCPoint::CCPoint
                         ((CCPoint *)&stack0x000000d4,(float)uVar15,
                          (float)((ulonglong)uVar15 >> 0x20));
                    /* WARNING: Subroutine does not return */
      KG_action((float)uVar15,(CCPoint)pCVar2,in_stack_000000d4,(float)((ulonglong)uVar15 >> 0x20),
                extraout_s2_02,SUB41(in_stack_000000d8,0),
                *(_KG_Anit **)
                 (*(int *)((int)pcVar12 * 4 + *(int *)((int)pcVar9 * 4 + *unaff_r5)) +
                  in_stack_0000006c * 0x1c + 0x58));
    }
    iVar4 = iVar10 + in_stack_0000006c * 0x1c;
    uVar7 = __mulsf3(*(undefined4 *)(iVar4 + 0x50),0x3f000000);
    __addsf3(uVar7,*(undefined4 *)(iVar10 + 0x20));
    uVar7 = __mulsf3(*(undefined4 *)(iVar4 + 0x54),0x3f000000);
    uVar15 = __subsf3(*(undefined4 *)(iVar10 + 0x24),uVar7);
    uVar15 = cocos2d::CCPoint::CCPoint
                       ((CCPoint *)&stack0x000000cc,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20)
                       );
                    /* WARNING: Subroutine does not return */
    KG_action((float)uVar15,(CCPoint)pCVar2,in_stack_000000cc,(float)((ulonglong)uVar15 >> 0x20),
              extraout_s2_01,SUB41(in_stack_000000d0,0),
              *(_KG_Anit **)
               (*(int *)((int)pcVar12 * 4 + *(int *)((int)pcVar9 * 4 + *unaff_r5)) +
                in_stack_0000006c * 0x1c + 0x58));
  }
  uVar7 = *(undefined4 *)(*(int *)((int)pcVar12 * 4 + *(int *)(iVar4 + (int)pcVar9 * 4)) + 0x4c);
  iVar10 = __aeabi_fcmpgt(uVar7,0);
  if (iVar10 == 0) goto LAB_000c1508;
  in_stack_000000e0 = (CCPoint *)uVar7;
  pCVar6 = (CCFiniteTimeAction *)cocos2d::CCDelayTime::actionWithDuration(extraout_s0);
  memset(&stack0x000000e8,0,0x14);
  iVar10 = *(int *)((int)pcVar12 * 4 + *(int *)((int)pcVar9 * 4 + *unaff_r5));
  iVar4 = __aeabi_fcmpgt(*(undefined4 *)(iVar10 + 0x50),DAT_000c1754);
  fVar14 = extraout_s0_00;
  fVar16 = extraout_s1;
  if ((iVar4 == 0) &&
     (iVar4 = __aeabi_fcmpgt(*(undefined4 *)(iVar10 + 0x54),DAT_000c1754), fVar14 = extraout_s0_01,
     fVar16 = extraout_s1_00, iVar4 == 0)) {
    iVar4 = 0;
  }
  else {
    fVar14 = (float)cocos2d::CCPoint::CCPoint((CCPoint *)&stack0x000000c4,fVar14,fVar16);
    in_stack_000000e8 =
         (CCFiniteTimeAction *)cocos2d::CCMoveTo::actionWithDuration(fVar14,DAT_000c1758);
    iVar4 = 1;
  }
  iVar8 = *(int *)((int)pcVar12 * 4 + *(int *)((int)pcVar9 * 4 + *unaff_r5));
  iVar10 = __aeabi_fcmpgt(*(undefined4 *)(iVar8 + 0x58),DAT_000c1754);
  fVar14 = extraout_s0_02;
  fVar16 = extraout_s1_01;
  fVar17 = extraout_s2;
  if ((iVar10 != 0) ||
     (iVar10 = __aeabi_fcmpgt(*(undefined4 *)(iVar8 + 0x5c),DAT_000c1754), fVar14 = extraout_s0_03,
     fVar16 = extraout_s1_02, fVar17 = extraout_s2_00, iVar10 != 0)) {
    uVar7 = cocos2d::CCScaleTo::actionWithDuration(fVar14,fVar16,fVar17);
    (&stack0x000000e8)[iVar4] = (CCFiniteTimeAction *)uVar7;
    iVar4 = iVar4 + 1;
  }
  uVar7 = *(undefined4 *)(*(int *)((int)pcVar12 * 4 + *(int *)((int)pcVar9 * 4 + *unaff_r5)) + 0x60)
  ;
  iVar10 = __aeabi_fcmplt(uVar7,DAT_000c1760);
  if (iVar10 == 0) {
    iVar10 = __aeabi_fcmpgt(uVar7,DAT_000c1764);
    if (iVar10 == 0) goto LAB_000c1482;
    fVar14 = (float)__fixunssfsi(uVar7);
    uVar3 = (uchar)DAT_000c175c;
  }
  else {
    uVar3 = (uchar)DAT_000c175c;
    fVar14 = extraout_s0_04;
  }
  uVar7 = cocos2d::CCFadeTo::actionWithDuration(fVar14,uVar3);
  (&stack0x000000e8)[iVar4] = (CCFiniteTimeAction *)uVar7;
  iVar4 = iVar4 + 1;
LAB_000c1482:
  iVar10 = __aeabi_fcmpgt(*(undefined4 *)
                           (*(int *)((int)pcVar12 * 4 + *(int *)((int)pcVar9 * 4 + *unaff_r5)) + 100
                           ),DAT_000c1768);
  if (iVar10 == 0) {
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar6,0);
    }
  }
  else {
    uVar7 = cocos2d::CCRotateTo::actionWithDuration(extraout_s0_05,extraout_s1_03);
    (&stack0x000000e8)[iVar4] = (CCFiniteTimeAction *)uVar7;
    iVar4 = iVar4 + 1;
  }
  if (iVar4 == 1) {
    uVar7 = cocos2d::CCSpawn::actions(in_stack_000000e8,0);
  }
  else if (iVar4 == 2) {
    uVar7 = cocos2d::CCSpawn::actions(in_stack_000000e8,in_stack_000000ec,0);
  }
  else if (iVar4 == 3) {
    uVar7 = cocos2d::CCSpawn::actions(in_stack_000000e8,in_stack_000000ec,in_stack_000000f0,0);
  }
  else {
    uVar7 = cocos2d::CCSpawn::actions
                      (in_stack_000000e8,in_stack_000000ec,in_stack_000000f0,in_stack_000000f4);
  }
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(pCVar6,uVar7,0);
}


