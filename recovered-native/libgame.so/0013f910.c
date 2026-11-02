/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013f910  Symbol: update */

/* cocos2d::CCPageTurn3D::update(float) */

void __thiscall cocos2d::CCPageTurn3D::update(CCPageTurn3D *this,float param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 in_r1;
  int iVar10;
  float __x;
  float __x_00;
  float fVar11;
  float __x_01;
  float __x_02;
  float __x_03;
  undefined8 uVar12;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar1 = __subsf3(in_r1,0x3e800000);
  iVar2 = __aeabi_fcmpgt(uVar1,0);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  uVar1 = __mulsf3(uVar1,uVar1);
  uVar1 = __mulsf3(uVar1,DAT_0013fa70);
  uVar3 = __subsf3(DAT_0013fa74,uVar1);
  sqrtf(__x);
  uVar1 = __mulsf3();
  uVar4 = __addsf3(uVar1,DAT_0013fa7c);
  uVar1 = uVar4;
  fVar11 = sinf(__x_00);
  cosf(fVar11);
  for (iVar2 = 0; iVar2 <= *(int *)(this + 0x2c); iVar2 = iVar2 + 1) {
    for (iVar10 = 0; iVar10 <= *(int *)(this + 0x30); iVar10 = iVar10 + 1) {
      CCGrid3DAction::originalVertex((CCGrid3DAction *)&local_24,(_ccGridSize *)this);
      uVar5 = __subsf3(local_20,uVar3);
      uVar6 = __mulsf3(local_24,local_24);
      uVar5 = __mulsf3(uVar5,uVar5);
      uVar6 = __addsf3(uVar6,uVar5);
      sqrtf(__x_01);
      uVar7 = __mulsf3();
      fVar11 = (float)__divsf3(local_24,uVar6);
      asinf(fVar11);
      uVar8 = __divsf3();
      uVar5 = uVar8;
      cosf(__x_02);
      uVar12 = __extendsfdf2(uVar8);
      iVar9 = __aeabi_dcmple((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),DAT_0013fa68,DAT_0013fa6c)
      ;
      if (iVar9 == 0) {
        local_24 = 0;
      }
      else {
        sinf(__x_03);
        local_24 = __mulsf3(uVar7,uVar8);
      }
      uVar5 = __subsf3(0x3f800000,uVar5);
      uVar5 = __mulsf3(uVar7,uVar5);
      uVar6 = __addsf3(uVar6,uVar3);
      uVar7 = __mulsf3(uVar5,uVar1);
      local_20 = __subsf3(uVar6,uVar7);
      uVar5 = __mulsf3(uVar5,uVar4);
      local_1c = __divsf3(uVar5,DAT_0013fa80);
      iVar9 = __aeabi_fcmplt(local_1c,0x3f000000);
      if (iVar9 != 0) {
        local_1c = 0x3f000000;
      }
      local_2c = iVar2;
      local_28 = iVar10;
      CCGrid3DAction::setVertex
                ((CCGrid3DAction *)this,(_ccGridSize *)&local_2c,(_ccVertex3F *)&local_24);
    }
  }
  return;
}


