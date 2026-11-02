/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00138648  Symbol: copyWithZone */

/* cocos2d::CCActionEase::copyWithZone(cocos2d::CCZone*) */

CCActionInterval * __thiscall
cocos2d::CCActionEase::copyWithZone(CCActionEase *this,CCZone *param_1)

{
  CCObject *this_00;
  CCActionEase *this_01;
  CCZone *pCVar1;
  
  if (param_1 != (CCZone *)0x0) {
    this_01 = *(CCActionEase **)param_1;
    pCVar1 = (CCZone *)0x0;
    if (this_01 != (CCActionEase *)0x0) goto LAB_0013867e;
  }
  this_01 = (CCActionEase *)operator_new(0x30);
  memset(this_01,0,0x30);
  CCActionEase(this_01);
  param_1 = (CCZone *)operator_new(4);
  CCZone::CCZone(param_1,(CCObject *)this_01);
  pCVar1 = param_1;
LAB_0013867e:
  CCActionInterval::copyWithZone((CCActionInterval *)this,param_1);
  this_00 = (CCObject *)CCObject::copy();
  CCObject::autorelease(this_00);
  initWithAction((CCActionInterval *)this_01);
  if (pCVar1 != (CCZone *)0x0) {
    operator_delete(pCVar1);
  }
  return (CCActionInterval *)this_01;
}


