/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013a468  Symbol: update */

/* cocos2d::CCRipple3D::update(float) */

float __thiscall cocos2d::CCRipple3D::update(CCRipple3D *this,float param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_r1;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  float __x;
  undefined8 uVar8;
  CCPoint aCStack_3c [2];
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  CCGrid3DAction local_24 [8];
  undefined4 local_1c;
  
  for (iVar6 = 0; iVar6 <= *(int *)(this + 0x2c); iVar6 = iVar6 + 1) {
    for (iVar5 = 0; iVar5 <= *(int *)(this + 0x30); iVar5 = iVar5 + 1) {
      uVar8 = CCGrid3DAction::originalVertex(local_24,(_ccGridSize *)this);
      CCPoint::CCPoint((CCPoint *)&local_34,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
      __subsf3(*(undefined4 *)(this + 0x4c),local_34);
      uVar8 = __subsf3(*(undefined4 *)(this + 0x50),local_30);
      CCPoint::CCPoint((CCPoint *)aCStack_3c,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
      uVar1 = ccpLength(aCStack_3c);
      uVar7 = *(undefined4 *)(this + 0x3c);
      iVar2 = __aeabi_fcmplt(uVar1,uVar7);
      if (iVar2 != 0) {
        uVar1 = __subsf3(uVar7,uVar1);
        uVar7 = __divsf3(uVar1,uVar7);
        uVar7 = __mulsf3(uVar7,uVar7);
        uVar3 = __mulsf3(in_r1,DAT_0013a54c);
        uVar4 = __floatsisf(*(undefined4 *)(this + 0x40));
        uVar3 = __mulsf3(uVar3,uVar4);
        uVar3 = __addsf3(uVar3,uVar3);
        uVar1 = __mulsf3(uVar1,DAT_0013a550);
        __x = (float)__addsf3(uVar3,uVar1);
        sinf(__x);
        uVar1 = __mulsf3();
        uVar1 = __mulsf3(uVar1,*(undefined4 *)(this + 0x48));
        uVar1 = __mulsf3(uVar1,uVar7);
        local_1c = __addsf3(local_1c,uVar1);
      }
      local_2c = iVar6;
      local_28 = iVar5;
      param_1 = (float)CCGrid3DAction::setVertex
                                 ((CCGrid3DAction *)this,(_ccGridSize *)&local_2c,
                                  (_ccVertex3F *)local_24);
    }
  }
  return param_1;
}


