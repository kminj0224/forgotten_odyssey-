/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013ba30  Symbol: copyWithZone */

/* cocos2d::CCActionInstant::copyWithZone(cocos2d::CCZone*) */

CCActionInstant * __thiscall
cocos2d::CCActionInstant::copyWithZone(CCActionInstant *this,CCZone *param_1)

{
  CCZone *pCVar1;
  CCActionInstant *this_00;
  
  if (param_1 != (CCZone *)0x0) {
    this_00 = *(CCActionInstant **)param_1;
    pCVar1 = (CCZone *)0x0;
    if (this_00 != (CCActionInstant *)0x0) goto LAB_0013ba5c;
  }
  this_00 = (CCActionInstant *)operator_new(0x24);
  CCActionInstant(this_00);
  param_1 = (CCZone *)operator_new(4);
  CCZone::CCZone(param_1,(CCObject *)this_00);
  pCVar1 = param_1;
LAB_0013ba5c:
  CCAction::copyWithZone((CCAction *)this,param_1);
  if (pCVar1 != (CCZone *)0x0) {
    operator_delete(pCVar1);
  }
  return this_00;
}


