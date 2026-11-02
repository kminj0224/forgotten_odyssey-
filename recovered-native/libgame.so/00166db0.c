/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00166db0  Symbol: removeAllObjects */

/* cocos2d::CCMutableDictionary<int, cocos2d::CCMutableDictionary<std::basic_string<char,
   std::char_traits<char>, std::allocator<char> >, cocos2d::CCString*>*>::removeAllObjects() */

void __thiscall
cocos2d::
CCMutableDictionary<int,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>
::removeAllObjects(CCMutableDictionary<int,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>
                   *this)

{
  CCMutableDictionary<int,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>
  *pCVar1;
  
  if (*(int *)(this + 0x28) != 0) {
    for (pCVar1 = *(CCMutableDictionary<int,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>
                    **)(this + 0x20); pCVar1 != this + 0x18;
        pCVar1 = (CCMutableDictionary<int,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>
                  *)FUN_001c7eac(pCVar1)) {
      if (*(CCObject **)(pCVar1 + 0x14) != (CCObject *)0x0) {
        CCObject::release(*(CCObject **)(pCVar1 + 0x14));
      }
    }
  }
  std::
  _Rb_tree<int,std::pair<int_const,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>,std::_Select1st<std::pair<int_const,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>>,std::less<int>,std::allocator<std::pair<int_const,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>>>
  ::_M_erase((_Rb_tree<int,std::pair<int_const,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>,std::_Select1st<std::pair<int_const,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>>,std::less<int>,std::allocator<std::pair<int_const,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>>>
              *)(this + 0x14),*(_Rb_tree_node **)(this + 0x1c));
  *(CCMutableDictionary<int,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>
    **)(this + 0x20) = this + 0x18;
  *(undefined4 *)(this + 0x1c) = 0;
  *(CCMutableDictionary<int,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>
    **)(this + 0x24) = this + 0x18;
  *(undefined4 *)(this + 0x28) = 0;
  return;
}


