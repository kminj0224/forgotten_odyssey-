/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013b01c  Symbol: copyWithZone */

/* cocos2d::CCRipple3D::copyWithZone(cocos2d::CCZone*) */

int * __thiscall cocos2d::CCRipple3D::copyWithZone(CCRipple3D *this,CCZone *param_1)

{
  int *this_00;
  CCZone *pCVar1;
  undefined8 uVar2;
  float extraout_s2;
  
  if (param_1 != (CCZone *)0x0) {
    this_00 = *(int **)param_1;
    pCVar1 = (CCZone *)0x0;
    if (this_00 != (int *)0x0) goto LAB_0013b06c;
  }
  this_00 = (int *)operator_new(0x54);
  memset(this_00,0,0x54);
  CCGrid3DAction::CCGrid3DAction((CCGrid3DAction *)this_00);
  *this_00 = *(int *)(DAT_0013b0a0 + 0x13b04c) + 8;
  CCPoint::CCPoint((CCPoint *)(this_00 + 0xd));
  CCPoint::CCPoint((CCPoint *)(this_00 + 0x13));
  param_1 = (CCZone *)operator_new(4);
  CCZone::CCZone(param_1,(CCObject *)this_00);
  pCVar1 = param_1;
LAB_0013b06c:
  uVar2 = CCGridAction::copyWithZone((CCGridAction *)this,param_1);
  initWithPosition((CCRipple3D *)this_00,(CCPoint *)(this + 0x34),(float)uVar2,*(int *)(this + 0x3c)
                   ,(float)((ulonglong)uVar2 >> 0x20),*(_ccGridSize **)(this + 0x40),extraout_s2);
  if (pCVar1 != (CCZone *)0x0) {
    operator_delete(pCVar1);
  }
  return this_00;
}


