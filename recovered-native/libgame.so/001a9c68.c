/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a9c68  Symbol: FUN_001a9c68 */

void FUN_001a9c68(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x18);
  if (0 < param_2) {
    for (; iVar1 = piVar2[1], iVar1 < param_2; param_2 = param_2 - iVar1) {
      (*(code *)piVar2[3])(param_1);
    }
    *piVar2 = *piVar2 + param_2;
    piVar2[1] = iVar1 - param_2;
  }
  return;
}


