/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00161d5c  Symbol: ~CCMutableDictionary */

/* cocos2d::CCMutableDictionary<std::basic_string<char, std::char_traits<char>, std::allocator<char>
   >, cocos2d::CCTexture2D*>::~CCMutableDictionary() */

CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCTexture2D*>
* __thiscall
cocos2d::
CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCTexture2D*>
::~CCMutableDictionary
          (CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCTexture2D*>
           *this)

{
  ~CCMutableDictionary(this);
  operator_delete(this);
  return this;
}


