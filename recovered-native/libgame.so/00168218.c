/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00168218  Symbol: rearrangeHandlers */

/* cocos2d::CCTouchDispatcher::rearrangeHandlers(cocos2d::CCMutableArray<cocos2d::CCTouchHandler*>*)
    */

void __thiscall
cocos2d::CCTouchDispatcher::rearrangeHandlers(CCTouchDispatcher *this,CCMutableArray *param_1)

{
  int iVar1;
  _func_bool_CCTouchHandler_ptr_CCTouchHandler_ptr *p_Var2;
  __normal_iterator _Var3;
  __normal_iterator _Var4;
  
  _Var3 = *(__normal_iterator *)(param_1 + 0x14);
  _Var4 = *(__normal_iterator *)(param_1 + 0x18);
  if (_Var3 != _Var4) {
    iVar1 = __clzsi2((int)(_Var4 - _Var3) >> 2);
    p_Var2 = (_func_bool_CCTouchHandler_ptr_CCTouchHandler_ptr *)(DAT_0016824c + 0x168234);
    std::
    __introsort_loop<__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,std::vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>>>,int,bool(*)(cocos2d::CCTouchHandler_const*,cocos2d::CCTouchHandler_const*)>
              (_Var3,_Var4,(0x1f - iVar1) * 2,p_Var2);
    std::
    __final_insertion_sort<__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,std::vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>>>,bool(*)(cocos2d::CCTouchHandler_const*,cocos2d::CCTouchHandler_const*)>
              (_Var3,_Var4,p_Var2);
  }
  return;
}


