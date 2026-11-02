/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00167cc2  Symbol: forceAddHandler */

/* cocos2d::CCTouchDispatcher::forceAddHandler(cocos2d::CCTouchHandler*,
   cocos2d::CCMutableArray<cocos2d::CCTouchHandler*>*) */

undefined8 __thiscall
cocos2d::CCTouchDispatcher::forceAddHandler
          (CCTouchDispatcher *this,CCTouchHandler *param_1,CCMutableArray *param_2)

{
  int iVar1;
  int iVar2;
  CCTouchHandler *this_00;
  CCTouchHandler **ppCVar3;
  uint local_20;
  
  ppCVar3 = *(CCTouchHandler ***)(param_2 + 0x14);
  local_20 = 0;
  do {
    do {
      if (ppCVar3 == *(CCTouchHandler ***)(param_2 + 0x18)) {
        CCMutableArray<cocos2d::CCTouchHandler*>::insertObjectAtIndex
                  ((CCMutableArray<cocos2d::CCTouchHandler*> *)param_2,param_1,local_20);
        goto LAB_00167d10;
      }
      this_00 = *ppCVar3;
      ppCVar3 = ppCVar3 + 1;
    } while (this_00 == (CCTouchHandler *)0x0);
    iVar1 = CCTouchHandler::getPriority(this_00);
    iVar2 = CCTouchHandler::getPriority(param_1);
    if (iVar1 < iVar2) {
      local_20 = local_20 + 1;
    }
    iVar1 = CCTouchHandler::getDelegate(this_00);
    iVar2 = CCTouchHandler::getDelegate(param_1);
  } while (iVar1 != iVar2);
LAB_00167d10:
  return CONCAT44(param_1,local_20);
}


