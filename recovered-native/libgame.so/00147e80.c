/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00147e80  Symbol: ~CCMutableDictionary */

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
  *(int *)this = *(int *)(DAT_00147ea8 + 0x147e8a) + 8;
  removeAllObjects(this);
  std::
  _Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCBMFontConfiguration*>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCBMFontConfiguration*>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCBMFontConfiguration*>>>
  ::_M_erase((_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCBMFontConfiguration*>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCBMFontConfiguration*>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCBMFontConfiguration*>>>
              *)(this + 0x14),*(_Rb_tree_node **)(this + 0x1c));
  CCObject::~CCObject((CCObject *)this);
  return this;
}


