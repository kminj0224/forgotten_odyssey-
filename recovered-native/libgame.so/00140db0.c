/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00140db0  Symbol: placeTile */

/* cocos2d::CCShuffleTiles::placeTile(cocos2d::_ccGridSize const&, cocos2d::Tile*) */

void __thiscall
cocos2d::CCShuffleTiles::placeTile(CCShuffleTiles *this,_ccGridSize *param_1,Tile *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
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
  uVar3 = *(undefined4 *)(iVar1 + 0x28);
  __mulsf3(*(undefined4 *)param_2,*(undefined4 *)(iVar1 + 0x24));
  __fixsfsi();
  uVar2 = __floatsisf();
  local_48 = __addsf3(local_48,uVar2);
  __mulsf3(uVar3,*(undefined4 *)(param_2 + 4));
  __fixsfsi();
  uVar3 = __floatsisf();
  local_44 = __addsf3(local_44,uVar3);
  local_3c = __addsf3(local_3c,uVar2);
  local_38 = __addsf3(local_38,uVar3);
  local_30 = __addsf3(local_30,uVar2);
  local_2c = __addsf3(local_2c,uVar3);
  local_24 = __addsf3(local_24,uVar2);
  local_20 = __addsf3(local_20,uVar3);
  CCTiledGrid3DAction::setTile((CCTiledGrid3DAction *)this,param_1,(_ccQuad3 *)&local_48);
  return;
}


