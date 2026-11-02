/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00164bcc  Symbol: setProperties */

/* cocos2d::CCTMXTiledMap::setProperties(cocos2d::CCMutableDictionary<std::basic_string<char,
   std::char_traits<char>, std::allocator<char> >, cocos2d::CCString*>*) */

void __thiscall
cocos2d::CCTMXTiledMap::setProperties(CCTMXTiledMap *this,CCMutableDictionary *param_1)

{
  if (param_1 != (CCMutableDictionary *)0x0) {
    CCObject::retain((CCObject *)param_1);
  }
  if (*(CCObject **)(this + 0x114) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x114));
  }
  *(CCMutableDictionary **)(this + 0x114) = param_1;
  return;
}


