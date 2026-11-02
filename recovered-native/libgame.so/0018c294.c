/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018c294  Symbol: FUN_0018c294 */

int FUN_0018c294(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    param_2 = 0;
  }
  else if (param_2 != 0) {
    if (*(int *)(param_1 + 0xc) == 0) {
      *(int *)(param_1 + 0xc) = param_2;
    }
    else {
      if (((*(int *)(param_2 + 4) == 3) &&
          (iVar1 = *(int *)(param_1 + 0x10), *(int *)(iVar1 + 4) == 3)) &&
         (*(int *)(param_2 + 8) == *(int *)(iVar1 + 8))) {
        FUN_0018c174(iVar1,*(undefined4 *)(param_2 + 0x28));
        iVar1 = *(int *)(param_2 + 0x18);
        if (iVar1 == 0) {
          FUN_0018bf48(param_2);
          return *(int *)(param_1 + 0x10);
        }
        FUN_0018bf48(param_2);
        param_2 = iVar1;
      }
      iVar1 = *(int *)(param_1 + 0x10);
      *(int *)(iVar1 + 0x18) = param_2;
      *(int *)(param_2 + 0x1c) = iVar1;
    }
    while( true ) {
      iVar1 = *(int *)(param_1 + 0x20);
      if (*(int *)(param_2 + 0x18) == 0) break;
      *(int *)(param_2 + 0x14) = param_1;
      if (*(int *)(param_2 + 0x20) != iVar1) {
        FUN_001895a0(param_2);
      }
      param_2 = *(int *)(param_2 + 0x18);
    }
    *(int *)(param_2 + 0x14) = param_1;
    if (*(int *)(param_2 + 0x20) != iVar1) {
      FUN_001895a0(param_2);
    }
    *(int *)(param_1 + 0x10) = param_2;
  }
  return param_2;
}


