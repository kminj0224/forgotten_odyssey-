/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015c0f0  Symbol: removeSpriteFrames */

/* cocos2d::CCSpriteFrameCache::removeSpriteFrames() */

void __thiscall cocos2d::CCSpriteFrameCache::removeSpriteFrames(CCSpriteFrameCache *this)

{
  CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCSpriteFrame*>
  ::removeAllObjects(*(CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCSpriteFrame*>
                       **)(this + 0x14));
  CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
  ::removeAllObjects(*(CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
                       **)(this + 0x18));
  return;
}


