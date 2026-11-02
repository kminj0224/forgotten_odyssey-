/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00143a74  Symbol: addObject */

/* cocos2d::CCMutableArray<cocos2d::CCObject*>::addObject(cocos2d::CCObject*) */

undefined8 __thiscall
cocos2d::CCMutableArray<cocos2d::CCObject*>::addObject
          (CCMutableArray<cocos2d::CCObject*> *this,CCObject *param_1)

{
  CCObject **ppCVar1;
  CCObject *local_c;
  
  local_c = param_1;
  if (param_1 != (CCObject *)0x0) {
    CCObject::retain(param_1);
    ppCVar1 = *(CCObject ***)(this + 0x18);
    if (ppCVar1 == *(CCObject ***)(this + 0x1c)) {
      std::vector<cocos2d::CCObject*,std::allocator<cocos2d::CCObject*>>::_M_insert_aux
                ((vector<cocos2d::CCObject*,std::allocator<cocos2d::CCObject*>> *)(this + 0x14),
                 (__normal_iterator)ppCVar1,&local_c);
    }
    else {
      if (ppCVar1 != (CCObject **)0x0) {
        *ppCVar1 = local_c;
      }
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + 4;
    }
  }
  return CONCAT44(local_c,this);
}


