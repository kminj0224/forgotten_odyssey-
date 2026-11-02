/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013def0  Symbol: copyWithZone */

/* cocos2d::CCBezierBy::copyWithZone(cocos2d::CCZone*) */

_ccBezierConfig * __thiscall cocos2d::CCBezierBy::copyWithZone(CCBezierBy *this,CCZone *param_1)

{
  CCBezierBy *this_00;
  CCZone *pCVar1;
  float fVar2;
  
  if (param_1 != (CCZone *)0x0) {
    this_00 = *(CCBezierBy **)param_1;
    pCVar1 = (CCZone *)0x0;
    if (this_00 != (CCBezierBy *)0x0) goto LAB_0013df26;
  }
  this_00 = (CCBezierBy *)operator_new(0x4c);
  memset(this_00,0,0x4c);
  CCBezierBy(this_00);
  param_1 = (CCZone *)operator_new(4);
  CCZone::CCZone(param_1,(CCObject *)this_00);
  pCVar1 = param_1;
LAB_0013df26:
  fVar2 = (float)CCActionInterval::copyWithZone((CCActionInterval *)this,param_1);
  initWithDuration(fVar2,(_ccBezierConfig *)this_00);
  if (pCVar1 != (CCZone *)0x0) {
    operator_delete(pCVar1);
  }
  return (_ccBezierConfig *)this_00;
}


