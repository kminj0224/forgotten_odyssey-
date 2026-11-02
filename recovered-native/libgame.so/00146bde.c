/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00146bde  Symbol: forceRemoveDelegate */

/* cocos2d::CCKeypadDispatcher::forceRemoveDelegate(cocos2d::CCKeypadDelegate*) */

void __thiscall
cocos2d::CCKeypadDispatcher::forceRemoveDelegate(CCKeypadDispatcher *this,CCKeypadDelegate *param_1)

{
  CCKeypadDelegate *pCVar1;
  CCKeypadHandler **ppCVar2;
  CCKeypadHandler *this_00;
  
  ppCVar2 = *(CCKeypadHandler ***)(*(int *)(this + 0x14) + 0x14);
  do {
    if (ppCVar2 == *(CCKeypadHandler ***)(*(int *)(this + 0x14) + 0x18)) {
      return;
    }
    this_00 = *ppCVar2;
    ppCVar2 = ppCVar2 + 1;
  } while ((this_00 == (CCKeypadHandler *)0x0) ||
          (pCVar1 = (CCKeypadDelegate *)CCKeypadHandler::getDelegate(this_00), pCVar1 != param_1));
  CCMutableArray<cocos2d::CCKeypadHandler*>::removeObject
            (*(CCMutableArray<cocos2d::CCKeypadHandler*> **)(this + 0x14),this_00,true);
  return;
}


