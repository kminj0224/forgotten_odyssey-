/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00168152  Symbol: __heap_select<__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,std::vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>>>,bool(*)(cocos2d::CCTouchHandler_const*,cocos2d::CCTouchHandler_const*)> */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__heap_select<__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,
   std::vector<cocos2d::CCTouchHandler*, std::allocator<cocos2d::CCTouchHandler*> > >, bool
   (*)(cocos2d::CCTouchHandler const*, cocos2d::CCTouchHandler
   const*)>(__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,
   std::vector<cocos2d::CCTouchHandler*, std::allocator<cocos2d::CCTouchHandler*> > >,
   __gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**, std::vector<cocos2d::CCTouchHandler*,
   std::allocator<cocos2d::CCTouchHandler*> > >,
   __gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**, std::vector<cocos2d::CCTouchHandler*,
   std::allocator<cocos2d::CCTouchHandler*> > >, bool (*)(cocos2d::CCTouchHandler const*,
   cocos2d::CCTouchHandler const*)) */

void std::
     __heap_select<__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,std::vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>>>,bool(*)(cocos2d::CCTouchHandler_const*,cocos2d::CCTouchHandler_const*)>
               (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3,
               _func_bool_CCTouchHandler_ptr_CCTouchHandler_ptr *param_4)

{
  bool bVar1;
  int iVar2;
  CCTouchHandler *pCVar3;
  int iVar4;
  
  iVar2 = (int)(param_2 - param_1) >> 2;
  if (7 < (int)(param_2 - param_1)) {
    for (iVar4 = iVar2 + -2 >> 1;
        __adjust_heap<__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,std::vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>>>,int,cocos2d::CCTouchHandler*,bool(*)(cocos2d::CCTouchHandler_const*,cocos2d::CCTouchHandler_const*)>
                  (param_1,iVar4,iVar2,*(CCTouchHandler **)(param_1 + iVar4 * 4),param_4),
        iVar4 != 0; iVar4 = iVar4 + -1) {
    }
  }
  for (; param_2 < param_3; param_2 = param_2 + 4) {
    bVar1 = (*param_4)(*(CCTouchHandler **)param_2,*(CCTouchHandler **)param_1);
    if (bVar1 != false) {
      pCVar3 = *(CCTouchHandler **)param_2;
      *(CCTouchHandler **)param_2 = *(CCTouchHandler **)param_1;
      __adjust_heap<__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,std::vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>>>,int,cocos2d::CCTouchHandler*,bool(*)(cocos2d::CCTouchHandler_const*,cocos2d::CCTouchHandler_const*)>
                (param_1,0,iVar2,pCVar3,param_4);
    }
  }
  return;
}


