/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001596c8  Symbol: sharedAnimationCache */

/* cocos2d::CCAnimationCache::sharedAnimationCache() */

CCAnimationCache * cocos2d::CCAnimationCache::sharedAnimationCache(void)

{
  CCAnimationCache *this;
  CCAnimationCache **ppCVar1;
  
  ppCVar1 = *(CCAnimationCache ***)(DAT_001596f0 + 0x1596d0);
  if (*ppCVar1 == (CCAnimationCache *)0x0) {
    this = (CCAnimationCache *)operator_new(0x18);
    CCAnimationCache(this);
    *ppCVar1 = this;
    init(this);
  }
  return *ppCVar1;
}


