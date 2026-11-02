/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001431f2  Symbol: CCAffineTransformConcat */

/* cocos2d::CCAffineTransformConcat(cocos2d::CCAffineTransform const&, cocos2d::CCAffineTransform
   const&) */

cocos2d * __thiscall
cocos2d::CCAffineTransformConcat
          (cocos2d *this,CCAffineTransform *param_1,CCAffineTransform *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  float extraout_s2;
  float extraout_s3;
  float extraout_s4;
  float extraout_s5;
  
  uVar4 = *(undefined4 *)param_1;
  uVar10 = *(undefined4 *)param_2;
  uVar5 = *(undefined4 *)(param_1 + 4);
  uVar6 = *(undefined4 *)(param_2 + 0xc);
  uVar11 = *(undefined4 *)(param_2 + 8);
  uVar12 = *(undefined4 *)(param_2 + 4);
  uVar7 = *(undefined4 *)(param_1 + 8);
  uVar8 = *(undefined4 *)(param_1 + 0xc);
  uVar9 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  uVar1 = __mulsf3(uVar4,uVar10);
  uVar2 = __mulsf3(uVar5,uVar11);
  __addsf3(uVar1,uVar2);
  uVar1 = __mulsf3(uVar4,uVar12);
  uVar2 = __mulsf3(uVar5,uVar6);
  __addsf3(uVar1,uVar2);
  uVar1 = __mulsf3(uVar7,uVar10);
  uVar2 = __mulsf3(uVar8,uVar11);
  __addsf3(uVar1,uVar2);
  uVar1 = __mulsf3(uVar7,uVar12);
  uVar2 = __mulsf3(uVar8,uVar6);
  __addsf3(uVar1,uVar2);
  uVar1 = __mulsf3(uVar9,uVar10);
  uVar2 = __mulsf3(uVar3,uVar11);
  uVar1 = __addsf3(uVar1,uVar2);
  __addsf3(uVar1,*(undefined4 *)(param_2 + 0x10));
  uVar1 = __mulsf3(uVar9,uVar12);
  uVar2 = __mulsf3(uVar3,uVar6);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar13 = __addsf3(uVar1,*(undefined4 *)(param_2 + 0x14));
  __CCAffineTransformMake
            (this,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20),extraout_s2,extraout_s3,
             extraout_s4,extraout_s5);
  return this;
}


