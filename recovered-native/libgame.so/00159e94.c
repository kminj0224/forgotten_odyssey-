/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00159e94  Symbol: setDirtyRecursively */

/* cocos2d::CCSprite::setDirtyRecursively(bool) */

void cocos2d::CCSprite::setDirtyRecursively(bool param_1)

{
  uint uVar1;
  int *piVar2;
  undefined in_r1;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  uVar1 = (uint)param_1;
  *(undefined *)(uVar1 + 0x119) = in_r1;
  *(undefined *)(uVar1 + 0x118) = in_r1;
  if ((*(char *)(uVar1 + 0x11a) != '\0') && (*(int *)(uVar1 + 0x40) != 0)) {
    piVar3 = *(int **)(*(int *)(uVar1 + 0x40) + 0x14);
    iVar4 = *piVar3;
    if (iVar4 != 0) {
      piVar3 = (int *)piVar3[2];
      piVar5 = piVar3 + iVar4 + -1;
      while (piVar3 <= piVar5) {
        iVar4 = *piVar3;
        piVar3 = piVar3 + 1;
        if (iVar4 == 0) {
          return;
        }
        piVar2 = (int *)__dynamic_cast(iVar4,*(undefined4 *)(DAT_00159eec + 0x159eda),
                                       *(undefined4 *)(DAT_00159ef0 + 0x159edc),0);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x104))(piVar2,1);
        }
      }
    }
  }
  return;
}


