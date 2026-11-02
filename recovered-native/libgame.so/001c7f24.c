/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c7f24  Symbol: FUN_001c7f24 */

int FUN_001c7f24(int *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if ((*param_1 == 0) && (*(int **)(param_1[1] + 4) == param_1)) {
    return (*(int **)(param_1[1] + 4))[3];
  }
  iVar2 = param_1[2];
  if (param_1[2] != 0) {
    do {
      iVar1 = iVar2;
      iVar2 = *(int *)(iVar1 + 0xc);
    } while (iVar2 != 0);
    return iVar1;
  }
  iVar2 = param_1[1];
  if (param_1 == *(int **)(iVar2 + 8)) {
    do {
      iVar1 = *(int *)(iVar2 + 4);
      bVar3 = *(int *)(iVar1 + 8) == iVar2;
      iVar2 = iVar1;
    } while (bVar3);
    return iVar1;
  }
  return iVar2;
}


