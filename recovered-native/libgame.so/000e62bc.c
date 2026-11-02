/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e62bc  Symbol: onEnter */

/* Market_Unit::onEnter() */

void __thiscall Market_Unit::onEnter(Market_Unit *this)

{
  cocos2d::CCLayer::onEnter((CCLayer *)this);
  *(undefined4 *)(this + 0x13c) = 0;
  Self_Loding();
  cocos2d::CCNode::scheduleUpdate((CCNode *)this);
  return;
}


