/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016809a  Symbol: __push_heap<__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,std::vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>>>,int,cocos2d::CCTouchHandler*,bool(*)(cocos2d::CCTouchHandler_const*,cocos2d::CCTouchHandler_const*)> */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__push_heap<__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,
   std::vector<cocos2d::CCTouchHandler*, std::allocator<cocos2d::CCTouchHandler*> > >, int,
   cocos2d::CCTouchHandler*, bool (*)(cocos2d::CCTouchHandler const*, cocos2d::CCTouchHandler
   const*)>(__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,
   std::vector<cocos2d::CCTouchHandler*, std::allocator<cocos2d::CCTouchHandler*> > >, int, int,
   cocos2d::CCTouchHandler*, bool (*)(cocos2d::CCTouchHandler const*, cocos2d::CCTouchHandler
   const*)) */

void std::
     __push_heap<__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,std::vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>>>,int,cocos2d::CCTouchHandler*,bool(*)(cocos2d::CCTouchHandler_const*,cocos2d::CCTouchHandler_const*)>
               (__normal_iterator param_1,int param_2,int param_3,CCTouchHandler *param_4,
               _func_bool_CCTouchHandler_ptr_CCTouchHandler_ptr *param_5)

{
  bool bVar1;
  int iVar2;
  CCTouchHandler **ppCVar3;
  int iVar4;
  
  iVar2 = param_2 + -1;
  while (iVar4 = iVar2 / 2, param_3 < param_2) {
    ppCVar3 = (CCTouchHandler **)(param_1 + iVar4 * 4);
    bVar1 = (*param_5)(*ppCVar3,param_4);
    if (bVar1 == false) break;
    *(CCTouchHandler **)(param_1 + param_2 * 4) = *ppCVar3;
    iVar2 = iVar4 + -1;
    param_2 = iVar4;
  }
  *(CCTouchHandler **)(param_1 + param_2 * 4) = param_4;
  return;
}


