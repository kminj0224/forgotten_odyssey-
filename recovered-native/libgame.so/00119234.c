/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00119234  Symbol: Set_Class_State */

/* Set_Class_State(_Unit_Stage*, cocos2d::CCSprite*) */

void Set_Class_State(_Unit_Stage *param_1,CCSprite *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (**(int **)(param_1 + 4) == 0) {
    uVar1 = (**(code **)(*(int *)param_2 + 0x28))(param_2);
    iVar2 = __aeabi_fcmpeq(uVar1,DAT_00119260);
    if (iVar2 == 0) {
      (**(code **)(*(int *)param_2 + 0x2c))(param_2,DAT_00119260);
    }
  }
  return;
}


