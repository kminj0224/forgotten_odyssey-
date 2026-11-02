/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c0bc  Symbol: update */

/* cocos2d::CCSequence::update(float) */

void __thiscall cocos2d::CCSequence::update(CCSequence *this,float param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_r1;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(this + 0x34);
  iVar1 = __aeabi_fcmpge(in_r1,uVar4);
  if (iVar1 == 0) {
    iVar1 = __aeabi_fcmpeq(uVar4,0);
    if (iVar1 == 0) {
      uVar4 = __divsf3(in_r1,uVar4);
    }
    else {
      uVar4 = 0x3f800000;
    }
    iVar1 = 0;
  }
  else {
    iVar1 = __aeabi_fcmpeq(uVar4,0x3f800000);
    if (iVar1 == 0) {
      uVar2 = __subsf3(in_r1,uVar4);
      uVar4 = __subsf3(0x3f800000,uVar4);
      uVar4 = __divsf3(uVar2,uVar4);
    }
    else {
      uVar4 = 0x3f800000;
    }
    iVar1 = 1;
  }
  if ((iVar1 != 0) && (*(int *)(this + 0x38) == -1)) {
    (**(code **)(**(int **)(this + 0x2c) + 0x18))
              (*(int **)(this + 0x2c),*(undefined4 *)(this + 0x18));
    (**(code **)(**(int **)(this + 0x2c) + 0x10))(*(int **)(this + 0x2c),0x3f800000);
    (**(code **)(**(int **)(this + 0x2c) + 0x1c))();
  }
  iVar3 = *(int *)(this + 0x38);
  if (iVar3 != iVar1) {
    if (iVar3 != -1) {
      (**(code **)(**(int **)(this + (iVar3 + 10) * 4 + 4) + 0x10))
                (*(int **)(this + (iVar3 + 10) * 4 + 4),0x3f800000);
      (**(code **)(**(int **)(this + (*(int *)(this + 0x38) + 10) * 4 + 4) + 0x1c))();
    }
    (**(code **)(**(int **)(this + (iVar1 + 10) * 4 + 4) + 0x18))
              (*(int **)(this + (iVar1 + 10) * 4 + 4),*(undefined4 *)(this + 0x18));
  }
  (**(code **)(**(int **)(this + (iVar1 + 10) * 4 + 4) + 0x10))
            (*(int **)(this + (iVar1 + 10) * 4 + 4),uVar4);
  *(int *)(this + 0x38) = iVar1;
  return;
}


