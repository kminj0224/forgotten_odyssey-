/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000df39c  Symbol: onEnter */

/* Market_Hero::onEnter() */

void __thiscall Market_Hero::onEnter(Market_Hero *this)

{
  cocos2d::CCLayer::onEnter((CCLayer *)this);
  this[0x124] = (Market_Hero)0x0;
  *(undefined4 *)(this + 0x120) = 0;
  Self_Loding();
  cocos2d::CCNode::scheduleUpdate((CCNode *)this);
  return;
}


