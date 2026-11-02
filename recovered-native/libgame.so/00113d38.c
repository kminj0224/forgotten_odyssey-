/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00113d38  Symbol: Unit_170_Attack_Time */

/* Unit_170_Attack_Time(cocos2d::CCLayer*, _Unit_Stage*, cocos2d::CCNode*) */

int * Unit_170_Attack_Time(CCLayer *param_1,_Unit_Stage *param_2,CCNode *param_3)

{
  int *piVar1;
  int iVar2;
  CCNode *this;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  CCLayer *pCVar7;
  int iVar8;
  int iVar9;
  float extraout_s0;
  
  piVar1 = (int *)Unit_Attack_Timeing(param_2);
  if (piVar1 != (int *)0x0) {
    iVar9 = *(int *)(param_2 + 4);
    iVar2 = __aeabi_fcmpeq(*(undefined4 *)(iVar9 + 0x44),0);
    if (iVar2 == 0) {
      this = (CCNode *)
             cocos2d::CCNode::getChildByTag
                       (**(CCNode ***)(DAT_00113e38 + 0x113d62),*(int *)(iVar9 + 4));
      cocos2d::CCNode::getChildByTag(this,0);
      if (param_3 != (CCNode *)0x0) {
        pCVar7 = **(CCLayer ***)(DAT_00113e3c + 0x113d7a);
        iVar8 = *(int *)(*(int *)(param_2 + 4) + 4);
        puVar3 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x38))(param_1);
        iVar2 = *(int *)(param_2 + 4);
        uVar4 = __addsf3(*puVar3,*(undefined4 *)(iVar2 + 0xf8));
        uVar5 = __mulsf3(*(undefined4 *)(iVar2 + 0x100),0x3f000000);
        uVar4 = __addsf3(uVar4,uVar5);
        __subsf3(uVar4,DAT_00113e40);
        iVar2 = __fixsfsi();
        iVar9 = (**(code **)(*(int *)param_1 + 0x38))(param_1);
        iVar9 = __fixsfsi(*(undefined4 *)(iVar9 + 4));
        iVar6 = (**(code **)(*(int *)param_1 + 0x14))(param_1);
        Effect::Effect_Draw((Effect *)param_3,pCVar7,iVar8,iVar2,iVar9,iVar6,false);
        *(undefined *)(*(int *)(param_2 + 4) + 0x4c) = 1;
      }
    }
    piVar1 = (int *)0x0;
    if (*(char *)(*(int *)(param_2 + 4) + 0x2c) == '\0') {
      *(char *)(*(int *)(param_2 + 4) + 0x2c) = '\x01';
      piVar1 = (int *)Unit_Collistion_Name(param_1,false);
      if (piVar1 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar1 + 0xa8))();
        Target_Attack(param_1,(CCLayer *)piVar1,extraout_s0);
        piVar1 = (int *)(uint)(100 < *(int *)(*(int *)(iVar2 + 4) + 4));
      }
    }
  }
  return piVar1;
}


