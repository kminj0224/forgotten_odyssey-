/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001652b0  Symbol: setMapSize */

/* cocos2d::CCTMXMapInfo::setMapSize(cocos2d::CCSize const&) */

void __thiscall cocos2d::CCTMXMapInfo::setMapSize(CCTMXMapInfo *this,CCSize *param_1)

{
  *(CCSize *)(this + 0x1c) = *param_1;
  *(CCSize *)(this + 0x20) = param_1[1];
  return;
}


