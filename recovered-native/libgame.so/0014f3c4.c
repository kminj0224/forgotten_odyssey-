/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014f3c4  Symbol: addObject */

/* cocos2d::CCMutableArray<cocos2d::CCMenuItem*>::addObject(cocos2d::CCMenuItem*) */

undefined8 __thiscall
cocos2d::CCMutableArray<cocos2d::CCMenuItem*>::addObject
          (CCMutableArray<cocos2d::CCMenuItem*> *this,CCMenuItem *param_1)

{
  CCMenuItem **ppCVar1;
  CCMenuItem *local_c;
  
  local_c = param_1;
  if (param_1 != (CCMenuItem *)0x0) {
    CCObject::retain((CCObject *)param_1);
    ppCVar1 = *(CCMenuItem ***)(this + 0x18);
    if (ppCVar1 == *(CCMenuItem ***)(this + 0x1c)) {
      std::vector<cocos2d::CCMenuItem*,std::allocator<cocos2d::CCMenuItem*>>::_M_insert_aux
                ((vector<cocos2d::CCMenuItem*,std::allocator<cocos2d::CCMenuItem*>> *)(this + 0x14),
                 (__normal_iterator)ppCVar1,&local_c);
    }
    else {
      if (ppCVar1 != (CCMenuItem **)0x0) {
        *ppCVar1 = local_c;
      }
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + 4;
    }
  }
  return CONCAT44(local_c,this);
}


