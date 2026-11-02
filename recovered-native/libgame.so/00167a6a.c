/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00167a6a  Symbol: __unguarded_partition_pivot<__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,std::vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>>>,bool(*)(cocos2d::CCTouchHandler_const*,cocos2d::CCTouchHandler_const*)> */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**, std::vector<cocos2d::CCTouchHandler*,
   std::allocator<cocos2d::CCTouchHandler*> > >
   std::__unguarded_partition_pivot<__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,
   std::vector<cocos2d::CCTouchHandler*, std::allocator<cocos2d::CCTouchHandler*> > >, bool
   (*)(cocos2d::CCTouchHandler const*, cocos2d::CCTouchHandler
   const*)>(__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,
   std::vector<cocos2d::CCTouchHandler*, std::allocator<cocos2d::CCTouchHandler*> > >,
   __gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**, std::vector<cocos2d::CCTouchHandler*,
   std::allocator<cocos2d::CCTouchHandler*> > >, bool (*)(cocos2d::CCTouchHandler const*,
   cocos2d::CCTouchHandler const*)) */

__normal_iterator
std::
__unguarded_partition_pivot<__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,std::vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>>>,bool(*)(cocos2d::CCTouchHandler_const*,cocos2d::CCTouchHandler_const*)>
          (__normal_iterator param_1,__normal_iterator param_2,
          _func_bool_CCTouchHandler_ptr_CCTouchHandler_ptr *param_3)

{
  __normal_iterator _Var1;
  
  __move_median_first<__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,std::vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>>>,bool(*)(cocos2d::CCTouchHandler_const*,cocos2d::CCTouchHandler_const*)>
            (param_1,param_1 + (((int)(param_2 - param_1) >> 2) - ((int)(param_2 - param_1) >> 0x1f)
                               >> 1) * 4,param_2 - 4,param_3);
  _Var1 = __unguarded_partition<__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,std::vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>>>,cocos2d::CCTouchHandler*,bool(*)(cocos2d::CCTouchHandler_const*,cocos2d::CCTouchHandler_const*)>
                    (param_1 + 4,param_2,(CCTouchHandler **)param_1,param_3);
  return _Var1;
}


