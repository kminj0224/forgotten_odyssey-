/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00167a96  Symbol: __unguarded_linear_insert<__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,std::vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>>>,bool(*)(cocos2d::CCTouchHandler_const*,cocos2d::CCTouchHandler_const*)> */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,
   std::vector<cocos2d::CCTouchHandler*, std::allocator<cocos2d::CCTouchHandler*> > >, bool
   (*)(cocos2d::CCTouchHandler const*, cocos2d::CCTouchHandler
   const*)>(__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,
   std::vector<cocos2d::CCTouchHandler*, std::allocator<cocos2d::CCTouchHandler*> > >, bool
   (*)(cocos2d::CCTouchHandler const*, cocos2d::CCTouchHandler const*)) */

void std::
     __unguarded_linear_insert<__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,std::vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>>>,bool(*)(cocos2d::CCTouchHandler_const*,cocos2d::CCTouchHandler_const*)>
               (__normal_iterator param_1,_func_bool_CCTouchHandler_ptr_CCTouchHandler_ptr *param_2)

{
  CCTouchHandler **ppCVar1;
  bool bVar2;
  CCTouchHandler **ppCVar3;
  CCTouchHandler *pCVar4;
  
  pCVar4 = *(CCTouchHandler **)param_1;
  ppCVar1 = (CCTouchHandler **)(param_1 - 4);
  while (ppCVar3 = ppCVar1, bVar2 = (*param_2)(pCVar4,*ppCVar3), bVar2 != false) {
    *(CCTouchHandler **)param_1 = *ppCVar3;
    ppCVar1 = ppCVar3 + -1;
    param_1 = (__normal_iterator)ppCVar3;
  }
  *(CCTouchHandler **)param_1 = pCVar4;
  return;
}


