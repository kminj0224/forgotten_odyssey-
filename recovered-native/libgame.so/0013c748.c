/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c748  Symbol: ~CCReverseTime */

/* cocos2d::CCReverseTime::~CCReverseTime() */

CCReverseTime * __thiscall cocos2d::CCReverseTime::~CCReverseTime(CCReverseTime *this)

{
  *(int *)this = *(int *)(DAT_0013c76c + 0x13c752) + 8;
  if (*(CCObject **)(this + 0x2c) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x2c));
  }
  CCActionInterval::~CCActionInterval((CCActionInterval *)this);
  return this;
}


