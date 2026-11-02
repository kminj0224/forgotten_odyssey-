/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00138d50  Symbol: copyWithZone */

/* cocos2d::CCEaseOut::copyWithZone(cocos2d::CCZone*) */

int * __thiscall cocos2d::CCEaseOut::copyWithZone(CCEaseOut *this,CCZone *param_1)

{
  CCObject *this_00;
  CCActionInterval *pCVar1;
  int *this_01;
  CCZone *this_02;
  float extraout_s0;
  
  if (param_1 != (CCZone *)0x0) {
    this_01 = *(int **)param_1;
    this_02 = (CCZone *)0x0;
    if (this_01 != (int *)0x0) goto LAB_00138d8e;
  }
  this_01 = (int *)operator_new(0x34);
  memset(this_01,0,0x34);
  CCActionEase::CCActionEase((CCActionEase *)this_01);
  *this_01 = *(int *)(DAT_00138db0 + 0x138d7e) + 8;
  this_02 = (CCZone *)operator_new(4);
  CCZone::CCZone(this_02,(CCObject *)this_01);
LAB_00138d8e:
  this_00 = (CCObject *)CCObject::copy();
  pCVar1 = (CCActionInterval *)CCObject::autorelease(this_00);
  CCEaseRateAction::initWithAction((CCEaseRateAction *)this_01,pCVar1,extraout_s0);
  if (this_02 != (CCZone *)0x0) {
    operator_delete(this_02);
  }
  return this_01;
}


