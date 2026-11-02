/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c61c  Symbol: ~CCTintTo */

/* cocos2d::CCTintTo::~CCTintTo() */

CCTintTo * __thiscall cocos2d::CCTintTo::~CCTintTo(CCTintTo *this)

{
  *(int *)this = *(int *)(DAT_0013c634 + 0x13c626) + 8;
  CCActionInterval::~CCActionInterval((CCActionInterval *)this);
  return this;
}


