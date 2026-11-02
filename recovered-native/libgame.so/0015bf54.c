/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015bf54  Symbol: next */

/* cocos2d::CCMutableDictionary<std::basic_string<char, std::char_traits<char>, std::allocator<char>
   >, cocos2d::CCObject*>::next(std::basic_string<char, std::char_traits<char>, std::allocator<char>
   >*) */

uint __thiscall
cocos2d::
CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>
::next(CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>
       *this,basic_string *param_1)

{
  CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>
  *pCVar1;
  uint uVar2;
  
  uVar2 = (uint)(byte)this[0x2c];
  if (uVar2 != 0) {
    pCVar1 = *(CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>
               **)(this + 0x30);
    uVar2 = *(uint *)(pCVar1 + 0x14);
    if (pCVar1 == this + 0x18) {
      this[0x2c] = (CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>
                    )0x0;
    }
    else {
      if (param_1 != (basic_string *)0x0) {
        FUN_001ee874(param_1,pCVar1 + 0x10);
      }
      pCVar1 = (CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>
                *)FUN_001c7eac(*(undefined4 *)(this + 0x30));
      *(CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>
        **)(this + 0x30) = pCVar1;
      if (pCVar1 == this + 0x18) {
        this[0x2c] = (CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>
                      )0x0;
      }
    }
  }
  return uVar2;
}


