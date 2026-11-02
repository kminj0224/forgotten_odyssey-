/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001593b2  Symbol: copy<__gnu_cxx::__normal_iterator<cocos2d::CCSpriteFrame**,std::vector<cocos2d::CCSpriteFrame*,std::allocator<cocos2d::CCSpriteFrame*>>>,cocos2d::CCSpriteFrame**> */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* cocos2d::CCSpriteFrame** std::copy<__gnu_cxx::__normal_iterator<cocos2d::CCSpriteFrame**,
   std::vector<cocos2d::CCSpriteFrame*, std::allocator<cocos2d::CCSpriteFrame*> > >,
   cocos2d::CCSpriteFrame**>(__gnu_cxx::__normal_iterator<cocos2d::CCSpriteFrame**,
   std::vector<cocos2d::CCSpriteFrame*, std::allocator<cocos2d::CCSpriteFrame*> > >,
   __gnu_cxx::__normal_iterator<cocos2d::CCSpriteFrame**, std::vector<cocos2d::CCSpriteFrame*,
   std::allocator<cocos2d::CCSpriteFrame*> > >, cocos2d::CCSpriteFrame**) */

CCSpriteFrame **
std::
copy<__gnu_cxx::__normal_iterator<cocos2d::CCSpriteFrame**,std::vector<cocos2d::CCSpriteFrame*,std::allocator<cocos2d::CCSpriteFrame*>>>,cocos2d::CCSpriteFrame**>
          (__normal_iterator param_1,__normal_iterator param_2,CCSpriteFrame **param_3)

{
  int iVar1;
  
  iVar1 = (int)(param_2 - param_1) >> 2;
  if (iVar1 != 0) {
    memmove(param_3,(void *)param_1,iVar1 << 2);
  }
  return param_3 + iVar1;
}


