/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001356d8  Symbol: initWithTarget */

/* cocos2d::CCTimer::initWithTarget(cocos2d::CCObject*, void (cocos2d::CCObject::*)(float), float)
    */

undefined4
cocos2d::CCTimer::initWithTarget(CCObject *param_1,_func_void_float *param_2,float param_3)

{
  undefined4 uVar1;
  undefined4 in_r2;
  undefined4 in_r3;
  undefined4 in_stack_00000000;
  
  *(undefined4 *)(param_1 + 0x18) = in_r3;
  uVar1 = DAT_001356f0;
  *(_func_void_float **)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = in_r2;
  *(undefined4 *)(param_1 + 0x1c) = in_stack_00000000;
  return 1;
}


