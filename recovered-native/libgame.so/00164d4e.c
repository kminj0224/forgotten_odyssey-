/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00164d4e  Symbol: parseLayer */

/* cocos2d::CCTMXTiledMap::parseLayer(cocos2d::CCTMXLayerInfo*, cocos2d::CCTMXMapInfo*) */

CCTMXLayer * __thiscall
cocos2d::CCTMXTiledMap::parseLayer
          (CCTMXTiledMap *this,CCTMXLayerInfo *param_1,CCTMXMapInfo *param_2)

{
  CCTMXTilesetInfo *pCVar1;
  CCTMXLayer *this_00;
  
  pCVar1 = (CCTMXTilesetInfo *)tilesetForLayer(this,param_1,param_2);
  this_00 = (CCTMXLayer *)CCTMXLayer::layerWithTilesetInfo(pCVar1,param_1,param_2);
  param_1[0x2a] = (CCTMXLayerInfo)0x0;
  CCTMXLayer::setupTiles(this_00);
  return this_00;
}


