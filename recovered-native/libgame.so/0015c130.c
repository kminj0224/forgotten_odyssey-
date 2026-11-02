/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015c130  Symbol: ~CCMutableDictionary */

/* cocos2d::CCMutableDictionary<std::basic_string<char, std::char_traits<char>, std::allocator<char>
   >, cocos2d::CCString*>::~CCMutableDictionary() */

CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
* __thiscall
cocos2d::
CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
::~CCMutableDictionary
          (CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
           *this)

{
  ~CCMutableDictionary(this);
  operator_delete(this);
  return this;
}


