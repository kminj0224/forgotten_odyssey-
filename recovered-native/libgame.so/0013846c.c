/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013846c  Symbol: ~CCEaseBounceInOut */

/* cocos2d::CCEaseBounceInOut::~CCEaseBounceInOut() */

CCEaseBounceInOut * __thiscall
cocos2d::CCEaseBounceInOut::~CCEaseBounceInOut(CCEaseBounceInOut *this)

{
  *(int *)this = *(int *)(DAT_00138484 + 0x138476) + 8;
  CCEaseBounce::~CCEaseBounce((CCEaseBounce *)this);
  return this;
}


