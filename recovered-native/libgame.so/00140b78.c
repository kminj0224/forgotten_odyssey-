/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00140b78  Symbol: copyWithZone */

/* cocos2d::CCShuffleTiles::copyWithZone(cocos2d::CCZone*) */

int * __thiscall cocos2d::CCShuffleTiles::copyWithZone(CCShuffleTiles *this,CCZone *param_1)

{
  int *this_00;
  CCZone *pCVar1;
  float fVar2;
  
  if (param_1 != (CCZone *)0x0) {
    this_00 = *(int **)param_1;
    pCVar1 = (CCZone *)0x0;
    if (this_00 != (int *)0x0) goto LAB_00140bb8;
  }
  this_00 = (int *)operator_new(0x44);
  memset(this_00,0,0x44);
  CCTiledGrid3DAction::CCTiledGrid3DAction((CCTiledGrid3DAction *)this_00);
  *this_00 = *(int *)(DAT_00140bdc + 0x140ba6) + 8;
  param_1 = (CCZone *)operator_new(4);
  CCZone::CCZone(param_1,(CCObject *)this_00);
  pCVar1 = param_1;
LAB_00140bb8:
  fVar2 = (float)CCGridAction::copyWithZone((CCGridAction *)this,param_1);
  initWithSeed((CCShuffleTiles *)this_00,*(int *)(this + 0x34),(_ccGridSize *)(this + 0x2c),fVar2);
  if (pCVar1 != (CCZone *)0x0) {
    operator_delete(pCVar1);
  }
  return this_00;
}


