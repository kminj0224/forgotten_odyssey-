/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cd97c  Symbol: addObject */

/* cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::addObject(cocos2d::CCSpriteFrame*) */

undefined8 __thiscall
cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::addObject
          (CCMutableArray<cocos2d::CCSpriteFrame*> *this,CCSpriteFrame *param_1)

{
  CCSpriteFrame **ppCVar1;
  CCSpriteFrame *local_c;
  
  local_c = param_1;
  if (param_1 != (CCSpriteFrame *)0x0) {
    CCObject::retain((CCObject *)param_1);
    ppCVar1 = *(CCSpriteFrame ***)(this + 0x18);
    if (ppCVar1 == *(CCSpriteFrame ***)(this + 0x1c)) {
      std::vector<cocos2d::CCSpriteFrame*,std::allocator<cocos2d::CCSpriteFrame*>>::_M_insert_aux
                ((vector<cocos2d::CCSpriteFrame*,std::allocator<cocos2d::CCSpriteFrame*>> *)
                 (this + 0x14),(__normal_iterator)ppCVar1,&local_c);
    }
    else {
      if (ppCVar1 != (CCSpriteFrame **)0x0) {
        *ppCVar1 = local_c;
      }
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + 4;
    }
  }
  return CONCAT44(local_c,this);
}


