/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00147f02  Symbol: _M_insert_ */

/* std::_Rb_tree<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,
   std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const,
   cocos2d::CCBMFontConfiguration*>, std::_Select1st<std::pair<std::basic_string<char,
   std::char_traits<char>, std::allocator<char> > const, cocos2d::CCBMFontConfiguration*> >,
   std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >,
   std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> >
   const, cocos2d::CCBMFontConfiguration*> > >::_M_insert_(std::_Rb_tree_node_base const*,
   std::_Rb_tree_node_base const*, std::pair<std::basic_string<char, std::char_traits<char>,
   std::allocator<char> > const, cocos2d::CCBMFontConfiguration*> const&) */

undefined8 __thiscall
std::
_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCBMFontConfiguration*>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCBMFontConfiguration*>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCBMFontConfiguration*>>>
::_M_insert_(_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCBMFontConfiguration*>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCBMFontConfiguration*>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCBMFontConfiguration*>>>
             *this,_Rb_tree_node_base *param_1,_Rb_tree_node_base *param_2,pair *param_3)

{
  void *pvVar1;
  _Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCBMFontConfiguration*>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCBMFontConfiguration*>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCBMFontConfiguration*>>>
  *p_Var2;
  uint uVar3;
  _Rb_tree_node_base *p_Var4;
  
  uVar3 = 1;
  p_Var2 = this;
  p_Var4 = param_2;
  if ((param_1 == (_Rb_tree_node_base *)0x0) && (param_2 != (_Rb_tree_node_base *)(this + 4))) {
    uVar3 = FUN_001ed288(param_3,param_2 + 0x10);
    uVar3 = uVar3 >> 0x1f;
  }
  pvVar1 = operator_new(0x18);
  if ((int)pvVar1 + 0x10 != 0) {
    FUN_001ee80c((int)pvVar1 + 0x10,param_3);
    *(undefined4 *)((int)pvVar1 + 0x14) = *(undefined4 *)(param_3 + 4);
  }
  FUN_001c7fac(uVar3,pvVar1,param_2,this + 4,p_Var2,uVar3,p_Var4);
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  return CONCAT44(p_Var2,pvVar1);
}


