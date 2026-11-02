/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c21a  Symbol: update */

/* cocos2d::CCSkewTo::update(float) */

void cocos2d::CCSkewTo::update(float param_1)

{
  int in_r0;
  undefined4 uVar1;
  undefined4 in_r1;
  int *piVar2;
  
  piVar2 = *(int **)(in_r0 + 0x18);
  uVar1 = __mulsf3(in_r1,*(undefined4 *)(in_r0 + 0x44));
  uVar1 = __addsf3(uVar1,*(undefined4 *)(in_r0 + 0x34));
  (**(code **)(*piVar2 + 0x4c))(piVar2,uVar1);
  uVar1 = __mulsf3(in_r1,*(undefined4 *)(in_r0 + 0x48));
  uVar1 = __addsf3(uVar1,*(undefined4 *)(in_r0 + 0x38));
  (**(code **)(**(int **)(in_r0 + 0x18) + 0x54))(*(int **)(in_r0 + 0x18),uVar1);
  return;
}


