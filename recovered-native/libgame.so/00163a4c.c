/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00163a4c  Symbol: setTileSet */

/* cocos2d::CCTMXLayer::setTileSet(cocos2d::CCTMXTilesetInfo*) */

void __thiscall cocos2d::CCTMXLayer::setTileSet(CCTMXLayer *this,CCTMXTilesetInfo *param_1)

{
  if (param_1 != (CCTMXTilesetInfo *)0x0) {
    CCObject::retain((CCObject *)param_1);
  }
  if (*(CCObject **)(this + 0x124) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x124));
  }
  *(CCTMXTilesetInfo **)(this + 0x124) = param_1;
  return;
}


