/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00161df2  Symbol: removeObjectForKey */

/* cocos2d::CCMutableDictionary<std::basic_string<char, std::char_traits<char>, std::allocator<char>
   >, cocos2d::CCTexture2D*>::removeObjectForKey(std::basic_string<char, std::char_traits<char>,
   std::allocator<char> > const&) */

void cocos2d::
     CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCTexture2D*>
     ::removeObjectForKey(basic_string *param_1)

{
  basic_string *pbVar1;
  void *pvVar2;
  
  pbVar1 = (basic_string *)
           std::
           _Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCTexture2D*>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCTexture2D*>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCTexture2D*>>>
           ::find(param_1 + 5);
  if ((pbVar1 != param_1 + 6) && ((CCObject *)pbVar1[5] != (CCObject *)0x0)) {
    CCObject::release((CCObject *)pbVar1[5]);
    pvVar2 = (void *)FUN_001c8108(pbVar1,param_1 + 6);
    FUN_001ed6b8((int)pvVar2 + 0x10);
    operator_delete(pvVar2);
    param_1[10] = param_1[10] - 1;
  }
  return;
}


