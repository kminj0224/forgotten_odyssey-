/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013e11c  Symbol: initWithDuration */

/* cocos2d::CCScaleTo::initWithDuration(float, float, float) */

int cocos2d::CCScaleTo::initWithDuration(float param_1,float param_2,float param_3)

{
  CCActionInterval *in_r0;
  int iVar1;
  undefined4 in_r2;
  undefined4 in_r3;
  
  iVar1 = CCActionInterval::initWithDuration(in_r0,param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(in_r0 + 0x3c) = in_r2;
    *(undefined4 *)(in_r0 + 0x40) = in_r3;
    iVar1 = 1;
  }
  return iVar1;
}


