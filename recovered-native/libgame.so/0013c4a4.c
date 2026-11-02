/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c4a4  Symbol: ~CCBezierBy */

/* cocos2d::CCBezierBy::~CCBezierBy() */

CCBezierBy * __thiscall cocos2d::CCBezierBy::~CCBezierBy(CCBezierBy *this)

{
  *(int *)this = *(int *)(DAT_0013c4bc + 0x13c4ae) + 8;
  CCActionInterval::~CCActionInterval((CCActionInterval *)this);
  return this;
}


