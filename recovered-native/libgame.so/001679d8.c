/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001679d8  Symbol: __move_median_first<__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,std::vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>>>,bool(*)(cocos2d::CCTouchHandler_const*,cocos2d::CCTouchHandler_const*)> */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__move_median_first<__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,
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
     __move_median_first<__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,std::vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>>>,bool(*)(cocos2d::CCTouchHandler_const*,cocos2d::CCTouchHandler_const*)>
               (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3,
               _func_bool_CCTouchHandler_ptr_CCTouchHandler_ptr *param_4)

{
  bool bVar1;
  CCTouchHandler *pCVar2;
  
  bVar1 = (*param_4)(*(CCTouchHandler **)param_1,*(CCTouchHandler **)param_2);
  if (bVar1) {
    bVar1 = (*param_4)(*(CCTouchHandler **)param_2,*(CCTouchHandler **)param_3);
    pCVar2 = *(CCTouchHandler **)param_1;
    if (bVar1) {
LAB_00167a22:
      *(undefined4 *)param_1 = *(undefined4 *)param_2;
      *(CCTouchHandler **)param_2 = pCVar2;
      return;
    }
    bVar1 = (*param_4)(pCVar2,*(CCTouchHandler **)param_3);
    if (!bVar1) {
      return;
    }
    pCVar2 = *(CCTouchHandler **)param_1;
  }
  else {
    bVar1 = (*param_4)(*(CCTouchHandler **)param_1,*(CCTouchHandler **)param_3);
    if (bVar1) {
      return;
    }
    bVar1 = (*param_4)(*(CCTouchHandler **)param_2,*(CCTouchHandler **)param_3);
    pCVar2 = *(CCTouchHandler **)param_1;
    if (!bVar1) goto LAB_00167a22;
  }
  *(undefined4 *)param_1 = *(undefined4 *)param_3;
  *(CCTouchHandler **)param_3 = pCVar2;
  return;
}


