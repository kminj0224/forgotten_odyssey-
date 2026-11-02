/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001430e2  Symbol: CCAffineTransformScale */

/* cocos2d::CCAffineTransformScale(cocos2d::CCAffineTransform const&, float, float) */

cocos2d * __thiscall
cocos2d::CCAffineTransformScale
          (cocos2d *this,CCAffineTransform *param_1,float param_2,float param_3)

{
  undefined4 in_r2;
  undefined4 in_r3;
  undefined8 uVar1;
  float extraout_s2;
  float extraout_s3;
  float extraout_s4;
  float extraout_s5;
  
  __mulsf3(in_r2,*(undefined4 *)param_1);
  __mulsf3(in_r2,*(undefined4 *)(param_1 + 4));
  __mulsf3(in_r3,*(undefined4 *)(param_1 + 8));
  uVar1 = __mulsf3(in_r3,*(undefined4 *)(param_1 + 0xc));
  __CCAffineTransformMake
            (this,(float)uVar1,(float)((ulonglong)uVar1 >> 0x20),extraout_s2,extraout_s3,extraout_s4
             ,extraout_s5);
  return this;
}


