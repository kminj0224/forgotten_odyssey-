/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00161fea  Symbol: setObject */

/* cocos2d::CCMutableDictionary<std::basic_string<char, std::char_traits<char>, std::allocator<char>
   >, cocos2d::CCTexture2D*>::setObject(cocos2d::CCTexture2D*, std::basic_string<char,
   std::char_traits<char>, std::allocator<char> > const&) */

char __thiscall
cocos2d::
CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCTexture2D*>
::setObject(CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCTexture2D*>
            *this,CCTexture2D *param_1,basic_string *param_2)

{
  undefined auStack_28 [4];
  CCTexture2D *local_24;
  undefined auStack_20 [4];
  CCTexture2D *local_1c;
  pair local_18 [4];
  char local_14;
  
  FUN_001ee80c(auStack_28,param_2);
  local_24 = param_1;
  FUN_001ee80c(auStack_20,auStack_28);
  local_1c = local_24;
  std::
  _Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCTexture2D*>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCTexture2D*>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCTexture2D*>>>
  ::_M_insert_unique(local_18);
  FUN_001ed6b8(auStack_20);
  FUN_001ed6b8(auStack_28);
  if (local_14 != '\0') {
    CCObject::retain((CCObject *)param_1);
    local_14 = '\x01';
  }
  return local_14;
}


