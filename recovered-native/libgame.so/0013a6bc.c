/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013a6bc  Symbol: update */

/* cocos2d::CCFlipX3D::update(float) */

void __thiscall cocos2d::CCFlipX3D::update(CCFlipX3D *this,float param_1)

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
  uint local_5c;
  undefined4 local_58;
  uint local_54;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c [3];
  undefined4 local_30 [3];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar1 = __mulsf3(in_r1,DAT_0013a820);
  uVar3 = uVar1;
  sinf(__x);
  uVar1 = __mulsf3(uVar1,0x3f000000);
  cosf(__x_00);
  local_6c = 1;
  local_68 = 1;
  CCGrid3DAction::originalVertex((CCGrid3DAction *)local_3c,(_ccGridSize *)this);
  local_64 = 0;
  local_60 = 0;
  CCGrid3DAction::originalVertex((CCGrid3DAction *)local_30,(_ccGridSize *)this);
  iVar2 = __aeabi_fcmpgt(local_3c[0],local_30[0]);
  bVar5 = iVar2 == 0;
  if (!bVar5) {
    local_30[0] = local_3c[0];
  }
  local_40 = 1;
  local_44 = (uint)!bVar5;
  local_48 = 0;
  local_4c = (uint)!bVar5;
  local_50 = 1;
  local_54 = (uint)bVar5;
  local_58 = 0;
  local_5c = (uint)bVar5;
  uVar1 = __mulsf3(local_30[0],uVar1);
  uVar1 = __subsf3(local_30[0],uVar1);
  uVar3 = __mulsf3(local_30[0],uVar3);
  uVar4 = __mulsf3(uVar3,0x3e800000);
  floorf(__x_01);
  CCGrid3DAction::originalVertex((CCGrid3DAction *)&local_80,(_ccGridSize *)this);
  uVar4 = uVar4 & 0x7fffffff;
  local_20 = local_7c;
  local_1c = local_78;
  local_24 = uVar1;
  local_1c = __addsf3(local_78,uVar4);
  CCGrid3DAction::setVertex
            ((CCGrid3DAction *)this,(_ccGridSize *)&local_5c,(_ccVertex3F *)&local_24);
  CCGrid3DAction::originalVertex((CCGrid3DAction *)&local_80,(_ccGridSize *)this);
  local_20 = local_7c;
  local_1c = local_78;
  local_24 = uVar1;
  local_1c = __addsf3(local_78,uVar4);
  CCGrid3DAction::setVertex
            ((CCGrid3DAction *)this,(_ccGridSize *)&local_54,(_ccVertex3F *)&local_24);
  CCGrid3DAction::originalVertex((CCGrid3DAction *)&local_80,(_ccGridSize *)this);
  local_24 = local_80;
  local_20 = local_7c;
  local_1c = local_78;
  local_24 = __subsf3(local_80,uVar1);
  local_1c = __subsf3(local_1c,uVar4);
  CCGrid3DAction::setVertex
            ((CCGrid3DAction *)this,(_ccGridSize *)&local_4c,(_ccVertex3F *)&local_24);
  CCGrid3DAction::originalVertex((CCGrid3DAction *)&local_80,(_ccGridSize *)this);
  local_24 = local_80;
  local_20 = local_7c;
  local_1c = local_78;
  local_24 = __subsf3(local_80,uVar1);
  local_1c = __subsf3(local_1c,uVar4);
  CCGrid3DAction::setVertex
            ((CCGrid3DAction *)this,(_ccGridSize *)&local_44,(_ccVertex3F *)&local_24);
  return;
}


