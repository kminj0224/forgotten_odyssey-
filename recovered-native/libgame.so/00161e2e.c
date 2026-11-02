/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00161e2e  Symbol: removeTextureForKey */

/* cocos2d::CCTextureCache::removeTextureForKey(char const*) */

undefined8 __thiscall
cocos2d::CCTextureCache::removeTextureForKey(CCTextureCache *this,char *param_1)

{
  undefined4 uVar1;
  CCTextureCache *pCStack_10;
  char *pcStack_c;
  
  pCStack_10 = this;
  pcStack_c = param_1;
  if (param_1 != (char *)0x0) {
    uVar1 = CCFileUtils::fullPathFromRelativePath(param_1);
    FUN_001eed40(&pcStack_c,uVar1,&pCStack_10);
    CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCTexture2D*>
    ::removeObjectForKey(*(basic_string **)(this + 0x14));
    FUN_001ed6b8(&pcStack_c);
  }
  return CONCAT44(pcStack_c,pCStack_10);
}


