/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014725c  Symbol: setColor */

/* cocos2d::CCLabelBMFont::setColor(cocos2d::_ccColor3B const&) */

void __thiscall cocos2d::CCLabelBMFont::setColor(CCLabelBMFont *this,_ccColor3B *param_1)

{
  int iVar1;
  int *piVar2;
  int **ppiVar3;
  int **ppiVar4;
  
  this[DAT_001472bc] = *(CCLabelBMFont *)param_1;
  this[0x11a] = *(CCLabelBMFont *)((int)param_1 + 1);
  this[DAT_001472c0] = *(CCLabelBMFont *)((int)param_1 + 2);
  if (((*(CCArray **)(this + 0x40) != (CCArray *)0x0) &&
      (iVar1 = CCArray::count(*(CCArray **)(this + 0x40)), iVar1 != 0)) &&
     (*(int *)(this + 0x40) != 0)) {
    piVar2 = *(int **)(*(int *)(this + 0x40) + 0x14);
    iVar1 = *piVar2;
    if (iVar1 != 0) {
      ppiVar3 = (int **)piVar2[2];
      ppiVar4 = ppiVar3 + iVar1 + -1;
      while (ppiVar3 <= ppiVar4) {
        piVar2 = *ppiVar3;
        ppiVar3 = ppiVar3 + 1;
        if (piVar2 == (int *)0x0) {
          return;
        }
        (**(code **)(*piVar2 + 0xf4))(piVar2,this + 0x119);
      }
    }
  }
  return;
}


