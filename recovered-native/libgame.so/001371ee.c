/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001371ee  Symbol: step */

/* cocos2d::CCSpeed::step(float) */

void cocos2d::CCSpeed::step(float param_1)

{
  int in_r0;
  undefined4 uVar1;
  undefined4 in_r1;
  int *piVar2;
  
  piVar2 = *(int **)(in_r0 + 0x24);
  uVar1 = __mulsf3(in_r1,*(undefined4 *)(in_r0 + 0x20));
  (**(code **)(*piVar2 + 0x20))(piVar2,uVar1);
  return;
}


