/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001661d4  Symbol: addObject */

/* cocos2d::CCMutableArray<cocos2d::CCMutableDictionary<std::basic_string<char,
   std::char_traits<char>, std::allocator<char> >,
   cocos2d::CCString*>*>::addObject(cocos2d::CCMutableDictionary<std::basic_string<char,
   std::char_traits<char>, std::allocator<char> >, cocos2d::CCString*>*) */

undefined8 __thiscall
cocos2d::
CCMutableArray<cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>
::addObject(CCMutableArray<cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>
            *this,CCMutableDictionary *param_1)

{
  CCMutableDictionary **ppCVar1;
  CCMutableDictionary *local_c;
  
  local_c = param_1;
  if (param_1 != (CCMutableDictionary *)0x0) {
    CCObject::retain((CCObject *)param_1);
    ppCVar1 = *(CCMutableDictionary ***)(this + 0x18);
    if (ppCVar1 == *(CCMutableDictionary ***)(this + 0x1c)) {
      std::
      vector<cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*,std::allocator<cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>>
      ::_M_insert_aux((vector<cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*,std::allocator<cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>>
                       *)(this + 0x14),(__normal_iterator)ppCVar1,&local_c);
    }
    else {
      if (ppCVar1 != (CCMutableDictionary **)0x0) {
        *ppCVar1 = local_c;
      }
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + 4;
    }
  }
  return CONCAT44(local_c,this);
}


