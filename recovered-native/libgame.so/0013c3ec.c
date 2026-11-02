/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c3ec  Symbol: ~CCSkewTo */

/* cocos2d::CCSkewTo::~CCSkewTo() */

CCSkewTo * __thiscall cocos2d::CCSkewTo::~CCSkewTo(CCSkewTo *this)

{
  *(int *)this = *(int *)(DAT_0013c404 + 0x13c3f6) + 8;
  CCActionInterval::~CCActionInterval((CCActionInterval *)this);
  return this;
}


