/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001681b4  Symbol: __introsort_loop<__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,std::vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>>>,int,bool(*)(cocos2d::CCTouchHandler_const*,cocos2d::CCTouchHandler_const*)> */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__introsort_loop<__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,
   std::vector<cocos2d::CCTouchHandler*, std::allocator<cocos2d::CCTouchHandler*> > >, int, bool
   (*)(cocos2d::CCTouchHandler const*, cocos2d::CCTouchHandler
   const*)>(__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,
   std::vector<cocos2d::CCTouchHandler*, std::allocator<cocos2d::CCTouchHandler*> > >,
   __gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**, std::vector<cocos2d::CCTouchHandler*,
   std::allocator<cocos2d::CCTouchHandler*> > >, int, bool (*)(cocos2d::CCTouchHandler const*,
   cocos2d::CCTouchHandler const*)) */

void std::
     __introsort_loop<__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,std::vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>>>,int,bool(*)(cocos2d::CCTouchHandler_const*,cocos2d::CCTouchHandler_const*)>
               (__normal_iterator param_1,__normal_iterator param_2,int param_3,
               _func_bool_CCTouchHandler_ptr_CCTouchHandler_ptr *param_4)

{
  CCTouchHandler **ppCVar1;
  CCTouchHandler *pCVar2;
  
  while( true ) {
    if ((int)(param_2 - param_1) < 0x44) {
      return;
    }
    if (param_3 == 0) break;
    ppCVar1 = (CCTouchHandler **)
              __unguarded_partition_pivot<__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,std::vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>>>,bool(*)(cocos2d::CCTouchHandler_const*,cocos2d::CCTouchHandler_const*)>
                        (param_1,param_2,param_4);
    param_3 = param_3 + -1;
    __introsort_loop<__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,std::vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>>>,int,bool(*)(cocos2d::CCTouchHandler_const*,cocos2d::CCTouchHandler_const*)>
              ((__normal_iterator)ppCVar1,param_2,param_3,param_4);
    param_2 = (__normal_iterator)ppCVar1;
  }
  __heap_select<__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,std::vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>>>,bool(*)(cocos2d::CCTouchHandler_const*,cocos2d::CCTouchHandler_const*)>
            (param_1,param_2,param_2,param_4);
  while (7 < (int)(param_2 - param_1)) {
    param_2 = param_2 + -4;
    pCVar2 = *(CCTouchHandler **)param_2;
    *(CCTouchHandler **)param_2 = *(CCTouchHandler **)param_1;
    __adjust_heap<__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,std::vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>>>,int,cocos2d::CCTouchHandler*,bool(*)(cocos2d::CCTouchHandler_const*,cocos2d::CCTouchHandler_const*)>
              (param_1,0,(int)(param_2 - param_1) >> 2,pCVar2,param_4);
  }
  return;
}


