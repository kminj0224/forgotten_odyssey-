/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00148570  Symbol: setString */

/* cocos2d::CCLabelBMFont::setString(char const*) */

void __thiscall cocos2d::CCLabelBMFont::setString(CCLabelBMFont *this,char *param_1)

{
  int iVar1;
  int *piVar2;
  int **ppiVar3;
  int **ppiVar4;
  
  FUN_001edf58(this + 0x120);
  FUN_001ed9dc(this + 0x120,param_1);
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
        if (piVar2 == (int *)0x0) break;
        (**(code **)(*piVar2 + 0x6c))(piVar2,0);
      }
    }
  }
  createFontChars(this);
  return;
}


