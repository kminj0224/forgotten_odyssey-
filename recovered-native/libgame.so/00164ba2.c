/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00164ba2  Symbol: setTileSize */

/* cocos2d::CCTMXTiledMap::setTileSize(cocos2d::CCSize const&) */

void __thiscall cocos2d::CCTMXTiledMap::setTileSize(CCTMXTiledMap *this,CCSize *param_1)

{
  *(CCSize *)(this + 0x104) = *param_1;
  *(CCSize *)(this + 0x108) = param_1[1];
  return;
}


