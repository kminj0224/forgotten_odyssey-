/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001655d6  Symbol: setProperties */

/* cocos2d::CCTMXLayerInfo::setProperties(cocos2d::CCMutableDictionary<std::basic_string<char,
   std::char_traits<char>, std::allocator<char> >, cocos2d::CCString*>*) */

void __thiscall
cocos2d::CCTMXLayerInfo::setProperties(CCTMXLayerInfo *this,CCMutableDictionary *param_1)

{
  if (param_1 != (CCMutableDictionary *)0x0) {
    CCObject::retain((CCObject *)param_1);
  }
  if (*(CCObject **)(this + 0x14) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x14));
  }
  *(CCMutableDictionary **)(this + 0x14) = param_1;
  return;
}


