/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001383f0  Symbol: ~CCEaseBounce */

/* cocos2d::CCEaseBounce::~CCEaseBounce() */

CCEaseBounce * __thiscall cocos2d::CCEaseBounce::~CCEaseBounce(CCEaseBounce *this)

{
  *(int *)this = *(int *)(DAT_00138408 + 0x1383fa) + 8;
  CCActionEase::~CCActionEase((CCActionEase *)this);
  return this;
}


