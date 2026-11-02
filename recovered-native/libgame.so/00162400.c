/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00162400  Symbol: dumpCachedTextureInfo */

/* cocos2d::CCTextureCache::dumpCachedTextureInfo() */

void __thiscall cocos2d::CCTextureCache::dumpCachedTextureInfo(CCTextureCache *this)

{
  int *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int local_24;
  int local_20;
  undefined4 local_1c;
  
  iVar2 = *(int *)(this + 0x14);
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  iVar3 = local_24;
  if (*(int *)(iVar2 + 0x28) != 0) {
    for (iVar1 = *(int *)(iVar2 + 0x20); iVar3 = local_24, iVar1 != iVar2 + 0x18;
        iVar1 = FUN_001c7eac(iVar1)) {
      std::
      vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
      ::push_back((vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
                   *)&local_24,(basic_string *)(iVar1 + 0x10));
    }
  }
  while (iVar3 != local_20) {
    this_00 = (int *)CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCTexture2D*>
                     ::objectForKey(*(basic_string **)(this + 0x14));
    CCTexture2D::bitsPerPixelForFormat((CCTexture2D *)this_00);
    (**(code **)(*this_00 + 0x18))(this_00);
    (**(code **)(*this_00 + 0x1c))(this_00);
    iVar3 = iVar3 + 4;
  }
  std::
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
  ::~vector((vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
             *)&local_24);
  return;
}


