/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015be34  Symbol: ~CCSpriteFrameCache */

/* cocos2d::CCSpriteFrameCache::~CCSpriteFrameCache() */

CCSpriteFrameCache * __thiscall
cocos2d::CCSpriteFrameCache::~CCSpriteFrameCache(CCSpriteFrameCache *this)

{
  *(int *)this = *(int *)(DAT_0015be60 + 0x15be3e) + 8;
  if (*(CCObject **)(this + 0x14) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x14));
  }
  if (*(CCObject **)(this + 0x18) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x18));
  }
  CCObject::~CCObject((CCObject *)this);
  return this;
}


