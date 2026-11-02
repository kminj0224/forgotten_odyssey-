/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00138380  Symbol: ~CCEaseElasticOut */

/* cocos2d::CCEaseElasticOut::~CCEaseElasticOut() */

CCEaseElasticOut * __thiscall cocos2d::CCEaseElasticOut::~CCEaseElasticOut(CCEaseElasticOut *this)

{
  *(int *)this = *(int *)(DAT_00138398 + 0x13838a) + 8;
  CCEaseElastic::~CCEaseElastic((CCEaseElastic *)this);
  return this;
}


