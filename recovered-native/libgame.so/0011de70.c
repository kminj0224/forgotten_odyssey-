/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011de70  Symbol: go_In_App_CP */

/* New_Notice::go_In_App_CP() */

void __thiscall New_Notice::go_In_App_CP(New_Notice *this)

{
  cocos2d::CCNode::removeFromParentAndCleanup((CCNode *)this,true);
  if (**(int **)(DAT_0011dea4 + 0x11de7e) == 0) {
    MarketLayer::set_In_App_Layer(**(int **)(DAT_0011deac + 0x11de9a));
  }
  else {
    GameScene::Draw_Cahs(**(int **)(DAT_0011dea8 + 0x11de8c));
  }
  return;
}


