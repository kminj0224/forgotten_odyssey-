/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00146d7c  Symbol: forceAddDelegate */

/* cocos2d::CCKeypadDispatcher::forceAddDelegate(cocos2d::CCKeypadDelegate*) */

void __thiscall
cocos2d::CCKeypadDispatcher::forceAddDelegate(CCKeypadDispatcher *this,CCKeypadDelegate *param_1)

{
  CCKeypadHandler *pCVar1;
  
  pCVar1 = (CCKeypadHandler *)CCKeypadHandler::handlerWithDelegate(param_1);
  if (pCVar1 != (CCKeypadHandler *)0x0) {
    CCMutableArray<cocos2d::CCKeypadHandler*>::addObject
              (*(CCMutableArray<cocos2d::CCKeypadHandler*> **)(this + 0x14),pCVar1);
  }
  return;
}


