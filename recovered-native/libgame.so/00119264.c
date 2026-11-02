/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00119264  Symbol: KG_State_Position_Move_CALL */

/* KG_State_Position_Move_CALL(cocos2d::CCLayer*, cocos2d::CCLayer*) */

void KG_State_Position_Move_CALL(CCLayer *param_1,CCLayer *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  CCFiniteTimeAction *pCVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  CCLayer *pCVar8;
  Effect *this;
  float extraout_s0;
  undefined8 uVar9;
  float extraout_s1;
  float extraout_s2;
  float extraout_s2_00;
  CCPoint aCStack_20 [12];
  
  iVar1 = (**(code **)(*(int *)param_2 + 0xa8))(param_2);
  if (((*(int **)(iVar1 + 4))[1] != DAT_00119328) && (**(int **)(iVar1 + 4) == 0)) {
    this = *(Effect **)(**(int **)(DAT_0011932c + 0x11928c) + DAT_00119330);
    pCVar8 = **(CCLayer ***)(DAT_00119334 + 0x119298);
    puVar2 = (undefined4 *)(**(code **)(*(int *)param_2 + 0x38))(param_2);
    iVar1 = __fixsfsi(*puVar2);
    iVar3 = (**(code **)(*(int *)param_2 + 0x38))(param_2);
    iVar3 = __fixsfsi(*(undefined4 *)(iVar3 + 4));
    iVar4 = (**(code **)(*(int *)param_2 + 0x14))(param_2);
    uVar9 = Effect::Effect_Draw(this,pCVar8,DAT_00119338,iVar1,iVar3,iVar4,false);
    pCVar5 = (CCFiniteTimeAction *)
             cocos2d::CCScaleTo::actionWithDuration
                       ((float)uVar9,(float)((ulonglong)uVar9 >> 0x20),extraout_s2);
    uVar9 = (**(code **)(*(int *)param_2 + 0x38))(param_2);
    uVar9 = cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
    uVar6 = cocos2d::CCJumpTo::actionWithDuration
                      ((float)uVar9,(CCPoint *)0x3f000000,(float)((ulonglong)uVar9 >> 0x20),
                       (int)aCStack_20);
    uVar7 = cocos2d::CCScaleTo::actionWithDuration(extraout_s0,extraout_s1,extraout_s2_00);
                    /* WARNING: Subroutine does not return */
    cocos2d::CCSequence::actions(pCVar5,uVar6,uVar7,0);
  }
  return;
}


