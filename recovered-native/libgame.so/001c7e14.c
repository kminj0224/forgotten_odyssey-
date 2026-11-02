/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c7e14  Symbol: FUN_001c7e14 */

void FUN_001c7e14(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  iVar1 = *(int *)(iVar2 + 8);
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = param_1;
  }
  *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 4);
  if (*param_2 == param_1) {
    *param_2 = iVar2;
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    if (*(int *)(iVar1 + 8) == param_1) {
      *(int *)(iVar1 + 8) = iVar2;
    }
    else {
      *(int *)(iVar1 + 0xc) = iVar2;
    }
  }
  *(int *)(iVar2 + 8) = param_1;
  *(int *)(param_1 + 4) = iVar2;
  return;
}


