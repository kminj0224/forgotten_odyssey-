/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001480e0  Symbol: _M_insert_unique_ */

/* std::_Rb_tree<unsigned int, std::pair<unsigned int const, cocos2d::_BMFontDef>,
   std::_Select1st<std::pair<unsigned int const, cocos2d::_BMFontDef> >, std::less<unsigned int>,
   std::allocator<std::pair<unsigned int const, cocos2d::_BMFontDef> >
   >::_M_insert_unique_(std::_Rb_tree_const_iterator<std::pair<unsigned int const,
   cocos2d::_BMFontDef> >, std::pair<unsigned int const, cocos2d::_BMFontDef> const&) */

_Rb_tree_const_iterator __thiscall
std::
_Rb_tree<unsigned_int,std::pair<unsigned_int_const,cocos2d::_BMFontDef>,std::_Select1st<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>>
::_M_insert_unique_(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,cocos2d::_BMFontDef>,std::_Select1st<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>>
                    *this,_Rb_tree_const_iterator param_1,pair *param_2)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_const_iterator _Var3;
  _Rb_tree_node_base *p_Var4;
  uint uVar5;
  _Rb_tree_const_iterator local_30 [2];
  _Rb_tree_const_iterator local_28 [2];
  _Rb_tree_const_iterator local_20 [3];
  
  if ((_Rb_tree<unsigned_int,std::pair<unsigned_int_const,cocos2d::_BMFontDef>,std::_Select1st<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>>
       *)param_1 == this + 4) {
    if ((*(int *)(this + 0x14) == 0) ||
       (*(uint *)param_2 <= *(uint *)(*(_Rb_tree_node_base **)(this + 0x10) + 0x10))) {
      _M_insert_unique((pair *)local_30);
      return local_30[0];
    }
    p_Var4 = (_Rb_tree_node_base *)0x0;
    p_Var2 = *(_Rb_tree_node_base **)(this + 0x10);
  }
  else {
    uVar5 = *(uint *)param_2;
    if (uVar5 < *(uint *)(param_1 + 0x10)) {
      p_Var1 = (_Rb_tree_node_base *)param_1;
      if (param_1 != *(_Rb_tree_const_iterator *)(this + 0xc)) {
        p_Var2 = (_Rb_tree_node_base *)thunk_FUN_001c7f24(param_1);
        if (uVar5 <= *(uint *)(p_Var2 + 0x10)) {
          _M_insert_unique((pair *)local_28);
          return local_28[0];
        }
        p_Var4 = *(_Rb_tree_node_base **)(p_Var2 + 0xc);
        if (p_Var4 == (_Rb_tree_node_base *)0x0) goto LAB_00148164;
      }
    }
    else {
      if (uVar5 <= *(uint *)(param_1 + 0x10)) {
        return param_1;
      }
      if (param_1 == *(_Rb_tree_const_iterator *)(this + 0x10)) {
        p_Var1 = (_Rb_tree_node_base *)0x0;
      }
      else {
        p_Var4 = (_Rb_tree_node_base *)thunk_FUN_001c7eac(param_1);
        if (*(uint *)(p_Var4 + 0x10) <= uVar5) {
          _M_insert_unique((pair *)local_20);
          return local_20[0];
        }
        p_Var1 = *(_Rb_tree_node_base **)(param_1 + 0xc);
        p_Var2 = p_Var4;
        if (*(_Rb_tree_node_base **)(param_1 + 0xc) != (_Rb_tree_node_base *)0x0) goto LAB_00148164;
      }
    }
    p_Var4 = p_Var1;
    p_Var2 = (_Rb_tree_node_base *)param_1;
  }
LAB_00148164:
  _Var3 = _M_insert_(this,p_Var4,p_Var2,param_2);
  return _Var3;
}


