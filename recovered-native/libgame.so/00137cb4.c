/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00137cb4  Symbol: update */

/* cocos2d::CCEaseBackInOut::update(float) */

void __thiscall cocos2d::CCEaseBackInOut::update(CCEaseBackInOut *this,float param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_r1;
  int *piVar4;
  
  uVar1 = __addsf3(in_r1);
  iVar2 = __aeabi_fcmplt(uVar1,0x3f800000);
  piVar4 = *(int **)(this + 0x2c);
  if (iVar2 == 0) {
    uVar1 = __subsf3(uVar1,0x40000000);
    uVar3 = __mulsf3(uVar1,uVar1);
    uVar1 = __mulsf3(uVar1,DAT_00137d40);
    uVar1 = __addsf3(uVar1,DAT_00137d44);
    uVar1 = __mulsf3(uVar3,uVar1);
    uVar1 = __mulsf3(uVar1,0x3f000000);
    iVar2 = *piVar4;
    uVar1 = __addsf3(uVar1,0x3f800000);
  }
  else {
    uVar3 = __mulsf3(uVar1,uVar1);
    uVar1 = __mulsf3(uVar1,DAT_00137d40);
    uVar1 = __subsf3(uVar1,DAT_00137d44);
    uVar1 = __mulsf3(uVar3,uVar1);
    iVar2 = *piVar4;
    uVar1 = __mulsf3(uVar1,0x3f000000);
  }
  (**(code **)(iVar2 + 0x10))(piVar4,uVar1);
  return;
}


