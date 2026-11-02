/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00143336  Symbol: CCAffineTransformInvert */

/* cocos2d::CCAffineTransformInvert(cocos2d::CCAffineTransform const&) */

cocos2d * __thiscall cocos2d::CCAffineTransformInvert(cocos2d *this,CCAffineTransform *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  float extraout_s2;
  float extraout_s3;
  float extraout_s4;
  float extraout_s5;
  
  uVar4 = *(undefined4 *)param_1;
  uVar9 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 4);
  uVar8 = *(undefined4 *)(param_1 + 8);
  uVar1 = __mulsf3(uVar4,uVar9);
  uVar2 = __mulsf3(uVar5,uVar8);
  uVar1 = __subsf3(uVar1,uVar2);
  iVar3 = __divsf3(0x3f800000,uVar1);
  uVar6 = *(undefined4 *)(param_1 + 0x14);
  __mulsf3(iVar3,uVar9);
  __mulsf3(iVar3 + -0x80000000,uVar5);
  __mulsf3(iVar3 + -0x80000000,uVar8);
  __mulsf3(iVar3,uVar4);
  uVar7 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = __mulsf3(uVar8,uVar6);
  uVar2 = __mulsf3(uVar9,uVar7);
  uVar1 = __subsf3(uVar1,uVar2);
  __mulsf3(iVar3,uVar1);
  uVar1 = __mulsf3(uVar5,uVar7);
  uVar2 = __mulsf3(uVar4,uVar6);
  uVar1 = __subsf3(uVar1,uVar2);
  uVar10 = __mulsf3(iVar3,uVar1);
  __CCAffineTransformMake
            (this,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20),extraout_s2,extraout_s3,
             extraout_s4,extraout_s5);
  return this;
}


