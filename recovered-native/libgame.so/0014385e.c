/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014385e  Symbol: removeObject */

/* cocos2d::CCMutableArray<cocos2d::CCObject*>::removeObject(cocos2d::CCObject*, bool) */

void __thiscall
cocos2d::CCMutableArray<cocos2d::CCObject*>::removeObject
          (CCMutableArray<cocos2d::CCObject*> *this,CCObject *param_1,bool param_2)

{
  CCObject **ppCVar1;
  CCObject **ppCVar2;
  int iVar3;
  CCObject **__dest;
  
  ppCVar2 = *(CCObject ***)(this + 0x18);
  if ((*(CCObject ***)(this + 0x14) != ppCVar2) &&
     (ppCVar1 = *(CCObject ***)(this + 0x14), param_1 != (CCObject *)0x0)) {
    do {
      __dest = ppCVar1;
      if (__dest == ppCVar2) {
        return;
      }
      ppCVar1 = __dest + 1;
    } while (*__dest != param_1);
    ppCVar1 = __dest + 1;
    if ((ppCVar1 != ppCVar2) && (iVar3 = (int)ppCVar2 - (int)ppCVar1 >> 2, iVar3 != 0)) {
      memmove(__dest,ppCVar1,iVar3 << 2);
    }
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + -4;
    if (param_2) {
      CCObject::release(param_1);
    }
  }
  return;
}


