/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00167c00  Symbol: addObject */

/* cocos2d::CCMutableArray<cocos2d::CCTouchHandler*>::addObject(cocos2d::CCTouchHandler*) */

undefined8 __thiscall
cocos2d::CCMutableArray<cocos2d::CCTouchHandler*>::addObject
          (CCMutableArray<cocos2d::CCTouchHandler*> *this,CCTouchHandler *param_1)

{
  CCTouchHandler **ppCVar1;
  CCTouchHandler *local_c;
  
  local_c = param_1;
  if (param_1 != (CCTouchHandler *)0x0) {
    CCObject::retain((CCObject *)param_1);
    ppCVar1 = *(CCTouchHandler ***)(this + 0x18);
    if (ppCVar1 == *(CCTouchHandler ***)(this + 0x1c)) {
      std::vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>>::_M_insert_aux
                ((vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>> *)
                 (this + 0x14),(__normal_iterator)ppCVar1,&local_c);
    }
    else {
      if (ppCVar1 != (CCTouchHandler **)0x0) {
        *ppCVar1 = local_c;
      }
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + 4;
    }
  }
  return CONCAT44(local_c,this);
}


