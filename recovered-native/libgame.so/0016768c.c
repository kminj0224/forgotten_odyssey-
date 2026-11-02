/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016768c  Symbol: findHandler */

/* cocos2d::CCTouchDispatcher::findHandler(cocos2d::CCMutableArray<cocos2d::CCTouchHandler*>*,
   cocos2d::CCTouchDelegate*) */

CCTouchHandler * __thiscall
cocos2d::CCTouchDispatcher::findHandler
          (CCTouchDispatcher *this,CCMutableArray *param_1,CCTouchDelegate *param_2)

{
  CCTouchHandler **ppCVar1;
  CCTouchDelegate *pCVar2;
  CCTouchHandler **ppCVar3;
  
  ppCVar1 = *(CCTouchHandler ***)(param_1 + 0x14);
  do {
    ppCVar3 = ppCVar1;
    if (ppCVar3 == *(CCTouchHandler ***)(param_1 + 0x18)) {
      return (CCTouchHandler *)0x0;
    }
    pCVar2 = (CCTouchDelegate *)CCTouchHandler::getDelegate(*ppCVar3);
    ppCVar1 = ppCVar3 + 1;
  } while (pCVar2 != param_2);
  return *ppCVar3;
}


