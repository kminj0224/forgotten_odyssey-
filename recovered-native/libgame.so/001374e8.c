/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001374e8  Symbol: copyWithZone */

/* cocos2d::CCSpeed::copyWithZone(cocos2d::CCZone*) */

int * __thiscall cocos2d::CCSpeed::copyWithZone(CCSpeed *this,CCZone *param_1)

{
  CCObject *this_00;
  CCActionInterval *pCVar1;
  int *this_01;
  CCZone *pCVar2;
  float extraout_s0;
  
  if (param_1 != (CCZone *)0x0) {
    this_01 = *(int **)param_1;
    pCVar2 = (CCZone *)0x0;
    if (this_01 != (int *)0x0) goto LAB_00137526;
  }
  this_01 = (int *)operator_new(0x28);
  CCAction::CCAction((CCAction *)this_01);
  *this_01 = *(int *)(DAT_00137550 + 0x13750c) + 8;
  this_01[8] = 0;
  this_01[9] = 0;
  param_1 = (CCZone *)operator_new(4);
  CCZone::CCZone(param_1,(CCObject *)this_01);
  pCVar2 = param_1;
LAB_00137526:
  CCAction::copyWithZone((CCAction *)this,param_1);
  this_00 = (CCObject *)CCObject::copy();
  pCVar1 = (CCActionInterval *)CCObject::autorelease(this_00);
  initWithAction((CCSpeed *)this_01,pCVar1,extraout_s0);
  if (pCVar2 != (CCZone *)0x0) {
    operator_delete(pCVar2);
  }
  return this_01;
}


