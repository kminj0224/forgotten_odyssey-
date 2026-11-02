/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00162bd8  Symbol: __copy_move_a2<false,std::_Deque_iterator<cocos2d::_ImageInfo*,cocos2d::_ImageInfo*const&,cocos2d::_ImageInfo*const*>,std::_Deque_iterator<cocos2d::_ImageInfo*,cocos2d::_ImageInfo*&,cocos2d::_ImageInfo**>> */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Deque_iterator<cocos2d::_ImageInfo*, cocos2d::_ImageInfo*&, cocos2d::_ImageInfo**>
   std::__copy_move_a2<false, std::_Deque_iterator<cocos2d::_ImageInfo*, cocos2d::_ImageInfo*
   const&, cocos2d::_ImageInfo* const*>, std::_Deque_iterator<cocos2d::_ImageInfo*,
   cocos2d::_ImageInfo*&, cocos2d::_ImageInfo**> >(std::_Deque_iterator<cocos2d::_ImageInfo*,
   cocos2d::_ImageInfo* const&, cocos2d::_ImageInfo* const*>,
   std::_Deque_iterator<cocos2d::_ImageInfo*, cocos2d::_ImageInfo* const&, cocos2d::_ImageInfo*
   const*>, std::_Deque_iterator<cocos2d::_ImageInfo*, cocos2d::_ImageInfo*&,
   cocos2d::_ImageInfo**>) */

_Deque_iterator
std::
__copy_move_a2<false,std::_Deque_iterator<cocos2d::_ImageInfo*,cocos2d::_ImageInfo*const&,cocos2d::_ImageInfo*const*>,std::_Deque_iterator<cocos2d::_ImageInfo*,cocos2d::_ImageInfo*&,cocos2d::_ImageInfo**>>
          (_Deque_iterator param_1,_Deque_iterator param_2,_Deque_iterator param_3)

{
  __copy_move<false,false,std::random_access_iterator_tag>::
  __copy_m<std::_Deque_iterator<cocos2d::_ImageInfo*,cocos2d::_ImageInfo*const&,cocos2d::_ImageInfo*const*>,std::_Deque_iterator<cocos2d::_ImageInfo*,cocos2d::_ImageInfo*&,cocos2d::_ImageInfo**>>
            (param_1,param_2,param_3);
  return param_1;
}


