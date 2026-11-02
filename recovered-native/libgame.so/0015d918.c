/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015d918  Symbol: getDoubleForKey */

/* cocos2d::CCUserDefault::getDoubleForKey(char const*, double) */

undefined8 cocos2d::CCUserDefault::getDoubleForKey(char *param_1,double param_2)

{
  char *__nptr;
  undefined4 in_r1;
  undefined4 extraout_r1;
  char *in_r2;
  undefined4 in_r3;
  
  __nptr = (char *)FUN_0015d864(in_r1);
  if (__nptr != (char *)0x0) {
    in_r2 = __nptr;
    strtod(__nptr,(char **)0x0);
    (***(code ***)(DAT_0015d948 + 0x15d93a))(__nptr);
    in_r3 = extraout_r1;
  }
  return CONCAT44(in_r3,in_r2);
}


