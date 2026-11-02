/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001639ee  Symbol: setMapTileSize */

/* cocos2d::CCTMXLayer::setMapTileSize(cocos2d::CCSize const&) */

void __thiscall cocos2d::CCTMXLayer::setMapTileSize(CCTMXLayer *this,CCSize *param_1)

{
  *(CCSize *)(this + 0x118) = *param_1;
  *(CCSize *)(this + 0x11c) = param_1[1];
  return;
}


