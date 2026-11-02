/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001446bc  Symbol: _M_insert_unique */

/* std::_Rb_tree<cocos2d::CCObject*, cocos2d::CCObject*, std::_Identity<cocos2d::CCObject*>,
   std::less<cocos2d::CCObject*>, std::allocator<cocos2d::CCObject*>
   >::_M_insert_unique(cocos2d::CCObject* const&) */

CCObject **
std::
_Rb_tree<cocos2d::CCObject*,cocos2d::CCObject*,std::_Identity<cocos2d::CCObject*>,std::less<cocos2d::CCObject*>,std::allocator<cocos2d::CCObject*>>
::_M_insert_unique(CCObject **param_1)

{
  bool bVar1;
  _Rb_tree_node_base *p_Var2;
  CCObject *pCVar3;
  _Rb_tree<cocos2d::CCObject*,cocos2d::CCObject*,std::_Identity<cocos2d::CCObject*>,std::less<cocos2d::CCObject*>,std::allocator<cocos2d::CCObject*>>
  *in_r1;
  _Rb_tree_node_base *p_Var4;
  CCObject **in_r2;
  undefined uVar5;
  _Rb_tree<cocos2d::CCObject*,cocos2d::CCObject*,std::_Identity<cocos2d::CCObject*>,std::less<cocos2d::CCObject*>,std::allocator<cocos2d::CCObject*>>
  *p_Var6;
  
  bVar1 = true;
  p_Var2 = *(_Rb_tree_node_base **)(in_r1 + 8);
  p_Var6 = in_r1 + 4;
  while (p_Var4 = p_Var2, p_Var4 != (_Rb_tree_node_base *)0x0) {
    if (*(CCObject **)(p_Var4 + 0x10) <= *in_r2) {
      p_Var2 = *(_Rb_tree_node_base **)(p_Var4 + 0xc);
    }
    else {
      p_Var2 = *(_Rb_tree_node_base **)(p_Var4 + 8);
    }
    bVar1 = *(CCObject **)(p_Var4 + 0x10) > *in_r2;
    p_Var6 = (_Rb_tree<cocos2d::CCObject*,cocos2d::CCObject*,std::_Identity<cocos2d::CCObject*>,std::less<cocos2d::CCObject*>,std::allocator<cocos2d::CCObject*>>
              *)p_Var4;
  }
  p_Var2 = (_Rb_tree_node_base *)p_Var6;
  if (bVar1) {
    if (p_Var6 != (_Rb_tree<cocos2d::CCObject*,cocos2d::CCObject*,std::_Identity<cocos2d::CCObject*>,std::less<cocos2d::CCObject*>,std::allocator<cocos2d::CCObject*>>
                   *)*(_Rb_tree_node_base **)(in_r1 + 0xc)) {
      p_Var2 = (_Rb_tree_node_base *)FUN_001c7f24(p_Var6);
      goto LAB_001446fa;
    }
  }
  else {
LAB_001446fa:
    if (*in_r2 <= *(CCObject **)((CCObject *)p_Var2 + 0x10)) {
      *param_1 = (CCObject *)p_Var2;
      uVar5 = 0;
      goto LAB_00144718;
    }
  }
  pCVar3 = (CCObject *)
           _M_insert_(in_r1,(_Rb_tree_node_base *)0x0,(_Rb_tree_node_base *)p_Var6,in_r2);
  uVar5 = 1;
  *param_1 = pCVar3;
LAB_00144718:
  *(undefined *)(param_1 + 1) = uVar5;
  return param_1;
}


