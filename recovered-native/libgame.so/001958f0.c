/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001958f0  Symbol: FUN_001958f0 */

void FUN_001958f0(void)

{
  int iVar1;
  int **ppiVar2;
  int *piVar3;
  int **ppiVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar6 = DAT_00195940 + 0x1958fa;
  piVar3 = (int *)(iVar6 + DAT_00195944);
  if (*piVar3 == 0) {
    ppiVar2 = (int **)(piVar3 + 1);
    ppiVar4 = ppiVar2;
    do {
      *ppiVar4 = (int *)0x0;
      ppiVar4 = ppiVar4 + 1;
    } while (ppiVar4 != (int **)(piVar3 + 0x65));
    iVar5 = 0;
    iVar1 = 0;
    iVar7 = iVar6 + DAT_00195948;
    while ((*(int *)(iVar5 * 4 + iVar7) != 0 && (iVar1 < 99))) {
      piVar3 = (int *)(iVar7 + iVar5 * 4);
      *ppiVar2 = piVar3;
      iVar1 = iVar1 + 1;
      do {
        iVar8 = *piVar3;
        piVar3 = piVar3 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar8 != 0);
      ppiVar2 = ppiVar2 + 1;
    }
    *(undefined4 *)(iVar6 + DAT_00195944) = 1;
  }
  return;
}


