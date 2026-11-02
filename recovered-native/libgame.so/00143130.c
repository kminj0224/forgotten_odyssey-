/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00143130  Symbol: CCAffineTransformRotate */

/* cocos2d::CCAffineTransformRotate(cocos2d::CCAffineTransform const&, float) */

cocos2d * __thiscall
cocos2d::CCAffineTransformRotate(cocos2d *this,CCAffineTransform *param_1,float param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_r2;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  float extraout_s2;
  float extraout_s3;
  float extraout_s4;
  float extraout_s5;
  undefined4 in_stack_ffffffb8;
  undefined4 in_stack_ffffffbc;
  
  __extendsfdf2(param_2,in_r2);
  sin((double)CONCAT44(in_stack_ffffffbc,in_stack_ffffffb8));
  uVar1 = __truncdfsf2();
  cos((double)CONCAT44(in_stack_ffffffbc,in_stack_ffffffb8));
  uVar2 = __truncdfsf2();
  uVar5 = *(undefined4 *)param_1;
  uVar6 = *(undefined4 *)(param_1 + 4);
  uVar8 = *(undefined4 *)(param_1 + 8);
  uVar7 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = __mulsf3(uVar5,uVar2);
  uVar4 = __mulsf3(uVar8,uVar1);
  __addsf3(uVar3,uVar4);
  uVar3 = __mulsf3(uVar6,uVar2);
  uVar4 = __mulsf3(uVar7,uVar1);
  __addsf3(uVar3,uVar4);
  uVar3 = __mulsf3(uVar8,uVar2);
  uVar4 = __mulsf3(uVar5,uVar1);
  __subsf3(uVar3,uVar4);
  uVar2 = __mulsf3(uVar7,uVar2);
  uVar1 = __mulsf3(uVar6,uVar1);
  uVar9 = __subsf3(uVar2,uVar1);
  __CCAffineTransformMake
            (this,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20),extraout_s2,extraout_s3,extraout_s4
             ,extraout_s5);
  return this;
}


