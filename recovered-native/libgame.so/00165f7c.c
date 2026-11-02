/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00165f7c  Symbol: addObject */

/* cocos2d::CCMutableArray<cocos2d::CCTMXLayerInfo*>::addObject(cocos2d::CCTMXLayerInfo*) */

undefined8 __thiscall
cocos2d::CCMutableArray<cocos2d::CCTMXLayerInfo*>::addObject
          (CCMutableArray<cocos2d::CCTMXLayerInfo*> *this,CCTMXLayerInfo *param_1)

{
  CCTMXLayerInfo **ppCVar1;
  CCTMXLayerInfo *local_c;
  
  local_c = param_1;
  if (param_1 != (CCTMXLayerInfo *)0x0) {
    CCObject::retain((CCObject *)param_1);
    ppCVar1 = *(CCTMXLayerInfo ***)(this + 0x18);
    if (ppCVar1 == *(CCTMXLayerInfo ***)(this + 0x1c)) {
      std::vector<cocos2d::CCTMXLayerInfo*,std::allocator<cocos2d::CCTMXLayerInfo*>>::_M_insert_aux
                ((vector<cocos2d::CCTMXLayerInfo*,std::allocator<cocos2d::CCTMXLayerInfo*>> *)
                 (this + 0x14),(__normal_iterator)ppCVar1,&local_c);
    }
    else {
      if (ppCVar1 != (CCTMXLayerInfo **)0x0) {
        *ppCVar1 = local_c;
      }
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + 4;
    }
  }
  return CONCAT44(local_c,this);
}


