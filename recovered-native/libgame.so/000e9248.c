/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e9248  Symbol: onEnter */

/* KG_RandomBox::onEnter() */

void __thiscall KG_RandomBox::onEnter(KG_RandomBox *this)

{
  cocos2d::CCLayer::onEnter((CCLayer *)this);
  *(undefined4 *)(this + 0x110) = 0;
  Lode_File(this);
  cocos2d::CCNode::scheduleUpdate((CCNode *)this);
  return;
}


