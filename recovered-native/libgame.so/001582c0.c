/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001582c0  Symbol: sharedAccelerometer */

/* cocos2d::CCAccelerometer::sharedAccelerometer() */

CCAccelerometer * cocos2d::CCAccelerometer::sharedAccelerometer(void)

{
  CCAccelerometer *this;
  CCAccelerometer **ppCVar1;
  
  ppCVar1 = *(CCAccelerometer ***)(DAT_001582e0 + 0x1582c8);
  if (*ppCVar1 == (CCAccelerometer *)0x0) {
    this = (CCAccelerometer *)operator_new(0x28);
    CCAccelerometer(this);
    *ppCVar1 = this;
  }
  return *ppCVar1;
}


