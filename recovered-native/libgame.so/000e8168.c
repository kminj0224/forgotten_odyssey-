/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e8168  Symbol: onEnter */

/* PayLayer::onEnter() */

void __thiscall PayLayer::onEnter(PayLayer *this)

{
  cocos2d::CCLayer::onEnter((CCLayer *)this);
  (**(code **)(*(int *)this + 0x114))(this,1);
  Lode_File(this);
  return;
}


