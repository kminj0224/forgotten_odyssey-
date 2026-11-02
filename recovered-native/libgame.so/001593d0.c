/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001593d0  Symbol: _M_assign_aux<__gnu_cxx::__normal_iterator<cocos2d::CCSpriteFrame**,std::vector<cocos2d::CCSpriteFrame*,std::allocator<cocos2d::CCSpriteFrame*>>>> */

/* void std::vector<cocos2d::CCSpriteFrame*, std::allocator<cocos2d::CCSpriteFrame*>
   >::_M_assign_aux<__gnu_cxx::__normal_iterator<cocos2d::CCSpriteFrame**,
   std::vector<cocos2d::CCSpriteFrame*, std::allocator<cocos2d::CCSpriteFrame*> > >
   >(__gnu_cxx::__normal_iterator<cocos2d::CCSpriteFrame**, std::vector<cocos2d::CCSpriteFrame*,
   std::allocator<cocos2d::CCSpriteFrame*> > >,
   __gnu_cxx::__normal_iterator<cocos2d::CCSpriteFrame**, std::vector<cocos2d::CCSpriteFrame*,
   std::allocator<cocos2d::CCSpriteFrame*> > >, std::forward_iterator_tag) */

void std::vector<cocos2d::CCSpriteFrame*,std::allocator<cocos2d::CCSpriteFrame*>>::
     _M_assign_aux<__gnu_cxx::__normal_iterator<cocos2d::CCSpriteFrame**,std::vector<cocos2d::CCSpriteFrame*,std::allocator<cocos2d::CCSpriteFrame*>>>>
               (__normal_iterator param_1,__normal_iterator param_2,forward_iterator_tag param_3)

{
  CCSpriteFrame **ppCVar1;
  uint uVar2;
  uint uVar3;
  __normal_iterator _Var4;
  
  ppCVar1 = *(CCSpriteFrame ***)param_1;
  uVar3 = (int)(param_3 - param_2) >> 2;
  if ((uint)(*(int *)(param_1 + 8) - (int)ppCVar1 >> 2) < uVar3) {
    if (uVar3 == 0) {
      ppCVar1 = (CCSpriteFrame **)0x0;
    }
    else {
      if (DAT_00159448 < uVar3) {
        FUN_001c430c();
      }
      ppCVar1 = (CCSpriteFrame **)operator_new(uVar3 << 2);
    }
    copy<__gnu_cxx::__normal_iterator<cocos2d::CCSpriteFrame**,std::vector<cocos2d::CCSpriteFrame*,std::allocator<cocos2d::CCSpriteFrame*>>>,cocos2d::CCSpriteFrame**>
              (param_2,param_3,ppCVar1);
    if (*(void **)param_1 != (void *)0x0) {
      operator_delete(*(void **)param_1);
    }
    *(CCSpriteFrame ***)param_1 = ppCVar1;
    *(CCSpriteFrame ***)(param_1 + 4) = ppCVar1 + uVar3;
    *(CCSpriteFrame ***)(param_1 + 8) = ppCVar1 + uVar3;
  }
  else {
    uVar2 = *(int *)(param_1 + 4) - (int)ppCVar1 >> 2;
    _Var4 = param_2;
    if (uVar2 < uVar3) {
      _Var4 = param_2 + uVar2 * 4;
      copy<__gnu_cxx::__normal_iterator<cocos2d::CCSpriteFrame**,std::vector<cocos2d::CCSpriteFrame*,std::allocator<cocos2d::CCSpriteFrame*>>>,cocos2d::CCSpriteFrame**>
                (param_2,_Var4,ppCVar1);
      ppCVar1 = *(CCSpriteFrame ***)(param_1 + 4);
    }
    ppCVar1 = copy<__gnu_cxx::__normal_iterator<cocos2d::CCSpriteFrame**,std::vector<cocos2d::CCSpriteFrame*,std::allocator<cocos2d::CCSpriteFrame*>>>,cocos2d::CCSpriteFrame**>
                        (_Var4,param_3,ppCVar1);
    *(CCSpriteFrame ***)(param_1 + 4) = ppCVar1;
  }
  return;
}


