/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00167646  Symbol: findHandler */

/* cocos2d::CCTouchDispatcher::findHandler(cocos2d::CCTouchDelegate*) */

CCTouchHandler * __thiscall
cocos2d::CCTouchDispatcher::findHandler(CCTouchDispatcher *this,CCTouchDelegate *param_1)

{
  CCTouchHandler **ppCVar1;
  CCTouchDelegate *pCVar2;
  CCTouchHandler **ppCVar3;
  
  ppCVar1 = *(CCTouchHandler ***)(*(int *)(this + 0x18) + 0x14);
  while (ppCVar3 = ppCVar1, ppCVar3 != *(CCTouchHandler ***)(*(int *)(this + 0x18) + 0x18)) {
    pCVar2 = (CCTouchDelegate *)CCTouchHandler::getDelegate(*ppCVar3);
    ppCVar1 = ppCVar3 + 1;
    if (pCVar2 == param_1) goto LAB_0016767a;
  }
  ppCVar1 = *(CCTouchHandler ***)(*(int *)(this + 0x1c) + 0x14);
  do {
    ppCVar3 = ppCVar1;
    if (ppCVar3 == *(CCTouchHandler ***)(*(int *)(this + 0x1c) + 0x18)) {
      return (CCTouchHandler *)0x0;
    }
    pCVar2 = (CCTouchDelegate *)CCTouchHandler::getDelegate(*ppCVar3);
    ppCVar1 = ppCVar3 + 1;
  } while (pCVar2 != param_1);
LAB_0016767a:
  return *ppCVar3;
}


