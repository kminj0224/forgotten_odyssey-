/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cc998  Symbol: StageSelect */

/* StageSelect::StageSelect() */

StageSelect * __thiscall StageSelect::StageSelect(StageSelect *this)

{
  CCSpriteFrameCache *pCVar1;
  int iVar2;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar2 = *(int *)(DAT_000cc9f0 + 0xcc9aa);
  *(int *)this = iVar2 + 8;
  *(int *)(this + 0xfc) = iVar2 + 0x13c;
  *(int *)(this + 0x100) = iVar2 + 0x16c;
  *(int *)(this + 0x104) = iVar2 + 0x178;
  pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar1,(char *)(DAT_000cc9f4 + 0xcc9d0));
  pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar1,(char *)(DAT_000cc9f8 + 0xcc9dc));
  pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar1,(char *)(DAT_000cc9fc + 0xcc9e8));
  return this;
}


