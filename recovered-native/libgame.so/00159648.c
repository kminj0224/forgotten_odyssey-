/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00159648  Symbol: purgeSharedAnimationCache */

/* cocos2d::CCAnimationCache::purgeSharedAnimationCache() */

void cocos2d::CCAnimationCache::purgeSharedAnimationCache(void)

{
  CCObject *this;
  CCObject **ppCVar1;
  
  ppCVar1 = *(CCObject ***)(DAT_00159660 + 0x159650);
  this = *ppCVar1;
  if (this != (CCObject *)0x0) {
    CCObject::release(this);
    *ppCVar1 = (CCObject *)0x0;
  }
  return;
}


