/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001466a4  Symbol: purgeNotifCenter */

/* cocos2d::CCNotificationCenter::purgeNotifCenter() */

void cocos2d::CCNotificationCenter::purgeNotifCenter(void)

{
  CCObject *this;
  CCObject **ppCVar1;
  
  ppCVar1 = (CCObject **)(DAT_001466bc + 0x1466ac);
  this = *ppCVar1;
  if (this != (CCObject *)0x0) {
    CCObject::release(this);
    *ppCVar1 = (CCObject *)0x0;
  }
  return;
}


