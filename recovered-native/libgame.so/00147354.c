/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00147354  Symbol: setOpacity */

/* cocos2d::CCLabelBMFont::setOpacity(unsigned char) */

void __thiscall cocos2d::CCLabelBMFont::setOpacity(CCLabelBMFont *this,uchar param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  this[0x118] = (CCLabelBMFont)param_1;
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
        piVar2 = (int *)__dynamic_cast(iVar1,*(undefined4 *)(DAT_001473b4 + 0x1473a0),
                                       *(undefined4 *)(DAT_001473b8 + 0x1473a2),0xfffffffe);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0xc))(piVar2,this[0x118]);
        }
      }
    }
  }
  return;
}


