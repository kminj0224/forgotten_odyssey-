/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001456b0  Symbol: addObject */

/* cocos2d::CCMutableArray<cocos2d::CCScene*>::addObject(cocos2d::CCScene*) */

undefined8 __thiscall
cocos2d::CCMutableArray<cocos2d::CCScene*>::addObject
          (CCMutableArray<cocos2d::CCScene*> *this,CCScene *param_1)

{
  CCScene **ppCVar1;
  CCScene *local_c;
  
  local_c = param_1;
  if (param_1 != (CCScene *)0x0) {
    CCObject::retain((CCObject *)param_1);
    ppCVar1 = *(CCScene ***)(this + 0x18);
    if (ppCVar1 == *(CCScene ***)(this + 0x1c)) {
      std::vector<cocos2d::CCScene*,std::allocator<cocos2d::CCScene*>>::_M_insert_aux
                ((vector<cocos2d::CCScene*,std::allocator<cocos2d::CCScene*>> *)(this + 0x14),
                 (__normal_iterator)ppCVar1,&local_c);
    }
    else {
      if (ppCVar1 != (CCScene **)0x0) {
        *ppCVar1 = local_c;
      }
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + 4;
    }
  }
  return CONCAT44(local_c,this);
}


