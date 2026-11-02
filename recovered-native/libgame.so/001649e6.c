/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001649e6  Symbol: setObjects */

/* cocos2d::CCTMXObjectGroup::setObjects(cocos2d::CCMutableArray<cocos2d::CCMutableDictionary<std::basic_string<char,
   std::char_traits<char>, std::allocator<char> >, cocos2d::CCString*>*>*) */

void __thiscall
cocos2d::CCTMXObjectGroup::setObjects(CCTMXObjectGroup *this,CCMutableArray *param_1)

{
  if (param_1 != (CCMutableArray *)0x0) {
    CCObject::retain((CCObject *)param_1);
  }
  if (*(CCObject **)(this + 0x20) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x20));
  }
  *(CCMutableArray **)(this + 0x20) = param_1;
  return;
}


