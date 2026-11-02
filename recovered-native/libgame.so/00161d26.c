/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00161d26  Symbol: removeAllTextures */

/* cocos2d::CCTextureCache::removeAllTextures() */

void __thiscall cocos2d::CCTextureCache::removeAllTextures(CCTextureCache *this)

{
  CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCTexture2D*>
  ::removeAllObjects(*(CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCTexture2D*>
                       **)(this + 0x14));
  return;
}


