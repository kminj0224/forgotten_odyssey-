/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013cbb0  Symbol: update */

/* cocos2d::CCJumpBy::update(float) */

float __thiscall cocos2d::CCJumpBy::update(CCJumpBy *this,float param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_r1;
  code *pcVar3;
  int *piVar4;
  float __x;
  float __y;
  undefined8 uVar5;
  CCPoint aCStack_20 [12];
  
  if (*(int *)(this + 0x18) != 0) {
    uVar1 = __floatunsisf(*(undefined4 *)(this + 0x40));
    uVar1 = __mulsf3(in_r1,uVar1);
    fmodf(__x,__y);
    uVar2 = __mulsf3(*(undefined4 *)(this + 0x3c),0x40800000);
    uVar2 = __mulsf3(uVar2,uVar1);
    uVar1 = __subsf3(0x3f800000,uVar1);
    uVar1 = __mulsf3(uVar2,uVar1);
    piVar4 = *(int **)(this + 0x18);
    pcVar3 = *(code **)(*piVar4 + 0x3c);
    uVar2 = __mulsf3(in_r1,*(undefined4 *)(this + 0x34));
    __addsf3(uVar2,*(undefined4 *)(this + 0x2c));
    uVar2 = __mulsf3(in_r1,*(undefined4 *)(this + 0x38));
    uVar1 = __addsf3(uVar1,uVar2);
    uVar5 = __addsf3(uVar1,*(undefined4 *)(this + 0x30));
    CCPoint::CCPoint(aCStack_20,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
    param_1 = (float)(*pcVar3)(piVar4,aCStack_20);
  }
  return param_1;
}


