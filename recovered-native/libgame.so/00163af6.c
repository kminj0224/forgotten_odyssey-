/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00163af6  Symbol: FUN_00163af6 */

void FUN_00163af6(int *param_1,undefined4 param_2,int param_3)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1 - param_3;
  iVar2 = *param_1 + 1;
  if (iVar2 == param_1[1]) {
    param_1[1] = iVar2 * 2;
    pvVar1 = realloc((void *)param_1[2],iVar2 * 8);
    param_1[2] = (int)pvVar1;
  }
  if (iVar3 != 0) {
    memmove((void *)(param_1[2] + (param_3 + 1) * 4),(void *)(param_1[2] + param_3 * 4),iVar3 * 4);
  }
  *param_1 = *param_1 + 1;
  *(undefined4 *)(param_3 * 4 + param_1[2]) = param_2;
  return;
}


