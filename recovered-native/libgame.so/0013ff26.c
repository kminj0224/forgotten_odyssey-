/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013ff26  Symbol: transformTile */

/* cocos2d::CCFadeOutTRTiles::transformTile(cocos2d::_ccGridSize const&, float) */

void __thiscall
cocos2d::CCFadeOutTRTiles::transformTile(CCFadeOutTRTiles *this,_ccGridSize *param_1,float param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_r2;
  undefined4 uVar4;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  
  CCTiledGrid3DAction::originalTile((CCTiledGrid3DAction *)&local_48,(_ccGridSize *)this);
  iVar1 = (**(code **)(**(int **)(this + 0x18) + 0x60))();
  uVar4 = *(undefined4 *)(iVar1 + 0x28);
  uVar2 = __subsf3(0x3f800000,in_r2);
  uVar3 = __mulsf3(*(undefined4 *)(iVar1 + 0x24),0x3f000000);
  uVar3 = __mulsf3(uVar3,uVar2);
  local_48 = __addsf3(local_48,uVar3);
  uVar4 = __mulsf3(uVar4,0x3f000000);
  uVar2 = __mulsf3(uVar4,uVar2);
  local_44 = __addsf3(local_44,uVar2);
  local_3c = __subsf3(local_3c,uVar3);
  local_38 = __addsf3(local_38,uVar2);
  local_30 = __addsf3(local_30,uVar3);
  local_2c = __subsf3(local_2c,uVar2);
  local_24 = __subsf3(local_24,uVar3);
  local_20 = __subsf3(local_20,uVar2);
  CCTiledGrid3DAction::setTile((CCTiledGrid3DAction *)this,param_1,(_ccQuad3 *)&local_48);
  return;
}


