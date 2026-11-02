/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00137d48  Symbol: update */

/* cocos2d::CCEaseExponentialInOut::update(float) */

void __thiscall cocos2d::CCEaseExponentialInOut::update(CCEaseExponentialInOut *this,float param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_r1;
  undefined8 uVar3;
  
  uVar1 = __addsf3(in_r1);
  iVar2 = __aeabi_fcmplt(uVar1,0x3f800000);
  if (iVar2 == 0) {
    uVar1 = __subsf3(uVar1,0x3f800000);
    uVar3 = __mulsf3(uVar1,DAT_00137db4);
    uVar1 = 0x40000000;
    powf((float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
    __subsf3(0x40000000,uVar1);
  }
  else {
    uVar1 = __subsf3(uVar1,0x3f800000);
    uVar3 = __mulsf3(uVar1,DAT_00137db4);
    powf((float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  }
  uVar1 = __mulsf3();
  (**(code **)(**(int **)(this + 0x2c) + 0x10))(*(int **)(this + 0x2c),uVar1);
  return;
}


