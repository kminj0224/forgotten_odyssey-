/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00144a5c  Symbol: sharedDirector */

/* cocos2d::CCDirector::sharedDirector() */

int cocos2d::CCDirector::sharedDirector(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)(DAT_00144a80 + 0x144a64);
  if (*pcVar1 != '\0') {
    init((CCDirector *)(DAT_00144a84 + 0x144a76));
    *pcVar1 = '\0';
  }
  return (int)&DAT_00144a84 + DAT_00144a88;
}


