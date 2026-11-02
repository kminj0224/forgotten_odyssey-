/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c4c0  Symbol: ~CCBezierTo */

/* cocos2d::CCBezierTo::~CCBezierTo() */

CCBezierTo * __thiscall cocos2d::CCBezierTo::~CCBezierTo(CCBezierTo *this)

{
  *(int *)this = *(int *)(DAT_0013c4d8 + 0x13c4ca) + 8;
  CCBezierBy::~CCBezierBy((CCBezierBy *)this);
  return this;
}


