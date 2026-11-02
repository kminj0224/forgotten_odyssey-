/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013dae4  Symbol: copyWithZone */

/* cocos2d::CCMoveBy::copyWithZone(cocos2d::CCZone*) */

CCPoint * __thiscall cocos2d::CCMoveBy::copyWithZone(CCMoveBy *this,CCZone *param_1)

{
  CCPoint *this_00;
  CCZone *pCVar1;
  float fVar2;
  
  if (param_1 != (CCZone *)0x0) {
    this_00 = *(CCPoint **)param_1;
    pCVar1 = (CCZone *)0x0;
    if (this_00 != (CCPoint *)0x0) goto LAB_0013db24;
  }
  this_00 = (CCPoint *)operator_new(0x44);
  memset(this_00,0,0x44);
  CCMoveTo::CCMoveTo((CCMoveTo *)this_00);
  *this_00 = *(int *)(DAT_0013db44 + 0x13db12) + 8;
  param_1 = (CCZone *)operator_new(4);
  CCZone::CCZone(param_1,(CCObject *)this_00);
  pCVar1 = param_1;
LAB_0013db24:
  fVar2 = (float)CCMoveTo::copyWithZone((CCMoveTo *)this,param_1);
  initWithDuration(fVar2,this_00);
  if (pCVar1 != (CCZone *)0x0) {
    operator_delete(pCVar1);
  }
  return this_00;
}


