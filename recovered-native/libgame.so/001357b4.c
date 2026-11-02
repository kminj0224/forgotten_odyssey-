/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001357b4  Symbol: sharedScheduler */

/* cocos2d::CCScheduler::sharedScheduler() */

undefined4 cocos2d::CCScheduler::sharedScheduler(void)

{
  CCScheduler *this;
  CCScheduler **ppCVar1;
  
  ppCVar1 = (CCScheduler **)(DAT_001357dc + 0x1357bc);
  if (*ppCVar1 == (CCScheduler *)0x0) {
    this = (CCScheduler *)operator_new(0x38);
    CCScheduler(this);
    *ppCVar1 = this;
    init(this);
  }
  return *(undefined4 *)(DAT_001357e0 + 0x1357da);
}


