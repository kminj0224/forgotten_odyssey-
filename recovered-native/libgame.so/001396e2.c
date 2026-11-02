/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001396e2  Symbol: update */

/* cocos2d::CCEaseBounceIn::update(float) */

void cocos2d::CCEaseBounceIn::update(float param_1)

{
  CCEaseBounce *in_r0;
  undefined4 uVar1;
  float fVar2;
  
  fVar2 = (float)__subsf3(0x3f800000);
  uVar1 = CCEaseBounce::bounceTime(in_r0,fVar2);
  uVar1 = __subsf3(0x3f800000,uVar1);
  (**(code **)(**(int **)(in_r0 + 0x2c) + 0x10))(*(int **)(in_r0 + 0x2c),uVar1);
  return;
}


