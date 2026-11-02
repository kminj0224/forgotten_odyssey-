/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013d206  Symbol: step */

/* cocos2d::CCRepeatForever::step(float) */

void __thiscall cocos2d::CCRepeatForever::step(CCRepeatForever *this,float param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_r1;
  int *piVar3;
  
  (**(code **)(**(int **)(this + 0x2c) + 0x20))();
  iVar1 = (**(code **)(**(int **)(this + 0x2c) + 0x14))();
  if (iVar1 != 0) {
    piVar3 = *(int **)(this + 0x2c);
    uVar2 = __addsf3(in_r1,piVar3[8]);
    uVar2 = __subsf3(uVar2,piVar3[9]);
    (**(code **)(*piVar3 + 0x18))(piVar3,*(undefined4 *)(this + 0x18));
    (**(code **)(**(int **)(this + 0x2c) + 0x20))(*(int **)(this + 0x2c),uVar2);
  }
  return;
}


