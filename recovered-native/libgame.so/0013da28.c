/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013da28  Symbol: initWithDuration */

/* cocos2d::CCMoveTo::initWithDuration(float, cocos2d::CCPoint const&) */

int cocos2d::CCMoveTo::initWithDuration(float param_1,CCPoint *param_2)

{
  int iVar1;
  CCPoint *in_r2;
  
  iVar1 = CCActionInterval::initWithDuration((CCActionInterval *)param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = 1;
    param_2[0xb] = *in_r2;
    param_2[0xc] = in_r2[1];
  }
  return iVar1;
}


