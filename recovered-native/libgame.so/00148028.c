/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00148028  Symbol: _M_insert_ */

/* std::_Rb_tree<unsigned int, std::pair<unsigned int const, cocos2d::_BMFontDef>,
   std::_Select1st<std::pair<unsigned int const, cocos2d::_BMFontDef> >, std::less<unsigned int>,
   std::allocator<std::pair<unsigned int const, cocos2d::_BMFontDef> >
   >::_M_insert_(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*, std::pair<unsigned
   int const, cocos2d::_BMFontDef> const&) */

undefined8 __thiscall
std::
_Rb_tree<unsigned_int,std::pair<unsigned_int_const,cocos2d::_BMFontDef>,std::_Select1st<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>>
::_M_insert_(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,cocos2d::_BMFontDef>,std::_Select1st<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>>
             *this,_Rb_tree_node_base *param_1,_Rb_tree_node_base *param_2,pair *param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  _Rb_tree<unsigned_int,std::pair<unsigned_int_const,cocos2d::_BMFontDef>,std::_Select1st<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>>
  *p_Var4;
  uint uVar5;
  _Rb_tree_node_base *p_Var6;
  
  uVar5 = 1;
  if ((param_1 == (_Rb_tree_node_base *)0x0) && (param_2 != (_Rb_tree_node_base *)(this + 4))) {
    uVar5 = (uint)(*(uint *)param_3 < *(uint *)(param_2 + 0x10));
  }
  p_Var4 = this;
  p_Var6 = param_2;
  pvVar1 = operator_new(0x34);
  if ((undefined4 *)((int)pvVar1 + 0x10) != (undefined4 *)0x0) {
    uVar2 = *(undefined4 *)(param_3 + 4);
    uVar3 = *(undefined4 *)(param_3 + 8);
    *(undefined4 *)((int)pvVar1 + 0x10) = *(undefined4 *)param_3;
    *(undefined4 *)((int)pvVar1 + 0x14) = uVar2;
    *(undefined4 *)((int)pvVar1 + 0x18) = uVar3;
    uVar2 = *(undefined4 *)(param_3 + 0x10);
    uVar3 = *(undefined4 *)(param_3 + 0x14);
    *(undefined4 *)((int)pvVar1 + 0x1c) = *(undefined4 *)(param_3 + 0xc);
    *(undefined4 *)((int)pvVar1 + 0x20) = uVar2;
    *(undefined4 *)((int)pvVar1 + 0x24) = uVar3;
    uVar2 = *(undefined4 *)(param_3 + 0x1c);
    uVar3 = *(undefined4 *)(param_3 + 0x20);
    *(undefined4 *)((int)pvVar1 + 0x28) = *(undefined4 *)(param_3 + 0x18);
    *(undefined4 *)((int)pvVar1 + 0x2c) = uVar2;
    *(undefined4 *)((int)pvVar1 + 0x30) = uVar3;
  }
  FUN_001c7fac(uVar5,pvVar1,param_2,this + 4,p_Var4,uVar5,p_Var6);
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  return CONCAT44(p_Var4,pvVar1);
}


