/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015c790  Symbol: addSpriteFrame */

/* cocos2d::CCSpriteFrameCache::addSpriteFrame(cocos2d::CCSpriteFrame*, char const*) */

undefined8 __thiscall
cocos2d::CCSpriteFrameCache::addSpriteFrame
          (CCSpriteFrameCache *this,CCSpriteFrame *param_1,char *param_2)

{
  CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCSpriteFrame*>
  *this_00;
  CCSpriteFrameCache *pCStack_18;
  CCSpriteFrame *pCStack_14;
  char *pcStack_10;
  
  this_00 = *(CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCSpriteFrame*>
              **)(this + 0x14);
  pCStack_18 = this;
  pCStack_14 = param_1;
  pcStack_10 = param_2;
  FUN_001eed40(&pCStack_14,param_2,&pCStack_18);
  CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCSpriteFrame*>
  ::setObject(this_00,param_1,(basic_string *)&pCStack_14);
  FUN_001ed6b8(&pCStack_14);
  return CONCAT44(pCStack_14,pCStack_18);
}


