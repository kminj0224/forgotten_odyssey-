/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014010c  Symbol: update */

/* cocos2d::CCWavesTiles3D::update(float) */

float __thiscall cocos2d::CCWavesTiles3D::update(CCWavesTiles3D *this,float param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_r1;
  int iVar3;
  int iVar4;
  float __x;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_34;
  undefined4 local_28;
  undefined4 local_1c;
  
  for (iVar4 = 0; iVar4 < *(int *)(this + 0x2c); iVar4 = iVar4 + 1) {
    for (iVar3 = 0; iVar3 < *(int *)(this + 0x30); iVar3 = iVar3 + 1) {
      CCTiledGrid3DAction::originalTile((CCTiledGrid3DAction *)&local_48,(_ccGridSize *)this);
      uVar1 = __mulsf3(in_r1,DAT_0014019c);
      uVar2 = __floatsisf(*(undefined4 *)(this + 0x34));
      uVar1 = __mulsf3(uVar1,uVar2);
      uVar1 = __addsf3(uVar1,uVar1);
      uVar2 = __addsf3(local_44,local_48);
      uVar2 = __mulsf3(uVar2,DAT_001401a0);
      __x = (float)__addsf3(uVar1,uVar2);
      sinf(__x);
      uVar1 = __mulsf3();
      local_40 = __mulsf3(uVar1,*(undefined4 *)(this + 0x3c));
      local_50 = iVar4;
      local_4c = iVar3;
      local_34 = local_40;
      local_28 = local_40;
      local_1c = local_40;
      param_1 = (float)CCTiledGrid3DAction::setTile
                                 ((CCTiledGrid3DAction *)this,(_ccGridSize *)&local_50,
                                  (_ccQuad3 *)&local_48);
    }
  }
  return param_1;
}


