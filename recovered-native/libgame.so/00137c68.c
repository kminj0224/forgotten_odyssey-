/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00137c68  Symbol: update */

/* cocos2d::CCEaseBackOut::update(float) */

void cocos2d::CCEaseBackOut::update(float param_1)

{
  int in_r0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_r1;
  
  uVar1 = __subsf3(in_r1,0x3f800000);
  uVar2 = __mulsf3(uVar1,uVar1);
  uVar1 = __mulsf3(uVar1,DAT_00137cac);
  uVar1 = __addsf3(uVar1,DAT_00137cb0);
  uVar1 = __mulsf3(uVar2,uVar1);
  uVar1 = __addsf3(uVar1,0x3f800000);
  (**(code **)(**(int **)(in_r0 + 0x2c) + 0x10))(*(int **)(in_r0 + 0x2c),uVar1);
  return;
}


