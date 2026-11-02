/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001676b2  Symbol: removeObject */

/* cocos2d::CCMutableArray<cocos2d::CCTouchHandler*>::removeObject(cocos2d::CCTouchHandler*, bool)
    */

void __thiscall
cocos2d::CCMutableArray<cocos2d::CCTouchHandler*>::removeObject
          (CCMutableArray<cocos2d::CCTouchHandler*> *this,CCTouchHandler *param_1,bool param_2)

{
  CCTouchHandler **ppCVar1;
  CCTouchHandler **ppCVar2;
  int iVar3;
  CCTouchHandler **__dest;
  
  ppCVar2 = *(CCTouchHandler ***)(this + 0x18);
  if ((*(CCTouchHandler ***)(this + 0x14) != ppCVar2) &&
     (ppCVar1 = *(CCTouchHandler ***)(this + 0x14), param_1 != (CCTouchHandler *)0x0)) {
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
      CCObject::release((CCObject *)param_1);
    }
  }
  return;
}


