/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013fe38  Symbol: update */

/* cocos2d::CCSplitRows::update(float) */

float __thiscall cocos2d::CCSplitRows::update(CCSplitRows *this,float param_1)

{
  undefined4 uVar1;
  undefined4 in_r1;
  int iVar2;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48 [3];
  undefined4 local_3c;
  undefined4 local_30;
  undefined4 local_24;
  
  for (iVar2 = 0; iVar2 < *(int *)(this + 0x30); iVar2 = iVar2 + 1) {
    CCTiledGrid3DAction::originalTile((CCTiledGrid3DAction *)local_48,(_ccGridSize *)this);
    uVar1 = DAT_0013feb0;
    if (iVar2 << 0x1f < 0) {
      uVar1 = 0x3f800000;
    }
    uVar1 = __mulsf3(uVar1,*(undefined4 *)(this + 0x38));
    uVar1 = __mulsf3(uVar1,in_r1);
    local_48[0] = __addsf3(local_48[0],uVar1);
    local_3c = __addsf3(local_3c,uVar1);
    local_30 = __addsf3(local_30,uVar1);
    local_24 = __addsf3(local_24,uVar1);
    local_50 = 0;
    local_4c = iVar2;
    param_1 = (float)CCTiledGrid3DAction::setTile
                               ((CCTiledGrid3DAction *)this,(_ccGridSize *)&local_50,
                                (_ccQuad3 *)local_48);
  }
  return param_1;
}


