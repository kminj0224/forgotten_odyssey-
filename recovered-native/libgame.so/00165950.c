/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00165950  Symbol: formatWithTMXFile */

/* cocos2d::CCTMXMapInfo::formatWithTMXFile(char const*) */

int * cocos2d::CCTMXMapInfo::formatWithTMXFile(char *param_1)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x58);
  CCTMXMapInfo((CCTMXMapInfo *)this);
  iVar1 = initWithTMXFile((CCTMXMapInfo *)this,param_1);
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


