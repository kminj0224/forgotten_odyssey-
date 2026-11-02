/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00161874  Symbol: sharedTextureCache */

/* cocos2d::CCTextureCache::sharedTextureCache() */

undefined4 cocos2d::CCTextureCache::sharedTextureCache(void)

{
  int iVar1;
  CCTextureCache *this;
  
  iVar1 = DAT_00161898;
  if (*(int *)(DAT_00161898 + 0x161884) == 0) {
    this = (CCTextureCache *)operator_new(0x18);
    CCTextureCache(this);
    *(CCTextureCache **)(iVar1 + 0x161884) = this;
  }
  return *(undefined4 *)((int)&DAT_0016189c + DAT_0016189c);
}


