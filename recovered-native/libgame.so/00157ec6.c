/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00157ec6  Symbol: timersubCocos2d */

/* cocos2d::CCTime::timersubCocos2d(cocos2d::cc_timeval*, cocos2d::cc_timeval*,
   cocos2d::cc_timeval*) */

void cocos2d::CCTime::timersubCocos2d(cc_timeval *param_1,cc_timeval *param_2,cc_timeval *param_3)

{
  if (((param_2 != (cc_timeval *)0x0) && (param_1 != (cc_timeval *)0x0)) &&
     (param_3 != (cc_timeval *)0x0)) {
    *(int *)param_1 = *(int *)param_3 - *(int *)param_2;
    *(int *)(param_1 + 4) = *(int *)(param_3 + 4) - *(int *)(param_2 + 4);
  }
  return;
}


