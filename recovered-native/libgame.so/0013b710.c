/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013b710  Symbol: ~CCToggleVisibility */

/* cocos2d::CCToggleVisibility::~CCToggleVisibility() */

CCToggleVisibility * __thiscall
cocos2d::CCToggleVisibility::~CCToggleVisibility(CCToggleVisibility *this)

{
  *(int *)this = *(int *)(DAT_0013b728 + 0x13b71a) + 8;
  CCActionInstant::~CCActionInstant((CCActionInstant *)this);
  return this;
}


