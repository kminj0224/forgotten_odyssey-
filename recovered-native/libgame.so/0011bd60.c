/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011bd60  Symbol: onEnter */

/* New_Notice::onEnter() */

void __thiscall New_Notice::onEnter(New_Notice *this)

{
  cocos2d::CCLayer::onEnter((CCLayer *)this);
  **(undefined **)(DAT_0011bd80 + 0x11bd72) = 1;
  (**(code **)(*(int *)this + 0x114))(this);
  return;
}


