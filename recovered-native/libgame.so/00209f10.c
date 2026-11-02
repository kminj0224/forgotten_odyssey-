/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00209f10  Symbol: FUN_00209f10 */

int FUN_00209f10(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_14 [2];
  
  iVar2 = 0;
  local_14[0] = 0;
  cVar1 = **(char **)(param_1 + 0xc);
  if ((cVar1 != 'E' && cVar1 != '\0') && (iVar2 = 0, cVar1 != '.')) {
    piVar4 = local_14;
    do {
      iVar2 = FUN_00209418(param_1);
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = FUN_00208880(param_1,0x2a,iVar2,0);
      *piVar4 = iVar2;
      if (iVar2 == 0) {
        return 0;
      }
      piVar4 = (int *)(iVar2 + 8);
      cVar1 = **(char **)(param_1 + 0xc);
    } while ((cVar1 != '\0' && cVar1 != 'E') && (cVar1 != '.'));
    iVar2 = local_14[0];
    if ((local_14[0] != 0) &&
       (((*(int *)(local_14[0] + 8) == 0 && (**(int **)(local_14[0] + 4) == 0x23)) &&
        (iVar3 = (*(int **)(local_14[0] + 4))[1], *(int *)(iVar3 + 0x10) == 9)))) {
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) - *(int *)(iVar3 + 4);
      *(undefined4 *)(local_14[0] + 4) = 0;
    }
  }
  return iVar2;
}


