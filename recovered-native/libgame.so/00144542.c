/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00144542  Symbol: _M_copy */

/* std::_Rb_tree<cocos2d::CCObject*, cocos2d::CCObject*, std::_Identity<cocos2d::CCObject*>,
   std::less<cocos2d::CCObject*>, std::allocator<cocos2d::CCObject*>
   >::_M_copy(std::_Rb_tree_node<cocos2d::CCObject*> const*,
   std::_Rb_tree_node<cocos2d::CCObject*>*) */

undefined8 __thiscall
std::
_Rb_tree<cocos2d::CCObject*,cocos2d::CCObject*,std::_Identity<cocos2d::CCObject*>,std::less<cocos2d::CCObject*>,std::allocator<cocos2d::CCObject*>>
::_M_copy(_Rb_tree<cocos2d::CCObject*,cocos2d::CCObject*,std::_Identity<cocos2d::CCObject*>,std::less<cocos2d::CCObject*>,std::allocator<cocos2d::CCObject*>>
          *this,_Rb_tree_node *param_1,_Rb_tree_node *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar1 = (undefined4 *)operator_new(0x14);
  if (puVar1 != (undefined4 *)0xfffffff0) {
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  uVar3 = *(undefined4 *)param_1;
  puVar1[1] = param_2;
  *puVar1 = uVar3;
  puVar1[2] = 0;
  puVar1[3] = 0;
  if (*(_Rb_tree_node **)(param_1 + 0xc) != (_Rb_tree_node *)0x0) {
    uVar3 = _M_copy(this,*(_Rb_tree_node **)(param_1 + 0xc),(_Rb_tree_node *)puVar1);
    puVar1[3] = uVar3;
  }
  puVar5 = puVar1;
  for (puVar4 = *(undefined4 **)(param_1 + 8); puVar4 != (undefined4 *)0x0;
      puVar4 = (undefined4 *)puVar4[2]) {
    puVar2 = (undefined4 *)operator_new(0x14);
    if (puVar2 != (undefined4 *)0xfffffff0) {
      puVar2[4] = puVar4[4];
    }
    *puVar2 = *puVar4;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar5[2] = puVar2;
    puVar2[1] = puVar5;
    if ((_Rb_tree_node *)puVar4[3] != (_Rb_tree_node *)0x0) {
      uVar3 = _M_copy(this,(_Rb_tree_node *)puVar4[3],(_Rb_tree_node *)puVar2);
      puVar2[3] = uVar3;
    }
    puVar5 = puVar2;
  }
  return CONCAT44(this,puVar1);
}


