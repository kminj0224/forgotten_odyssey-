/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00147eac  Symbol: ~CCMutableDictionary */

/* cocos2d::CCMutableDictionary<std::basic_string<char, std::char_traits<char>, std::allocator<char>
   >, cocos2d::CCBMFontConfiguration*>::~CCMutableDictionary() */

CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCBMFontConfiguration*>
* __thiscall
cocos2d::
CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCBMFontConfiguration*>
::~CCMutableDictionary
          (CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCBMFontConfiguration*>
           *this)

{
  ~CCMutableDictionary(this);
  operator_delete(this);
  return this;
}


