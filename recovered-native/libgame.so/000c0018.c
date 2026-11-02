/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c0018  Symbol: KG_action */

/* KG_action(float, cocos2d::CCPoint, cocos2d::CCSize, float, float, bool, _KG_Anit*) */

undefined4
KG_action(float param_1,CCPoint param_2,CCSize param_3,float param_4,float param_5,bool param_6,
         _KG_Anit *param_7)

{
  int iVar1;
  CCFiniteTimeAction *pCVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 unaff_r6;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar5;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  float extraout_s0_07;
  float extraout_s0_08;
  float extraout_s0_09;
  float extraout_s0_10;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float fVar6;
  float extraout_s1_04;
  float extraout_s1_05;
  float extraout_s1_06;
  float extraout_s1_07;
  float extraout_s1_08;
  float extraout_s2;
  float extraout_s2_00;
  float fVar7;
  float extraout_s2_01;
  float extraout_s2_02;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  char in_stack_0000000c;
  CCPoint aCStack_48 [8];
  CCPoint aCStack_40 [8];
  CCFiniteTimeAction *local_38 [7];
  
  iVar1 = __aeabi_fcmpeq(in_stack_00000008,DAT_000c025c);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    cocos2d::CCLog((char *)(DAT_000c0260 + 0xc004e));
  }
  memset(local_38,0,0x18);
  if (in_stack_0000000c == '\0') {
    iVar1 = __aeabi_fcmpgt(in_stack_00000008,DAT_000c0264);
    if (iVar1 != 0) {
      local_38[0] = (CCFiniteTimeAction *)
                    cocos2d::CCRotateTo::actionWithDuration(extraout_s0_05,extraout_s1_04);
    }
    uVar4 = (uint)(iVar1 != 0);
    iVar1 = __aeabi_fcmpgt(param_3,DAT_000c0268);
    fVar5 = extraout_s0_06;
    fVar6 = extraout_s1_05;
    if ((iVar1 != 0) ||
       (iVar1 = __aeabi_fcmpgt(param_6,DAT_000c0268), fVar5 = extraout_s0_07, fVar6 = extraout_s1_06
       , iVar1 != 0)) {
      fVar5 = (float)cocos2d::CCPoint::CCPoint(aCStack_40,fVar5,fVar6);
      pCVar2 = (CCFiniteTimeAction *)cocos2d::CCMoveTo::actionWithDuration(fVar5,(CCPoint *)param_2)
      ;
      local_38[uVar4] = pCVar2;
      uVar4 = uVar4 + 1;
    }
    iVar1 = __aeabi_fcmpgt(param_7,DAT_000c0268);
    fVar5 = extraout_s0_08;
    fVar6 = extraout_s1_07;
    fVar7 = extraout_s2_01;
    if ((iVar1 != 0) ||
       (iVar1 = __aeabi_fcmpgt(in_stack_00000000,DAT_000c0268), fVar5 = extraout_s0_09,
       fVar6 = extraout_s1_08, fVar7 = extraout_s2_02, iVar1 != 0)) {
      pCVar2 = (CCFiniteTimeAction *)cocos2d::CCScaleTo::actionWithDuration(fVar5,fVar6,fVar7);
      local_38[uVar4] = pCVar2;
      uVar4 = uVar4 + 1;
    }
    iVar1 = __aeabi_fcmpgt(in_stack_00000004,DAT_000c0264);
    if (iVar1 != 0) {
      fVar5 = (float)__fixunssfsi(in_stack_00000004);
      pCVar2 = (CCFiniteTimeAction *)cocos2d::CCFadeTo::actionWithDuration(fVar5,(uchar)param_2);
      local_38[uVar4] = pCVar2;
      uVar4 = uVar4 + 1;
    }
    iVar1 = __aeabi_fcmpgt(param_2,0);
    if (iVar1 != 0) {
      pCVar2 = (CCFiniteTimeAction *)cocos2d::CCDelayTime::actionWithDuration(extraout_s0_10);
      local_38[uVar4] = pCVar2;
      uVar4 = uVar4 + 1;
    }
    if (uVar4 == 1) goto LAB_000c01fa;
    if (uVar4 == 2) goto LAB_000c0208;
    if (uVar4 == 3) goto LAB_000c0218;
    if (uVar4 == 4) goto LAB_000c022a;
    unaff_r6 = 0;
  }
  else {
    iVar1 = __aeabi_fcmpgt(in_stack_00000008,DAT_000c0264);
    if (iVar1 != 0) {
      local_38[0] = (CCFiniteTimeAction *)
                    cocos2d::CCRotateTo::actionWithDuration(extraout_s0,extraout_s1);
    }
    uVar4 = (uint)(iVar1 != 0);
    iVar1 = __aeabi_fcmpgt(param_3,DAT_000c0268);
    fVar5 = extraout_s0_00;
    fVar6 = extraout_s1_00;
    if ((iVar1 != 0) ||
       (iVar1 = __aeabi_fcmpgt(param_6,DAT_000c0268), fVar5 = extraout_s0_01, fVar6 = extraout_s1_01
       , iVar1 != 0)) {
      fVar5 = (float)cocos2d::CCPoint::CCPoint(aCStack_48,fVar5,fVar6);
      pCVar2 = (CCFiniteTimeAction *)cocos2d::CCMoveTo::actionWithDuration(fVar5,(CCPoint *)param_2)
      ;
      local_38[uVar4] = pCVar2;
      uVar4 = uVar4 + 1;
    }
    iVar1 = __aeabi_fcmpgt(param_7,DAT_000c0268);
    fVar5 = extraout_s0_02;
    fVar6 = extraout_s1_02;
    fVar7 = extraout_s2;
    if ((iVar1 != 0) ||
       (iVar1 = __aeabi_fcmpgt(in_stack_00000000,DAT_000c0268), fVar5 = extraout_s0_03,
       fVar6 = extraout_s1_03, fVar7 = extraout_s2_00, iVar1 != 0)) {
      pCVar2 = (CCFiniteTimeAction *)cocos2d::CCScaleTo::actionWithDuration(fVar5,fVar6,fVar7);
      local_38[uVar4] = pCVar2;
      uVar4 = uVar4 + 1;
    }
    iVar1 = __aeabi_fcmpgt(in_stack_00000004,DAT_000c0264);
    if (iVar1 != 0) {
      fVar5 = (float)__fixunssfsi(in_stack_00000004);
      pCVar2 = (CCFiniteTimeAction *)cocos2d::CCFadeTo::actionWithDuration(fVar5,(uchar)param_2);
      local_38[uVar4] = pCVar2;
      uVar4 = uVar4 + 1;
    }
    iVar1 = __aeabi_fcmpgt(param_2,0);
    if (iVar1 != 0) {
      pCVar2 = (CCFiniteTimeAction *)cocos2d::CCDelayTime::actionWithDuration(extraout_s0_04);
      local_38[uVar4] = pCVar2;
      uVar4 = uVar4 + 1;
    }
    if (uVar4 == 1) {
LAB_000c01fa:
      uVar3 = cocos2d::CCSpawn::actions(local_38[0],0);
      return uVar3;
    }
    if (uVar4 == 2) {
LAB_000c0208:
      uVar3 = cocos2d::CCSpawn::actions(local_38[0],local_38[1],0);
      return uVar3;
    }
    if (uVar4 == 3) {
LAB_000c0218:
      uVar3 = cocos2d::CCSpawn::actions(local_38[0],local_38[1],local_38[2],0);
      return uVar3;
    }
    if (uVar4 == 4) {
LAB_000c022a:
      local_38[4] = (CCFiniteTimeAction *)0x0;
      goto LAB_000c0248;
    }
  }
  if (uVar4 != 5) {
    return unaff_r6;
  }
LAB_000c0248:
  uVar3 = cocos2d::CCSpawn::actions(local_38[0],local_38[1],local_38[2],local_38[3],local_38[4]);
  return uVar3;
}


