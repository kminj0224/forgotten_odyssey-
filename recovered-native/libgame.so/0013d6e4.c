/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013d6e4  Symbol: copyWithZone */

/* cocos2d::CCRepeat::copyWithZone(cocos2d::CCZone*) */

int * __thiscall cocos2d::CCRepeat::copyWithZone(CCRepeat *this,CCZone *param_1)

{
  CCObject *this_00;
  CCFiniteTimeAction *pCVar1;
  int *this_01;
  CCZone *pCVar2;
  
  if (param_1 != (CCZone *)0x0) {
    this_01 = *(int **)param_1;
    pCVar2 = (CCZone *)0x0;
    if (this_01 != (int *)0x0) goto LAB_0013d724;
  }
  this_01 = (int *)operator_new(0x38);
  memset(this_01,0,0x38);
  CCActionInterval::CCActionInterval((CCActionInterval *)this_01);
  *this_01 = *(int *)(DAT_0013d74c + 0x13d712) + 8;
  param_1 = (CCZone *)operator_new(4);
  CCZone::CCZone(param_1,(CCObject *)this_01);
  pCVar2 = param_1;
LAB_0013d724:
  CCActionInterval::copyWithZone((CCActionInterval *)this,param_1);
  this_00 = (CCObject *)CCObject::copy();
  pCVar1 = (CCFiniteTimeAction *)CCObject::autorelease(this_00);
  initWithAction((CCRepeat *)this_01,pCVar1,*(uint *)(this + 0x2c));
  if (pCVar2 != (CCZone *)0x0) {
    operator_delete(pCVar2);
  }
  return this_01;
}


