/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013e020  Symbol: copyWithZone */

/* cocos2d::CCBezierTo::copyWithZone(cocos2d::CCZone*) */

int * __thiscall cocos2d::CCBezierTo::copyWithZone(CCBezierTo *this,CCZone *param_1)

{
  int *this_00;
  CCZone *pCVar1;
  float fVar2;
  
  if (param_1 != (CCZone *)0x0) {
    this_00 = *(int **)param_1;
    pCVar1 = (CCZone *)0x0;
    if (this_00 != (int *)0x0) goto LAB_0013e060;
  }
  this_00 = (int *)operator_new(0x4c);
  memset(this_00,0,0x4c);
  CCBezierBy::CCBezierBy((CCBezierBy *)this_00);
  *this_00 = *(int *)(DAT_0013e080 + 0x13e04e) + 8;
  param_1 = (CCZone *)operator_new(4);
  CCZone::CCZone(param_1,(CCObject *)this_00);
  pCVar1 = param_1;
LAB_0013e060:
  fVar2 = (float)CCBezierBy::copyWithZone((CCBezierBy *)this,param_1);
  CCBezierBy::initWithDuration(fVar2,(_ccBezierConfig *)this_00);
  if (pCVar1 != (CCZone *)0x0) {
    operator_delete(pCVar1);
  }
  return this_00;
}


