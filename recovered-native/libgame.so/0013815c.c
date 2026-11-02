/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013815c  Symbol: update */

/* cocos2d::CCEaseSineInOut::update(float) */

void cocos2d::CCEaseSineInOut::update(float param_1)

{
  int in_r0;
  undefined4 uVar1;
  undefined4 in_r1;
  int *piVar2;
  float __x;
  
  piVar2 = *(int **)(in_r0 + 0x2c);
  __x = (float)__mulsf3(in_r1,DAT_00138188);
  cosf(__x);
  uVar1 = __subsf3();
  uVar1 = __mulsf3(uVar1,0xbf000000);
  (**(code **)(*piVar2 + 0x10))(piVar2,uVar1);
  return;
}


