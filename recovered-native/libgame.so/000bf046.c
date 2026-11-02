/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bf046  Symbol: KG_Fram_removeChild */

/* KG_Fram_removeChild(cocos2d::CCNode*) */

void KG_Fram_removeChild(CCNode *param_1)

{
  _Unit_Stage *p_Var1;
  
  p_Var1 = (_Unit_Stage *)(**(code **)(*(int *)param_1 + 0xa8))();
  if (p_Var1 != (_Unit_Stage *)0x0) {
    ani_remove(p_Var1);
  }
  (**(code **)(*(int *)param_1 + 0xac))(param_1,0);
  return;
}


