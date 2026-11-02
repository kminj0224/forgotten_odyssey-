/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00148870  Symbol: initWithFNTfile */

/* cocos2d::CCBMFontConfiguration::initWithFNTfile(char const*) */

undefined4 __thiscall
cocos2d::CCBMFontConfiguration::initWithFNTfile(CCBMFontConfiguration *this,char *param_1)

{
  *(undefined4 *)(this + 0x30) = 0;
  parseConfigFile(this,param_1);
  return 1;
}


