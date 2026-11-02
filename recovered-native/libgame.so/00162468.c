/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00162468  Symbol: removeUnusedTextures */

/* cocos2d::CCTextureCache::removeUnusedTextures() */

void __thiscall cocos2d::CCTextureCache::removeUnusedTextures(CCTextureCache *this)

{
  CCObject *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int local_24;
  int local_20;
  undefined4 local_1c;
  
  iVar3 = *(int *)(this + 0x14);
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  iVar2 = local_24;
  if (*(int *)(iVar3 + 0x28) != 0) {
    for (iVar1 = *(int *)(iVar3 + 0x20); iVar2 = local_24, iVar1 != iVar3 + 0x18;
        iVar1 = FUN_001c7eac(iVar1)) {
      std::
      vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
      ::push_back((vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
                   *)&local_24,(basic_string *)(iVar1 + 0x10));
    }
  }
  for (; iVar2 != local_20; iVar2 = iVar2 + 4) {
    this_00 = (CCObject *)
              CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCTexture2D*>
              ::objectForKey(*(basic_string **)(this + 0x14));
    iVar3 = CCObject::retainCount(this_00);
    if (iVar3 == 1) {
      CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCTexture2D*>
      ::removeObjectForKey(*(basic_string **)(this + 0x14));
    }
  }
  std::
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
  ::~vector((vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
             *)&local_24);
  return;
}


