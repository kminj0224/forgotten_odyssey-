/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00137db8  Symbol: update */

/* cocos2d::CCEaseExponentialOut::update(float) */

void __thiscall cocos2d::CCEaseExponentialOut::update(CCEaseExponentialOut *this,float param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_r1;
  int *piVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  piVar3 = *(int **)(this + 0x2c);
  pcVar4 = *(code **)(*piVar3 + 0x10);
  iVar1 = __aeabi_fcmpeq(in_r1,0x3f800000);
  if (iVar1 == 0) {
    uVar5 = __mulsf3(in_r1,DAT_00137dfc);
    uVar2 = 0x40000000;
    powf((float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
    uVar2 = __subsf3(0x3f800000,uVar2);
  }
  else {
    uVar2 = 0x3f800000;
  }
  (*pcVar4)(piVar3,uVar2);
  return;
}


