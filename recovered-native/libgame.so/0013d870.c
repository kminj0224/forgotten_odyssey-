/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013d870  Symbol: initWithDuration */

/* cocos2d::CCRotateTo::initWithDuration(float, float) */

int cocos2d::CCRotateTo::initWithDuration(float param_1,float param_2)

{
  CCActionInterval *in_r0;
  int iVar1;
  undefined4 in_r2;
  
  iVar1 = CCActionInterval::initWithDuration(in_r0,param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(in_r0 + 0x2c) = in_r2;
    iVar1 = 1;
  }
  return iVar1;
}


