/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013d7b8  Symbol: copyWithZone */

/* cocos2d::CCRepeatForever::copyWithZone(cocos2d::CCZone*) */

int * __thiscall cocos2d::CCRepeatForever::copyWithZone(CCRepeatForever *this,CCZone *param_1)

{
  CCObject *this_00;
  CCActionInterval *pCVar1;
  int *this_01;
  CCZone *pCVar2;
  
  if (param_1 != (CCZone *)0x0) {
    this_01 = *(int **)param_1;
    pCVar2 = (CCZone *)0x0;
    if (this_01 != (int *)0x0) goto LAB_0013d7f2;
  }
  this_01 = (int *)operator_new(0x30);
  CCActionInterval::CCActionInterval((CCActionInterval *)this_01);
  *this_01 = *(int *)(DAT_0013d818 + 0x13d7dc) + 8;
  this_01[0xb] = 0;
  param_1 = (CCZone *)operator_new(4);
  CCZone::CCZone(param_1,(CCObject *)this_01);
  pCVar2 = param_1;
LAB_0013d7f2:
  CCActionInterval::copyWithZone((CCActionInterval *)this,param_1);
  this_00 = (CCObject *)CCObject::copy();
  pCVar1 = (CCActionInterval *)CCObject::autorelease(this_00);
  initWithAction((CCRepeatForever *)this_01,pCVar1);
  if (pCVar2 != (CCZone *)0x0) {
    operator_delete(pCVar2);
  }
  return this_01;
}


