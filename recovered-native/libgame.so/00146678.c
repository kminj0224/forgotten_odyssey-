/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00146678  Symbol: sharedNotifCenter */

/* cocos2d::CCNotificationCenter::sharedNotifCenter() */

undefined4 cocos2d::CCNotificationCenter::sharedNotifCenter(void)

{
  CCNotificationCenter *this;
  CCNotificationCenter **ppCVar1;
  
  ppCVar1 = (CCNotificationCenter **)(DAT_0014669c + 0x146680);
  if (*ppCVar1 == (CCNotificationCenter *)0x0) {
    this = (CCNotificationCenter *)operator_new(0x18);
    CCNotificationCenter(this);
    *ppCVar1 = this;
  }
  return *(undefined4 *)(DAT_001466a0 + 0x146698);
}


