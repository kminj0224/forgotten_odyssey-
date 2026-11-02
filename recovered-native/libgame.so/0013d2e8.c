/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013d2e8  Symbol: update */

/* cocos2d::CCBezierBy::update(float) */

float __thiscall cocos2d::CCBezierBy::update(CCBezierBy *this,float param_1)

{
  undefined4 uVar1;
  undefined4 in_r1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined4 local_28;
  undefined4 local_24;
  CCPoint aCStack_20 [12];
  
  if (*(int *)(this + 0x18) != 0) {
    uVar2 = *(undefined4 *)(this + 0x30);
    uVar4 = *(undefined4 *)(this + 0x38);
    uVar5 = *(undefined4 *)(this + 0x40);
    uVar1 = FUN_0013d248(*(undefined4 *)(this + 0x34),*(undefined4 *)(this + 0x3c),
                         *(undefined4 *)(this + 0x2c),in_r1);
    uVar7 = FUN_0013d248(uVar4,uVar5,uVar2,in_r1,uVar2,uVar1);
    piVar3 = *(int **)(this + 0x18);
    pcVar6 = *(code **)(*piVar3 + 0x3c);
    CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
    __addsf3(*(undefined4 *)(this + 0x44),local_28);
    uVar7 = __addsf3(*(undefined4 *)(this + 0x48),local_24);
    CCPoint::CCPoint(aCStack_20,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
    param_1 = (float)(*pcVar6)(piVar3,aCStack_20);
  }
  return param_1;
}


