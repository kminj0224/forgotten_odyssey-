/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e847c  Symbol: onEnter */

/* ReinforcementLayer::onEnter() */

void __thiscall ReinforcementLayer::onEnter(ReinforcementLayer *this)

{
  cocos2d::CCLayer::onEnter((CCLayer *)this);
  (**(code **)(*(int *)this + 0x114))(this,1);
  *(undefined4 *)(this + 0x110) = 0;
  return;
}


