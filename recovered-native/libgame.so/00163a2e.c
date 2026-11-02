/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00163a2e  Symbol: setProperties */

/* cocos2d::CCTMXLayer::setProperties(cocos2d::CCMutableDictionary<std::basic_string<char,
   std::char_traits<char>, std::allocator<char> >, cocos2d::CCString*>*) */

void __thiscall cocos2d::CCTMXLayer::setProperties(CCTMXLayer *this,CCMutableDictionary *param_1)

{
  if (param_1 != (CCMutableDictionary *)0x0) {
    CCObject::retain((CCObject *)param_1);
  }
  if (*(CCObject **)(this + 300) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 300));
  }
  *(CCMutableDictionary **)(this + 300) = param_1;
  return;
}


