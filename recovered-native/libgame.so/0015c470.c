/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015c470  Symbol: removeSpriteFramesFromDictionary */

/* cocos2d::CCSpriteFrameCache::removeSpriteFramesFromDictionary(cocos2d::CCMutableDictionary<std::basic_string<char,
   std::char_traits<char>, std::allocator<char> >, cocos2d::CCSpriteFrame*>*) */

void __thiscall
cocos2d::CCSpriteFrameCache::removeSpriteFramesFromDictionary
          (CCSpriteFrameCache *this,CCMutableDictionary *param_1)

{
  CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>
  *this_00;
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  undefined auStack_2c [4];
  undefined auStack_28 [4];
  undefined auStack_24 [4];
  basic_string bStack_20;
  void *local_1c;
  void *local_18;
  undefined4 local_14;
  
  FUN_001eed40(auStack_24,DAT_0015c51c + 0x15c47e,auStack_2c);
  this_00 = (CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>
             *)CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCSpriteFrame*>
               ::objectForKey((basic_string *)param_1);
  FUN_001ed6b8(auStack_24);
  local_1c = (void *)0x0;
  local_18 = (void *)0x0;
  local_14 = 0;
  if (*(int *)(this_00 + 0x28) != 0) {
    *(undefined4 *)(this_00 + 0x30) = *(undefined4 *)(this_00 + 0x20);
    this_00[0x2c] =
         (CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>
          )0x1;
  }
  FUN_001eed40(&bStack_20,DAT_0015c520 + 0x15c4b8,auStack_28);
  while (iVar1 = CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>
                 ::next(this_00,&bStack_20), iVar1 != 0) {
    iVar1 = CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCSpriteFrame*>
            ::objectForKey(*(basic_string **)(this + 0x14));
    if (iVar1 != 0) {
      std::
      vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
      ::push_back((vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
                   *)&local_1c,&bStack_20);
    }
  }
  this_00[0x2c] =
       (CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>
        )0x0;
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


