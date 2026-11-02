/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013a2f8  Symbol: update */

/* cocos2d::CCLiquid::update(float) */

float __thiscall cocos2d::CCLiquid::update(CCLiquid *this,float param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_r1;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  for (iVar6 = 1; iVar6 < *(int *)(this + 0x2c); iVar6 = iVar6 + 1) {
    for (iVar5 = 1; iVar5 < *(int *)(this + 0x30); iVar5 = iVar5 + 1) {
      CCGrid3DAction::originalVertex((CCGrid3DAction *)&local_24,(_ccGridSize *)this);
      uVar1 = __mulsf3(in_r1,DAT_0013a3b8);
      uVar2 = __floatsisf(*(undefined4 *)(this + 0x34));
      uVar1 = __mulsf3(uVar1,uVar2);
      uVar2 = __addsf3(uVar1,uVar1);
      uVar1 = local_24;
      uVar3 = __mulsf3(local_24,DAT_0013a3bc);
      fVar7 = (float)__addsf3(uVar2,uVar3);
      sinf(fVar7);
      uVar4 = *(undefined4 *)(this + 0x3c);
      uVar3 = __mulsf3();
      uVar3 = __mulsf3(uVar3,uVar4);
      local_24 = __addsf3(uVar1,uVar3);
      uVar1 = local_20;
      uVar3 = __mulsf3(local_20,DAT_0013a3bc);
      fVar7 = (float)__addsf3(uVar2,uVar3);
      sinf(fVar7);
      uVar2 = __mulsf3();
      uVar2 = __mulsf3(uVar2,uVar4);
      local_20 = __addsf3(uVar1,uVar2);
      local_2c = iVar6;
      local_28 = iVar5;
      param_1 = (float)CCGrid3DAction::setVertex
                                 ((CCGrid3DAction *)this,(_ccGridSize *)&local_2c,
                                  (_ccVertex3F *)&local_24);
    }
  }
  return param_1;
}


