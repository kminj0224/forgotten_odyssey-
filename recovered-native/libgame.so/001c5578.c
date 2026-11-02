/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c5578  Symbol: FUN_001c5578 */

void FUN_001c5578(int *param_1,int param_2)

{
  int **ppiVar1;
  
  param_1[1] = *(int *)(param_2 + 4);
  ppiVar1 = *(int ***)(param_2 + 4);
  *param_1 = param_2;
  *(int **)(param_2 + 4) = param_1;
  *ppiVar1 = param_1;
  return;
}


