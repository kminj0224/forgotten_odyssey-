/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00147d68  Symbol: _M_erase */

/* std::_Rb_tree<unsigned int, std::pair<unsigned int const, cocos2d::_BMFontDef>,
   std::_Select1st<std::pair<unsigned int const, cocos2d::_BMFontDef> >, std::less<unsigned int>,
   std::allocator<std::pair<unsigned int const, cocos2d::_BMFontDef> >
   >::_M_erase(std::_Rb_tree_node<std::pair<unsigned int const, cocos2d::_BMFontDef> >*) */

void __thiscall
std::
_Rb_tree<unsigned_int,std::pair<unsigned_int_const,cocos2d::_BMFontDef>,std::_Select1st<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>>
::_M_erase(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,cocos2d::_BMFontDef>,std::_Select1st<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>>
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


