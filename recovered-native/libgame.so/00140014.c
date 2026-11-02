/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00140014  Symbol: update */

/* cocos2d::CCJumpTiles3D::update(float) */

void __thiscall cocos2d::CCJumpTiles3D::update(CCJumpTiles3D *this,float param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_r1;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  int local_50;
  int local_4c;
  CCTiledGrid3DAction aCStack_48 [8];
  undefined4 local_40;
  undefined4 local_34;
  undefined4 local_28;
  undefined4 local_1c;
  
  uVar1 = __floatsisf(*(undefined4 *)(this + 0x34));
  uVar2 = __mulsf3(in_r1,DAT_00140108);
  uVar2 = __mulsf3(uVar2,uVar1);
  fVar6 = (float)__addsf3(uVar2,uVar2);
  sinf(fVar6);
  uVar3 = *(undefined4 *)(this + 0x3c);
  uVar2 = __mulsf3();
  uVar2 = __mulsf3(uVar2,uVar3);
  uVar1 = __mulsf3(in_r1,uVar1);
  uVar1 = __addsf3(uVar1,uVar1);
  uVar1 = __addsf3(uVar1,0x3f800000);
  fVar6 = (float)__mulsf3(uVar1,DAT_00140108);
  sinf(fVar6);
  uVar1 = __mulsf3();
  uVar1 = __mulsf3(uVar1,uVar3);
  for (iVar5 = 0; iVar5 < *(int *)(this + 0x2c); iVar5 = iVar5 + 1) {
    for (iVar4 = 0; iVar4 < *(int *)(this + 0x30); iVar4 = iVar4 + 1) {
      CCTiledGrid3DAction::originalTile(aCStack_48,(_ccGridSize *)this);
      if ((iVar4 + iVar5) * -0x80000000 < 0) {
        local_40 = __addsf3(local_40,uVar1);
        local_34 = __addsf3(local_34,uVar1);
        local_28 = __addsf3(local_28,uVar1);
        uVar3 = uVar1;
      }
      else {
        local_40 = __addsf3(local_40,uVar2);
        local_34 = __addsf3(local_34,uVar2);
        local_28 = __addsf3(local_28,uVar2);
        uVar3 = uVar2;
      }
      local_1c = __addsf3(local_1c,uVar3);
      local_50 = iVar5;
      local_4c = iVar4;
      CCTiledGrid3DAction::setTile
                ((CCTiledGrid3DAction *)this,(_ccGridSize *)&local_50,(_ccQuad3 *)aCStack_48);
    }
  }
  return;
}


