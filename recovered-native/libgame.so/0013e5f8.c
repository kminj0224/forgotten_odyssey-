/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013e5f8  Symbol: copyWithZone */

/* cocos2d::CCTintBy::copyWithZone(cocos2d::CCZone*) */

ulonglong __thiscall cocos2d::CCTintBy::copyWithZone(CCTintBy *this,CCZone *param_1)

{
  undefined2 uVar1;
  int *this_00;
  CCZone *pCVar2;
  float fVar3;
  
  if (param_1 != (CCZone *)0x0) {
    this_00 = *(int **)param_1;
    pCVar2 = (CCZone *)0x0;
    if (this_00 != (int *)0x0) goto LAB_0013e638;
  }
  this_00 = (int *)operator_new(0x38);
  memset(this_00,0,0x38);
  CCActionInterval::CCActionInterval((CCActionInterval *)this_00);
  *this_00 = *(int *)(DAT_0013e668 + 0x13e626) + 8;
  param_1 = (CCZone *)operator_new(4);
  CCZone::CCZone(param_1,(CCObject *)this_00);
  pCVar2 = param_1;
LAB_0013e638:
  fVar3 = (float)CCActionInterval::copyWithZone((CCActionInterval *)this,param_1);
  uVar1 = *(undefined2 *)(this + 0x2e);
  initWithDuration(fVar3,(short)this_00,(short)*(undefined4 *)(this + 0x20),
                   *(ushort *)(this + 0x2a) & 0xff);
  if (pCVar2 != (CCZone *)0x0) {
    operator_delete(pCVar2);
  }
  return (ulonglong)CONCAT24(uVar1,this_00) & 0xffffffffff;
}


