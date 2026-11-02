/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014663c  Symbol: ~CCNotificationCenter */

/* cocos2d::CCNotificationCenter::~CCNotificationCenter() */

CCNotificationCenter * __thiscall
cocos2d::CCNotificationCenter::~CCNotificationCenter(CCNotificationCenter *this)

{
  ~CCNotificationCenter(this);
  operator_delete(this);
  return this;
}


