/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001676fc  Symbol: forceRemoveDelegate */

/* cocos2d::CCTouchDispatcher::forceRemoveDelegate(cocos2d::CCTouchDelegate*) */

void __thiscall
cocos2d::CCTouchDispatcher::forceRemoveDelegate(CCTouchDispatcher *this,CCTouchDelegate *param_1)

{
  CCTouchDelegate *pCVar1;
  CCTouchHandler **ppCVar2;
  CCTouchHandler *pCVar3;
  
  ppCVar2 = *(CCTouchHandler ***)(*(int *)(this + 0x1c) + 0x14);
  do {
    if (ppCVar2 == *(CCTouchHandler ***)(*(int *)(this + 0x1c) + 0x18)) goto LAB_0016772c;
    pCVar3 = *ppCVar2;
    ppCVar2 = ppCVar2 + 1;
  } while ((pCVar3 == (CCTouchHandler *)0x0) ||
          (pCVar1 = (CCTouchDelegate *)CCTouchHandler::getDelegate(pCVar3), pCVar1 != param_1));
  CCMutableArray<cocos2d::CCTouchHandler*>::removeObject
            (*(CCMutableArray<cocos2d::CCTouchHandler*> **)(this + 0x1c),pCVar3,true);
LAB_0016772c:
  ppCVar2 = *(CCTouchHandler ***)(*(int *)(this + 0x18) + 0x14);
  do {
    if (ppCVar2 == *(CCTouchHandler ***)(*(int *)(this + 0x18) + 0x18)) {
      return;
    }
    pCVar3 = *ppCVar2;
    ppCVar2 = ppCVar2 + 1;
  } while ((pCVar3 == (CCTouchHandler *)0x0) ||
          (pCVar1 = (CCTouchDelegate *)CCTouchHandler::getDelegate(pCVar3), pCVar1 != param_1));
  CCMutableArray<cocos2d::CCTouchHandler*>::removeObject
            (*(CCMutableArray<cocos2d::CCTouchHandler*> **)(this + 0x18),pCVar3,true);
  return;
}


