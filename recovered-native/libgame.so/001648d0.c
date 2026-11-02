/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001648d0  Symbol: layerWithTilesetInfo */

/* cocos2d::CCTMXLayer::layerWithTilesetInfo(cocos2d::CCTMXTilesetInfo*, cocos2d::CCTMXLayerInfo*,
   cocos2d::CCTMXMapInfo*) */

CCTMXLayer *
cocos2d::CCTMXLayer::layerWithTilesetInfo
          (CCTMXTilesetInfo *param_1,CCTMXLayerInfo *param_2,CCTMXMapInfo *param_3)

{
  CCTMXLayer *this;
  int iVar1;
  
  this = (CCTMXLayer *)operator_new(0x158);
  CCTMXLayer(this);
  iVar1 = initWithTilesetInfo(this,param_1,param_2,param_3);
  if (iVar1 == 0) {
    this = (CCTMXLayer *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


