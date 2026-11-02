/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00141212  Symbol: startWithTarget */

/* cocos2d::CCTurnOffTiles::startWithTarget(cocos2d::CCNode*) */

void __thiscall cocos2d::CCTurnOffTiles::startWithTarget(CCTurnOffTiles *this,CCNode *param_1)

{
  void *pvVar1;
  uint uVar2;
  
  CCGridAction::startWithTarget((CCGridAction *)this,param_1);
  if (*(long *)(this + 0x34) != -1) {
    srand48(*(long *)(this + 0x34));
  }
  *(int *)(this + 0x38) = *(int *)(this + 0x2c) * *(int *)(this + 0x30);
  pvVar1 = operator_new__(*(int *)(this + 0x2c) * *(int *)(this + 0x30) * 4);
  uVar2 = 0;
  *(void **)(this + 0x3c) = pvVar1;
  while( true ) {
    if (*(uint *)(this + 0x38) <= uVar2) break;
    (*(int **)(this + 0x3c))[uVar2] = uVar2;
    uVar2 = uVar2 + 1;
  }
  shuffle(this,*(int **)(this + 0x3c),*(uint *)(this + 0x38));
  return;
}


