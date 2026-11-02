/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001445ba  Symbol: _Rb_tree */

/* std::_Rb_tree<cocos2d::CCObject*, cocos2d::CCObject*, std::_Identity<cocos2d::CCObject*>,
   std::less<cocos2d::CCObject*>, std::allocator<cocos2d::CCObject*>
   >::_Rb_tree(std::_Rb_tree<cocos2d::CCObject*, cocos2d::CCObject*,
   std::_Identity<cocos2d::CCObject*>, std::less<cocos2d::CCObject*>,
   std::allocator<cocos2d::CCObject*> > const&) */

_Rb_tree<cocos2d::CCObject*,cocos2d::CCObject*,std::_Identity<cocos2d::CCObject*>,std::less<cocos2d::CCObject*>,std::allocator<cocos2d::CCObject*>>
* __thiscall
std::
_Rb_tree<cocos2d::CCObject*,cocos2d::CCObject*,std::_Identity<cocos2d::CCObject*>,std::less<cocos2d::CCObject*>,std::allocator<cocos2d::CCObject*>>
::_Rb_tree(_Rb_tree<cocos2d::CCObject*,cocos2d::CCObject*,std::_Identity<cocos2d::CCObject*>,std::less<cocos2d::CCObject*>,std::allocator<cocos2d::CCObject*>>
           *this,_Rb_tree *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  _Rb_tree_node *__s;
  
  __s = (_Rb_tree_node *)(this + 4);
  memset(__s,0,0x10);
  *(undefined4 *)(this + 0x14) = 0;
  *(_Rb_tree_node **)(this + 0xc) = __s;
  *(_Rb_tree_node **)(this + 0x10) = __s;
  if (*(_Rb_tree_node **)(param_1 + 8) != (_Rb_tree_node *)0x0) {
    iVar1 = _M_copy(this,*(_Rb_tree_node **)(param_1 + 8),__s);
    *(int *)(this + 8) = iVar1;
    iVar2 = iVar1;
    do {
      iVar3 = iVar2;
      iVar2 = *(int *)(iVar3 + 8);
    } while (iVar2 != 0);
    *(int *)(this + 0xc) = iVar3;
    do {
      iVar2 = iVar1;
      iVar1 = *(int *)(iVar2 + 0xc);
    } while (iVar1 != 0);
    *(int *)(this + 0x10) = iVar2;
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  }
  return this;
}


