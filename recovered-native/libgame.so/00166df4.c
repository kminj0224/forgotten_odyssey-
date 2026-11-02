/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00166df4  Symbol: ~CCMutableDictionary */

/* cocos2d::CCMutableDictionary<int, cocos2d::CCMutableDictionary<std::basic_string<char,
   std::char_traits<char>, std::allocator<char> >, cocos2d::CCString*>*>::~CCMutableDictionary() */

CCMutableDictionary<int,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>
* __thiscall
cocos2d::
CCMutableDictionary<int,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>
::~CCMutableDictionary
          (CCMutableDictionary<int,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>
           *this)

{
  *(int *)this = *(int *)(DAT_00166e1c + 0x166dfe) + 8;
  removeAllObjects(this);
  std::
  _Rb_tree<int,std::pair<int_const,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>,std::_Select1st<std::pair<int_const,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>>,std::less<int>,std::allocator<std::pair<int_const,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>>>
  ::_M_erase((_Rb_tree<int,std::pair<int_const,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>,std::_Select1st<std::pair<int_const,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>>,std::less<int>,std::allocator<std::pair<int_const,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>>>
              *)(this + 0x14),*(_Rb_tree_node **)(this + 0x1c));
  CCObject::~CCObject((CCObject *)this);
  return this;
}


