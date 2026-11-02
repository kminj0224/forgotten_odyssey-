/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018b4b0  Symbol: FUN_0018b4b0 */

int FUN_0018b4b0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 != param_2) {
    if (param_1 == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      if (param_2 == 0) {
        FUN_0018b26c();
        return param_1;
      }
      if ((*(int *)(param_1 + 4) == 2) && (*(int *)(param_2 + 4) != 2)) {
        return param_1;
      }
      if ((*(int *)(param_2 + 4) == 2) && (*(int *)(param_1 + 4) != 2)) {
        return param_1;
      }
      FUN_0018b26c(param_2);
      FUN_001895a0(param_2,*(undefined4 *)(param_1 + 0x20));
      iVar1 = *(int *)(param_1 + 0x18);
      *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
      *(int *)(param_2 + 0x18) = iVar1;
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x1c) = param_2;
      }
      iVar1 = *(int *)(param_1 + 0x1c);
      *(int *)(param_2 + 0x1c) = iVar1;
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x18) = param_2;
      }
      iVar1 = *(int *)(param_2 + 0x14);
      if (iVar1 != 0) {
        if (*(int *)(param_2 + 4) == 2) {
          if (*(int *)(iVar1 + 0x2c) == param_1) {
            *(int *)(iVar1 + 0x2c) = param_2;
          }
        }
        else {
          if (*(int *)(iVar1 + 0xc) == param_1) {
            *(int *)(iVar1 + 0xc) = param_2;
          }
          if (*(int *)(*(int *)(param_2 + 0x14) + 0x10) == param_1) {
            *(int *)(*(int *)(param_2 + 0x14) + 0x10) = param_2;
          }
        }
      }
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      return param_1;
    }
  }
  return 0;
}


