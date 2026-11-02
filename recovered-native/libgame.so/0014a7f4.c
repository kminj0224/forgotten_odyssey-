/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014a7f4  Symbol: onExit */

/* cocos2d::CCTransitionRadialCCW::onExit() */

void __thiscall cocos2d::CCTransitionRadialCCW::onExit(CCTransitionRadialCCW *this)

{
  CCNode::removeChildByTag((int)this,SUB41(DAT_0014a808,0));
  CCTransitionScene::onExit((CCTransitionScene *)this);
  return;
}


