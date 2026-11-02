/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013bdc4  Symbol: copyWithZone */

/* cocos2d::CCPlace::copyWithZone(cocos2d::CCZone*) */

int * __thiscall cocos2d::CCPlace::copyWithZone(CCPlace *this,CCZone *param_1)

{
  int *this_00;
  CCZone *pCVar1;
  
  if (param_1 != (CCZone *)0x0) {
    this_00 = *(int **)param_1;
    pCVar1 = (CCZone *)0x0;
    if (this_00 != (int *)0x0) goto LAB_0013be02;
  }
  this_00 = (int *)operator_new(0x2c);
  CCActionInstant::CCActionInstant((CCActionInstant *)this_00);
  *this_00 = *(int *)(DAT_0013be20 + 0x13bdea) + 8;
  CCPoint::CCPoint((CCPoint *)(this_00 + 9));
  param_1 = (CCZone *)operator_new(4);
  CCZone::CCZone(param_1,(CCObject *)this_00);
  pCVar1 = param_1;
LAB_0013be02:
  CCActionInstant::copyWithZone((CCActionInstant *)this,param_1);
  initWithPosition((CCPlace *)this_00,(CCPoint *)(this + 0x24));
  if (pCVar1 != (CCZone *)0x0) {
    operator_delete(pCVar1);
  }
  return this_00;
}


