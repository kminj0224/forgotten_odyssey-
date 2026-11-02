/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001617d4  Symbol: ~CCTextureCache */

/* cocos2d::CCTextureCache::~CCTextureCache() */

CCTextureCache * __thiscall cocos2d::CCTextureCache::~CCTextureCache(CCTextureCache *this)

{
  int iVar1;
  
  *(int *)this = *(int *)(DAT_00161804 + 0x1617de) + 8;
  iVar1 = DAT_00161808;
  *(undefined *)(DAT_00161808 + 0x1617ea) = 1;
  sem_post((sem_t *)(iVar1 + 0x1617ee));
  if (*(CCObject **)(this + 0x14) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x14));
  }
  CCObject::~CCObject((CCObject *)this);
  return this;
}


