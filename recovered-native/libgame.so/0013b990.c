/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013b990  Symbol: copyWithZone */

/* cocos2d::CCHide::copyWithZone(cocos2d::CCZone*) */

int * __thiscall cocos2d::CCHide::copyWithZone(CCHide *this,CCZone *param_1)

{
  CCZone *pCVar1;
  int *this_00;
  
  if (param_1 != (CCZone *)0x0) {
    this_00 = *(int **)param_1;
    pCVar1 = (CCZone *)0x0;
    if (this_00 != (int *)0x0) goto LAB_0013b9c6;
  }
  this_00 = (int *)operator_new(0x24);
  CCActionInstant::CCActionInstant((CCActionInstant *)this_00);
  *this_00 = *(int *)(DAT_0013b9dc + 0x13b9b4) + 8;
  param_1 = (CCZone *)operator_new(4);
  CCZone::CCZone(param_1,(CCObject *)this_00);
  pCVar1 = param_1;
LAB_0013b9c6:
  CCAction::copyWithZone((CCAction *)this,param_1);
  if (pCVar1 != (CCZone *)0x0) {
    operator_delete(pCVar1);
  }
  return this_00;
}


