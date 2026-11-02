/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00134b90  Symbol: CCConfiguration */

/* cocos2d::CCConfiguration::CCConfiguration() */

CCConfiguration * __thiscall cocos2d::CCConfiguration::CCConfiguration(CCConfiguration *this)

{
  CCObject::CCObject((CCObject *)this);
  *(int *)this = *(int *)(DAT_00134bc0 + 0x134ba2) + 8;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  this[0x1c] = (CCConfiguration)0x0;
  this[0x1d] = (CCConfiguration)0x0;
  this[0x1e] = (CCConfiguration)0x0;
  this[0x1f] = (CCConfiguration)0x0;
  this[0x20] = (CCConfiguration)0x0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  return this;
}


