/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014d1d8  Symbol: setOpacity */

/* cocos2d::CCMenu::setOpacity(unsigned char) */

void cocos2d::CCMenu::setOpacity(uchar param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined in_r1;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  
  uVar1 = (uint)param_1;
  *(undefined *)(uVar1 + 0x117) = in_r1;
  if (((*(CCArray **)(uVar1 + 0x40) != (CCArray *)0x0) &&
      (iVar2 = CCArray::count(*(CCArray **)(uVar1 + 0x40)), iVar2 != 0)) &&
     (*(int *)(uVar1 + 0x40) != 0)) {
    piVar4 = *(int **)(*(int *)(uVar1 + 0x40) + 0x14);
    iVar2 = *piVar4;
    if (iVar2 != 0) {
      piVar4 = (int *)piVar4[2];
      piVar6 = piVar4 + iVar2 + -1;
      while (piVar4 <= piVar6) {
        iVar2 = *piVar4;
        piVar4 = piVar4 + 1;
        if (iVar2 == 0) {
          return;
        }
        uVar5 = *(undefined4 *)(DAT_0014d254 + 0x14d23c);
        iVar2 = __dynamic_cast(iVar2,*(undefined4 *)(DAT_0014d258 + 0x14d240),uVar5,0);
        if ((iVar2 != 0) &&
           (piVar3 = (int *)__dynamic_cast(iVar2,uVar5,*(undefined4 *)(DAT_0014d250 + 0x14d212),
                                           0xfffffffe), piVar3 != (int *)0x0)) {
          (**(code **)(*piVar3 + 0xc))(piVar3,*(undefined *)(uVar1 + 0x117));
        }
      }
    }
  }
  return;
}


