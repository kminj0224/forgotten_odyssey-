/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014a488  Symbol: layerWithLayer */

/* cocos2d::CCLayerMultiplex::layerWithLayer(cocos2d::CCLayer*) */

CCLayerMultiplex * cocos2d::CCLayerMultiplex::layerWithLayer(CCLayer *param_1)

{
  CCLayerMultiplex *this;
  
  this = (CCLayerMultiplex *)operator_new(0x118);
  CCLayerMultiplex(this);
  initWithLayer(this,param_1);
  CCObject::autorelease((CCObject *)this);
  return this;
}


