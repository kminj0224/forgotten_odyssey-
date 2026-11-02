/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c408  Symbol: ~CCSkewBy */

/* cocos2d::CCSkewBy::~CCSkewBy() */

CCSkewBy * __thiscall cocos2d::CCSkewBy::~CCSkewBy(CCSkewBy *this)

{
  *(int *)this = *(int *)(DAT_0013c420 + 0x13c412) + 8;
  CCSkewTo::~CCSkewTo((CCSkewTo *)this);
  return this;
}


