/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014479a  Symbol: _M_erase_aux */

/* std::_Rb_tree<cocos2d::CCObject*, cocos2d::CCObject*, std::_Identity<cocos2d::CCObject*>,
   std::less<cocos2d::CCObject*>, std::allocator<cocos2d::CCObject*>
   >::_M_erase_aux(std::_Rb_tree_const_iterator<cocos2d::CCObject*>,
   std::_Rb_tree_const_iterator<cocos2d::CCObject*>) */

undefined8 __thiscall
std::
_Rb_tree<cocos2d::CCObject*,cocos2d::CCObject*,std::_Identity<cocos2d::CCObject*>,std::less<cocos2d::CCObject*>,std::allocator<cocos2d::CCObject*>>
::_M_erase_aux(_Rb_tree<cocos2d::CCObject*,cocos2d::CCObject*,std::_Identity<cocos2d::CCObject*>,std::less<cocos2d::CCObject*>,std::allocator<cocos2d::CCObject*>>
               *this,_Rb_tree_const_iterator param_1,_Rb_tree_const_iterator param_2)

{
  _Rb_tree_const_iterator _Var1;
  void *pvVar2;
  _Rb_tree<cocos2d::CCObject*,cocos2d::CCObject*,std::_Identity<cocos2d::CCObject*>,std::less<cocos2d::CCObject*>,std::allocator<cocos2d::CCObject*>>
  *local_1c;
  
  if ((*(_Rb_tree_const_iterator *)(this + 0xc) == param_1) &&
     ((_Rb_tree<cocos2d::CCObject*,cocos2d::CCObject*,std::_Identity<cocos2d::CCObject*>,std::less<cocos2d::CCObject*>,std::allocator<cocos2d::CCObject*>>
       *)param_2 == this + 4)) {
    _M_erase(this,*(_Rb_tree_node **)(this + 8));
    *(_Rb_tree_const_iterator *)(this + 0xc) = param_2;
    *(undefined4 *)(this + 8) = 0;
    *(_Rb_tree_const_iterator *)(this + 0x10) = param_2;
    *(undefined4 *)(this + 0x14) = 0;
    local_1c = (_Rb_tree<cocos2d::CCObject*,cocos2d::CCObject*,std::_Identity<cocos2d::CCObject*>,std::less<cocos2d::CCObject*>,std::allocator<cocos2d::CCObject*>>
                *)param_1;
  }
  else {
    local_1c = this + 4;
    while (param_1 != param_2) {
      _Var1 = thunk_FUN_001c7eac(param_1);
      pvVar2 = (void *)FUN_001c8108(param_1,local_1c);
      operator_delete(pvVar2);
      *(int *)(this + 0x14) = *(int *)(this + 0x14) + -1;
      param_1 = _Var1;
    }
  }
  return CONCAT44(local_1c,this);
}


