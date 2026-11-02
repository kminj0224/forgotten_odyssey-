/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014ae98  Symbol: onExit */

/* cocos2d::CCTransitionCrossFade::onExit() */

void __thiscall cocos2d::CCTransitionCrossFade::onExit(CCTransitionCrossFade *this)

{
  CCNode::removeChildByTag((int)this,SUB41(DAT_0014aeac,0));
  CCTransitionScene::onExit((CCTransitionScene *)this);
  return;
}


