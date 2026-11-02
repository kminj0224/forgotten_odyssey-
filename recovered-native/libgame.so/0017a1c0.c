/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017a1c0  Symbol: FUN_0017a1c0 */

void FUN_0017a1c0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if ((((param_1 != (int *)0x0) && (*param_1 != 0)) && (param_1[3] != 0)) &&
     ((param_1[4] != 0 && (piVar1 = *(int **)(*param_1 + 0x10), piVar1 != (int *)0x0)))) {
    iVar2 = param_1[4] - *piVar1;
    if (0xfa < iVar2) {
      iVar2 = FUN_0018a7b0(piVar1,iVar2 + -0x50);
      if (0 < iVar2) {
        param_1[4] = param_1[4] - iVar2;
        param_1[9] = param_1[9] + iVar2;
      }
      param_1[5] = **(int **)(*param_1 + 0x10) + (*(int **)(*param_1 + 0x10))[1];
    }
    if (*(uint *)(*(int *)(*param_1 + 0x10) + 4) < 0xfb) {
      FUN_00190b90(*param_1,500);
      iVar2 = param_1[3];
      iVar3 = **(int **)(*param_1 + 0x10);
      if (iVar2 != iVar3) {
        param_1[3] = iVar3;
        param_1[4] = **(int **)(*param_1 + 0x10) + (param_1[4] - iVar2);
      }
      param_1[5] = **(int **)(*param_1 + 0x10) + (*(int **)(*param_1 + 0x10))[1];
    }
  }
  return;
}


