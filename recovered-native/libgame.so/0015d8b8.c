/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015d8b8  Symbol: getBoolForKey */

/* cocos2d::CCUserDefault::getBoolForKey(char const*, bool) */

undefined __thiscall
cocos2d::CCUserDefault::getBoolForKey(CCUserDefault *this,char *param_1,bool param_2)

{
  char *__s1;
  int iVar1;
  
  __s1 = (char *)FUN_0015d864(param_1);
  if (__s1 != (char *)0x0) {
    iVar1 = strcmp(__s1,(char *)(DAT_0015d8e4 + 0x15d8ce));
    param_2 = iVar1 == 0;
    (***(code ***)(DAT_0015d8e8 + 0x15d8dc))(__s1);
  }
  return param_2;
}


