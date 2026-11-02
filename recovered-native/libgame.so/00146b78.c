/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00146b78  Symbol: purgeSharedDispatcher */

/* cocos2d::CCKeypadDispatcher::purgeSharedDispatcher() */

void cocos2d::CCKeypadDispatcher::purgeSharedDispatcher(void)

{
  CCObject *this;
  CCObject **ppCVar1;
  
  ppCVar1 = (CCObject **)(DAT_00146b90 + 0x146b80);
  this = *ppCVar1;
  if (this != (CCObject *)0x0) {
    CCObject::release(this);
    *ppCVar1 = (CCObject *)0x0;
  }
  return;
}


