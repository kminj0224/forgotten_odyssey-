/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001465dc  Symbol: ~CCNotificationObserver */

/* cocos2d::CCNotificationObserver::~CCNotificationObserver() */

CCNotificationObserver * __thiscall
cocos2d::CCNotificationObserver::~CCNotificationObserver(CCNotificationObserver *this)

{
  *(int *)this = *(int *)(DAT_00146600 + 0x1465e6) + 8;
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x20));
  }
  CCObject::~CCObject((CCObject *)this);
  return this;
}


