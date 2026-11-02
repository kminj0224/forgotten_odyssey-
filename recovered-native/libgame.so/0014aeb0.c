/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014aeb0  Symbol: onExit */

/* cocos2d::CCTransitionFade::onExit() */

void __thiscall cocos2d::CCTransitionFade::onExit(CCTransitionFade *this)

{
  CCTransitionScene::onExit((CCTransitionScene *)this);
  CCNode::removeChildByTag((int)this,SUB41(DAT_0014aec4,0));
  return;
}


