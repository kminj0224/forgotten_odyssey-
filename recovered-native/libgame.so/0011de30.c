/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011de30  Symbol: go_In_App */

/* New_Notice::go_In_App() */

void __thiscall New_Notice::go_In_App(New_Notice *this)

{
  cocos2d::CCNode::removeFromParentAndCleanup((CCNode *)this,true);
  if (**(int **)(DAT_0011de64 + 0x11de3e) == 0) {
    MarketLayer::set_In_App_Layer(**(int **)(DAT_0011de6c + 0x11de5c));
  }
  else {
    GameScene::Draw_Cahs(**(int **)(DAT_0011de68 + 0x11de4c));
  }
  return;
}


