/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013d3ac  Symbol: initWithDuration */

/* cocos2d::CCSkewBy::initWithDuration(float, float, float) */

int cocos2d::CCSkewBy::initWithDuration(float param_1,float param_2,float param_3)

{
  int in_r0;
  int iVar1;
  undefined4 in_r2;
  undefined4 in_r3;
  
  iVar1 = CCSkewTo::initWithDuration(param_1,param_2,param_3);
  if (iVar1 != 0) {
    *(undefined4 *)(in_r0 + 0x2c) = in_r2;
    *(undefined4 *)(in_r0 + 0x30) = in_r3;
    iVar1 = 1;
  }
  return iVar1;
}


