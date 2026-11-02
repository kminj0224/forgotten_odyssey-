/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013d580  Symbol: copyWithZone */

/* cocos2d::CCSequence::copyWithZone(cocos2d::CCZone*) */

int * __thiscall cocos2d::CCSequence::copyWithZone(CCSequence *this,CCZone *param_1)

{
  CCObject *pCVar1;
  CCFiniteTimeAction *pCVar2;
  CCFiniteTimeAction *pCVar3;
  int *this_00;
  CCZone *pCVar4;
  
  if (param_1 != (CCZone *)0x0) {
    this_00 = *(int **)param_1;
    pCVar4 = (CCZone *)0x0;
    if (this_00 != (int *)0x0) goto LAB_0013d5c0;
  }
  this_00 = (int *)operator_new(0x3c);
  memset(this_00,0,0x3c);
  CCActionInterval::CCActionInterval((CCActionInterval *)this_00);
  *this_00 = *(int *)(DAT_0013d5f4 + 0x13d5ae) + 8;
  param_1 = (CCZone *)operator_new(4);
  CCZone::CCZone(param_1,(CCObject *)this_00);
  pCVar4 = param_1;
LAB_0013d5c0:
  CCActionInterval::copyWithZone((CCActionInterval *)this,param_1);
  pCVar1 = (CCObject *)CCObject::copy();
  pCVar2 = (CCFiniteTimeAction *)CCObject::autorelease(pCVar1);
  pCVar1 = (CCObject *)CCObject::copy();
  pCVar3 = (CCFiniteTimeAction *)CCObject::autorelease(pCVar1);
  initOneTwo((CCSequence *)this_00,pCVar2,pCVar3);
  if (pCVar4 != (CCZone *)0x0) {
    operator_delete(pCVar4);
  }
  return this_00;
}


