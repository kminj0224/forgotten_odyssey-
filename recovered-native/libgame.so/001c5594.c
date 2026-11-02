/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c5594  Symbol: FUN_001c5594 */

void FUN_001c5594(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  piVar2 = (int *)param_1[1];
  *(int **)(iVar1 + 4) = piVar2;
  *piVar2 = iVar1;
  return;
}


