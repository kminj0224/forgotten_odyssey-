/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013b694  Symbol: ~CCActionInstant */

/* cocos2d::CCActionInstant::~CCActionInstant() */

CCActionInstant * __thiscall cocos2d::CCActionInstant::~CCActionInstant(CCActionInstant *this)

{
  *(int *)this = *(int *)(DAT_0013b6ac + 0x13b69e) + 8;
  CCAction::~CCAction((CCAction *)this);
  return this;
}


