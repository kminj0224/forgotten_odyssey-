/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013e2ec  Symbol: initWithDuration */

/* cocos2d::CCBlink::initWithDuration(float, unsigned int) */

int cocos2d::CCBlink::initWithDuration(float param_1,uint param_2)

{
  int iVar1;
  undefined4 in_r2;
  
  iVar1 = CCActionInterval::initWithDuration((CCActionInterval *)param_2,param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(param_2 + 0x2c) = in_r2;
    iVar1 = 1;
  }
  return iVar1;
}


