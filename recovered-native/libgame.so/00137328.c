/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00137328  Symbol: ~CCFollow */

/* cocos2d::CCFollow::~CCFollow() */

CCFollow * __thiscall cocos2d::CCFollow::~CCFollow(CCFollow *this)

{
  *(int *)this = *(int *)(DAT_0013734c + 0x137332) + 8;
  if (*(CCObject **)(this + 0x20) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x20));
  }
  CCAction::~CCAction((CCAction *)this);
  return this;
}


