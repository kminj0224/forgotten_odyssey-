/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00138334  Symbol: ~CCEaseElastic */

/* cocos2d::CCEaseElastic::~CCEaseElastic() */

CCEaseElastic * __thiscall cocos2d::CCEaseElastic::~CCEaseElastic(CCEaseElastic *this)

{
  *(int *)this = *(int *)(DAT_0013834c + 0x13833e) + 8;
  CCActionEase::~CCActionEase((CCActionEase *)this);
  return this;
}


