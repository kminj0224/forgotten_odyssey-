/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00151784  Symbol: addObject */

/* cocos2d::CCMutableArray<cocos2d::CCRibbonSegment*>::addObject(cocos2d::CCRibbonSegment*) */

undefined8 __thiscall
cocos2d::CCMutableArray<cocos2d::CCRibbonSegment*>::addObject
          (CCMutableArray<cocos2d::CCRibbonSegment*> *this,CCRibbonSegment *param_1)

{
  CCRibbonSegment **ppCVar1;
  CCRibbonSegment *local_c;
  
  local_c = param_1;
  if (param_1 != (CCRibbonSegment *)0x0) {
    CCObject::retain((CCObject *)param_1);
    ppCVar1 = *(CCRibbonSegment ***)(this + 0x18);
    if (ppCVar1 == *(CCRibbonSegment ***)(this + 0x1c)) {
      std::vector<cocos2d::CCRibbonSegment*,std::allocator<cocos2d::CCRibbonSegment*>>::
      _M_insert_aux((vector<cocos2d::CCRibbonSegment*,std::allocator<cocos2d::CCRibbonSegment*>> *)
                    (this + 0x14),(__normal_iterator)ppCVar1,&local_c);
    }
    else {
      if (ppCVar1 != (CCRibbonSegment **)0x0) {
        *ppCVar1 = local_c;
      }
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + 4;
    }
  }
  return CONCAT44(local_c,this);
}


