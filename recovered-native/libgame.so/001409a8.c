/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001409a8  Symbol: copyWithZone */

/* cocos2d::CCShakyTiles3D::copyWithZone(cocos2d::CCZone*) */

undefined8 __thiscall cocos2d::CCShakyTiles3D::copyWithZone(CCShakyTiles3D *this,CCZone *param_1)

{
  undefined4 uVar1;
  int *this_00;
  CCZone *pCVar2;
  float fVar3;
  
  if (param_1 != (CCZone *)0x0) {
    this_00 = *(int **)param_1;
    pCVar2 = (CCZone *)0x0;
    if (this_00 != (int *)0x0) goto LAB_001409e8;
  }
  this_00 = (int *)operator_new(0x3c);
  memset(this_00,0,0x3c);
  CCTiledGrid3DAction::CCTiledGrid3DAction((CCTiledGrid3DAction *)this_00);
  *this_00 = *(int *)(DAT_00140a10 + 0x1409d6) + 8;
  param_1 = (CCZone *)operator_new(4);
  CCZone::CCZone(param_1,(CCObject *)this_00);
  pCVar2 = param_1;
LAB_001409e8:
  fVar3 = (float)CCGridAction::copyWithZone((CCGridAction *)this,param_1);
  uVar1 = *(undefined4 *)(this + 0x20);
  initWithRange((CCShakyTiles3D *)this_00,*(int *)(this + 0x34),(bool)this[0x38],
                (_ccGridSize *)(this + 0x2c),fVar3);
  if (pCVar2 != (CCZone *)0x0) {
    operator_delete(pCVar2);
  }
  return CONCAT44(uVar1,this_00);
}


