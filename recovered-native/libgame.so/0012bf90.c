/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012bf90  Symbol: ccTouchEnded */

/* IntroLayer::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) */

void IntroLayer::ccTouchEnded(CCTouch *param_1,CCEvent *param_2)

{
  int iVar1;
  
  cocos2d::CCNode::getChildByTag((CCNode *)param_1,4);
  iVar1 = cocos2d::CCNode::numberOfRunningActions();
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    cocos2d::CCLog((char *)(DAT_0012bfe0 + 0x12bfa8));
  }
  return;
}


