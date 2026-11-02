/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00146b4c  Symbol: sharedDispatcher */

/* cocos2d::CCKeypadDispatcher::sharedDispatcher() */

undefined4 cocos2d::CCKeypadDispatcher::sharedDispatcher(void)

{
  CCKeypadDispatcher *this;
  CCKeypadDispatcher **ppCVar1;
  
  ppCVar1 = (CCKeypadDispatcher **)(DAT_00146b70 + 0x146b54);
  if (*ppCVar1 == (CCKeypadDispatcher *)0x0) {
    this = (CCKeypadDispatcher *)operator_new(0x24);
    CCKeypadDispatcher(this);
    *ppCVar1 = this;
  }
  return *(undefined4 *)(DAT_00146b74 + 0x146b6c);
}


