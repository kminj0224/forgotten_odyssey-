/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018c3bc  Symbol: FUN_0018c3bc */

int FUN_0018c3bc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_0018b26c(param_2);
    FUN_001895a0(param_2,param_1);
    *(int *)(param_2 + 0x14) = param_1;
    iVar1 = *(int *)(param_1 + 0xc);
    for (iVar2 = iVar1; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
      if (*(int *)(iVar2 + 4) == 1) {
        FUN_0018b4b0(iVar2,param_2);
        return iVar2;
      }
    }
    if (iVar1 == 0) {
      *(int *)(param_1 + 0xc) = param_2;
      *(int *)(param_1 + 0x10) = param_2;
    }
    else {
      FUN_0018c31c(iVar1,param_2);
    }
  }
  return 0;
}


