/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013b458  Symbol: copyWithZone */

/* cocos2d::CCTwirl::copyWithZone(cocos2d::CCZone*) */

undefined8 __thiscall cocos2d::CCTwirl::copyWithZone(CCTwirl *this,CCZone *param_1)

{
  int *this_00;
  CCZone *pCVar1;
  undefined8 uVar2;
  
  if (param_1 != (CCZone *)0x0) {
    this_00 = *(int **)param_1;
    pCVar1 = (CCZone *)0x0;
    if (this_00 != (int *)0x0) goto LAB_0013b4a8;
  }
  this_00 = (int *)operator_new(0x50);
  memset(this_00,0,0x50);
  CCGrid3DAction::CCGrid3DAction((CCGrid3DAction *)this_00);
  *this_00 = *(int *)(DAT_0013b4d4 + 0x13b488) + 8;
  CCPoint::CCPoint((CCPoint *)(this_00 + 0xd));
  CCPoint::CCPoint((CCPoint *)(this_00 + 0x12));
  param_1 = (CCZone *)operator_new(4);
  CCZone::CCZone(param_1,(CCObject *)this_00);
  pCVar1 = param_1;
LAB_0013b4a8:
  uVar2 = CCGridAction::copyWithZone((CCGridAction *)this,param_1);
  initWithPosition((CCTwirl *)this_00,(CCPoint *)(this + 0x34),*(int *)(this + 0x3c),(float)uVar2,
                   *(_ccGridSize **)(this + 0x40),(float)((ulonglong)uVar2 >> 0x20));
  if (pCVar1 != (CCZone *)0x0) {
    operator_delete(pCVar1);
  }
  return CONCAT44(this + 0x2c,this_00);
}


