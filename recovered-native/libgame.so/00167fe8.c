/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00167fe8  Symbol: addTargetedDelegate */

/* cocos2d::CCTouchDispatcher::addTargetedDelegate(cocos2d::CCTouchDelegate*, int, bool) */

void __thiscall
cocos2d::CCTouchDispatcher::addTargetedDelegate
          (CCTouchDispatcher *this,CCTouchDelegate *param_1,int param_2,bool param_3)

{
  CCTouchHandler *pCVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (uint)param_3;
  pCVar1 = (CCTouchHandler *)CCTargetedTouchHandler::handlerWithDelegate(param_1,param_2,param_3);
  if (this[0x20] == (CCTouchDispatcher)0x0) {
    forceAddHandler(this,pCVar1,*(CCMutableArray **)(this + 0x18));
  }
  else {
    piVar2 = *(int **)(this + 0x28);
    for (iVar4 = 0; iVar4 != *piVar2; iVar4 = iVar4 + 1) {
      if (*(CCTouchDelegate **)(iVar4 * 4 + piVar2[2]) == param_1) {
        if (iVar4 + 1 != 0) {
          FUN_00167524(piVar2,param_1,*piVar2,iVar4 + 1,uVar3);
          return;
        }
        break;
      }
    }
    CCMutableArray<cocos2d::CCTouchHandler*>::addObject
              (*(CCMutableArray<cocos2d::CCTouchHandler*> **)(this + 0x24),pCVar1);
    this[0x21] = (CCTouchDispatcher)0x1;
  }
  return;
}


