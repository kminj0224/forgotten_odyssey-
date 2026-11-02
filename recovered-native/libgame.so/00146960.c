/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00146960  Symbol: setDelegate */

/* cocos2d::CCKeypadHandler::setDelegate(cocos2d::CCKeypadDelegate*) */

void __thiscall
cocos2d::CCKeypadHandler::setDelegate(CCKeypadHandler *this,CCKeypadDelegate *param_1)

{
  CCObject *pCVar1;
  int iVar2;
  
  iVar2 = DAT_001469a4 + 0x14696c;
  if (param_1 != (CCKeypadDelegate *)0x0) {
    pCVar1 = (CCObject *)
             __dynamic_cast(param_1,*(undefined4 *)(iVar2 + DAT_001469a8),
                            *(undefined4 *)(iVar2 + DAT_001469ac),0xfffffffe);
    CCObject::retain(pCVar1);
  }
  if (*(int *)(this + 0x14) != 0) {
    pCVar1 = (CCObject *)
             __dynamic_cast(*(int *)(this + 0x14),*(undefined4 *)(iVar2 + DAT_001469a8),
                            *(undefined4 *)(iVar2 + DAT_001469ac),0xfffffffe);
    CCObject::release(pCVar1);
  }
  *(CCKeypadDelegate **)(this + 0x14) = param_1;
  return;
}


