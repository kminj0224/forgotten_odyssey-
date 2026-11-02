/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00147e50  Symbol: FNTConfigRemoveCache */

/* cocos2d::FNTConfigRemoveCache() */

void cocos2d::FNTConfigRemoveCache(void)

{
  CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCBMFontConfiguration*>
  **ppCVar1;
  
  ppCVar1 = *(CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCBMFontConfiguration*>
              ***)(DAT_00147e74 + 0x147e58);
  if (*ppCVar1 !=
      (CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCBMFontConfiguration*>
       *)0x0) {
    CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCBMFontConfiguration*>
    ::removeAllObjects(*ppCVar1);
    if ((CCObject *)*ppCVar1 != (CCObject *)0x0) {
      CCObject::release((CCObject *)*ppCVar1);
      *ppCVar1 = (CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCBMFontConfiguration*>
                  *)0x0;
    }
  }
  return;
}


