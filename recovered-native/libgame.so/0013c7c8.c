/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c7c8  Symbol: ~CCRepeatForever */

/* cocos2d::CCRepeatForever::~CCRepeatForever() */

CCRepeatForever * __thiscall cocos2d::CCRepeatForever::~CCRepeatForever(CCRepeatForever *this)

{
  *(int *)this = *(int *)(DAT_0013c7ec + 0x13c7d2) + 8;
  if (*(CCObject **)(this + 0x2c) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x2c));
  }
  CCActionInterval::~CCActionInterval((CCActionInterval *)this);
  return this;
}


