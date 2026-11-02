/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013d3c4  Symbol: copyWithZone */

/* cocos2d::CCActionInterval::copyWithZone(cocos2d::CCZone*) */

CCActionInterval * __thiscall
cocos2d::CCActionInterval::copyWithZone(CCActionInterval *this,CCZone *param_1)

{
  CCZone *pCVar1;
  CCActionInterval *this_00;
  float fVar2;
  float extraout_s0;
  
  if (param_1 != (CCZone *)0x0) {
    this_00 = *(CCActionInterval **)param_1;
    pCVar1 = (CCZone *)0x0;
    if (this_00 != (CCActionInterval *)0x0) goto LAB_0013d3fa;
  }
  this_00 = (CCActionInterval *)operator_new(0x2c);
  memset(this_00,0,0x2c);
  CCActionInterval(this_00);
  param_1 = (CCZone *)operator_new(4);
  CCZone::CCZone(param_1,(CCObject *)this_00);
  pCVar1 = param_1;
LAB_0013d3fa:
  fVar2 = (float)CCAction::copyWithZone((CCAction *)this,param_1);
  if (pCVar1 != (CCZone *)0x0) {
    operator_delete(pCVar1);
    fVar2 = extraout_s0;
  }
  initWithDuration(this_00,fVar2);
  return this_00;
}


