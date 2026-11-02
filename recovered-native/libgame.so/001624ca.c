/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001624ca  Symbol: removeTexture */

/* cocos2d::CCTextureCache::removeTexture(cocos2d::CCTexture2D*) */

void __thiscall cocos2d::CCTextureCache::removeTexture(CCTextureCache *this,CCTexture2D *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_24;
  int local_20;
  undefined4 local_1c;
  
  if (param_1 != (CCTexture2D *)0x0) {
    iVar3 = *(int *)(this + 0x14);
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    if (*(int *)(iVar3 + 0x28) != 0) {
      for (iVar1 = *(int *)(iVar3 + 0x20); iVar1 != iVar3 + 0x18; iVar1 = FUN_001c7eac(iVar1)) {
        if (*(CCTexture2D **)(iVar1 + 0x14) == param_1) {
          std::
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
          ::push_back((vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
                       *)&local_24,(basic_string *)(iVar1 + 0x10));
        }
      }
    }
    for (uVar2 = 0; uVar2 < (uint)(local_20 - local_24 >> 2); uVar2 = uVar2 + 1) {
      CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCTexture2D*>
      ::removeObjectForKey(*(basic_string **)(this + 0x14));
    }
    std::
    vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
    ::~vector((vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
               *)&local_24);
  }
  return;
}


