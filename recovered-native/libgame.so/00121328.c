/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00121328  Symbol: removeStart_UI */

/* GameScene::removeStart_UI() */

void GameScene::removeStart_UI(void)

{
  int *in_r0;
  undefined4 uVar1;
  CCNode *this;
  CCSpriteFrameCache *this_00;
  
  if (*(int *)(**(int **)(DAT_00121380 + 0x121334) +
               (**(int **)(DAT_00121388 + 0x12133c) + DAT_00121384) * 4 + 4) == 3) {
    uVar1 = Tutorial_Layer::node();
    (**(code **)(*in_r0 + 0xcc))(in_r0,uVar1,0x16,0x16);
  }
  this = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,4);
  cocos2d::CCNode::removeFromParentAndCleanup(this,true);
  KG_Remove_Memory();
  this_00 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile(this_00,(char *)(DAT_0012138c + 0x12137a))
  ;
  return;
}


