/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00137e00  Symbol: update */

/* cocos2d::CCEaseExponentialIn::update(float) */

void __thiscall cocos2d::CCEaseExponentialIn::update(CCEaseExponentialIn *this,float param_1)

{
  int iVar1;
  undefined4 in_r1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  piVar3 = *(int **)(this + 0x2c);
  pcVar4 = *(code **)(*piVar3 + 0x10);
  iVar1 = __aeabi_fcmpeq(in_r1,0);
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = __subsf3(in_r1,0x3f800000);
    uVar5 = __mulsf3(uVar2,DAT_00137e40);
    powf((float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
    uVar2 = __subsf3();
  }
  (*pcVar4)(piVar3,uVar2);
  return;
}


