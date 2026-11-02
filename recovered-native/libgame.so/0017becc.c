/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017becc  Symbol: FUN_0017becc */

int FUN_0017becc(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0017bf44 + 0x17bed8;
  iVar1 = 0;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x3c) <= *(int *)(param_1 + 0x38)) {
      iVar1 = (***(code ***)(iVar2 + DAT_0017bf48))
                        (*(undefined4 *)(param_1 + 0x40),*(int *)(param_1 + 0x3c) << 3);
      if (iVar1 == 0) {
        FUN_00179430(param_1,0);
        return -1;
      }
      *(int *)(param_1 + 0x40) = iVar1;
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) << 1;
    }
    if ((*(uint *)(iVar2 + DAT_0017bf4c) < *(uint *)(param_1 + 0x38)) &&
       (-1 < *(int *)(param_1 + 0x168) << 0xc)) {
      FUN_0017bd20(param_1,1,iVar2 + DAT_0017bf50);
      iVar1 = -1;
      *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
    }
    else {
      *(undefined4 *)(*(uint *)(param_1 + 0x38) * 4 + *(int *)(param_1 + 0x40)) = param_2;
      iVar1 = *(int *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x34) = param_2;
      *(int *)(param_1 + 0x38) = iVar1 + 1;
    }
  }
  return iVar1;
}


