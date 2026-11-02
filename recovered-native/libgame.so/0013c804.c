/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c804  Symbol: ~CCRepeat */

/* cocos2d::CCRepeat::~CCRepeat() */

CCRepeat * __thiscall cocos2d::CCRepeat::~CCRepeat(CCRepeat *this)

{
  *(int *)this = *(int *)(DAT_0013c828 + 0x13c80e) + 8;
  if (*(CCObject **)(this + 0x34) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x34));
  }
  CCActionInterval::~CCActionInterval((CCActionInterval *)this);
  return this;
}


