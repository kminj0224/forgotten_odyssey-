/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00167c68  Symbol: insertObjectAtIndex */

/* cocos2d::CCMutableArray<cocos2d::CCTouchHandler*>::insertObjectAtIndex(cocos2d::CCTouchHandler*,
   unsigned int) */

undefined8 __thiscall
cocos2d::CCMutableArray<cocos2d::CCTouchHandler*>::insertObjectAtIndex
          (CCMutableArray<cocos2d::CCTouchHandler*> *this,CCTouchHandler *param_1,uint param_2)

{
  CCTouchHandler **ppCVar1;
  vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>> *this_00;
  CCTouchHandler *local_14;
  
  local_14 = param_1;
  if (param_1 != (CCTouchHandler *)0x0) {
    CCObject::retain((CCObject *)param_1);
    this_00 = (vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>> *)
              (this + 0x14);
    if (param_2 < (uint)(*(int *)(this + 0x1c) - *(int *)(this + 0x14) >> 2)) {
      std::vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>>::insert
                (this_00,*(int *)(this + 0x14) + param_2 * 4,&local_14);
    }
    else {
      std::vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>>::reserve
                (this_00,param_2 + 1);
      ppCVar1 = *(CCTouchHandler ***)(this + 0x18);
      if (ppCVar1 == *(CCTouchHandler ***)(this + 0x1c)) {
        std::vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>>::
        _M_insert_aux(this_00,(__normal_iterator)ppCVar1,&local_14);
      }
      else {
        if (ppCVar1 != (CCTouchHandler **)0x0) {
          *ppCVar1 = local_14;
        }
        *(int *)(this + 0x18) = *(int *)(this + 0x18) + 4;
      }
    }
  }
  return CONCAT44(local_14,this);
}


