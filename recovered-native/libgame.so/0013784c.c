/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013784c  Symbol: update */

/* cocos2d::CCOrbitCamera::update(float) */

undefined8 cocos2d::CCOrbitCamera::update(float param_1)

{
  int in_r0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  CCCamera *this;
  undefined4 in_r1;
  float __x;
  float fVar6;
  float __x_00;
  float extraout_s0;
  float extraout_s1;
  float extraout_s2;
  
  uVar1 = __mulsf3(in_r1,*(undefined4 *)(in_r0 + 0x54));
  uVar1 = __addsf3(uVar1,*(undefined4 *)(in_r0 + 0x50));
  uVar2 = CCCamera::getZEye();
  uVar3 = __mulsf3(uVar1,uVar2);
  uVar1 = __mulsf3(in_r1,*(undefined4 *)(in_r0 + 0x6c));
  uVar4 = __addsf3(uVar1,*(undefined4 *)(in_r0 + 0x68));
  uVar1 = __mulsf3(in_r1,*(undefined4 *)(in_r0 + 0x74));
  uVar5 = __addsf3(uVar1,*(undefined4 *)(in_r0 + 0x70));
  uVar1 = uVar4;
  fVar6 = sinf(__x);
  uVar2 = uVar5;
  cosf(fVar6);
  uVar2 = __mulsf3(uVar1,uVar2);
  uVar2 = __mulsf3(uVar2,uVar3);
  uVar2 = __addsf3(uVar2,*(undefined4 *)(in_r0 + 0x2c));
  sinf(__x_00);
  uVar1 = __mulsf3(uVar1,uVar5);
  uVar1 = __mulsf3(uVar1,uVar3);
  fVar6 = (float)__addsf3(uVar1,*(undefined4 *)(in_r0 + 0x30));
  cosf(fVar6);
  uVar1 = __mulsf3();
  __addsf3(uVar1,*(undefined4 *)(in_r0 + 0x34));
  this = (CCCamera *)(**(code **)(**(int **)(in_r0 + 0x18) + 0x5c))();
  CCCamera::setEyeXYZ(this,extraout_s0,extraout_s1,extraout_s2);
  return CONCAT44(uVar2,uVar4);
}


