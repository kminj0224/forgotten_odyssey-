/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015c3d4  Symbol: removeSpriteFramesFromTexture */

/* cocos2d::CCSpriteFrameCache::removeSpriteFramesFromTexture(cocos2d::CCTexture2D*) */

void __thiscall
cocos2d::CCSpriteFrameCache::removeSpriteFramesFromTexture
          (CCSpriteFrameCache *this,CCTexture2D *param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  undefined auStack_24 [4];
  basic_string bStack_20;
  void *local_1c;
  void *local_18;
  undefined4 local_14;
  
  local_1c = (void *)0x0;
  local_18 = (void *)0x0;
  local_14 = 0;
  iVar1 = *(int *)(this + 0x14);
  if (*(int *)(iVar1 + 0x28) != 0) {
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x20);
    *(undefined *)(iVar1 + 0x2c) = 1;
  }
  FUN_001eed40(&bStack_20,DAT_0015c46c + 0x15c400,auStack_24);
  while( true ) {
    iVar1 = CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCSpriteFrame*>
            ::next(*(CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCSpriteFrame*>
                     **)(this + 0x14),&bStack_20);
    if (iVar1 == 0) break;
    iVar1 = CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCSpriteFrame*>
            ::objectForKey(*(basic_string **)(this + 0x14));
    if ((iVar1 != 0) && (*(CCTexture2D **)(iVar1 + 0x48) == param_1)) {
      std::
      vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
      ::push_back((vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
                   *)&local_1c,&bStack_20);
    }
  }
  *(undefined *)(*(basic_string **)(this + 0x14) + 0xb) = 0;
  pvVar2 = local_1c;
  while( true ) {
    if (pvVar2 == local_18) break;
    CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCSpriteFrame*>
    ::removeObjectForKey(*(basic_string **)(this + 0x14));
    pvVar2 = (void *)((int)pvVar2 + 4);
  }
  FUN_001ed6b8(&bStack_20);
  pvVar2 = local_18;
  for (pvVar3 = local_1c; pvVar3 != pvVar2; pvVar3 = (void *)((int)pvVar3 + 4)) {
    FUN_001ed6b8(pvVar3);
  }
  if (local_1c != (void *)0x0) {
    operator_delete(local_1c);
  }
  return;
}


