/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017a2bc  Symbol: FUN_0017a2bc */

undefined4 FUN_0017a2bc(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((((param_1 == (int *)0x0) || (iVar1 = *param_1, iVar1 == 0)) || (param_1[3] == 0)) ||
     ((param_1[4] == 0 || (*(int *)(iVar1 + 0x10) == 0)))) {
    uVar2 = 0xffffffff;
  }
  else if (((param_1[4] - param_1[3]) + 0xfaU < *(uint *)(*(int *)(iVar1 + 0x10) + 4)) ||
          (*(int *)(iVar1 + 4) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00190a9c();
    iVar1 = param_1[3];
    iVar3 = **(int **)(*param_1 + 0x10);
    if (iVar1 != iVar3) {
      param_1[3] = iVar3;
      param_1[4] = **(int **)(*param_1 + 0x10) + (param_1[4] - iVar1);
    }
    param_1[5] = **(int **)(*param_1 + 0x10) + (*(int **)(*param_1 + 0x10))[1];
  }
  return uVar2;
}


