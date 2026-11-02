/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013fdbc  Symbol: update */

/* cocos2d::CCSplitCols::update(float) */

float __thiscall cocos2d::CCSplitCols::update(CCSplitCols *this,float param_1)

{
  undefined4 uVar1;
  undefined4 in_r1;
  int iVar2;
  int local_50;
  undefined4 local_4c;
  CCTiledGrid3DAction aCStack_48 [4];
  undefined4 local_44;
  undefined4 local_38;
  undefined4 local_2c;
  undefined4 local_20;
  
  for (iVar2 = 0; iVar2 < *(int *)(this + 0x2c); iVar2 = iVar2 + 1) {
    CCTiledGrid3DAction::originalTile(aCStack_48,(_ccGridSize *)this);
    uVar1 = DAT_0013fe34;
    if (iVar2 << 0x1f < 0) {
      uVar1 = 0x3f800000;
    }
    uVar1 = __mulsf3(uVar1,*(undefined4 *)(this + 0x3c));
    uVar1 = __mulsf3(uVar1,in_r1);
    local_44 = __addsf3(local_44,uVar1);
    local_38 = __addsf3(local_38,uVar1);
    local_2c = __addsf3(local_2c,uVar1);
    local_20 = __addsf3(local_20,uVar1);
    local_4c = 0;
    local_50 = iVar2;
    param_1 = (float)CCTiledGrid3DAction::setTile
                               ((CCTiledGrid3DAction *)this,(_ccGridSize *)&local_50,
                                (_ccQuad3 *)aCStack_48);
  }
  return param_1;
}


