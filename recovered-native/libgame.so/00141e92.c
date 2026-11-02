/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00141e92  Symbol: removeAllChildrenWithCleanup */

/* cocos2d::CCNode::removeAllChildrenWithCleanup(bool) */

undefined8 __thiscall cocos2d::CCNode::removeAllChildrenWithCleanup(CCNode *this,bool param_1)

{
  int iVar1;
  int **ppiVar2;
  int *piVar3;
  int **ppiVar4;
  int **local_1c;
  
  ppiVar2 = (int **)(uint)param_1;
  local_1c = ppiVar2;
  if ((*(CCArray **)(this + 0x40) != (CCArray *)0x0) &&
     (iVar1 = CCArray::count(*(CCArray **)(this + 0x40)), iVar1 != 0)) {
    if (*(int *)(this + 0x40) != 0) {
      piVar3 = *(int **)(*(int *)(this + 0x40) + 0x14);
      iVar1 = *piVar3;
      if (iVar1 != 0) {
        ppiVar4 = (int **)piVar3[2];
        local_1c = ppiVar4 + iVar1 + -1;
        while (ppiVar4 <= local_1c) {
          piVar3 = *ppiVar4;
          ppiVar4 = ppiVar4 + 1;
          if (piVar3 == (int *)0x0) break;
          if (this[0x70] != (CCNode)0x0) {
            (**(code **)(*piVar3 + 0xb8))(piVar3);
          }
          if (ppiVar2 != (int **)0x0) {
            (**(code **)(*piVar3 + 0xdc))(piVar3);
          }
          (**(code **)(*piVar3 + 0x94))(piVar3,0);
        }
      }
    }
    CCArray::removeAllObjects(*(CCArray **)(this + 0x40));
  }
  return CONCAT44(local_1c,this);
}


