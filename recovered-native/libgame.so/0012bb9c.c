/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012bb9c  Symbol: onExit */

/* IntroLayer::onExit() */

void __thiscall IntroLayer::onExit(IntroLayer *this)

{
  CCNode *pCVar1;
  CCSpriteFrameCache *this_00;
  CCTextureCache *pCVar2;
  CCTouchDispatcher *this_01;
  
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,2);
  KG_removeChild(pCVar1,true);
  this_00 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::removeSpriteFrames(this_00);
  cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::removeUnusedSpriteFrames();
  pCVar2 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
  cocos2d::CCTextureCache::removeUnusedTextures(pCVar2);
  pCVar2 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
  cocos2d::CCTextureCache::removeAllTextures(pCVar2);
  cocos2d::CCDirector::sharedDirector();
  cocos2d::CCDirector::purgeCachedData();
  (**(code **)(*(int *)this + 0xd4))(this,1);
  cocos2d::CCTouchDispatcher::sharedDispatcher();
  this_01 = (CCTouchDispatcher *)cocos2d::CCTouchDispatcher::sharedDispatcher();
  cocos2d::CCTouchDispatcher::removeDelegate(this_01,(CCTouchDelegate *)(this + 0xfc));
  cocos2d::CCLayer::onExit((CCLayer *)this);
  return;
}


