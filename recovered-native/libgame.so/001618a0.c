/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001618a0  Symbol: purgeSharedTextureCache */

/* cocos2d::CCTextureCache::purgeSharedTextureCache() */

void cocos2d::CCTextureCache::purgeSharedTextureCache(void)

{
  int iVar1;
  
  iVar1 = DAT_001618b8;
  if (*(CCObject **)(DAT_001618b8 + 0x1618b0) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(DAT_001618b8 + 0x1618b0));
    *(undefined4 *)(iVar1 + 0x1618b0) = 0;
  }
  return;
}


