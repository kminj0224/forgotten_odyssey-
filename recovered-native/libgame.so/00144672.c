/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00144672  Symbol: _M_insert_ */

/* std::_Rb_tree<cocos2d::CCObject*, cocos2d::CCObject*, std::_Identity<cocos2d::CCObject*>,
   std::less<cocos2d::CCObject*>, std::allocator<cocos2d::CCObject*>
   >::_M_insert_(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*, cocos2d::CCObject*
   const&) */

undefined8 __thiscall
std::
_Rb_tree<cocos2d::CCObject*,cocos2d::CCObject*,std::_Identity<cocos2d::CCObject*>,std::less<cocos2d::CCObject*>,std::allocator<cocos2d::CCObject*>>
::_M_insert_(_Rb_tree<cocos2d::CCObject*,cocos2d::CCObject*,std::_Identity<cocos2d::CCObject*>,std::less<cocos2d::CCObject*>,std::allocator<cocos2d::CCObject*>>
             *this,_Rb_tree_node_base *param_1,_Rb_tree_node_base *param_2,CCObject **param_3)

{
  void *pvVar1;
  _Rb_tree<cocos2d::CCObject*,cocos2d::CCObject*,std::_Identity<cocos2d::CCObject*>,std::less<cocos2d::CCObject*>,std::allocator<cocos2d::CCObject*>>
  *p_Var2;
  uint uVar3;
  _Rb_tree_node_base *p_Var4;
  
  uVar3 = 1;
  if ((param_1 == (_Rb_tree_node_base *)0x0) && (param_2 != (_Rb_tree_node_base *)(this + 4))) {
    uVar3 = (uint)(*param_3 < *(CCObject **)(param_2 + 0x10));
  }
  p_Var2 = this;
  p_Var4 = param_2;
  pvVar1 = operator_new(0x14);
  if (pvVar1 != (void *)0xfffffff0) {
    *(CCObject **)((int)pvVar1 + 0x10) = *param_3;
  }
  FUN_001c7fac(uVar3,pvVar1,param_2,this + 4,p_Var2,uVar3,p_Var4);
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  return CONCAT44(p_Var2,pvVar1);
}


