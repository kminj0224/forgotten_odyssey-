/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00168042  Symbol: addStandardDelegate */

/* cocos2d::CCTouchDispatcher::addStandardDelegate(cocos2d::CCTouchDelegate*, int) */

void cocos2d::CCTouchDispatcher::addStandardDelegate(CCTouchDelegate *param_1,int param_2)

{
  CCTouchHandler *pCVar1;
  int *piVar2;
  int in_r2;
  int iVar3;
  
  pCVar1 = (CCTouchHandler *)
           CCStandardTouchHandler::handlerWithDelegate((CCTouchDelegate *)param_2,in_r2);
  if (param_1[0x20] == (CCTouchDelegate)0x0) {
    forceAddHandler((CCTouchDispatcher *)param_1,pCVar1,*(CCMutableArray **)(param_1 + 0x1c));
  }
  else {
    piVar2 = *(int **)(param_1 + 0x28);
    for (iVar3 = 0; iVar3 != *piVar2; iVar3 = iVar3 + 1) {
      if (*(int *)(iVar3 * 4 + piVar2[2]) == param_2) {
        if (iVar3 != -1) {
          FUN_00167524(piVar2,param_2);
          return;
        }
        break;
      }
    }
    CCMutableArray<cocos2d::CCTouchHandler*>::addObject
              (*(CCMutableArray<cocos2d::CCTouchHandler*> **)(param_1 + 0x24),pCVar1);
    param_1[0x21] = (CCTouchDelegate)0x1;
  }
  return;
}


