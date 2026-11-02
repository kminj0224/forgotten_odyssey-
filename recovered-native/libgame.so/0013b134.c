/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013b134  Symbol: copyWithZone */

/* cocos2d::CCShaky3D::copyWithZone(cocos2d::CCZone*) */

undefined8 __thiscall cocos2d::CCShaky3D::copyWithZone(CCShaky3D *this,CCZone *param_1)

{
  undefined4 uVar1;
  int *this_00;
  CCZone *pCVar2;
  float fVar3;
  
  if (param_1 != (CCZone *)0x0) {
    this_00 = *(int **)param_1;
    pCVar2 = (CCZone *)0x0;
    if (this_00 != (int *)0x0) goto LAB_0013b174;
  }
  this_00 = (int *)operator_new(0x3c);
  memset(this_00,0,0x3c);
  CCGrid3DAction::CCGrid3DAction((CCGrid3DAction *)this_00);
  *this_00 = *(int *)(DAT_0013b19c + 0x13b162) + 8;
  param_1 = (CCZone *)operator_new(4);
  CCZone::CCZone(param_1,(CCObject *)this_00);
  pCVar2 = param_1;
LAB_0013b174:
  fVar3 = (float)CCGridAction::copyWithZone((CCGridAction *)this,param_1);
  uVar1 = *(undefined4 *)(this + 0x20);
  initWithRange((CCShaky3D *)this_00,*(int *)(this + 0x34),(bool)this[0x38],
                (_ccGridSize *)(this + 0x2c),fVar3);
  if (pCVar2 != (CCZone *)0x0) {
    operator_delete(pCVar2);
  }
  return CONCAT44(uVar1,this_00);
}


