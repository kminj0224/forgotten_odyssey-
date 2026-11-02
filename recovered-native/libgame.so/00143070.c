/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00143070  Symbol: CCAffineTransformTranslate */

/* cocos2d::CCAffineTransformTranslate(cocos2d::CCAffineTransform const&, float, float) */

cocos2d * __thiscall
cocos2d::CCAffineTransformTranslate
          (cocos2d *this,CCAffineTransform *param_1,float param_2,float param_3)

{
  undefined4 uVar1;
  undefined4 in_r2;
  undefined4 in_r3;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  float extraout_s2;
  float extraout_s3;
  float extraout_s4;
  float extraout_s5;
  
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 4);
  uVar1 = __mulsf3(*(undefined4 *)param_1,in_r2,in_r2,uVar3,uVar4);
  uVar1 = __addsf3(uVar1,*(undefined4 *)(param_1 + 0x10));
  uVar2 = __mulsf3(uVar2,in_r3);
  __addsf3(uVar1,uVar2);
  uVar1 = __mulsf3(uVar3,in_r2);
  uVar1 = __addsf3(uVar1,*(undefined4 *)(param_1 + 0x14));
  uVar2 = __mulsf3(uVar4,in_r3);
  uVar5 = __addsf3(uVar1,uVar2);
  __CCAffineTransformMake
            (this,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20),extraout_s2,extraout_s3,extraout_s4
             ,extraout_s5);
  return this;
}


