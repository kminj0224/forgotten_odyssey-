/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001657c4  Symbol: CCMutableDictionary */

/* cocos2d::CCMutableDictionary<std::basic_string<char, std::char_traits<char>, std::allocator<char>
   >, cocos2d::CCString*>::CCMutableDictionary() */

CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
* __thiscall
cocos2d::
CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
::CCMutableDictionary
          (CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
           *this)

{
  CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
  *__s;
  
  CCObject::CCObject((CCObject *)this);
  __s = this + 0x18;
  *(int *)this = *(int *)(DAT_001657f8 + 0x1657d6) + 8;
  memset(__s,0,0x10);
  *(undefined4 *)(this + 0x28) = 0;
  *(CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
    **)(this + 0x20) = __s;
  *(CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
    **)(this + 0x24) = __s;
  *(undefined4 *)(this + 0x30) = 0;
  this[0x2c] = (CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
                )0x0;
  return this;
}


