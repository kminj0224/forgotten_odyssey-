/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013b6e0  Symbol: ~CCHide */

/* cocos2d::CCHide::~CCHide() */

CCHide * __thiscall cocos2d::CCHide::~CCHide(CCHide *this)

{
  *(int *)this = *(int *)(DAT_0013b6f8 + 0x13b6ea) + 8;
  CCActionInstant::~CCActionInstant((CCActionInstant *)this);
  return this;
}


