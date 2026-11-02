/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014887e  Symbol: configurationWithFNTFile */

/* cocos2d::CCBMFontConfiguration::configurationWithFNTFile(char const*) */

int * cocos2d::CCBMFontConfiguration::configurationWithFNTFile(char *param_1)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x34);
  CCBMFontConfiguration((CCBMFontConfiguration *)this);
  iVar1 = initWithFNTfile((CCBMFontConfiguration *)this,param_1);
  if (iVar1 == 0) {
    if (this != (int *)0x0) {
      (**(code **)(*this + 8))(this);
      this = (int *)0x0;
    }
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


