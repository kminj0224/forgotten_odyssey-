/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00156250  Symbol: _M_push_back_aux */

/* std::deque<cocos2d::CCMutableArray<cocos2d::CCObject*>*,
   std::allocator<cocos2d::CCMutableArray<cocos2d::CCObject*>*>
   >::_M_push_back_aux(cocos2d::CCMutableArray<cocos2d::CCObject*>* const&) */

void __thiscall
std::
deque<cocos2d::CCMutableArray<cocos2d::CCObject*>*,std::allocator<cocos2d::CCMutableArray<cocos2d::CCObject*>*>>
::_M_push_back_aux(deque<cocos2d::CCMutableArray<cocos2d::CCObject*>*,std::allocator<cocos2d::CCMutableArray<cocos2d::CCObject*>*>>
                   *this,CCMutableArray **param_1)

{
  void *pvVar1;
  int iVar2;
  
  if ((uint)(*(int *)(this + 4) - (*(int *)(this + 0x24) - *(int *)this >> 2)) < 2) {
    _M_reallocate_map(this,1,false);
  }
  iVar2 = *(int *)(this + 0x24);
  pvVar1 = operator_new(0x200);
  *(void **)(iVar2 + 4) = pvVar1;
  if (*(CCMutableArray ***)(this + 0x18) != (CCMutableArray **)0x0) {
    **(CCMutableArray ***)(this + 0x18) = *param_1;
  }
  iVar2 = *(int *)(this + 0x24);
  *(int *)(this + 0x24) = iVar2 + 4;
  iVar2 = *(int *)(iVar2 + 4);
  *(int *)(this + 0x1c) = iVar2;
  *(int *)(this + 0x20) = iVar2 + 0x200;
  *(int *)(this + 0x18) = iVar2;
  return;
}


