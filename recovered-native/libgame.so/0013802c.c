/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013802c  Symbol: update */

/* cocos2d::CCEaseElasticOut::update(float) */

void cocos2d::CCEaseElasticOut::update(float param_1)

{
  int in_r0;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_r1;
  float __x;
  undefined8 uVar4;
  
  iVar1 = __aeabi_fcmpeq(in_r1,0);
  if ((iVar1 == 0) && (iVar1 = __aeabi_fcmpeq(in_r1,0x3f800000), iVar1 == 0)) {
    uVar2 = __mulsf3(*(undefined4 *)(in_r0 + 0x30),0x3e800000);
    uVar4 = __mulsf3(in_r1,DAT_001380a8);
    uVar3 = 0x40000000;
    powf((float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
    uVar2 = __subsf3(in_r1,uVar2);
    uVar2 = __mulsf3(uVar2,DAT_001380ac);
    uVar2 = __addsf3(uVar2,uVar2);
    uVar2 = __divsf3(uVar2,*(undefined4 *)(in_r0 + 0x30));
    sinf(__x);
    uVar2 = __mulsf3(uVar3,uVar2);
    in_r1 = __addsf3(uVar2,0x3f800000);
  }
  (**(code **)(**(int **)(in_r0 + 0x2c) + 0x10))(*(int **)(in_r0 + 0x2c),in_r1);
  return;
}


