/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00134b60  Symbol: ~CCConfiguration */

/* cocos2d::CCConfiguration::~CCConfiguration() */

CCConfiguration * __thiscall cocos2d::CCConfiguration::~CCConfiguration(CCConfiguration *this)

{
  *(int *)this = *(int *)(DAT_00134b78 + 0x134b6a) + 8;
  CCObject::~CCObject((CCObject *)this);
  return this;
}


