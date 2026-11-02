/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016559e  Symbol: setTilesets */

/* cocos2d::CCTMXMapInfo::setTilesets(cocos2d::CCMutableArray<cocos2d::CCTMXTilesetInfo*>*) */

void __thiscall cocos2d::CCTMXMapInfo::setTilesets(CCTMXMapInfo *this,CCMutableArray *param_1)

{
  if (param_1 != (CCMutableArray *)0x0) {
    CCObject::retain((CCObject *)param_1);
  }
  if (*(CCObject **)(this + 0x30) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x30));
  }
  *(CCMutableArray **)(this + 0x30) = param_1;
  return;
}


