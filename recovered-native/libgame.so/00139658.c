/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00139658  Symbol: update */

/* cocos2d::CCEaseBounceInOut::update(float) */

void cocos2d::CCEaseBounceInOut::update(float param_1)

{
  CCEaseBounce *in_r0;
  int iVar1;
  undefined4 uVar2;
  undefined4 in_r1;
  float fVar3;
  
  iVar1 = __aeabi_fcmplt(in_r1,0x3f000000);
  if (iVar1 == 0) {
    uVar2 = __addsf3(in_r1,in_r1);
    fVar3 = (float)__subsf3(uVar2,0x3f800000);
    uVar2 = CCEaseBounce::bounceTime(in_r0,fVar3);
    uVar2 = __mulsf3(uVar2,0x3f000000);
    uVar2 = __addsf3(uVar2,0x3f000000);
  }
  else {
    uVar2 = __addsf3(in_r1,in_r1);
    fVar3 = (float)__subsf3(0x3f800000,uVar2);
    uVar2 = CCEaseBounce::bounceTime(in_r0,fVar3);
    uVar2 = __subsf3(0x3f800000,uVar2);
    uVar2 = __mulsf3(uVar2,0x3f000000);
  }
  (**(code **)(**(int **)(in_r0 + 0x2c) + 0x10))(*(int **)(in_r0 + 0x2c),uVar2);
  return;
}


