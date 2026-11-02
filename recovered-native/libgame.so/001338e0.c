/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001338e0  Symbol: onEnter */

/* GameOption::onEnter() */

void __thiscall GameOption::onEnter(GameOption *this)

{
  int iVar1;
  bool bVar2;
  CCSpriteFrameCache *this_00;
  
  cocos2d::CCLayer::onEnter((CCLayer *)this);
  (**(code **)(*(int *)this + 0x114))(this,1);
  bVar2 = (bool)CocosDenshion::SimpleAudioEngine::sharedEngine();
  CocosDenshion::SimpleAudioEngine::stopBackgroundMusic(bVar2);
  CocosDenshion::SimpleAudioEngine::sharedEngine();
  CocosDenshion::SimpleAudioEngine::stopAllEffects();
  this_00 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  iVar1 = DAT_00133920;
  *(CCSpriteFrameCache **)(this + 0x110) = this_00;
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(this_00,(char *)(iVar1 + 0x133916));
  FileLode(this);
  return;
}


