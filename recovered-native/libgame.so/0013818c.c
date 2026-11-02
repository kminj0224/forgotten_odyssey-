/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013818c  Symbol: update */

/* cocos2d::CCEaseSineIn::update(float) */

void cocos2d::CCEaseSineIn::update(float param_1)

{
  int in_r0;
  undefined4 uVar1;
  undefined4 in_r1;
  int *piVar2;
  float __x;
  
  piVar2 = *(int **)(in_r0 + 0x2c);
  uVar1 = __mulsf3(in_r1,DAT_001381b4);
  cosf(__x);
  uVar1 = __subsf3(0x3f800000,uVar1);
  (**(code **)(*piVar2 + 0x10))(piVar2,uVar1);
  return;
}


