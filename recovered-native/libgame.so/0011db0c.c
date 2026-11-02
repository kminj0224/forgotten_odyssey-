/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011db0c  Symbol: goMainMenu */

/* New_Notice::goMainMenu() */

void __thiscall New_Notice::goMainMenu(New_Notice *this)

{
  bool bVar1;
  int *piVar2;
  GameScene *this_00;
  CCScene *pCVar3;
  CCDirector *this_01;
  
  piVar2 = (int *)(**(code **)(*(int *)this + 0x90))();
  this_00 = (GameScene *)(**(code **)(*piVar2 + 0x90))();
  GameScene::GameRemove(this_00);
  **(undefined4 **)(DAT_0011db50 + 0x11db2a) = 9;
  pCVar3 = (CCScene *)MainScene::scene();
  this_01 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
  cocos2d::CCDirector::replaceScene(this_01,pCVar3);
  bVar1 = (bool)CocosDenshion::SimpleAudioEngine::sharedEngine();
  CocosDenshion::SimpleAudioEngine::stopBackgroundMusic(bVar1);
  CocosDenshion::SimpleAudioEngine::sharedEngine();
  CocosDenshion::SimpleAudioEngine::stopAllEffects();
  return;
}


