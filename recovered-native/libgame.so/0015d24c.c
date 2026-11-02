/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015d24c  Symbol: ccpForAngle */

/* cocos2d::ccpForAngle(float) */

cocos2d * __thiscall cocos2d::ccpForAngle(cocos2d *this,float param_1)

{
  float fVar1;
  float extraout_s1;
  
  fVar1 = cosf(param_1);
  fVar1 = sinf(fVar1);
  CCPoint::CCPoint((CCPoint *)this,fVar1,extraout_s1);
  return this;
}


