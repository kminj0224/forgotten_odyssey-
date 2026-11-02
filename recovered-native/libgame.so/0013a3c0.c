/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013a3c0  Symbol: update */

/* cocos2d::CCShaky3D::update(float) */

float cocos2d::CCShaky3D::update(float param_1)

{
  undefined4 uVar1;
  CCGrid3DAction *in_r0;
  long lVar2;
  undefined4 uVar3;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  for (iVar5 = 0; iVar5 <= *(int *)(in_r0 + 0x2c); iVar5 = iVar5 + 1) {
    for (iVar4 = 0; iVar4 <= *(int *)(in_r0 + 0x30); iVar4 = iVar4 + 1) {
      CCGrid3DAction::originalVertex((CCGrid3DAction *)&local_24,(_ccGridSize *)in_r0);
      uVar1 = local_24;
      lVar2 = lrand48();
      iVar6 = *(int *)(in_r0 + 0x34);
      __aeabi_idivmod(lVar2,iVar6 << 1);
      uVar3 = __floatsisf(extraout_r1 - iVar6);
      local_24 = __addsf3(uVar1,uVar3);
      uVar1 = local_20;
      lVar2 = lrand48();
      iVar6 = *(int *)(in_r0 + 0x34);
      __aeabi_idivmod(lVar2,iVar6 << 1);
      uVar3 = __floatsisf(extraout_r1_00 - iVar6);
      local_20 = __addsf3(uVar1,uVar3);
      uVar1 = local_1c;
      if (in_r0[0x38] != (CCGrid3DAction)0x0) {
        lVar2 = lrand48();
        iVar6 = *(int *)(in_r0 + 0x34);
        __aeabi_idivmod(lVar2,iVar6 << 1);
        uVar3 = __floatsisf(extraout_r1_01 - iVar6);
        local_1c = __addsf3(uVar1,uVar3);
      }
      local_2c = iVar5;
      local_28 = iVar4;
      param_1 = (float)CCGrid3DAction::setVertex
                                 (in_r0,(_ccGridSize *)&local_2c,(_ccVertex3F *)&local_24);
    }
  }
  return param_1;
}


