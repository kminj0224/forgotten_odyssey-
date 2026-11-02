/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00155948  Symbol: ~deque */

/* std::deque<cocos2d::CCMutableDictionary<std::basic_string<char, std::char_traits<char>,
   std::allocator<char> >, cocos2d::CCObject*>*,
   std::allocator<cocos2d::CCMutableDictionary<std::basic_string<char, std::char_traits<char>,
   std::allocator<char> >, cocos2d::CCObject*>*> >::~deque() */

deque<cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>*,std::allocator<cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>*>>
* __thiscall
std::
deque<cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>*,std::allocator<cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>*>>
::~deque(deque<cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>*,std::allocator<cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>*>>
         *this)

{
  int iVar1;
  void **ppvVar2;
  
  if (*(int *)this != 0) {
    iVar1 = *(int *)(this + 0x24);
    for (ppvVar2 = *(void ***)(this + 0x14); ppvVar2 < (void **)(iVar1 + 4); ppvVar2 = ppvVar2 + 1)
    {
      operator_delete(*ppvVar2);
    }
    operator_delete(*(void **)this);
  }
  return this;
}


