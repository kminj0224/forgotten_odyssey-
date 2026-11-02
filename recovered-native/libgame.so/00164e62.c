/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00164e62  Symbol: layerNamed */

/* cocos2d::CCTMXTiledMap::layerNamed(char const*) */

undefined8 cocos2d::CCTMXTiledMap::layerNamed(char *param_1)

{
  int iVar1;
  undefined4 in_r1;
  int iVar2;
  undefined4 uVar3;
  char *pcStack_18;
  undefined auStack_14 [8];
  
  pcStack_18 = param_1;
  FUN_001eed40(auStack_14,in_r1,&pcStack_18);
  iVar2 = *(int *)(param_1 + 0x11c);
  uVar3 = 0;
  iVar1 = std::
          _Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCTMXLayer*>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCTMXLayer*>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCTMXLayer*>>>
          ::find((basic_string *)(iVar2 + 0x14));
  if (iVar1 != iVar2 + 0x18) {
    uVar3 = *(undefined4 *)(iVar1 + 0x14);
  }
  FUN_001ed6b8(auStack_14);
  return CONCAT44(pcStack_18,uVar3);
}


