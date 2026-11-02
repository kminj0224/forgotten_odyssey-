/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00145fe0  Symbol: ~CCGridBase */

/* cocos2d::CCGridBase::~CCGridBase() */

CCGridBase * __thiscall cocos2d::CCGridBase::~CCGridBase(CCGridBase *this)

{
  *(int *)this = *(int *)(DAT_00146014 + 0x145fec) + 8;
  setActive(this,false);
  if (*(CCObject **)(this + 0x20) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x20));
  }
  if (*(CCObject **)(this + 0x2c) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x2c));
  }
  CCObject::~CCObject((CCObject *)this);
  return this;
}


