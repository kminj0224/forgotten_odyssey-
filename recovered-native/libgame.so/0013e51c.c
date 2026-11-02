/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013e51c  Symbol: copyWithZone */

/* cocos2d::CCTintTo::copyWithZone(cocos2d::CCZone*) */

ulonglong __thiscall cocos2d::CCTintTo::copyWithZone(CCTintTo *this,CCZone *param_1)

{
  CCTintTo CVar1;
  int *this_00;
  CCZone *pCVar2;
  float fVar3;
  
  if (param_1 != (CCZone *)0x0) {
    this_00 = *(int **)param_1;
    pCVar2 = (CCZone *)0x0;
    if (this_00 != (int *)0x0) goto LAB_0013e55c;
  }
  this_00 = (int *)operator_new(0x30);
  memset(this_00,0,0x30);
  CCActionInterval::CCActionInterval((CCActionInterval *)this_00);
  *this_00 = *(int *)(DAT_0013e588 + 0x13e54a) + 8;
  param_1 = (CCZone *)operator_new(4);
  CCZone::CCZone(param_1,(CCObject *)this_00);
  pCVar2 = param_1;
LAB_0013e55c:
  fVar3 = (float)CCActionInterval::copyWithZone((CCActionInterval *)this,param_1);
  CVar1 = this[0x2b];
  initWithDuration(fVar3,(uchar)this_00,(uchar)*(undefined4 *)(this + 0x20),(uchar)this[0x29]);
  if (pCVar2 != (CCZone *)0x0) {
    operator_delete(pCVar2);
  }
  return (ulonglong)CONCAT14(CVar1,this_00);
}


