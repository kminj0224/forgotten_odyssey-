/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013e1dc  Symbol: copyWithZone */

/* cocos2d::CCScaleBy::copyWithZone(cocos2d::CCZone*) */

int * __thiscall cocos2d::CCScaleBy::copyWithZone(CCScaleBy *this,CCZone *param_1)

{
  int *this_00;
  CCZone *pCVar1;
  undefined8 uVar2;
  float extraout_s2;
  
  if (param_1 != (CCZone *)0x0) {
    this_00 = *(int **)param_1;
    pCVar1 = (CCZone *)0x0;
    if (this_00 != (int *)0x0) goto LAB_0013e21c;
  }
  this_00 = (int *)operator_new(0x4c);
  memset(this_00,0,0x4c);
  CCActionInterval::CCActionInterval((CCActionInterval *)this_00);
  *this_00 = *(int *)(DAT_0013e23c + 0x13e20a) + 8;
  param_1 = (CCZone *)operator_new(4);
  CCZone::CCZone(param_1,(CCObject *)this_00);
  pCVar1 = param_1;
LAB_0013e21c:
  uVar2 = CCScaleTo::copyWithZone((CCScaleTo *)this,param_1);
  CCScaleTo::initWithDuration((float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2);
  if (pCVar1 != (CCZone *)0x0) {
    operator_delete(pCVar1);
  }
  return this_00;
}


