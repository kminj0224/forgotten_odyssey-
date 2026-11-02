/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015944c  Symbol: copy */

/* cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::copy() */

int * __thiscall
cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::copy
          (CCMutableArray<cocos2d::CCSpriteFrame*> *this)

{
  int *this_00;
  CCObject *this_01;
  CCObject **ppCVar1;
  
  this_00 = (int *)operator_new(0x20);
  CCObject::CCObject((CCObject *)this_00);
  *this_00 = *(int *)(DAT_0015949c + 0x159466) + 8;
  this_00[5] = 0;
  this_00[6] = 0;
  this_00[7] = 0;
  std::vector<cocos2d::CCSpriteFrame*,std::allocator<cocos2d::CCSpriteFrame*>>::
  _M_assign_aux<__gnu_cxx::__normal_iterator<cocos2d::CCSpriteFrame**,std::vector<cocos2d::CCSpriteFrame*,std::allocator<cocos2d::CCSpriteFrame*>>>>
            ((__normal_iterator)(this_00 + 5),*(__normal_iterator *)(this + 0x14),
             *(forward_iterator_tag *)(this + 0x18));
  ppCVar1 = (CCObject **)this_00[5];
  if (this_00[6] - (int)ppCVar1 >> 2 != 0) {
    while (ppCVar1 != (CCObject **)this_00[6]) {
      this_01 = *ppCVar1;
      ppCVar1 = ppCVar1 + 1;
      if (this_01 != (CCObject *)0x0) {
        CCObject::retain(this_01);
      }
    }
  }
  return this_00;
}


