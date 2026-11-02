/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015c2e0  Symbol: spriteFrameByName */

/* cocos2d::CCSpriteFrameCache::spriteFrameByName(char const*) */

int __thiscall
cocos2d::CCSpriteFrameCache::spriteFrameByName(CCSpriteFrameCache *this,char *param_1)

{
  int iVar1;
  int iVar2;
  basic_string *pbVar3;
  undefined auStack_28 [4];
  undefined auStack_24 [4];
  undefined auStack_20 [4];
  undefined auStack_1c [8];
  
  pbVar3 = *(basic_string **)(this + 0x14);
  FUN_001eed40(auStack_20,param_1,auStack_28);
  iVar1 = CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCSpriteFrame*>
          ::objectForKey(pbVar3);
  FUN_001ed6b8(auStack_20);
  if (iVar1 == 0) {
    pbVar3 = *(basic_string **)(this + 0x18);
    FUN_001eed40(auStack_1c,param_1,auStack_24);
    iVar2 = CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
            ::objectForKey(pbVar3);
    FUN_001ed6b8(auStack_1c);
    if (iVar2 != 0) {
      iVar1 = CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCSpriteFrame*>
              ::objectForKey(*(basic_string **)(this + 0x14));
    }
  }
  return iVar1;
}


