/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013a554  Symbol: update */

/* cocos2d::CCFlipY3D::update(float) */

void __thiscall cocos2d::CCFlipY3D::update(CCFlipY3D *this,float param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_r1;
  bool bVar5;
  float __x;
  float __x_00;
  float __x_01;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58;
  undefined4 local_54;
  uint local_50;
  undefined4 local_4c;
  uint local_48;
  undefined4 local_44;
  uint local_40;
  CCGrid3DAction aCStack_3c [4];
  undefined4 local_38;
  CCGrid3DAction aCStack_30 [4];
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar1 = __mulsf3(in_r1,DAT_0013a6b8);
  uVar3 = uVar1;
  sinf(__x);
  uVar1 = __mulsf3(uVar1,0x3f000000);
  cosf(__x_00);
  local_6c = 1;
  local_68 = 1;
  CCGrid3DAction::originalVertex(aCStack_3c,(_ccGridSize *)this);
  local_64 = 0;
  local_60 = 0;
  CCGrid3DAction::originalVertex(aCStack_30,(_ccGridSize *)this);
  iVar2 = __aeabi_fcmpgt(local_38,local_2c);
  bVar5 = iVar2 == 0;
  if (!bVar5) {
    local_2c = local_38;
  }
  local_40 = (uint)!bVar5;
  local_44 = 1;
  local_48 = (uint)bVar5;
  local_4c = 1;
  local_50 = (uint)!bVar5;
  local_54 = 0;
  local_58 = (uint)bVar5;
  local_5c = 0;
  uVar1 = __mulsf3(local_2c,uVar1);
  uVar1 = __subsf3(local_2c,uVar1);
  uVar3 = __mulsf3(local_2c,uVar3);
  uVar4 = __mulsf3(uVar3,0x3e800000);
  floorf(__x_01);
  CCGrid3DAction::originalVertex((CCGrid3DAction *)&local_80,(_ccGridSize *)this);
  uVar4 = uVar4 & 0x7fffffff;
  local_24 = local_80;
  local_1c = local_78;
  local_20 = uVar1;
  local_1c = __addsf3(local_78,uVar4);
  CCGrid3DAction::setVertex
            ((CCGrid3DAction *)this,(_ccGridSize *)&local_5c,(_ccVertex3F *)&local_24);
  CCGrid3DAction::originalVertex((CCGrid3DAction *)&local_80,(_ccGridSize *)this);
  local_24 = local_80;
  local_20 = local_7c;
  local_1c = local_78;
  local_20 = __subsf3(local_7c,uVar1);
  local_1c = __subsf3(local_1c,uVar4);
  CCGrid3DAction::setVertex
            ((CCGrid3DAction *)this,(_ccGridSize *)&local_54,(_ccVertex3F *)&local_24);
  CCGrid3DAction::originalVertex((CCGrid3DAction *)&local_80,(_ccGridSize *)this);
  local_24 = local_80;
  local_1c = local_78;
  local_20 = uVar1;
  local_1c = __addsf3(local_78,uVar4);
  CCGrid3DAction::setVertex
            ((CCGrid3DAction *)this,(_ccGridSize *)&local_4c,(_ccVertex3F *)&local_24);
  CCGrid3DAction::originalVertex((CCGrid3DAction *)&local_80,(_ccGridSize *)this);
  local_24 = local_80;
  local_20 = local_7c;
  local_1c = local_78;
  local_20 = __subsf3(local_7c,uVar1);
  local_1c = __subsf3(local_1c,uVar4);
  CCGrid3DAction::setVertex
            ((CCGrid3DAction *)this,(_ccGridSize *)&local_44,(_ccVertex3F *)&local_24);
  return;
}


