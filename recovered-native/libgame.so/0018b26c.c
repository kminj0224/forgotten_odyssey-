/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018b26c  Symbol: FUN_0018b26c */

void FUN_0018b26c(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if ((*(int *)(param_1 + 4) == 0xe) && (iVar2 = *(int *)(param_1 + 0x20), iVar2 != 0)) {
      if (*(int *)(iVar2 + 0x2c) == param_1) {
        *(undefined4 *)(iVar2 + 0x2c) = 0;
      }
      if (*(int *)(iVar2 + 0x30) == param_1) {
        *(undefined4 *)(iVar2 + 0x30) = 0;
      }
    }
    if ((*(int *)(param_1 + 4) == 0x11) && (iVar2 = *(int *)(param_1 + 0x20), iVar2 != 0)) {
      if (*(int *)(iVar2 + 0x2c) != 0) {
        iVar1 = FUN_0018eb78(*(undefined4 *)(*(int *)(iVar2 + 0x2c) + 0x30),
                             *(undefined4 *)(param_1 + 8));
        if (iVar1 == param_1) {
          FUN_0018ec88(*(undefined4 *)(*(int *)(iVar2 + 0x2c) + 0x30),*(undefined4 *)(param_1 + 8),0
                      );
        }
        iVar1 = FUN_0018eb78(*(undefined4 *)(*(int *)(iVar2 + 0x2c) + 0x3c),
                             *(undefined4 *)(param_1 + 8));
        if (iVar1 == param_1) {
          FUN_0018ec88(*(undefined4 *)(*(int *)(iVar2 + 0x2c) + 0x3c),*(undefined4 *)(param_1 + 8),0
                      );
        }
      }
      if (*(int *)(iVar2 + 0x30) != 0) {
        iVar1 = FUN_0018eb78(*(undefined4 *)(*(int *)(iVar2 + 0x30) + 0x30),
                             *(undefined4 *)(param_1 + 8));
        if (iVar1 == param_1) {
          FUN_0018ec88(*(undefined4 *)(*(int *)(iVar2 + 0x30) + 0x30),*(undefined4 *)(param_1 + 8),0
                      );
        }
        iVar1 = FUN_0018eb78(*(undefined4 *)(*(int *)(iVar2 + 0x30) + 0x3c),
                             *(undefined4 *)(param_1 + 8));
        if (iVar1 == param_1) {
          FUN_0018ec88(*(undefined4 *)(*(int *)(iVar2 + 0x30) + 0x3c),*(undefined4 *)(param_1 + 8),0
                      );
        }
      }
    }
    iVar2 = *(int *)(param_1 + 0x14);
    if (iVar2 != 0) {
      if (*(int *)(param_1 + 4) == 2) {
        if (*(int *)(iVar2 + 0x2c) == param_1) {
          *(undefined4 *)(iVar2 + 0x2c) = *(undefined4 *)(param_1 + 0x18);
        }
      }
      else {
        if (*(int *)(iVar2 + 0xc) == param_1) {
          *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_1 + 0x18);
        }
        if (*(int *)(iVar2 + 0x10) == param_1) {
          *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_1 + 0x1c);
        }
      }
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x18) = *(undefined4 *)(param_1 + 0x18);
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}


