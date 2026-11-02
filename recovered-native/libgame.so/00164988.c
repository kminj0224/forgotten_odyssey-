/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00164988  Symbol: ~CCMutableArray */

/* cocos2d::CCMutableArray<cocos2d::CCMutableDictionary<std::basic_string<char,
   std::char_traits<char>, std::allocator<char> >, cocos2d::CCString*>*>::~CCMutableArray() */

CCMutableArray<cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>
* __thiscall
cocos2d::
CCMutableArray<cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>
::~CCMutableArray(CCMutableArray<cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>
                  *this)

{
  ~CCMutableArray(this);
  operator_delete(this);
  return this;
}


