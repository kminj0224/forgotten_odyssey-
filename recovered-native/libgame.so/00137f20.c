/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00137f20  Symbol: update */

/* cocos2d::CCEaseElasticInOut::update(float) */

void cocos2d::CCEaseElasticInOut::update(float param_1)

{
  int in_r0;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_r1;
  float __x;
  float __x_00;
  undefined8 uVar5;
  
  iVar1 = __aeabi_fcmpeq(in_r1,0);
  if ((iVar1 == 0) && (iVar1 = __aeabi_fcmpeq(in_r1,0x3f800000), iVar1 == 0)) {
    uVar2 = __addsf3(in_r1,in_r1);
    iVar1 = __aeabi_fcmpeq(*(undefined4 *)(in_r0 + 0x30),0);
    if (iVar1 != 0) {
      *(undefined4 *)(in_r0 + 0x30) = DAT_0013801c;
    }
    uVar3 = __mulsf3(*(undefined4 *)(in_r0 + 0x30),0x3e800000);
    uVar2 = __subsf3(uVar2,0x3f800000);
    iVar1 = __aeabi_fcmplt(uVar2,0);
    if (iVar1 == 0) {
      uVar5 = __mulsf3(uVar2,DAT_00138028);
      uVar4 = 0x40000000;
      powf((float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
      uVar2 = __subsf3(uVar2,uVar3);
      uVar2 = __mulsf3(uVar2,DAT_00138024);
      uVar2 = __addsf3(uVar2,uVar2);
      uVar2 = __divsf3(uVar2,*(undefined4 *)(in_r0 + 0x30));
      sinf(__x_00);
      uVar2 = __mulsf3(uVar4,uVar2);
      uVar2 = __mulsf3(uVar2,0x3f000000);
      in_r1 = __addsf3(uVar2,0x3f800000);
    }
    else {
      uVar5 = __mulsf3(uVar2,DAT_00138020);
      uVar4 = 0x40000000;
      powf((float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
      uVar2 = __subsf3(uVar2,uVar3);
      uVar2 = __mulsf3(uVar2,DAT_00138024);
      uVar2 = __addsf3(uVar2,uVar2);
      uVar2 = __divsf3(uVar2,*(undefined4 *)(in_r0 + 0x30));
      sinf(__x);
      uVar3 = __mulsf3(uVar4,0xbf000000);
      in_r1 = __mulsf3(uVar3,uVar2);
    }
  }
  (**(code **)(**(int **)(in_r0 + 0x2c) + 0x10))(*(int **)(in_r0 + 0x2c),in_r1);
  return;
}


