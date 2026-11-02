/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012b14c  Symbol: goStageMenu */

/* GameScene::goStageMenu() */

void __thiscall GameScene::goStageMenu(GameScene *this)

{
  CCScene *pCVar1;
  CCDirector *this_00;
  
  GameRemove(this);
  **(undefined4 **)(DAT_0012b170 + 0x12b15a) = 1;
  pCVar1 = (CCScene *)MainScene::scene();
  this_00 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
  cocos2d::CCDirector::replaceScene(this_00,pCVar1);
  return;
}


