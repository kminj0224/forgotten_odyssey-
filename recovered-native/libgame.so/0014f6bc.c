/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014f6bc  Symbol: update */

/* cocos2d::CCMotionStreak::update(float) */

void __thiscall cocos2d::CCMotionStreak::update(CCMotionStreak *this,float param_1)

{
  CCPoint CVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_r1;
  code *pcVar4;
  int *piVar5;
  float extraout_s0;
  undefined8 uVar6;
  CCPoint local_30;
  undefined4 local_2c;
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [3];
  
  uVar6 = CCNode::convertToWorldSpace(&local_30);
  uVar2 = local_2c;
  CVar1 = local_30;
  piVar5 = *(int **)(this + 0x100);
  pcVar4 = *(code **)(*piVar5 + 0x3c);
  CCPoint::CCPoint(aCStack_28,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  (*pcVar4)(piVar5,aCStack_28);
  __subsf3(*(undefined4 *)(this + 0x118),CVar1);
  uVar6 = __subsf3(*(undefined4 *)(this + 0x11c),uVar2);
  CCPoint::CCPoint((CCPoint *)aCStack_20,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  uVar2 = ccpLength(aCStack_20);
  iVar3 = __aeabi_fcmpgt(uVar2,*(undefined4 *)(this + 0x110));
  if (iVar3 != 0) {
    CCRibbon::addPointAt(*(CCPoint *)(this + 0x100),extraout_s0);
    *(CCPoint *)(this + 0x118) = local_30;
    *(undefined4 *)(this + 0x11c) = local_2c;
  }
  (**(code **)(**(int **)(this + 0x100) + 0x10))(*(int **)(this + 0x100),in_r1);
  return;
}


