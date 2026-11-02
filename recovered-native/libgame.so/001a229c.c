/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a229c  Symbol: FUN_001a229c */

int FUN_001a229c(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    if (((*(int *)(param_1 + 0x2c) != 0) && (*(int *)(*(int *)(param_1 + 0x2c) + 0x3c) != 0)) &&
       (iVar1 = FUN_001a2278(), iVar1 != 0)) {
      return iVar1;
    }
    if ((*(int *)(param_1 + 0x30) != 0) &&
       (iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 0x3c), iVar1 != 0)) {
      iVar1 = FUN_001a2278(iVar1,param_2);
      return iVar1;
    }
  }
  return 0;
}


