/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012b0f0  Symbol: go_Market */

/* GameScene::go_Market() */

void __thiscall GameScene::go_Market(GameScene *this)

{
  CCScene *pCVar1;
  CCDirector *this_00;
  
  **(undefined4 **)(DAT_0012b114 + 0x12b0fa) = 8;
  GameRemove(this);
  pCVar1 = (CCScene *)MainScene::scene();
  this_00 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
  cocos2d::CCDirector::replaceScene(this_00,pCVar1);
  return;
}


