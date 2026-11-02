/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e8384  Symbol: onExit */

/* ReinforcementLayer::onExit() */

void __thiscall ReinforcementLayer::onExit(ReinforcementLayer *this)

{
  cocos2d::CCNode::unscheduleUpdate((CCNode *)this);
  cocos2d::CCLayer::onExit((CCLayer *)this);
  return;
}


