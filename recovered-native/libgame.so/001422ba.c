/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001422ba  Symbol: getChildByTag */

/* cocos2d::CCNode::getChildByTag(int) */

CCArray * __thiscall cocos2d::CCNode::getChildByTag(CCNode *this,int param_1)

{
  int **ppiVar1;
  CCArray **ppCVar2;
  CCArray *pCVar3;
  CCArray **ppCVar4;
  
  pCVar3 = *(CCArray **)(this + 0x40);
  if (((pCVar3 != (CCArray *)0x0) &&
      (pCVar3 = (CCArray *)CCArray::count(pCVar3), pCVar3 != (CCArray *)0x0)) &&
     (pCVar3 = *(CCArray **)(this + 0x40), pCVar3 != (CCArray *)0x0)) {
    ppiVar1 = (int **)(pCVar3 + 0x14);
    pCVar3 = (CCArray *)**ppiVar1;
    if (pCVar3 != (CCArray *)0x0) {
      ppCVar4 = (CCArray **)(*ppiVar1)[2];
      ppCVar2 = ppCVar4 + (int)(pCVar3 + -1);
      while (ppCVar4 <= ppCVar2) {
        pCVar3 = *ppCVar4;
        ppCVar4 = ppCVar4 + 1;
        if (pCVar3 == (CCArray *)0x0) {
          return (CCArray *)0x0;
        }
        if (*(int *)(pCVar3 + 0x7c) == param_1) {
          return pCVar3;
        }
      }
      pCVar3 = (CCArray *)0x0;
    }
  }
  return pCVar3;
}


