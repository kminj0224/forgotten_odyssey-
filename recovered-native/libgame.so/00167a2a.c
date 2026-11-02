/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00167a2a  Symbol: __unguarded_partition<__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,std::vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>>>,cocos2d::CCTouchHandler*,bool(*)(cocos2d::CCTouchHandler_const*,cocos2d::CCTouchHandler_const*)> */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**, std::vector<cocos2d::CCTouchHandler*,
   std::allocator<cocos2d::CCTouchHandler*> > >
   std::__unguarded_partition<__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,
   std::vector<cocos2d::CCTouchHandler*, std::allocator<cocos2d::CCTouchHandler*> > >,
   cocos2d::CCTouchHandler*, bool (*)(cocos2d::CCTouchHandler const*, cocos2d::CCTouchHandler
   const*)>(__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,
   std::vector<cocos2d::CCTouchHandler*, std::allocator<cocos2d::CCTouchHandler*> > >,
   __gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**, std::vector<cocos2d::CCTouchHandler*,
   std::allocator<cocos2d::CCTouchHandler*> > >, cocos2d::CCTouchHandler* const&, bool
   (*)(cocos2d::CCTouchHandler const*, cocos2d::CCTouchHandler const*)) */

__normal_iterator
std::
__unguarded_partition<__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,std::vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>>>,cocos2d::CCTouchHandler*,bool(*)(cocos2d::CCTouchHandler_const*,cocos2d::CCTouchHandler_const*)>
          (__normal_iterator param_1,__normal_iterator param_2,CCTouchHandler **param_3,
          _func_bool_CCTouchHandler_ptr_CCTouchHandler_ptr *param_4)

{
  bool bVar1;
  CCTouchHandler *pCVar2;
  CCTouchHandler **ppCVar3;
  
  while( true ) {
    do {
      ppCVar3 = (CCTouchHandler **)param_1;
      bVar1 = (*param_4)(*ppCVar3,*param_3);
      param_1 = (__normal_iterator)(ppCVar3 + 1);
    } while (bVar1 != false);
    do {
      param_2 = param_2 + -4;
      bVar1 = (*param_4)(*param_3,*(CCTouchHandler **)param_2);
    } while (bVar1 != false);
    if (param_2 <= ppCVar3) break;
    pCVar2 = *ppCVar3;
    *ppCVar3 = *(CCTouchHandler **)param_2;
    *(CCTouchHandler **)param_2 = pCVar2;
    param_1 = (__normal_iterator)(ppCVar3 + 1);
  }
  return (__normal_iterator)ppCVar3;
}


