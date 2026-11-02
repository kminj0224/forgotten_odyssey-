/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015d94c  Symbol: getFloatForKey */

/* cocos2d::CCUserDefault::getFloatForKey(char const*, float) */

void cocos2d::CCUserDefault::getFloatForKey(char *param_1,float param_2)

{
  undefined4 in_r2;
  undefined4 in_r3;
  undefined4 unaff_r4;
  
  __extendsfdf2(in_r2);
  getDoubleForKey(param_1,(double)CONCAT44(unaff_r4,in_r3));
  __truncdfsf2();
  return;
}


