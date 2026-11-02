/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013a094  Symbol: update */

/* cocos2d::CCTwirl::update(float) */

float __thiscall cocos2d::CCTwirl::update(CCTwirl *this,float param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 in_r1;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  float __x;
  float __x_00;
  float __x_01;
  undefined8 uVar11;
  CCPoint aCStack_3c [2];
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  uVar7 = *(undefined4 *)(this + 0x48);
  uVar8 = *(undefined4 *)(this + 0x4c);
  for (iVar10 = 0; iVar10 <= *(int *)(this + 0x2c); iVar10 = iVar10 + 1) {
    for (iVar9 = 0; iVar9 <= *(int *)(this + 0x30); iVar9 = iVar9 + 1) {
      CCGrid3DAction::originalVertex((CCGrid3DAction *)&local_24,(_ccGridSize *)this);
      uVar1 = __floatsisf(iVar10);
      uVar2 = __floatsisf(*(undefined4 *)(this + 0x2c));
      uVar2 = __mulsf3(uVar2,0x3f000000);
      __subsf3(uVar1,uVar2);
      uVar1 = __floatsisf(iVar9);
      uVar2 = __floatsisf(*(undefined4 *)(this + 0x30));
      uVar2 = __mulsf3(uVar2,0x3f000000);
      uVar11 = __subsf3(uVar1,uVar2);
      CCPoint::CCPoint((CCPoint *)aCStack_3c,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
      uVar1 = ccpLength(aCStack_3c);
      uVar2 = __mulsf3(in_r1,DAT_0013a1fc);
      uVar3 = __floatsisf(*(undefined4 *)(this + 0x3c));
      uVar2 = __mulsf3(uVar2,uVar3);
      uVar2 = __addsf3(uVar2,uVar2);
      uVar2 = __addsf3(uVar2,DAT_0013a200);
      cosf(__x);
      uVar1 = __mulsf3(uVar1,uVar2);
      uVar2 = __mulsf3(*(undefined4 *)(this + 0x40),DAT_0013a204);
      uVar2 = __mulsf3(uVar2,*(undefined4 *)(this + 0x44));
      uVar3 = __mulsf3(uVar1,uVar2);
      __x_00 = (float)CCPoint::CCPoint((CCPoint *)&local_34);
      uVar1 = uVar3;
      sinf(__x_00);
      uVar2 = __subsf3(local_20,uVar8);
      cosf(__x_01);
      uVar4 = __subsf3(local_24,uVar7);
      uVar5 = __mulsf3(uVar1,uVar2);
      uVar6 = __mulsf3(uVar3,uVar4);
      uVar5 = __addsf3(uVar5,uVar6);
      local_34 = uVar5;
      uVar2 = __mulsf3(uVar3,uVar2);
      uVar1 = __mulsf3(uVar1,uVar4);
      uVar1 = __subsf3(uVar2,uVar1);
      local_30 = uVar1;
      local_24 = __addsf3(uVar7,uVar5);
      local_20 = __addsf3(uVar8,uVar1);
      local_2c = iVar10;
      local_28 = iVar9;
      param_1 = (float)CCGrid3DAction::setVertex
                                 ((CCGrid3DAction *)this,(_ccGridSize *)&local_2c,
                                  (_ccVertex3F *)&local_24);
    }
  }
  return param_1;
}


