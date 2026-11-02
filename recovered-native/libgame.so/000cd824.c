/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cd824  Symbol: removeAllObjects */

/* cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::removeAllObjects(bool) */

void __thiscall
cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::removeAllObjects
          (CCMutableArray<cocos2d::CCSpriteFrame*> *this,bool param_1)

{
  CCObject **ppCVar1;
  
  if (param_1) {
    for (ppCVar1 = *(CCObject ***)(this + 0x14); ppCVar1 != *(CCObject ***)(this + 0x18);
        ppCVar1 = ppCVar1 + 1) {
      CCObject::release(*ppCVar1);
    }
  }
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(this + 0x14);
  return;
}


