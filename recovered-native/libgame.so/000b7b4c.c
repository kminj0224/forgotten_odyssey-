/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000b7b4c  Symbol: applicationWillEnterForeground */

/* AppDelegate::applicationWillEnterForeground() */

void AppDelegate::applicationWillEnterForeground(void)

{
  char *pcVar1;
  CCDirector *this;
  
  cocos2d::CCDirector::sharedDirector();
  cocos2d::CCDirector::resume();
  if (**(int **)(DAT_000b7b80 + 0xb7b5c) != 0xb) {
    pcVar1 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
    CocosDenshion::SimpleAudioEngine::playBackgroundMusic
              (pcVar1,SUB41(*(undefined4 *)(DAT_000b7b84 + 0xb7b6e),0));
  }
  this = (CCDirector *)cocos2d::CCDirector::sharedDirector();
  cocos2d::CCDirector::setDepthTest(this,false);
  return;
}


