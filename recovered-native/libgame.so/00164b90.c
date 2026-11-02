/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00164b90  Symbol: setMapSize */

/* cocos2d::CCTMXTiledMap::setMapSize(cocos2d::CCSize const&) */

void __thiscall cocos2d::CCTMXTiledMap::setMapSize(CCTMXTiledMap *this,CCSize *param_1)

{
  *(CCSize *)(this + 0xfc) = *param_1;
  *(CCSize *)(this + 0x100) = param_1[1];
  return;
}


