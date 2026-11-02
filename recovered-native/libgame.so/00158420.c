/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00158420  Symbol: statusBarFrame */

/* cocos2d::CCApplication::statusBarFrame(cocos2d::CCRect*) */

CCRect * cocos2d::CCApplication::statusBarFrame(CCRect *param_1)

{
  CCRect **in_r1;
  float in_s0;
  float in_s1;
  float in_s2;
  float in_s3;
  CCRect *local_20;
  CCRect *pCStack_1c;
  CCRect *pCStack_18;
  CCRect *local_14;
  
  if (in_r1 != (CCRect **)0x0) {
    CCRect::CCRect((CCRect *)&local_20,in_s0,in_s1,in_s2,in_s3);
    *in_r1 = local_20;
    in_r1[1] = pCStack_1c;
    in_r1[2] = pCStack_18;
    in_r1[3] = local_14;
    param_1 = local_20;
  }
  return param_1;
}


