/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001383b0  Symbol: ~CCEaseElasticInOut */

/* cocos2d::CCEaseElasticInOut::~CCEaseElasticInOut() */

CCEaseElasticInOut * __thiscall
cocos2d::CCEaseElasticInOut::~CCEaseElasticInOut(CCEaseElasticInOut *this)

{
  *(int *)this = *(int *)(DAT_001383c8 + 0x1383ba) + 8;
  CCEaseElastic::~CCEaseElastic((CCEaseElastic *)this);
  return this;
}


