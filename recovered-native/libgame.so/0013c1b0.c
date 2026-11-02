/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c1b0  Symbol: update */

/* cocos2d::CCSpawn::update(float) */

void cocos2d::CCSpawn::update(float param_1)

{
  int in_r0;
  int *piVar1;
  undefined4 in_r1;
  
  if (*(int **)(in_r0 + 0x2c) != (int *)0x0) {
    param_1 = (float)(**(code **)(**(int **)(in_r0 + 0x2c) + 0x10))();
  }
  piVar1 = *(int **)(in_r0 + 0x30);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(param_1,piVar1,in_r1);
  }
  return;
}


