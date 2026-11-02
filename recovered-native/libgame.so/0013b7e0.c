/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013b7e0  Symbol: ~CCCallFunc */

/* cocos2d::CCCallFunc::~CCCallFunc() */

CCCallFunc * __thiscall cocos2d::CCCallFunc::~CCCallFunc(CCCallFunc *this)

{
  *(int *)this = *(int *)(DAT_0013b804 + 0x13b7ea) + 8;
  if (*(CCObject **)(this + 0x24) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x24));
  }
  CCActionInstant::~CCActionInstant((CCActionInstant *)this);
  return this;
}


