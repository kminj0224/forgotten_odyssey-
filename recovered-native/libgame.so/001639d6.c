/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001639d6  Symbol: setLayerSize */

/* cocos2d::CCTMXLayer::setLayerSize(cocos2d::CCSize const&) */

void __thiscall cocos2d::CCTMXLayer::setLayerSize(CCTMXLayer *this,CCSize *param_1)

{
  *(CCSize *)(this + 0x110) = *param_1;
  *(CCSize *)(this + 0x114) = param_1[1];
  return;
}


