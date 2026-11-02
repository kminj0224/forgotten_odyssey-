/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015c230  Symbol: removeUnusedSpriteFrames */

/* cocos2d::CCSpriteFrameCache::removeUnusedSpriteFrames() */

undefined8 cocos2d::CCSpriteFrameCache::removeUnusedSpriteFrames(void)

{
  int in_r0;
  CCObject *this;
  basic_string in_r1;
  int iVar1;
  int iStack_18;
  basic_string abStack_14 [2];
  
  iVar1 = *(int *)(in_r0 + 0x14);
  if (*(int *)(iVar1 + 0x28) != 0) {
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x20);
    *(undefined *)(iVar1 + 0x2c) = 1;
  }
  iStack_18 = in_r0;
  abStack_14[0] = in_r1;
  FUN_001eed40(abStack_14,DAT_0015c280 + 0x15c250,&iStack_18);
  while (this = (CCObject *)
                CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCSpriteFrame*>
                ::next(*(CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCSpriteFrame*>
                         **)(in_r0 + 0x14),abStack_14), this != (CCObject *)0x0) {
    iVar1 = CCObject::retainCount(this);
    if (iVar1 == 1) {
      CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCSpriteFrame*>
      ::removeObjectForKey(*(basic_string **)(in_r0 + 0x14));
    }
  }
  *(undefined *)(*(int *)(in_r0 + 0x14) + 0x2c) = 0;
  FUN_001ed6b8(abStack_14);
  return CONCAT44(abStack_14[0],iStack_18);
}


