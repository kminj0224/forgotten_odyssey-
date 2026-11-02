/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016576c  Symbol: setTileProperties */

/* cocos2d::CCTMXMapInfo::setTileProperties(cocos2d::CCMutableDictionary<int,
   cocos2d::CCMutableDictionary<std::basic_string<char, std::char_traits<char>, std::allocator<char>
   >, cocos2d::CCString*>*>*) */

void __thiscall
cocos2d::CCTMXMapInfo::setTileProperties(CCTMXMapInfo *this,CCMutableDictionary *param_1)

{
  if (param_1 != (CCMutableDictionary *)0x0) {
    CCObject::retain((CCObject *)param_1);
  }
  if (*(CCObject **)(this + 0x54) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x54));
  }
  *(CCMutableDictionary **)(this + 0x54) = param_1;
  return;
}


