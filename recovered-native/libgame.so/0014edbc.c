/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014edbc  Symbol: setFontName */

/* cocos2d::CCMenuItemFont::setFontName(char const*) */

void cocos2d::CCMenuItemFont::setFontName(char *param_1)

{
  undefined *puVar1;
  
  if (*(char *)(DAT_0014ede4 + 0x14edc6) != '\0') {
    FUN_001edf58(DAT_0014ede4 + 0x14edca);
  }
  puVar1 = (undefined *)(DAT_0014ede8 + 0x14edd8);
  FUN_001ed9dc(DAT_0014ede8 + 0x14eddc,param_1);
  *puVar1 = 1;
  return;
}


