/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00165bb2  Symbol: _M_erase */

/* std::_Rb_tree<int, std::pair<int const, cocos2d::CCMutableDictionary<std::basic_string<char,
   std::char_traits<char>, std::allocator<char> >, cocos2d::CCString*>*>,
   std::_Select1st<std::pair<int const, cocos2d::CCMutableDictionary<std::basic_string<char,
   std::char_traits<char>, std::allocator<char> >, cocos2d::CCString*>*> >, std::less<int>,
   std::allocator<std::pair<int const, cocos2d::CCMutableDictionary<std::basic_string<char,
   std::char_traits<char>, std::allocator<char> >, cocos2d::CCString*>*> >
   >::_M_erase(std::_Rb_tree_node<std::pair<int const,
   cocos2d::CCMutableDictionary<std::basic_string<char, std::char_traits<char>, std::allocator<char>
   >, cocos2d::CCString*>*> >*) */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>,std::_Select1st<std::pair<int_const,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>>,std::less<int>,std::allocator<std::pair<int_const,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>>>
::_M_erase(_Rb_tree<int,std::pair<int_const,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>,std::_Select1st<std::pair<int_const,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>>,std::less<int>,std::allocator<std::pair<int_const,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>>>
           *this,_Rb_tree_node *param_1)

{
  _Rb_tree_node *p_Var1;
  
  while (param_1 != (_Rb_tree_node *)0x0) {
    _M_erase(this,*(_Rb_tree_node **)(param_1 + 0xc));
    p_Var1 = *(_Rb_tree_node **)(param_1 + 8);
    operator_delete(param_1);
    param_1 = p_Var1;
  }
  return;
}


