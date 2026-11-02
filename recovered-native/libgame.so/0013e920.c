/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013e920  Symbol: copyWithZone */

/* cocos2d::CCReverseTime::copyWithZone(cocos2d::CCZone*) */

CCFiniteTimeAction * __thiscall
cocos2d::CCReverseTime::copyWithZone(CCReverseTime *this,CCZone *param_1)

{
  CCObject *this_00;
  CCReverseTime *this_01;
  CCZone *pCVar1;
  
  if (param_1 != (CCZone *)0x0) {
    this_01 = *(CCReverseTime **)param_1;
    pCVar1 = (CCZone *)0x0;
    if (this_01 != (CCReverseTime *)0x0) goto LAB_0013e94c;
  }
  this_01 = (CCReverseTime *)operator_new(0x30);
  CCReverseTime(this_01);
  param_1 = (CCZone *)operator_new(4);
  CCZone::CCZone(param_1,(CCObject *)this_01);
  pCVar1 = param_1;
LAB_0013e94c:
  CCActionInterval::copyWithZone((CCActionInterval *)this,param_1);
  this_00 = (CCObject *)CCObject::copy();
  CCObject::autorelease(this_00);
  initWithAction((CCFiniteTimeAction *)this_01);
  if (pCVar1 != (CCZone *)0x0) {
    operator_delete(pCVar1);
  }
  return (CCFiniteTimeAction *)this_01;
}


