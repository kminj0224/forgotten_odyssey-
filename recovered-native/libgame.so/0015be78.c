/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015be78  Symbol: purgeSharedSpriteFrameCache */

/* cocos2d::CCSpriteFrameCache::purgeSharedSpriteFrameCache() */

void cocos2d::CCSpriteFrameCache::purgeSharedSpriteFrameCache(void)

{
  CCObject *this;
  CCObject **ppCVar1;
  
  ppCVar1 = (CCObject **)(DAT_0015be90 + 0x15be80);
  this = *ppCVar1;
  if (this != (CCObject *)0x0) {
    CCObject::release(this);
    *ppCVar1 = (CCObject *)0x0;
  }
  return;
}


