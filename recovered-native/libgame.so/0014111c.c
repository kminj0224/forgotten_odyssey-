/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014111c  Symbol: copyWithZone */

/* cocos2d::CCTurnOffTiles::copyWithZone(cocos2d::CCZone*) */

int * __thiscall cocos2d::CCTurnOffTiles::copyWithZone(CCTurnOffTiles *this,CCZone *param_1)

{
  int *this_00;
  CCZone *pCVar1;
  float fVar2;
  
  if (param_1 != (CCZone *)0x0) {
    this_00 = *(int **)param_1;
    pCVar1 = (CCZone *)0x0;
    if (this_00 != (int *)0x0) goto LAB_0014115c;
  }
  this_00 = (int *)operator_new(0x40);
  memset(this_00,0,0x40);
  CCTiledGrid3DAction::CCTiledGrid3DAction((CCTiledGrid3DAction *)this_00);
  *this_00 = *(int *)(DAT_00141180 + 0x14114a) + 8;
  param_1 = (CCZone *)operator_new(4);
  CCZone::CCZone(param_1,(CCObject *)this_00);
  pCVar1 = param_1;
LAB_0014115c:
  fVar2 = (float)CCGridAction::copyWithZone((CCGridAction *)this,param_1);
  initWithSeed((CCTurnOffTiles *)this_00,*(int *)(this + 0x34),(_ccGridSize *)(this + 0x2c),fVar2);
  if (pCVar1 != (CCZone *)0x0) {
    operator_delete(pCVar1);
  }
  return this_00;
}


