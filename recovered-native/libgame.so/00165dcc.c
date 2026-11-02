/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00165dcc  Symbol: _M_insert_ */

/* std::_Rb_tree<int, std::pair<int const, cocos2d::CCMutableDictionary<std::basic_string<char,
   std::char_traits<char>, std::allocator<char> >, cocos2d::CCString*>*>,
   std::_Select1st<std::pair<int const, cocos2d::CCMutableDictionary<std::basic_string<char,
   std::char_traits<char>, std::allocator<char> >, cocos2d::CCString*>*> >, std::less<int>,
   std::allocator<std::pair<int const, cocos2d::CCMutableDictionary<std::basic_string<char,
   std::char_traits<char>, std::allocator<char> >, cocos2d::CCString*>*> >
   >::_M_insert_(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*, std::pair<int
   const, cocos2d::CCMutableDictionary<std::basic_string<char, std::char_traits<char>,
   std::allocator<char> >, cocos2d::CCString*>*> const&) */

undefined8 __thiscall
std::
_Rb_tree<int,std::pair<int_const,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>,std::_Select1st<std::pair<int_const,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>>,std::less<int>,std::allocator<std::pair<int_const,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>>>
::_M_insert_(_Rb_tree<int,std::pair<int_const,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>,std::_Select1st<std::pair<int_const,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>>,std::less<int>,std::allocator<std::pair<int_const,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>>>
             *this,_Rb_tree_node_base *param_1,_Rb_tree_node_base *param_2,pair *param_3)

{
  void *pvVar1;
  _Rb_tree<int,std::pair<int_const,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>,std::_Select1st<std::pair<int_const,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>>,std::less<int>,std::allocator<std::pair<int_const,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>>>
  *p_Var2;
  uint uVar3;
  _Rb_tree_node_base *p_Var4;
  
  uVar3 = 1;
  if ((param_1 == (_Rb_tree_node_base *)0x0) && (param_2 != (_Rb_tree_node_base *)(this + 4))) {
    uVar3 = (uint)(*(int *)param_3 < *(int *)(param_2 + 0x10));
  }
  p_Var2 = this;
  p_Var4 = param_2;
  pvVar1 = operator_new(0x18);
  if (pvVar1 != (void *)0xfffffff0) {
    *(undefined4 *)((int)pvVar1 + 0x10) = *(undefined4 *)param_3;
    *(undefined4 *)((int)pvVar1 + 0x14) = *(undefined4 *)(param_3 + 4);
  }
  FUN_001c7fac(uVar3,pvVar1,param_2,this + 4,p_Var2,uVar3,p_Var4);
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  return CONCAT44(p_Var2,pvVar1);
}


