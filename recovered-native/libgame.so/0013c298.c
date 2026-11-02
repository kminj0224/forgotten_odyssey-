/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c298  Symbol: update */

/* cocos2d::CCReverseTime::update(float) */

float cocos2d::CCReverseTime::update(float param_1)

{
  int in_r0;
  undefined4 uVar1;
  int *piVar2;
  
  piVar2 = *(int **)(in_r0 + 0x2c);
  if (piVar2 != (int *)0x0) {
    uVar1 = __subsf3(0x3f800000);
    param_1 = (float)(**(code **)(*piVar2 + 0x10))(piVar2,uVar1);
  }
  return param_1;
}


