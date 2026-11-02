/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015c15c  Symbol: valueForKey */

/* cocos2d::CCSpriteFrameCache::valueForKey(char const*,
   cocos2d::CCMutableDictionary<std::basic_string<char, std::char_traits<char>, std::allocator<char>
   >, cocos2d::CCObject*>*) */

undefined8 __thiscall
cocos2d::CCSpriteFrameCache::valueForKey
          (CCSpriteFrameCache *this,char *param_1,CCMutableDictionary *param_2)

{
  int iVar1;
  undefined *puVar2;
  CCSpriteFrameCache *pCStack_10;
  char *pcStack_c;
  
  pCStack_10 = this;
  if (param_2 == (CCMutableDictionary *)0x0) {
    puVar2 = (undefined *)(DAT_0015c190 + 0x15c188);
  }
  else {
    pcStack_c = param_1;
    FUN_001eed40(&pcStack_c,param_1,&pCStack_10);
    iVar1 = CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>
            ::objectForKey((basic_string *)param_2);
    FUN_001ed6b8(&pcStack_c);
    if (iVar1 == 0) {
      puVar2 = &UNK_0015c18e + DAT_0015c194;
    }
    else {
      puVar2 = *(undefined **)(iVar1 + 0x14);
    }
  }
  return CONCAT44(pCStack_10,puVar2);
}


