/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017a244  Symbol: FUN_0017a244 */

undefined4 FUN_0017a244(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if ((((param_1 == (int *)0x0) || (iVar4 = *param_1, iVar4 == 0)) || (param_1[3] == 0)) ||
     (((param_1[4] == 0 || (piVar1 = *(int **)(iVar4 + 0x10), piVar1 == (int *)0x0)) ||
      (*(int *)(iVar4 + 4) == 0)))) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar4 = FUN_0018a7b0(piVar1,param_1[4] - *piVar1);
    if (0 < iVar4) {
      param_1[4] = param_1[4] - iVar4;
      param_1[9] = param_1[9] + iVar4;
    }
    uVar2 = FUN_00190b90(*param_1,param_2);
    iVar4 = param_1[3];
    iVar3 = **(int **)(*param_1 + 0x10);
    if (iVar4 != iVar3) {
      param_1[3] = iVar3;
      param_1[4] = **(int **)(*param_1 + 0x10) + (param_1[4] - iVar4);
    }
    param_1[5] = **(int **)(*param_1 + 0x10) + (*(int **)(*param_1 + 0x10))[1];
  }
  return uVar2;
}


