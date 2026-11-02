/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014238c  Symbol: insertChild */

/* cocos2d::CCNode::insertChild(cocos2d::CCNode*, int) */

void __thiscall cocos2d::CCNode::insertChild(CCNode *this,CCNode *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  CCArray *this_00;
  uint uVar3;
  int *piVar4;
  
  piVar1 = (int *)CCArray::lastObject(*(CCArray **)(this + 0x40));
  if ((piVar1 == (int *)0x0) || (iVar2 = (**(code **)(*piVar1 + 0x14))(), iVar2 <= param_2)) {
    CCArray::addObject(*(CCObject **)(this + 0x40));
  }
  else {
    this_00 = *(CCArray **)(this + 0x40);
    if (this_00 != (CCArray *)0x0) {
      iVar2 = **(int **)(this_00 + 0x14);
      if (iVar2 != 0) {
        piVar1 = (int *)(*(int **)(this_00 + 0x14))[2];
        piVar4 = piVar1 + iVar2 + -1;
        uVar3 = 0;
        while (piVar1 <= piVar4) {
          iVar2 = *piVar1;
          piVar1 = piVar1 + 1;
          if (iVar2 == 0) break;
          if (param_2 < *(int *)(iVar2 + 0x14)) {
            CCArray::insertObject(this_00,(CCObject *)param_1,uVar3);
            break;
          }
          uVar3 = uVar3 + 1;
        }
      }
    }
  }
  setZOrder(param_1,param_2);
  return;
}


