/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013e442  Symbol: initWithDuration */

/* cocos2d::CCFadeTo::initWithDuration(float, unsigned char) */

int cocos2d::CCFadeTo::initWithDuration(float param_1,uchar param_2)

{
  int iVar1;
  CCActionInterval in_r2;
  
  iVar1 = CCActionInterval::initWithDuration((CCActionInterval *)(uint)param_2,param_1);
  if (iVar1 != 0) {
    ((CCActionInterval *)(uint)param_2)[0x29] = in_r2;
    iVar1 = 1;
  }
  return iVar1;
}


