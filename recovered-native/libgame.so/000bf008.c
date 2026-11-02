/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bf008  Symbol: KG_removeChild */

/* KG_removeChild(cocos2d::CCNode*, bool) */

void KG_removeChild(CCNode *param_1,bool param_2)

{
  _Unit_Stage *p_Var1;
  int *piVar2;
  
  if (param_1 != (CCNode *)0x0) {
    p_Var1 = (_Unit_Stage *)(**(code **)(*(int *)param_1 + 0xa8))();
    if (p_Var1 != (_Unit_Stage *)0x0) {
      ani_remove(p_Var1);
    }
    (**(code **)(*(int *)param_1 + 0xac))(param_1,0);
    piVar2 = (int *)(**(code **)(*(int *)param_1 + 0x90))(param_1);
    (**(code **)(*piVar2 + 0xd0))(piVar2,param_1,param_2);
  }
  return;
}


