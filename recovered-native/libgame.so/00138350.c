/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00138350  Symbol: ~CCEaseElasticIn */

/* cocos2d::CCEaseElasticIn::~CCEaseElasticIn() */

CCEaseElasticIn * __thiscall cocos2d::CCEaseElasticIn::~CCEaseElasticIn(CCEaseElasticIn *this)

{
  *(int *)this = *(int *)(DAT_00138368 + 0x13835a) + 8;
  CCEaseElastic::~CCEaseElastic((CCEaseElastic *)this);
  return this;
}


