/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00164a02  Symbol: setProperties */

/* cocos2d::CCTMXObjectGroup::setProperties(cocos2d::CCMutableDictionary<std::basic_string<char,
   std::char_traits<char>, std::allocator<char> >, cocos2d::CCString*>*) */

void __thiscall
cocos2d::CCTMXObjectGroup::setProperties(CCTMXObjectGroup *this,CCMutableDictionary *param_1)

{
  if (param_1 != (CCMutableDictionary *)0x0) {
    CCObject::retain((CCObject *)param_1);
  }
  if (*(CCObject **)(this + 0x1c) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x1c));
  }
  *(CCMutableDictionary **)(this + 0x1c) = param_1;
  return;
}


