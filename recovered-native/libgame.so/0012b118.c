/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012b118  Symbol: go_Restart */

/* GameScene::go_Restart() */

void __thiscall GameScene::go_Restart(GameScene *this)

{
  CCScene *pCVar1;
  CCDirector *this_00;
  
  GameRemove(this);
  **(undefined4 **)(DAT_0012b144 + 0x12b126) = 3;
  **(undefined4 **)(DAT_0012b148 + 0x12b130) = 2;
  pCVar1 = (CCScene *)MainScene::scene();
  this_00 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
  cocos2d::CCDirector::replaceScene(this_00,pCVar1);
  return;
}


