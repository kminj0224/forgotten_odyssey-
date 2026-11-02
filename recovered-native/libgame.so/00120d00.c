/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00120d00  Symbol: menuCloseCallback */

/* GameScene::menuCloseCallback(cocos2d::CCObject*) */

void GameScene::menuCloseCallback(CCObject *param_1)

{
  CCDirector *this;
  
  this = (CCDirector *)cocos2d::CCDirector::sharedDirector();
  cocos2d::CCDirector::end(this);
  return;
}


