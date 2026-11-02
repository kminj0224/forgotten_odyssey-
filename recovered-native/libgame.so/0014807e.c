/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014807e  Symbol: _M_insert_unique */

/* std::_Rb_tree<unsigned int, std::pair<unsigned int const, cocos2d::_BMFontDef>,
   std::_Select1st<std::pair<unsigned int const, cocos2d::_BMFontDef> >, std::less<unsigned int>,
   std::allocator<std::pair<unsigned int const, cocos2d::_BMFontDef> >
   >::_M_insert_unique(std::pair<unsigned int const, cocos2d::_BMFontDef> const&) */

pair * std::
       _Rb_tree<unsigned_int,std::pair<unsigned_int_const,cocos2d::_BMFontDef>,std::_Select1st<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>>
       ::_M_insert_unique(pair *param_1)

{
  bool bVar1;
  _Rb_tree_node_base *p_Var2;
  undefined4 uVar3;
  _Rb_tree<unsigned_int,std::pair<unsigned_int_const,cocos2d::_BMFontDef>,std::_Select1st<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>>
  *in_r1;
  _Rb_tree_node_base *p_Var4;
  uint *in_r2;
  pair pVar5;
  _Rb_tree<unsigned_int,std::pair<unsigned_int_const,cocos2d::_BMFontDef>,std::_Select1st<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>>
  *p_Var6;
  
  bVar1 = true;
  p_Var2 = *(_Rb_tree_node_base **)(in_r1 + 8);
  p_Var6 = in_r1 + 4;
  while (p_Var4 = p_Var2, p_Var4 != (_Rb_tree_node_base *)0x0) {
    if (*(uint *)(p_Var4 + 0x10) <= *in_r2) {
      p_Var2 = *(_Rb_tree_node_base **)(p_Var4 + 0xc);
    }
    else {
      p_Var2 = *(_Rb_tree_node_base **)(p_Var4 + 8);
    }
    bVar1 = *(uint *)(p_Var4 + 0x10) > *in_r2;
    p_Var6 = (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,cocos2d::_BMFontDef>,std::_Select1st<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>>
              *)p_Var4;
  }
  p_Var2 = (_Rb_tree_node_base *)p_Var6;
  if (bVar1) {
    if (p_Var6 != (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,cocos2d::_BMFontDef>,std::_Select1st<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>>
                   *)*(_Rb_tree_node_base **)(in_r1 + 0xc)) {
      p_Var2 = (_Rb_tree_node_base *)FUN_001c7f24(p_Var6);
      goto LAB_001480bc;
    }
  }
  else {
LAB_001480bc:
    if (*in_r2 <= *(uint *)(p_Var2 + 0x10)) {
      *(_Rb_tree_node_base **)param_1 = p_Var2;
      pVar5 = (pair)0x0;
      goto LAB_001480da;
    }
  }
  uVar3 = _M_insert_(in_r1,(_Rb_tree_node_base *)0x0,(_Rb_tree_node_base *)p_Var6,(pair *)in_r2);
  pVar5 = (pair)0x1;
  *(undefined4 *)param_1 = uVar3;
LAB_001480da:
  param_1[4] = pVar5;
  return param_1;
}


