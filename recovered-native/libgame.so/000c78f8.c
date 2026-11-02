/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c78f8  Symbol: SetDemigeColor */

/* SetDemigeColor(cocos2d::CCLayer*, cocos2d::_ccColor3B, _Unit_Stage*) */

undefined8 SetDemigeColor(CCLayer *param_1,_ccColor3B param_2,_Unit_Stage *param_3)

{
  _ccColor3B local_c;
  
  local_c = param_2;
  (**(code **)(*(int *)param_1 + 0xf4))(param_1,&local_c);
  *(undefined *)(*(int *)(param_3 + 4) + 0x6c) = 1;
  *(undefined4 *)(*(int *)(param_3 + 4) + 0x68) = 0;
  return CONCAT44(local_c,param_1);
}


