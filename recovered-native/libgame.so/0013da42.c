/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013da42  Symbol: copyWithZone */

/* cocos2d::CCMoveTo::copyWithZone(cocos2d::CCZone*) */

CCPoint * __thiscall cocos2d::CCMoveTo::copyWithZone(CCMoveTo *this,CCZone *param_1)

{
  CCPoint *this_00;
  CCZone *pCVar1;
  float fVar2;
  
  if (param_1 != (CCZone *)0x0) {
    this_00 = *(CCPoint **)param_1;
    pCVar1 = (CCZone *)0x0;
    if (this_00 != (CCPoint *)0x0) goto LAB_0013da78;
  }
  this_00 = (CCPoint *)operator_new(0x44);
  memset(this_00,0,0x44);
  CCMoveTo((CCMoveTo *)this_00);
  param_1 = (CCZone *)operator_new(4);
  CCZone::CCZone(param_1,(CCObject *)this_00);
  pCVar1 = param_1;
LAB_0013da78:
  fVar2 = (float)CCActionInterval::copyWithZone((CCActionInterval *)this,param_1);
  initWithDuration(fVar2,this_00);
  if (pCVar1 != (CCZone *)0x0) {
    operator_delete(pCVar1);
  }
  return this_00;
}


