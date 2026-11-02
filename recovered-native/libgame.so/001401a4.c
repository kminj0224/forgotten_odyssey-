/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001401a4  Symbol: update */

/* cocos2d::CCShakyTiles3D::update(float) */

float cocos2d::CCShakyTiles3D::update(float param_1)

{
  undefined4 uVar1;
  CCTiledGrid3DAction *in_r0;
  long lVar2;
  undefined4 uVar3;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  int extraout_r1_04;
  int extraout_r1_05;
  int extraout_r1_06;
  int extraout_r1_07;
  int extraout_r1_08;
  int extraout_r1_09;
  int extraout_r1_10;
  int iVar4;
  int iVar5;
  int local_5c;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  for (local_5c = 0; local_5c < *(int *)(in_r0 + 0x2c); local_5c = local_5c + 1) {
    for (iVar5 = 0; iVar5 < *(int *)(in_r0 + 0x30); iVar5 = iVar5 + 1) {
      CCTiledGrid3DAction::originalTile((CCTiledGrid3DAction *)&local_48,(_ccGridSize *)in_r0);
      uVar1 = local_48;
      lVar2 = lrand48();
      iVar4 = *(int *)(in_r0 + 0x34);
      __aeabi_idivmod(lVar2,iVar4 << 1);
      uVar3 = __floatsisf(extraout_r1 - iVar4);
      local_48 = __addsf3(uVar1,uVar3);
      uVar1 = local_3c;
      lVar2 = lrand48();
      iVar4 = *(int *)(in_r0 + 0x34);
      __aeabi_idivmod(lVar2,iVar4 << 1);
      uVar3 = __floatsisf(extraout_r1_00 - iVar4);
      local_3c = __addsf3(uVar1,uVar3);
      uVar1 = local_30;
      lVar2 = lrand48();
      iVar4 = *(int *)(in_r0 + 0x34);
      __aeabi_idivmod(lVar2,iVar4 << 1);
      uVar3 = __floatsisf(extraout_r1_01 - iVar4);
      local_30 = __addsf3(uVar1,uVar3);
      uVar1 = local_24;
      lVar2 = lrand48();
      iVar4 = *(int *)(in_r0 + 0x34);
      __aeabi_idivmod(lVar2,iVar4 << 1);
      uVar3 = __floatsisf(extraout_r1_02 - iVar4);
      local_24 = __addsf3(uVar1,uVar3);
      uVar1 = local_44;
      lVar2 = lrand48();
      iVar4 = *(int *)(in_r0 + 0x34);
      __aeabi_idivmod(lVar2,iVar4 << 1);
      uVar3 = __floatsisf(extraout_r1_03 - iVar4);
      local_44 = __addsf3(uVar1,uVar3);
      uVar1 = local_38;
      lVar2 = lrand48();
      iVar4 = *(int *)(in_r0 + 0x34);
      __aeabi_idivmod(lVar2,iVar4 << 1);
      uVar3 = __floatsisf(extraout_r1_04 - iVar4);
      local_38 = __addsf3(uVar1,uVar3);
      uVar1 = local_2c;
      lVar2 = lrand48();
      iVar4 = *(int *)(in_r0 + 0x34);
      __aeabi_idivmod(lVar2,iVar4 << 1);
      uVar3 = __floatsisf(extraout_r1_05 - iVar4);
      local_2c = __addsf3(uVar1,uVar3);
      uVar1 = local_20;
      lVar2 = lrand48();
      iVar4 = *(int *)(in_r0 + 0x34);
      __aeabi_idivmod(lVar2,iVar4 << 1);
      uVar3 = __floatsisf(extraout_r1_06 - iVar4);
      local_20 = __addsf3(uVar1,uVar3);
      uVar1 = local_40;
      if (in_r0[0x38] != (CCTiledGrid3DAction)0x0) {
        lVar2 = lrand48();
        iVar4 = *(int *)(in_r0 + 0x34);
        __aeabi_idivmod(lVar2,iVar4 << 1);
        uVar3 = __floatsisf(extraout_r1_07 - iVar4);
        local_40 = __addsf3(uVar1,uVar3);
        uVar1 = local_34;
        lVar2 = lrand48();
        iVar4 = *(int *)(in_r0 + 0x34);
        __aeabi_idivmod(lVar2,iVar4 << 1);
        uVar3 = __floatsisf(extraout_r1_08 - iVar4);
        local_34 = __addsf3(uVar1,uVar3);
        uVar1 = local_28;
        lVar2 = lrand48();
        iVar4 = *(int *)(in_r0 + 0x34);
        __aeabi_idivmod(lVar2,iVar4 << 1);
        uVar3 = __floatsisf(extraout_r1_09 - iVar4);
        local_28 = __addsf3(uVar1,uVar3);
        uVar1 = local_1c;
        lVar2 = lrand48();
        iVar4 = *(int *)(in_r0 + 0x34);
        __aeabi_idivmod(lVar2,iVar4 << 1);
        uVar3 = __floatsisf(extraout_r1_10 - iVar4);
        local_1c = __addsf3(uVar1,uVar3);
      }
      local_50 = local_5c;
      local_4c = iVar5;
      param_1 = (float)CCTiledGrid3DAction::setTile
                                 (in_r0,(_ccGridSize *)&local_50,(_ccQuad3 *)&local_48);
    }
  }
  return param_1;
}


