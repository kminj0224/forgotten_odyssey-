/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001655ba  Symbol: setLayers */

/* cocos2d::CCTMXMapInfo::setLayers(cocos2d::CCMutableArray<cocos2d::CCTMXLayerInfo*>*) */

void __thiscall cocos2d::CCTMXMapInfo::setLayers(CCTMXMapInfo *this,CCMutableArray *param_1)

{
  if (param_1 != (CCMutableArray *)0x0) {
    CCObject::retain((CCObject *)param_1);
  }
  if (*(CCObject **)(this + 0x2c) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x2c));
  }
  *(CCMutableArray **)(this + 0x2c) = param_1;
  return;
}


