/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00137e48  Symbol: update */

/* cocos2d::CCEaseInOut::update(float) */

undefined8 __thiscall cocos2d::CCEaseInOut::update(CCEaseInOut *this,float param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *in_r1;
  int *piVar6;
  code *pcVar7;
  float __x;
  float __x_00;
  float __y;
  float __y_00;
  code *local_1c;
  
  uVar1 = __fixsfsi(*(undefined4 *)(this + 0x30));
  uVar1 = -(uint)((uVar1 & 1) == 0) | 1;
  uVar2 = __addsf3(in_r1,in_r1);
  iVar3 = __aeabi_fcmplt(uVar2,0x3f800000);
  piVar6 = *(int **)(this + 0x2c);
  if (iVar3 == 0) {
    local_1c = *(code **)(*piVar6 + 0x10);
    uVar2 = __subsf3(uVar2,0x40000000);
    powf(__x_00,__y_00);
    uVar4 = __floatsisf(uVar1);
    uVar4 = __mulsf3(uVar4,0x3f000000);
    uVar5 = __floatsisf(uVar1 << 1);
    uVar2 = __addsf3(uVar2,uVar5);
    uVar2 = __mulsf3(uVar4,uVar2);
    (*local_1c)(piVar6,uVar2);
  }
  else {
    pcVar7 = *(code **)(*piVar6 + 0x10);
    powf(__x,__y);
    uVar2 = __mulsf3();
    (*pcVar7)(piVar6,uVar2);
    local_1c = in_r1;
  }
  return CONCAT44(local_1c,this);
}


