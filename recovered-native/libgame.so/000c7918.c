/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c7918  Symbol: SetAttackColor */

/* SetAttackColor(cocos2d::CCLayer*, cocos2d::_ccColor3B, _Unit_Stage*) */

undefined8 SetAttackColor(CCLayer *param_1,_ccColor3B param_2,_Unit_Stage *param_3)

{
  int iVar1;
  undefined2 local_14;
  undefined uStack_12;
  undefined uStack_11;
  _Unit_Stage *p_Stack_10;
  
  local_14 = (undefined2)param_2;
  uStack_12 = (undefined)(param_2 >> 0x10);
  uStack_11 = (undefined)(param_2 >> 0x18);
  p_Stack_10 = param_3;
  (**(code **)(*(int *)param_1 + 0xf4))(param_1,&local_14);
  iVar1 = *(int *)(param_3 + 4);
  *(undefined2 *)(iVar1 + 0xf4) = local_14;
  *(undefined *)(iVar1 + 0xf6) = uStack_12;
  *(undefined *)(*(int *)(param_3 + 4) + 0x74) = 1;
  *(undefined4 *)(*(int *)(param_3 + 4) + 0x70) = 0;
  return CONCAT17(uStack_11,CONCAT16(uStack_12,CONCAT24(local_14,param_1)));
}


