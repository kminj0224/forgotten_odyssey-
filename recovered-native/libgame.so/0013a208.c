/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013a208  Symbol: update */

/* cocos2d::CCWaves::update(float) */

float __thiscall cocos2d::CCWaves::update(CCWaves *this,float param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_r1;
  int iVar3;
  int iVar4;
  float fVar5;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  for (iVar4 = 0; iVar4 <= *(int *)(this + 0x2c); iVar4 = iVar4 + 1) {
    for (iVar3 = 0; iVar3 <= *(int *)(this + 0x30); iVar3 = iVar3 + 1) {
      CCGrid3DAction::originalVertex((CCGrid3DAction *)&local_24,(_ccGridSize *)this);
      if (this[0x40] != (CCWaves)0x0) {
        uVar1 = __mulsf3(in_r1,DAT_0013a2f0);
        uVar2 = __floatsisf(*(undefined4 *)(this + 0x34));
        uVar1 = __mulsf3(uVar1,uVar2);
        uVar1 = __addsf3(uVar1,uVar1);
        uVar2 = __mulsf3(local_20,DAT_0013a2f4);
        fVar5 = (float)__addsf3(uVar1,uVar2);
        sinf(fVar5);
        uVar1 = __mulsf3();
        uVar1 = __mulsf3(uVar1,*(undefined4 *)(this + 0x3c));
        local_24 = __addsf3(local_24,uVar1);
      }
      if (this[0x41] != (CCWaves)0x0) {
        uVar1 = __mulsf3(in_r1,DAT_0013a2f0);
        uVar2 = __floatsisf(*(undefined4 *)(this + 0x34));
        uVar1 = __mulsf3(uVar1,uVar2);
        uVar1 = __addsf3(uVar1,uVar1);
        uVar2 = __mulsf3(local_24,DAT_0013a2f4);
        fVar5 = (float)__addsf3(uVar1,uVar2);
        sinf(fVar5);
        uVar1 = __mulsf3();
        uVar1 = __mulsf3(uVar1,*(undefined4 *)(this + 0x3c));
        local_20 = __addsf3(local_20,uVar1);
      }
      local_2c = iVar4;
      local_28 = iVar3;
      param_1 = (float)CCGrid3DAction::setVertex
                                 ((CCGrid3DAction *)this,(_ccGridSize *)&local_2c,
                                  (_ccVertex3F *)&local_24);
    }
  }
  return param_1;
}


