/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018c31c  Symbol: FUN_0018c31c */

int FUN_0018c31c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      param_1 = 0;
    }
    else {
      if (*(int *)(param_1 + 4) == 2) goto LAB_0018c34c;
      iVar2 = *(int *)(param_1 + 0x14);
      if (iVar2 == 0) goto LAB_0018c34c;
      if (*(int *)(iVar2 + 0xc) == 0) goto LAB_0018c34c;
      iVar2 = *(int *)(iVar2 + 0x10);
      if (iVar2 == 0) goto LAB_0018c34c;
      iVar1 = *(int *)(iVar2 + 0x18);
      while (iVar1 != 0) {
LAB_0018c34c:
        iVar1 = *(int *)(param_1 + 0x18);
        iVar2 = param_1;
        param_1 = iVar1;
      }
      FUN_0018b26c(param_2);
      if (((*(int *)(iVar2 + 4) == 3) && (*(int *)(param_2 + 4) == 3)) &&
         (*(int *)(iVar2 + 8) == *(int *)(param_2 + 8))) {
        FUN_0018c174(iVar2,*(undefined4 *)(param_2 + 0x28));
        FUN_0018bf48(param_2);
        param_1 = iVar2;
      }
      else if (*(int *)(param_2 + 4) == 2) {
        param_1 = FUN_0018bec0(iVar2,iVar2,param_2);
      }
      else {
        if (*(int *)(param_2 + 0x20) != *(int *)(iVar2 + 0x20)) {
          FUN_001895a0(param_2);
        }
        iVar1 = *(int *)(iVar2 + 0x14);
        *(undefined4 *)(param_2 + 0x18) = 0;
        *(int *)(param_2 + 0x1c) = iVar2;
        *(int *)(param_2 + 0x14) = iVar1;
        *(int *)(iVar2 + 0x18) = param_2;
        param_1 = param_2;
        if (iVar1 != 0) {
          *(int *)(iVar1 + 0x10) = param_2;
        }
      }
    }
  }
  return param_1;
}


