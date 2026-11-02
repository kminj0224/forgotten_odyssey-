/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015165c  Symbol: removeObjectsInArray */

/* cocos2d::CCMutableArray<cocos2d::CCRibbonSegment*>::removeObjectsInArray(cocos2d::CCMutableArray<cocos2d::CCRibbonSegment*>*)
    */

void __thiscall
cocos2d::CCMutableArray<cocos2d::CCRibbonSegment*>::removeObjectsInArray
          (CCMutableArray<cocos2d::CCRibbonSegment*> *this,CCMutableArray *param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((param_1 != (CCMutableArray *)0x0) &&
     (piVar2 = *(int **)(param_1 + 0x14), *(int *)(param_1 + 0x18) - (int)piVar2 >> 2 != 0)) {
    while (piVar2 != *(int **)(param_1 + 0x18)) {
      iVar1 = *piVar2;
      piVar2 = piVar2 + 1;
      if ((*(int *)(this + 0x14) != *(int *)(this + 0x18)) && (iVar1 != 0)) {
        FUN_0015128e(this);
      }
    }
  }
  return;
}


