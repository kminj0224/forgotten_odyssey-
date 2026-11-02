/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d3a48  Symbol: init */

/* In_App_Layer::init() */

int In_App_Layer::init(void)

{
  CCSpriteFrameCache *pCVar1;
  int iVar2;
  
  pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar1,(char *)(DAT_000d3a88 + 0xd3a56));
  pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar1,(char *)(DAT_000d3a8c + 0xd3a62));
  pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar1,(char *)(DAT_000d3a90 + 0xd3a6e));
  iVar2 = cocos2d::CCLayer::init();
  if (iVar2 != 0) {
    iVar2 = 1;
    **(undefined **)(DAT_000d3a94 + 0xd3a84) = 0;
  }
  return iVar2;
}


