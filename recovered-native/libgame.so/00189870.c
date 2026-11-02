/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00189870  Symbol: FUN_00189870 */

int FUN_00189870(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 == 0) || (param_2 == 0)) || (*(int *)(param_1 + 4) != 1)) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x2c);
    if (iVar2 != 0) {
      if (param_3 == 0) {
        do {
          if ((*(int *)(iVar2 + 0x24) == 0) &&
             (iVar1 = FUN_0019c30c(*(undefined4 *)(iVar2 + 8),param_2), iVar1 != 0)) {
            return iVar2;
          }
          iVar2 = *(int *)(iVar2 + 0x18);
        } while (iVar2 != 0);
      }
      else {
        do {
          if ((*(int *)(iVar2 + 0x24) != 0) &&
             (iVar1 = FUN_0019c30c(*(undefined4 *)(iVar2 + 8),param_2), iVar1 != 0)) {
            iVar1 = *(int *)(*(int *)(iVar2 + 0x24) + 8);
            if (iVar1 == param_3) {
              return iVar2;
            }
            iVar1 = FUN_0019c30c(iVar1,param_3);
            if (iVar1 != 0) {
              return iVar2;
            }
          }
          iVar2 = *(int *)(iVar2 + 0x18);
        } while (iVar2 != 0);
      }
    }
  }
  return iVar2;
}


