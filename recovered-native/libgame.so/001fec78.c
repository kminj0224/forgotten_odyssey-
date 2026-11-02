/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001fec78  Symbol: FUN_001fec78 */

void FUN_001fec78(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (*(int *)(iVar2 + -4) < 0) {
    *(undefined4 *)(iVar2 + -4) = 0;
  }
  iVar1 = *param_2;
  if (*(int *)(iVar1 + -4) < 0) {
    *(undefined4 *)(iVar1 + -4) = 0;
  }
  *param_1 = iVar1;
  *param_2 = iVar2;
  return;
}


