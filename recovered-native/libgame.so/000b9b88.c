/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000b9b88  Symbol: FUN_000b9b88 */

void FUN_000b9b88(void)

{
  CCPoint CVar1;
  uchar uVar2;
  CCFiniteTimeAction *pCVar3;
  uint uVar4;
  CCPoint CVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *unaff_r5;
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
  uint param_34;
  CCArray *param_35;
  CCSize param_39;
  undefined4 param_40;
  CCPoint param_41;
  CCPoint param_42;
  CCFiniteTimeAction *param_43;
  undefined4 param_44;
  undefined4 param_45;
  CCFiniteTimeAction *param_46;
  undefined4 param_47;
  undefined4 param_48;
  undefined4 param_49;
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
  
  cocos2d::CCArray::objectAtIndex(param_35,param_34);
  memset(&stack0x000000b0,0,0x78);
  memset(&stack0x00000090,0,0xc);
  iVar6 = *(int *)(*unaff_r5 + 0x40);
  if (iVar6 < 1) {
    if (param_46 != (CCFiniteTimeAction *)0x0) {
      if (iVar6 == 1) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCSequence::actions(param_46,0);
      }
      if (iVar6 == 2) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCSequence::actions(param_46,param_47,0);
      }
      if (iVar6 == 3) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCSequence::actions(param_46,param_47,param_48,0);
      }
      if ((iVar6 == 4) || (iVar6 == 5)) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCSequence::actions(param_46,param_47,param_48,param_49);
      }
      if ((iVar6 == 6) || (iVar6 == 7)) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCSequence::actions(param_46,param_47,param_48,param_49);
      }
      if ((iVar6 == 8) || (iVar6 == 9)) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCSequence::actions(param_46,param_47,param_48,param_49);
      }
      if ((iVar6 == 10) || (iVar6 == 0xb)) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCSequence::actions(param_46,param_47,param_48,param_49);
      }
      if ((iVar6 == 0xc) || (iVar6 == 0xd)) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCSequence::actions(param_46,param_47,param_48,param_49);
      }
      if ((iVar6 == 0xe) || (iVar6 == 0xf)) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCSequence::actions(param_46,param_47,param_48,param_49);
      }
      if ((iVar6 == 0x10) || (iVar6 == 0x11)) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCSequence::actions(param_46,param_47,param_48,param_49);
      }
      if ((iVar6 == 0x12) || (iVar6 == 0x13)) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCSequence::actions(param_46,param_47,param_48,param_49);
      }
      if ((iVar6 == 0x14) || (iVar6 == 0x15)) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCSequence::actions(param_46,param_47,param_48,param_49);
      }
      if ((iVar6 == 0x16) || (iVar6 == 0x17)) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCSequence::actions(param_46,param_47,param_48,param_49);
      }
      if ((iVar6 == 0x18) || (iVar6 == 0x19)) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCSequence::actions(param_46,param_47,param_48,param_49);
      }
      if ((iVar6 == 0x1a) || (iVar6 == 0x1b)) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCSequence::actions(param_46,param_47,param_48,param_49);
      }
      if ((iVar6 == 0x1c) || (iVar6 == 0x1d)) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCSequence::actions(param_46,param_47,param_48,param_49);
      }
    }
    uVar4 = cocos2d::CCArray::count(param_35);
    if (param_34 + 1 < uVar4) {
      FUN_000b9b88();
    }
    FUN_000ba4c0();
    return;
  }
  uVar7 = *(undefined4 *)(*unaff_r5 + 0x4c);
  iVar6 = __aeabi_fcmpgt(uVar7,0);
  if (iVar6 == 0) {
    iVar8 = *unaff_r5;
    CVar5 = *(CCPoint *)(iVar8 + 0x4c);
    iVar6 = __aeabi_fcmpeq(CVar5,0);
    if (iVar6 == 0) {
      param_41 = __subsf3(CVar5,param_42);
    }
    else {
      param_41 = DAT_000b9f44;
      CVar5 = DAT_000b9f44;
    }
    CVar1 = param_41;
    param_42 = CVar5;
    uVar7 = __mulsf3(*(undefined4 *)(iVar8 + 0x50),0x3f000000);
    __addsf3(uVar7,*(undefined4 *)(iVar8 + 0x20));
    uVar7 = __mulsf3(*(undefined4 *)(iVar8 + 0x54),0x3f000000);
    uVar10 = __subsf3(*(undefined4 *)(iVar8 + 0x24),uVar7);
    uVar10 = cocos2d::CCPoint::CCPoint
                       ((CCPoint *)&stack0x00000088,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20)
                       );
                    /* WARNING: Subroutine does not return */
    KG_action((float)uVar10,CVar1,param_39,(float)((ulonglong)uVar10 >> 0x20),extraout_s2_01,
              SUB41(param_40,0),*(_KG_Anit **)(*unaff_r5 + 0x58));
  }
  param_42 = uVar7;
  fVar9 = (float)cocos2d::CCDelayTime::actionWithDuration(extraout_s0);
  pCVar3 = (CCFiniteTimeAction *)cocos2d::CCDelayTime::actionWithDuration(fVar9);
  memset(&stack0x0000009c,0,0x14);
  iVar8 = *unaff_r5;
  iVar6 = __aeabi_fcmpgt(*(undefined4 *)(iVar8 + 0x58),DAT_000b9f40);
  fVar9 = extraout_s0_00;
  fVar11 = extraout_s1;
  fVar12 = extraout_s2;
  if ((iVar6 == 0) &&
     (iVar6 = __aeabi_fcmpgt(*(undefined4 *)(iVar8 + 0x5c),DAT_000b9f40), fVar9 = extraout_s0_01,
     fVar11 = extraout_s1_00, fVar12 = extraout_s2_00, iVar6 == 0)) {
    iVar6 = 0;
  }
  else {
    param_43 = (CCFiniteTimeAction *)cocos2d::CCScaleTo::actionWithDuration(fVar9,fVar11,fVar12);
    iVar6 = 1;
  }
  uVar7 = *(undefined4 *)(*unaff_r5 + 0x60);
  iVar8 = __aeabi_fcmplt(uVar7,DAT_000b9f48);
  if (iVar8 == 0) {
    iVar8 = __aeabi_fcmpgt(uVar7,DAT_000b9f4c);
    if (iVar8 == 0) goto LAB_000b9c52;
    fVar9 = (float)__fixunssfsi(uVar7);
    uVar2 = (uchar)DAT_000b9f44;
  }
  else {
    uVar2 = (uchar)DAT_000b9f44;
    fVar9 = extraout_s0_02;
  }
  uVar7 = cocos2d::CCFadeTo::actionWithDuration(fVar9,uVar2);
  (&stack0x0000009c)[iVar6] = (CCFiniteTimeAction *)uVar7;
  iVar6 = iVar6 + 1;
LAB_000b9c52:
  iVar8 = __aeabi_fcmpgt(*(undefined4 *)(*unaff_r5 + 100),DAT_000b9f50);
  if (iVar8 == 0) {
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar3,0);
    }
  }
  else {
    uVar7 = cocos2d::CCRotateTo::actionWithDuration(extraout_s0_03,extraout_s1_01);
    (&stack0x0000009c)[iVar6] = (CCFiniteTimeAction *)uVar7;
    iVar6 = iVar6 + 1;
  }
  if (iVar6 == 1) {
    uVar7 = cocos2d::CCSpawn::actions(param_43,0);
  }
  else if (iVar6 == 2) {
    uVar7 = cocos2d::CCSpawn::actions(param_43,param_44,0);
  }
  else {
    uVar7 = cocos2d::CCSpawn::actions(param_43,param_44,param_45,0);
  }
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(pCVar3,uVar7,0);
}


