/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011db7c  Symbol: goMarket */

/* New_Notice::goMarket() */

void New_Notice::goMarket(void)

{
  bool bVar1;
  int iVar2;
  
  GameScene::go_Market(**(GameScene ***)(DAT_0011dba8 + 0x11db84));
  iVar2 = cocos2d::CCScheduler::sharedScheduler();
  *(undefined4 *)(iVar2 + 0x14) = 0x3f800000;
  bVar1 = (bool)CocosDenshion::SimpleAudioEngine::sharedEngine();
  CocosDenshion::SimpleAudioEngine::stopBackgroundMusic(bVar1);
  CocosDenshion::SimpleAudioEngine::sharedEngine();
  CocosDenshion::SimpleAudioEngine::stopAllEffects();
  return;
}


