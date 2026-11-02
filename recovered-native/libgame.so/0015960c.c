/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015960c  Symbol: ~CCAnimationCache */

/* cocos2d::CCAnimationCache::~CCAnimationCache() */

CCAnimationCache * __thiscall cocos2d::CCAnimationCache::~CCAnimationCache(CCAnimationCache *this)

{
  *(int *)this = *(int *)(DAT_00159630 + 0x159616) + 8;
  if (*(CCObject **)(this + 0x14) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x14));
  }
  CCObject::~CCObject((CCObject *)this);
  return this;
}


