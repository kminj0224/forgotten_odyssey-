/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c6bc  Symbol: update */

/* cocos2d::CCMoveTo::update(float) */

float __thiscall cocos2d::CCMoveTo::update(CCMoveTo *this,float param_1)

{
  undefined4 uVar1;
  undefined4 in_r1;
  code *pcVar2;
  int *piVar3;
  undefined8 uVar4;
  CCPoint aCStack_20 [12];
  
  piVar3 = *(int **)(this + 0x18);
  if (piVar3 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar3 + 0x3c);
    uVar1 = __mulsf3(in_r1,*(undefined4 *)(this + 0x3c));
    __addsf3(uVar1,*(undefined4 *)(this + 0x34));
    uVar1 = __mulsf3(in_r1,*(undefined4 *)(this + 0x40));
    uVar4 = __addsf3(uVar1,*(undefined4 *)(this + 0x38));
    CCPoint::CCPoint(aCStack_20,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
    param_1 = (float)(*pcVar2)(piVar3,aCStack_20);
  }
  return param_1;
}


