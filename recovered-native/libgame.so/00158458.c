/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00158458  Symbol: getCurrentLanguage */

/* cocos2d::CCApplication::getCurrentLanguage() */

uint cocos2d::CCApplication::getCurrentLanguage(void)

{
  char *__s2;
  int iVar1;
  uint uVar2;
  
  __s2 = (char *)getCurrentLanguageJNI();
  iVar1 = strcmp((char *)(DAT_001584d8 + 0x158468),__s2);
  uVar2 = 1;
  if ((iVar1 != 0) && (uVar2 = strcmp((char *)(DAT_001584dc + 0x158478),__s2), uVar2 != 0)) {
    iVar1 = strcmp((char *)(DAT_001584e0 + 0x158486),__s2);
    uVar2 = 2;
    if (iVar1 != 0) {
      iVar1 = strcmp((char *)(DAT_001584e4 + 0x158496),__s2);
      uVar2 = 3;
      if (iVar1 != 0) {
        iVar1 = strcmp((char *)(DAT_001584e8 + 0x1584a6),__s2);
        uVar2 = 4;
        if (iVar1 != 0) {
          iVar1 = strcmp((char *)(DAT_001584ec + 0x1584b6),__s2);
          uVar2 = 5;
          if (iVar1 != 0) {
            iVar1 = strcmp((char *)(DAT_001584f0 + 0x1584c6),__s2);
            uVar2 = -(uint)(iVar1 == 0) & 6;
          }
        }
      }
    }
  }
  return uVar2;
}


