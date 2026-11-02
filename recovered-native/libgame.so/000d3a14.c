/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d3a14  Symbol: onEnter */

/* In_App_Layer::onEnter() */

void __thiscall In_App_Layer::onEnter(In_App_Layer *this)

{
  cocos2d::CCLayer::onEnter((CCLayer *)this);
  (**(code **)(*(int *)this + 0x114))(this,1);
  **(undefined **)(DAT_000d3a44 + 0xd3a32) = 1;
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  return;
}


