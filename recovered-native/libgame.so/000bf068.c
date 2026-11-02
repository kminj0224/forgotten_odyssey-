/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bf068  Symbol: KG_Remove_Memory */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* KG_Remove_Memory() */

void KG_Remove_Memory(void)

{
  CCSpriteFrameCache *this;
  CCTextureCache *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  
  this = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::removeSpriteFrames(this);
  cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::removeUnusedSpriteFrames();
  pCVar1 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
  cocos2d::CCTextureCache::removeUnusedTextures(pCVar1);
  pCVar1 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
  cocos2d::CCTextureCache::removeAllTextures(pCVar1);
  cocos2d::CCDirector::sharedDirector();
  cocos2d::CCDirector::purgeCachedData();
  iVar4 = 0;
  iVar2 = *(int *)(DAT_000bf0b4 + 0xbf09c);
  iVar3 = *(int *)(DAT_000bf0b8 + 0xbf09e);
  do {
    *(undefined *)(iVar4 + iVar2) = 0;
    puVar5 = (undefined *)(iVar4 + iVar3);
    iVar4 = iVar4 + 1;
    *puVar5 = 0;
  } while (iVar4 != 0x14);
  return;
}


