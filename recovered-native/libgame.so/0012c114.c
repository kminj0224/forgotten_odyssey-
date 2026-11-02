/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012c114  Symbol: onExit */

/* LodingLayer::onExit() */

void __thiscall LodingLayer::onExit(LodingLayer *this)

{
  (**(code **)(*(int *)this + 0xd0))(this,*(undefined4 *)(this + 0x110),1);
  cocos2d::CCLayer::onExit((CCLayer *)this);
  return;
}


