/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000b7b88  Symbol: applicationDidEnterBackground */

/* AppDelegate::applicationDidEnterBackground() */

void AppDelegate::applicationDidEnterBackground(void)

{
  bool bVar1;
  CCDirector *this;
  
  if (**(int **)(DAT_000b7bc4 + 0xb7b90) == 0xb) {
    cocos2d::CCNode::getChildByTag(**(CCNode ***)(DAT_000b7bc8 + 0xb7b9e),9);
    New_UI::Option();
  }
  this = (CCDirector *)cocos2d::CCDirector::sharedDirector();
  cocos2d::CCDirector::pause(this);
  bVar1 = (bool)CocosDenshion::SimpleAudioEngine::sharedEngine();
  CocosDenshion::SimpleAudioEngine::stopBackgroundMusic(bVar1);
  CocosDenshion::SimpleAudioEngine::sharedEngine();
  CocosDenshion::SimpleAudioEngine::stopAllEffects();
  return;
}


