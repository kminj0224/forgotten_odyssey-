/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c360  Symbol: ~CCRotateBy */

/* cocos2d::CCRotateBy::~CCRotateBy() */

CCRotateBy * __thiscall cocos2d::CCRotateBy::~CCRotateBy(CCRotateBy *this)

{
  *(int *)this = *(int *)(DAT_0013c378 + 0x13c36a) + 8;
  CCActionInterval::~CCActionInterval((CCActionInterval *)this);
  return this;
}


