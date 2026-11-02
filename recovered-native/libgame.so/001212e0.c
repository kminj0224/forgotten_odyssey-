/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001212e0  Symbol: GameOver_Notice */

/* GameScene::GameOver_Notice() */

void __thiscall GameScene::GameOver_Notice(GameScene *this)

{
  int iVar1;
  CCNode *this_00;
  New_Notice *this_01;
  
  iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,0xd);
  if (iVar1 == 0) {
    this_00 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0xb);
    cocos2d::CCNode::removeFromParentAndCleanup(this_00,true);
    this_01 = (New_Notice *)New_Notice::node();
    (**(code **)(*(int *)this + 0xcc))(this,this_01,0xd,0xd);
    New_Notice::noticeWithType(this_01,(char *)(DAT_00121324 + 0x12131c),0x17,1);
  }
  return;
}


