/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015b3a6  Symbol: rebuildIndexInOrder */

/* cocos2d::CCSpriteBatchNode::rebuildIndexInOrder(cocos2d::CCSprite*, unsigned int) */

uint __thiscall
cocos2d::CCSpriteBatchNode::rebuildIndexInOrder
          (CCSpriteBatchNode *this,CCSprite *param_1,uint param_2)

{
  CCArray *this_00;
  int iVar1;
  int **ppiVar2;
  int *piVar3;
  int **ppiVar4;
  int **local_24;
  
  this_00 = (CCArray *)(**(code **)(*(int *)param_1 + 0x58))(param_1);
  if ((this_00 != (CCArray *)0x0) && (iVar1 = CCArray::count(this_00), iVar1 != 0)) {
    iVar1 = **(int **)(this_00 + 0x14);
    if (iVar1 != 0) {
      local_24 = (int **)(*(int **)(this_00 + 0x14))[2];
      ppiVar2 = local_24 + iVar1 + -1;
      while (local_24 <= ppiVar2) {
        piVar3 = *local_24;
        local_24 = local_24 + 1;
        if (piVar3 == (int *)0x0) break;
        iVar1 = (**(code **)(*piVar3 + 0x14))(piVar3);
        if (iVar1 < 0) {
          param_2 = rebuildIndexInOrder(this,(CCSprite *)piVar3,param_2);
        }
      }
    }
  }
  iVar1 = (**(code **)(*(int *)param_1 + 0xc))(param_1,this);
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x10c) = param_2;
    param_2 = param_2 + 1;
  }
  if ((this_00 != (CCArray *)0x0) && (iVar1 = CCArray::count(this_00), iVar1 != 0)) {
    iVar1 = **(int **)(this_00 + 0x14);
    if (iVar1 != 0) {
      ppiVar2 = (int **)(*(int **)(this_00 + 0x14))[2];
      ppiVar4 = ppiVar2 + iVar1 + -1;
      while (ppiVar2 <= ppiVar4) {
        piVar3 = *ppiVar2;
        ppiVar2 = ppiVar2 + 1;
        if (piVar3 == (int *)0x0) {
          return param_2;
        }
        iVar1 = (**(code **)(*piVar3 + 0x14))(piVar3);
        if (-1 < iVar1) {
          param_2 = rebuildIndexInOrder(this,(CCSprite *)piVar3,param_2);
        }
      }
    }
  }
  return param_2;
}


