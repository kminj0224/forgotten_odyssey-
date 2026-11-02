/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00167c34  Symbol: insert */

/* std::vector<cocos2d::CCTouchHandler*, std::allocator<cocos2d::CCTouchHandler*>
   >::insert(__gnu_cxx::__normal_iterator<cocos2d::CCTouchHandler**,
   std::vector<cocos2d::CCTouchHandler*, std::allocator<cocos2d::CCTouchHandler*> > >,
   cocos2d::CCTouchHandler* const&) */

int __thiscall
std::vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>>::insert
          (vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>> *this,
          __normal_iterator param_1,CCTouchHandler **param_2)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  if ((*(__normal_iterator *)(this + 4) == *(__normal_iterator *)(this + 8)) ||
     (param_1 != *(__normal_iterator *)(this + 4))) {
    _M_insert_aux(this,param_1,param_2);
  }
  else {
    if (param_1 != 0) {
      *(CCTouchHandler **)param_1 = *param_2;
    }
    *(int *)(this + 4) = *(int *)(this + 4) + 4;
  }
  return *(int *)this + ((int)(param_1 - iVar1) >> 2) * 4;
}


