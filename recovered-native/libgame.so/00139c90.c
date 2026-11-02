/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00139c90  Symbol: copyWithZone */

/* cocos2d::CCGridAction::copyWithZone(cocos2d::CCZone*) */

int * __thiscall cocos2d::CCGridAction::copyWithZone(CCGridAction *this,CCZone *param_1)

{
  int *this_00;
  CCZone *pCVar1;
  
  if (param_1 != (CCZone *)0x0) {
    this_00 = *(int **)param_1;
    pCVar1 = (CCZone *)0x0;
    if (this_00 != (int *)0x0) goto LAB_00139cd4;
  }
  this_00 = (int *)operator_new(0x34);
  memset(this_00,0,0x34);
  CCAction::CCAction((CCAction *)this_00);
  this_00[8] = 0;
  *this_00 = *(int *)(DAT_00139cf8 + 0x139cc2) + 8;
  param_1 = (CCZone *)operator_new(4);
  CCZone::CCZone(param_1,(CCObject *)this_00);
  pCVar1 = param_1;
LAB_00139cd4:
  CCActionInterval::copyWithZone((CCActionInterval *)this,param_1);
  (**(code **)(*this_00 + 0x28))(this_00,this + 0x2c,*(undefined4 *)(this + 0x20));
  if (pCVar1 != (CCZone *)0x0) {
    operator_delete(pCVar1);
  }
  return this_00;
}


