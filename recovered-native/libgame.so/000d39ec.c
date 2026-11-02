/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d39ec  Symbol: onExit */

/* In_App_Layer::onExit() */

void __thiscall In_App_Layer::onExit(In_App_Layer *this)

{
  **(undefined **)(DAT_000d3a0c + 0xd39f6) = 0;
  **(undefined4 **)(DAT_000d3a10 + 0xd3a02) = *(undefined4 *)(this + 0x124);
  cocos2d::CCLayer::onExit((CCLayer *)this);
  return;
}


