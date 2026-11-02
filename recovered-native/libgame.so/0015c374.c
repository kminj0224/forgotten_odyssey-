/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015c374  Symbol: removeSpriteFrameByName */

/* cocos2d::CCSpriteFrameCache::removeSpriteFrameByName(char const*) */

void __thiscall
cocos2d::CCSpriteFrameCache::removeSpriteFrameByName(CCSpriteFrameCache *this,char *param_1)

{
  int iVar1;
  basic_string *pbVar2;
  undefined auStack_28 [4];
  undefined auStack_24 [4];
  undefined auStack_20 [4];
  undefined auStack_1c [8];
  
  if (param_1 != (char *)0x0) {
    pbVar2 = *(basic_string **)(this + 0x18);
    FUN_001eed40(auStack_20,param_1,auStack_28);
    iVar1 = CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
            ::objectForKey(pbVar2);
    FUN_001ed6b8(auStack_20);
    pbVar2 = *(basic_string **)(this + 0x14);
    if (iVar1 == 0) {
      FUN_001eed40(auStack_1c,param_1,auStack_24);
      CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCSpriteFrame*>
      ::removeObjectForKey(pbVar2);
      FUN_001ed6b8(auStack_1c);
    }
    else {
      CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCSpriteFrame*>
      ::removeObjectForKey(pbVar2);
      CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
      ::removeObjectForKey(*(basic_string **)(this + 0x18));
    }
  }
  return;
}


