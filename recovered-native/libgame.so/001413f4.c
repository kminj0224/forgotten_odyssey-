/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001413f4  Symbol: copyWithZone */

/* cocos2d::CCJumpTiles3D::copyWithZone(cocos2d::CCZone*) */

undefined8 __thiscall cocos2d::CCJumpTiles3D::copyWithZone(CCJumpTiles3D *this,CCZone *param_1)

{
  undefined4 uVar1;
  int *this_00;
  CCZone *pCVar2;
  undefined8 uVar3;
  
  if (param_1 != (CCZone *)0x0) {
    this_00 = *(int **)param_1;
    pCVar2 = (CCZone *)0x0;
    if (this_00 != (int *)0x0) goto LAB_00141434;
  }
  this_00 = (int *)operator_new(0x40);
  memset(this_00,0,0x40);
  CCTiledGrid3DAction::CCTiledGrid3DAction((CCTiledGrid3DAction *)this_00);
  *this_00 = *(int *)(DAT_0014145c + 0x141422) + 8;
  param_1 = (CCZone *)operator_new(4);
  CCZone::CCZone(param_1,(CCObject *)this_00);
  pCVar2 = param_1;
LAB_00141434:
  uVar3 = CCGridAction::copyWithZone((CCGridAction *)this,param_1);
  uVar1 = *(undefined4 *)(this + 0x20);
  initWithJumps((CCJumpTiles3D *)this_00,*(int *)(this + 0x34),(float)uVar3,
                *(_ccGridSize **)(this + 0x38),(float)((ulonglong)uVar3 >> 0x20));
  if (pCVar2 != (CCZone *)0x0) {
    operator_delete(pCVar2);
  }
  return CONCAT44(uVar1,this_00);
}


