/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001680dc  Symbol: __adjust_heap<__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,std::vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>>>,int,cocos2d::CCTouchHandler*,bool(*)(cocos2d::CCTouchHandler_const*,cocos2d::CCTouchHandler_const*)> */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__adjust_heap<__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,
   std::vector<cocos2d::CCTouchHandler*, std::allocator<cocos2d::CCTouchHandler*> > >, int,
   cocos2d::CCTouchHandler*, bool (*)(cocos2d::CCTouchHandler const*, cocos2d::CCTouchHandler
   const*)>(__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,
   std::vector<cocos2d::CCTouchHandler*, std::allocator<cocos2d::CCTouchHandler*> > >, int, int,
   cocos2d::CCTouchHandler*, bool (*)(cocos2d::CCTouchHandler const*, cocos2d::CCTouchHandler
   const*)) */

void std::
     __adjust_heap<__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,std::vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>>>,int,cocos2d::CCTouchHandler*,bool(*)(cocos2d::CCTouchHandler_const*,cocos2d::CCTouchHandler_const*)>
               (__normal_iterator param_1,int param_2,int param_3,CCTouchHandler *param_4,
               _func_bool_CCTouchHandler_ptr_CCTouchHandler_ptr *param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_2;
  while (iVar4 < (param_3 + -1) / 2) {
    iVar2 = (iVar4 + 1) * 2;
    iVar3 = iVar2 + -1;
    bVar1 = (*param_5)(*(CCTouchHandler **)(param_1 + (iVar4 + 1) * 8),
                       *(CCTouchHandler **)(param_1 + iVar3 * 4));
    if (bVar1 == false) {
      iVar3 = iVar2;
    }
    *(undefined4 *)(param_1 + iVar4 * 4) = *(undefined4 *)(param_1 + iVar3 * 4);
    iVar4 = iVar3;
  }
  if ((-1 < param_3 << 0x1f) && (iVar4 == (param_3 + -2) / 2)) {
    iVar3 = iVar4 * 4;
    iVar4 = iVar4 * 2 + 1;
    *(undefined4 *)(param_1 + iVar3) = *(undefined4 *)(param_1 + iVar4 * 4);
  }
  __push_heap<__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,std::vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>>>,int,cocos2d::CCTouchHandler*,bool(*)(cocos2d::CCTouchHandler_const*,cocos2d::CCTouchHandler_const*)>
            (param_1,iVar4,param_2,param_4,param_5);
  return;
}


