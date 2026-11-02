/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001597c6  Symbol: removeAnimationByName */

/* cocos2d::CCAnimationCache::removeAnimationByName(char const*) */

undefined8 __thiscall
cocos2d::CCAnimationCache::removeAnimationByName(CCAnimationCache *this,char *param_1)

{
  basic_string *pbVar1;
  CCAnimationCache *pCStack_10;
  char *pcStack_c;
  
  pCStack_10 = this;
  pcStack_c = param_1;
  if (param_1 != (char *)0x0) {
    pbVar1 = *(basic_string **)(this + 0x14);
    FUN_001eed40(&pcStack_c,param_1,&pCStack_10);
    CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCAnimation*>
    ::removeObjectForKey(pbVar1);
    FUN_001ed6b8(&pcStack_c);
  }
  return CONCAT44(pcStack_c,pCStack_10);
}


