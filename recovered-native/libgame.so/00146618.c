/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00146618  Symbol: ~CCNotificationCenter */

/* cocos2d::CCNotificationCenter::~CCNotificationCenter() */

CCNotificationCenter * __thiscall
cocos2d::CCNotificationCenter::~CCNotificationCenter(CCNotificationCenter *this)

{
  *(int *)this = *(int *)(DAT_00146638 + 0x146622) + 8;
  CCObject::release(*(CCObject **)(this + 0x14));
  CCObject::~CCObject((CCObject *)this);
  return this;
}


