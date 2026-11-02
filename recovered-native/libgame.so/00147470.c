/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00147470  Symbol: description */

/* cocos2d::CCBMFontConfiguration::description() */

char * cocos2d::CCBMFontConfiguration::description(void)

{
  int in_r0;
  char *__s;
  int iVar1;
  
  __s = (char *)operator_new__(100);
  iVar1 = *(int *)(in_r0 + 0x30);
  if (iVar1 != 0) {
    iVar1 = *(int *)(*(int *)(iVar1 + 8) + 0xc);
  }
  sprintf(__s,(char *)(DAT_00147498 + 0x147490),iVar1,*(undefined4 *)(in_r0 + 0x2c));
  return __s;
}


