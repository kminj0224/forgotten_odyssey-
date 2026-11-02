/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013bc40  Symbol: copyWithZone */

/* cocos2d::CCFlipX::copyWithZone(cocos2d::CCZone*) */

int * __thiscall cocos2d::CCFlipX::copyWithZone(CCFlipX *this,CCZone *param_1)

{
  int *this_00;
  CCZone *pCVar1;
  
  if (param_1 != (CCZone *)0x0) {
    this_00 = *(int **)param_1;
    pCVar1 = (CCZone *)0x0;
    if (this_00 != (int *)0x0) goto LAB_0013bc7c;
  }
  this_00 = (int *)operator_new(0x28);
  CCActionInstant::CCActionInstant((CCActionInstant *)this_00);
  *this_00 = *(int *)(DAT_0013bc9c + 0x13bc66) + 8;
  *(CCActionInstant *)(this_00 + 9) = (CCActionInstant)0x0;
  param_1 = (CCZone *)operator_new(4);
  CCZone::CCZone(param_1,(CCObject *)this_00);
  pCVar1 = param_1;
LAB_0013bc7c:
  CCActionInstant::copyWithZone((CCActionInstant *)this,param_1);
  initWithFlipX((CCFlipX *)this_00,(bool)this[0x24]);
  if (pCVar1 != (CCZone *)0x0) {
    operator_delete(pCVar1);
  }
  return this_00;
}


