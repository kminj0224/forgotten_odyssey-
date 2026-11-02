/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014a348  Symbol: addObject */

/* cocos2d::CCMutableArray<cocos2d::CCLayer*>::addObject(cocos2d::CCLayer*) */

undefined8 __thiscall
cocos2d::CCMutableArray<cocos2d::CCLayer*>::addObject
          (CCMutableArray<cocos2d::CCLayer*> *this,CCLayer *param_1)

{
  CCLayer **ppCVar1;
  CCLayer *local_c;
  
  local_c = param_1;
  if (param_1 != (CCLayer *)0x0) {
    CCObject::retain((CCObject *)param_1);
    ppCVar1 = *(CCLayer ***)(this + 0x18);
    if (ppCVar1 == *(CCLayer ***)(this + 0x1c)) {
      std::vector<cocos2d::CCLayer*,std::allocator<cocos2d::CCLayer*>>::_M_insert_aux
                ((vector<cocos2d::CCLayer*,std::allocator<cocos2d::CCLayer*>> *)(this + 0x14),
                 (__normal_iterator)ppCVar1,&local_c);
    }
    else {
      if (ppCVar1 != (CCLayer **)0x0) {
        *ppCVar1 = local_c;
      }
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + 4;
    }
  }
  return CONCAT44(local_c,this);
}


