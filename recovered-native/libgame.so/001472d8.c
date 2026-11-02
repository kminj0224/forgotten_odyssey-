/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001472d8  Symbol: setIsOpacityModifyRGB */

/* cocos2d::CCLabelBMFont::setIsOpacityModifyRGB(bool) */

void __thiscall cocos2d::CCLabelBMFont::setIsOpacityModifyRGB(CCLabelBMFont *this,bool param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  this[0x11c] = (CCLabelBMFont)param_1;
  if (((*(CCArray **)(this + 0x40) != (CCArray *)0x0) &&
      (iVar1 = CCArray::count(*(CCArray **)(this + 0x40)), iVar1 != 0)) &&
     (*(int *)(this + 0x40) != 0)) {
    piVar3 = *(int **)(*(int *)(this + 0x40) + 0x14);
    iVar1 = *piVar3;
    if (iVar1 != 0) {
      piVar3 = (int *)piVar3[2];
      piVar4 = piVar3 + iVar1 + -1;
      while (piVar3 <= piVar4) {
        iVar1 = *piVar3;
        piVar3 = piVar3 + 1;
        if (iVar1 == 0) {
          return;
        }
        piVar2 = (int *)__dynamic_cast(iVar1,*(undefined4 *)(DAT_00147338 + 0x147324),
                                       *(undefined4 *)(DAT_0014733c + 0x147326),0xfffffffe);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x10))(piVar2,this[0x11c]);
        }
      }
    }
  }
  return;
}


