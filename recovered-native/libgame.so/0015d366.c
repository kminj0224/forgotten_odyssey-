/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015d366  Symbol: ccpCompOp */

/* cocos2d::ccpCompOp(cocos2d::CCPoint const&, float (*)(float)) */

cocos2d * __thiscall cocos2d::ccpCompOp(cocos2d *this,CCPoint *param_1,_func_float_float *param_2)

{
  float in_s0;
  float fVar1;
  float extraout_s1;
  
  fVar1 = (*param_2)(in_s0);
  fVar1 = (*param_2)(fVar1);
  CCPoint::CCPoint((CCPoint *)this,fVar1,extraout_s1);
  return this;
}


