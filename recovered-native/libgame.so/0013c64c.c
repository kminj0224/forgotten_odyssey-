/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c64c  Symbol: ~CCTintBy */

/* cocos2d::CCTintBy::~CCTintBy() */

CCTintBy * __thiscall cocos2d::CCTintBy::~CCTintBy(CCTintBy *this)

{
  *(int *)this = *(int *)(DAT_0013c664 + 0x13c656) + 8;
  CCActionInterval::~CCActionInterval((CCActionInterval *)this);
  return this;
}


