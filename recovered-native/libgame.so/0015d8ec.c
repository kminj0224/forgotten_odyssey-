/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015d8ec  Symbol: getIntegerForKey */

/* cocos2d::CCUserDefault::getIntegerForKey(char const*, int) */

int __thiscall
cocos2d::CCUserDefault::getIntegerForKey(CCUserDefault *this,char *param_1,int param_2)

{
  char *__nptr;
  
  __nptr = (char *)FUN_0015d864(param_1);
  if (__nptr != (char *)0x0) {
    param_2 = atoi(__nptr);
    (***(code ***)(DAT_0015d914 + 0x15d90a))(__nptr);
  }
  return param_2;
}


