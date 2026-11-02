/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018fd18  Symbol: FUN_0018fd18 */

int * FUN_0018fd18(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  code **ppcVar4;
  int iVar5;
  
  iVar5 = DAT_0018fde8;
  iVar3 = DAT_0018fddc + 0x18fd24;
  piVar2 = (int *)(iVar3 + DAT_0018fde0);
  if (*piVar2 == 0) {
    iVar1 = piVar2[1];
    if (iVar1 < 0xf) {
      piVar2[iVar1 * 4 + 2] = iVar3 + DAT_0018fde4;
      piVar2[iVar1 * 4 + 3] = iVar3 + iVar5;
      iVar5 = DAT_0018fdf0;
      piVar2[iVar1 * 4 + 4] = iVar3 + DAT_0018fdec;
      piVar2[iVar1 * 4 + 5] = iVar3 + iVar5;
      *piVar2 = 1;
      piVar2[1] = iVar1 + 1;
    }
    *(undefined4 *)(iVar3 + DAT_0018fde0) = 1;
  }
  if (param_1 != 0) {
    iVar5 = *(int *)(iVar3 + DAT_0018fde0 + 4) + -1;
    ppcVar4 = (code **)(iVar3 + DAT_0018fde0 + 8 + iVar5 * 0x10);
    for (; -1 < iVar5; iVar5 = iVar5 + -1) {
      if (((*ppcVar4 != (code *)0x0) && (iVar1 = (**ppcVar4)(param_1), iVar1 != 0)) &&
         (iVar1 = (*ppcVar4[1])(param_1), iVar1 != 0)) {
        piVar2 = (int *)FUN_0018fb60(param_2);
        if (piVar2 == (int *)0x0) {
          (**(code **)(iVar3 + DAT_0018fde0 + iVar5 * 0x10 + 0x14))(iVar1);
          return (int *)0x0;
        }
        iVar3 = iVar3 + DAT_0018fde0;
        *piVar2 = iVar1;
        iVar3 = iVar3 + iVar5 * 0x10 + 8;
        piVar2[1] = *(int *)(iVar3 + 8);
        piVar2[2] = *(int *)(iVar3 + 0xc);
        return piVar2;
      }
      ppcVar4 = ppcVar4 + -4;
    }
  }
  return (int *)0x0;
}


