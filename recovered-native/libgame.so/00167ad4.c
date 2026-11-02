/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00167ad4  Symbol: __insertion_sort<__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,std::vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>>>,bool(*)(cocos2d::CCTouchHandler_const*,cocos2d::CCTouchHandler_const*)> */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__insertion_sort<__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,
   std::vector<cocos2d::CCTouchHandler*, std::allocator<cocos2d::CCTouchHandler*> > >, bool
   (*)(cocos2d::CCTouchHandler const*, cocos2d::CCTouchHandler
   const*)>(__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,
   std::vector<cocos2d::CCTouchHandler*, std::allocator<cocos2d::CCTouchHandler*> > >,
   __gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**, std::vector<cocos2d::CCTouchHandler*,
   std::allocator<cocos2d::CCTouchHandler*> > >, bool (*)(cocos2d::CCTouchHandler const*,
   cocos2d::CCTouchHandler const*)) */

void std::
     __insertion_sort<__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,std::vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>>>,bool(*)(cocos2d::CCTouchHandler_const*,cocos2d::CCTouchHandler_const*)>
               (__normal_iterator param_1,__normal_iterator param_2,
               _func_bool_CCTouchHandler_ptr_CCTouchHandler_ptr *param_3)

{
  bool bVar1;
  CCTouchHandler *pCVar2;
  CCTouchHandler **ppCVar3;
  CCTouchHandler **ppCVar4;
  
  ppCVar4 = (CCTouchHandler **)(param_1 + 4);
  if (param_1 != param_2) {
    while (ppCVar4 != (CCTouchHandler **)param_2) {
      ppCVar3 = ppCVar4 + 1;
      bVar1 = (*param_3)(*ppCVar4,*(CCTouchHandler **)param_1);
      if (bVar1 == false) {
        __unguarded_linear_insert<__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,std::vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>>>,bool(*)(cocos2d::CCTouchHandler_const*,cocos2d::CCTouchHandler_const*)>
                  ((__normal_iterator)ppCVar4,param_3);
        ppCVar4 = ppCVar3;
      }
      else {
        pCVar2 = *ppCVar4;
        __copy_move_backward_a<false,cocos2d::CCTouchHandler**,cocos2d::CCTouchHandler**>
                  ((CCTouchHandler **)param_1,ppCVar4,ppCVar3);
        *(CCTouchHandler **)param_1 = pCVar2;
        ppCVar4 = ppCVar3;
      }
    }
  }
  return;
}


