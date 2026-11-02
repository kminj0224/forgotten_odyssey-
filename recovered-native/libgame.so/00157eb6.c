/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00157eb6  Symbol: gettimeofdayCocos2d */

/* cocos2d::CCTime::gettimeofdayCocos2d(cocos2d::cc_timeval*, void*) */

undefined4 cocos2d::CCTime::gettimeofdayCocos2d(cc_timeval *param_1,void *param_2)

{
  if (param_1 != (cc_timeval *)0x0) {
    gettimeofday((timeval *)param_1,(__timezone_ptr_t)0x0);
  }
  return 0;
}


