/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013b318  Symbol: copyWithZone */

/* cocos2d::CCWaves::copyWithZone(cocos2d::CCZone*) */

int * __thiscall cocos2d::CCWaves::copyWithZone(CCWaves *this,CCZone *param_1)

{
  int *this_00;
  CCZone *pCVar1;
  undefined8 uVar2;
  
  if (param_1 != (CCZone *)0x0) {
    this_00 = *(int **)param_1;
    pCVar1 = (CCZone *)0x0;
    if (this_00 != (int *)0x0) goto LAB_0013b358;
  }
  this_00 = (int *)operator_new(0x44);
  memset(this_00,0,0x44);
  CCGrid3DAction::CCGrid3DAction((CCGrid3DAction *)this_00);
  *this_00 = *(int *)(DAT_0013b390 + 0x13b346) + 8;
  param_1 = (CCZone *)operator_new(4);
  CCZone::CCZone(param_1,(CCObject *)this_00);
  pCVar1 = param_1;
LAB_0013b358:
  uVar2 = CCGridAction::copyWithZone((CCGridAction *)this,param_1);
  initWithWaves((CCWaves *)this_00,*(int *)(this + 0x34),(float)uVar2,
                SUB41(*(undefined4 *)(this + 0x38),0),(bool)this[0x41],
                (_ccGridSize *)(uint)(byte)this[0x40],(float)((ulonglong)uVar2 >> 0x20));
  if (pCVar1 != (CCZone *)0x0) {
    operator_delete(pCVar1);
  }
  return this_00;
}


