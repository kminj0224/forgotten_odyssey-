/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c704  Symbol: ~CCAnimate */

/* cocos2d::CCAnimate::~CCAnimate() */

CCAnimate * __thiscall cocos2d::CCAnimate::~CCAnimate(CCAnimate *this)

{
  *(int *)this = *(int *)(DAT_0013c730 + 0x13c70e) + 8;
  if (*(CCObject **)(this + 0x2c) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x2c));
  }
  if (*(CCObject **)(this + 0x30) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x30));
  }
  CCActionInterval::~CCActionInterval((CCActionInterval *)this);
  return this;
}


