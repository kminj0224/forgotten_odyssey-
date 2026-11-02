/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c67c  Symbol: ~CCDelayTime */

/* cocos2d::CCDelayTime::~CCDelayTime() */

CCDelayTime * __thiscall cocos2d::CCDelayTime::~CCDelayTime(CCDelayTime *this)

{
  *(int *)this = *(int *)(DAT_0013c694 + 0x13c686) + 8;
  CCActionInterval::~CCActionInterval((CCActionInterval *)this);
  return this;
}


