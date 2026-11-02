/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00114268  Symbol: Unit_180_Attack_Time */

/* Unit_180_Attack_Time(cocos2d::CCLayer*, _Unit_Stage*, cocos2d::CCNode*) */

undefined4 Unit_180_Attack_Time(CCLayer *param_1,_Unit_Stage *param_2,CCNode *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  CCLayer *pCVar6;
  int iVar7;
  int iVar8;
  float extraout_s0;
  
  iVar1 = Unit_Attack_Timeing(param_2);
  if (iVar1 != 0) {
    iVar7 = *(int *)(param_2 + 4);
    iVar1 = __aeabi_fcmpeq(*(undefined4 *)(iVar7 + 0x44),0);
    if ((iVar1 == 0) && (param_3 != (CCNode *)0x0)) {
      iVar8 = *(int *)(iVar7 + 4);
      pCVar6 = **(CCLayer ***)(DAT_00114354 + 0x114298);
      puVar2 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x38))(param_1);
      iVar1 = *(int *)(param_2 + 4);
      uVar3 = __addsf3(*puVar2,*(undefined4 *)(iVar1 + 0xf8));
      uVar4 = __addsf3(*(undefined4 *)(iVar1 + 0x100));
      __addsf3(uVar3,uVar4);
      iVar1 = __fixsfsi();
      iVar7 = (**(code **)(*(int *)param_1 + 0x38))(param_1);
      iVar7 = __fixsfsi(*(undefined4 *)(iVar7 + 4));
      iVar5 = (**(code **)(*(int *)param_1 + 0x14))(param_1);
      Effect::Effect_Draw((Effect *)param_3,pCVar6,iVar8,iVar1,iVar7,iVar5,false);
      *(undefined *)(*(int *)(param_2 + 4) + 0x4c) = 1;
    }
    if (*(char *)(*(int *)(param_2 + 4) + 0x2c) == '\0') {
      *(char *)(*(int *)(param_2 + 4) + 0x2c) = '\x01';
      iVar1 = Unit_Collistion_Name(param_1,false);
      if (iVar1 != 0) {
        iVar7 = *(int *)(param_2 + 4);
        uVar4 = *(undefined4 *)(iVar7 + 0x110);
        iVar1 = __fixsfsi(uVar4);
        uVar3 = __floatsisf(iVar1 << 1);
        uVar3 = __addsf3(uVar4,uVar3);
        *(undefined4 *)(iVar7 + 0x110) = uVar3;
        Unit_Live_Collistion_attck(param_1,extraout_s0,*(int *)(*(int *)(param_2 + 4) + 0x38));
        uVar3 = __floatsisf(iVar1);
        *(undefined4 *)(*(int *)(param_2 + 4) + 0x110) = uVar3;
      }
    }
  }
  return 0;
}


