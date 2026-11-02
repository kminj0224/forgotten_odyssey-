/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00137c30  Symbol: update */

/* cocos2d::CCEaseBackIn::update(float) */

void cocos2d::CCEaseBackIn::update(float param_1)

{
  int in_r0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_r1;
  int *piVar3;
  
  piVar3 = *(int **)(in_r0 + 0x2c);
  uVar1 = __mulsf3(in_r1);
  uVar2 = __mulsf3(in_r1,DAT_00137c60);
  uVar2 = __subsf3(uVar2,DAT_00137c64);
  uVar1 = __mulsf3(uVar1,uVar2);
  (**(code **)(*piVar3 + 0x10))(piVar3,uVar1);
  return;
}


