/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00131114  Symbol: onExit */

/* Ending_Layer::onExit() */

void __thiscall Ending_Layer::onExit(Ending_Layer *this)

{
  CCSpriteFrameCache *this_00;
  CCTextureCache *pCVar1;
  CCTouchDispatcher *this_01;
  
  this_00 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::removeSpriteFrames(this_00);
  cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::removeUnusedSpriteFrames();
  pCVar1 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
  cocos2d::CCTextureCache::removeUnusedTextures(pCVar1);
  pCVar1 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
  cocos2d::CCTextureCache::removeAllTextures(pCVar1);
  cocos2d::CCDirector::sharedDirector();
  cocos2d::CCDirector::purgeCachedData();
  (**(code **)(*(int *)this + 0xd4))(this,1);
  cocos2d::CCTouchDispatcher::sharedDispatcher();
  this_01 = (CCTouchDispatcher *)cocos2d::CCTouchDispatcher::sharedDispatcher();
  cocos2d::CCTouchDispatcher::removeDelegate(this_01,(CCTouchDelegate *)(this + 0xfc));
  vInitScript();
  cocos2d::CCLayer::onExit((CCLayer *)this);
  return;
}


