/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013d418  Symbol: copyWithZone */

/* cocos2d::CCFadeIn::copyWithZone(cocos2d::CCZone*) */

int * __thiscall cocos2d::CCFadeIn::copyWithZone(CCFadeIn *this,CCZone *param_1)

{
  CCZone *pCVar1;
  int *this_00;
  
  if (param_1 != (CCZone *)0x0) {
    this_00 = *(int **)param_1;
    pCVar1 = (CCZone *)0x0;
    if (this_00 != (int *)0x0) goto LAB_0013d458;
  }
  this_00 = (int *)operator_new(0x2c);
  memset(this_00,0,0x2c);
  CCActionInterval::CCActionInterval((CCActionInterval *)this_00);
  *this_00 = *(int *)(DAT_0013d46c + 0x13d446) + 8;
  param_1 = (CCZone *)operator_new(4);
  CCZone::CCZone(param_1,(CCObject *)this_00);
  pCVar1 = param_1;
LAB_0013d458:
  CCActionInterval::copyWithZone((CCActionInterval *)this,param_1);
  if (pCVar1 != (CCZone *)0x0) {
    operator_delete(pCVar1);
  }
  return this_00;
}


