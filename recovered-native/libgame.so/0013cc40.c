/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013cc40  Symbol: update */

/* cocos2d::CCRepeat::update(float) */

void __thiscall cocos2d::CCRepeat::update(CCRepeat *this,float param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_r1;
  code *pcVar4;
  int *piVar5;
  float __x;
  float __y;
  
  uVar1 = __floatunsisf(*(undefined4 *)(this + 0x2c));
  uVar2 = __mulsf3(in_r1,uVar1);
  uVar1 = __floatunsisf(*(int *)(this + 0x30) + 1);
  iVar3 = __aeabi_fcmpgt(uVar2,uVar1);
  if (iVar3 == 0) {
    fmodf(__x,__y);
    iVar3 = __aeabi_fcmpeq(in_r1,0x3f800000);
    if (iVar3 != 0) {
      uVar2 = 0x3f800000;
      *(int *)(this + 0x30) = *(int *)(this + 0x30) + 1;
    }
    piVar5 = *(int **)(this + 0x34);
    pcVar4 = *(code **)(*piVar5 + 0x10);
    iVar3 = __aeabi_fcmpgt(uVar2,0x3f800000);
    if (iVar3 != 0) {
      uVar2 = 0x3f800000;
    }
    (*pcVar4)(piVar5,uVar2);
  }
  else {
    (**(code **)(**(int **)(this + 0x34) + 0x10))(*(int **)(this + 0x34),0x3f800000);
    *(int *)(this + 0x30) = *(int *)(this + 0x30) + 1;
    (**(code **)(**(int **)(this + 0x34) + 0x1c))();
    (**(code **)(**(int **)(this + 0x34) + 0x18))
              (*(int **)(this + 0x34),*(undefined4 *)(this + 0x18));
    piVar5 = *(int **)(this + 0x34);
    if (*(int *)(this + 0x30) == *(int *)(this + 0x2c)) {
      uVar1 = 0;
      pcVar4 = *(code **)(*piVar5 + 0x10);
    }
    else {
      uVar1 = __floatunsisf();
      uVar1 = __subsf3(uVar2,uVar1);
      pcVar4 = *(code **)(*piVar5 + 0x10);
    }
    (*pcVar4)(piVar5,uVar1);
  }
  return;
}


