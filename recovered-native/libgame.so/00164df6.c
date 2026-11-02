/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00164df6  Symbol: _M_erase */

/* std::_Rb_tree<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,
   std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const,
   cocos2d::CCTMXLayer*>, std::_Select1st<std::pair<std::basic_string<char, std::char_traits<char>,
   std::allocator<char> > const, cocos2d::CCTMXLayer*> >, std::less<std::basic_string<char,
   std::char_traits<char>, std::allocator<char> > >,
   std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> >
   const, cocos2d::CCTMXLayer*> > >::_M_erase(std::_Rb_tree_node<std::pair<std::basic_string<char,
   std::char_traits<char>, std::allocator<char> > const, cocos2d::CCTMXLayer*> >*) */

void __thiscall
std::
_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCTMXLayer*>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCTMXLayer*>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCTMXLayer*>>>
::_M_erase(_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCTMXLayer*>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCTMXLayer*>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCTMXLayer*>>>
           *this,_Rb_tree_node *param_1)

{
  _Rb_tree_node *p_Var1;
  
  while (param_1 != (_Rb_tree_node *)0x0) {
    _M_erase(this,*(_Rb_tree_node **)(param_1 + 0xc));
    p_Var1 = *(_Rb_tree_node **)(param_1 + 8);
    FUN_001ed6b8(param_1 + 0x10);
    operator_delete(param_1);
    param_1 = p_Var1;
  }
  return;
}


