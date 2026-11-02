/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013ba70  Symbol: copyWithZone */

/* cocos2d::CCCallFunc::copyWithZone(cocos2d::CCZone*) */

int * __thiscall cocos2d::CCCallFunc::copyWithZone(CCCallFunc *this,CCZone *param_1)

{
  int *this_00;
  CCZone *pCVar1;
  
  if (param_1 != (CCZone *)0x0) {
    this_00 = *(int **)param_1;
    pCVar1 = (CCZone *)0x0;
    if (this_00 != (int *)0x0) goto LAB_0013baae;
  }
  this_00 = (int *)operator_new(0x30);
  CCActionInstant::CCActionInstant((CCActionInstant *)this_00);
  *this_00 = *(int *)(DAT_0013bad4 + 0x13ba94) + 8;
  this_00[9] = 0;
  this_00[10] = 0;
  this_00[0xb] = 0;
  param_1 = (CCZone *)operator_new(4);
  CCZone::CCZone(param_1,(CCObject *)this_00);
  pCVar1 = param_1;
LAB_0013baae:
  CCActionInstant::copyWithZone((CCActionInstant *)this,param_1);
  (**(code **)(*this_00 + 0x28))(this_00,*(undefined4 *)(this + 0x24));
  this_00[10] = *(int *)(this + 0x28);
  this_00[0xb] = *(int *)(this + 0x2c);
  if (pCVar1 != (CCZone *)0x0) {
    operator_delete(pCVar1);
  }
  return this_00;
}


