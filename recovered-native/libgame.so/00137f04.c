/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00137f04  Symbol: update */

/* cocos2d::CCEaseIn::update(float) */

void cocos2d::CCEaseIn::update(float param_1)

{
  int in_r0;
  undefined4 in_r1;
  int *piVar1;
  code *pcVar2;
  float in_s1;
  
  piVar1 = *(int **)(in_r0 + 0x2c);
  pcVar2 = *(code **)(*piVar1 + 0x10);
  powf(param_1,in_s1);
  (*pcVar2)(piVar1,in_r1);
  return;
}


