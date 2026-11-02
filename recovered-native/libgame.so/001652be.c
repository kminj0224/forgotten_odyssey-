/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001652be  Symbol: setTileSize */

/* cocos2d::CCTMXMapInfo::setTileSize(cocos2d::CCSize const&) */

void __thiscall cocos2d::CCTMXMapInfo::setTileSize(CCTMXMapInfo *this,CCSize *param_1)

{
  *(CCSize *)(this + 0x24) = *param_1;
  *(CCSize *)(this + 0x28) = param_1[1];
  return;
}


