/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015990c  Symbol: addAnimation */

/* cocos2d::CCAnimationCache::addAnimation(cocos2d::CCAnimation*, char const*) */

undefined8 __thiscall
cocos2d::CCAnimationCache::addAnimation(CCAnimationCache *this,CCAnimation *param_1,char *param_2)

{
  CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCAnimation*>
  *this_00;
  CCAnimationCache *pCStack_18;
  CCAnimation *pCStack_14;
  char *pcStack_10;
  
  this_00 = *(CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCAnimation*>
              **)(this + 0x14);
  pCStack_18 = this;
  pCStack_14 = param_1;
  pcStack_10 = param_2;
  FUN_001eed40(&pCStack_14,param_2,&pCStack_18);
  CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCAnimation*>
  ::setObject(this_00,param_1,(basic_string *)&pCStack_14);
  FUN_001ed6b8(&pCStack_14);
  return CONCAT44(pCStack_14,pCStack_18);
}


