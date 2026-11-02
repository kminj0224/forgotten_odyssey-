/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015c142  Symbol: objectForKey */

/* cocos2d::CCMutableDictionary<std::basic_string<char, std::char_traits<char>, std::allocator<char>
   >, cocos2d::CCObject*>::objectForKey(std::basic_string<char, std::char_traits<char>,
   std::allocator<char> > const&) */

basic_string
cocos2d::
CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>
::objectForKey(basic_string *param_1)

{
  basic_string *pbVar1;
  basic_string bVar2;
  
  pbVar1 = (basic_string *)
           std::
           _Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCObject*>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCObject*>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCObject*>>>
           ::find(param_1 + 5);
  bVar2 = 0;
  if (pbVar1 != param_1 + 6) {
    bVar2 = pbVar1[5];
  }
  return bVar2;
}


