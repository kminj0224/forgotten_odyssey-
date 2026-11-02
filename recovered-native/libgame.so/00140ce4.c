/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00140ce4  Symbol: startWithTarget */

/* cocos2d::CCShuffleTiles::startWithTarget(cocos2d::CCNode*) */

void __thiscall cocos2d::CCShuffleTiles::startWithTarget(CCShuffleTiles *this,CCNode *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *this_00;
  undefined8 uVar6;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  
  CCGridAction::startWithTarget((CCGridAction *)this,param_1);
  if (*(long *)(this + 0x34) != -1) {
    srand48(*(long *)(this + 0x34));
  }
  *(int *)(this + 0x38) = *(int *)(this + 0x2c) * *(int *)(this + 0x30);
  pvVar1 = operator_new__(*(int *)(this + 0x2c) * *(int *)(this + 0x30) * 4);
  uVar3 = 0;
  *(void **)(this + 0x3c) = pvVar1;
  while( true ) {
    if (*(uint *)(this + 0x38) <= uVar3) break;
    (*(int **)(this + 0x3c))[uVar3] = uVar3;
    uVar3 = uVar3 + 1;
  }
  shuffle(this,*(int **)(this + 0x3c),*(uint *)(this + 0x38));
  iVar4 = *(int *)(this + 0x38);
  puVar2 = (undefined4 *)operator_new__(iVar4 * 0x18);
  this_00 = puVar2;
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    CCPoint::CCPoint((CCPoint *)this_00);
    CCPoint::CCPoint((CCPoint *)(this_00 + 2));
    this_00 = this_00 + 6;
  }
  *(undefined4 **)(this + 0x40) = puVar2;
  for (iVar4 = 0; iVar4 < *(int *)(this + 0x2c); iVar4 = iVar4 + 1) {
    for (iVar5 = 0; iVar5 < *(int *)(this + 0x30); iVar5 = iVar5 + 1) {
      __floatsisf(iVar4);
      uVar6 = __floatsisf(iVar5);
      uVar6 = CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
      *puVar2 = local_30;
      puVar2[1] = local_2c;
      CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
      puVar2[2] = local_28;
      puVar2[3] = local_24;
      local_20 = iVar4;
      local_1c = iVar5;
      getDelta((_ccGridSize *)&local_38);
      puVar2[4] = local_38;
      puVar2[5] = local_34;
      puVar2 = puVar2 + 6;
    }
  }
  return;
}


