/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a2628  Symbol: FUN_001a2628 */

void FUN_001a2628(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((param_1 == 0) ||
     ((((*(int *)(param_1 + 0x2c) == 0 || (*(int *)(*(int *)(param_1 + 0x2c) + 0x30) == 0)) ||
       (iVar1 = FUN_001a2278(), iVar1 == 0)) &&
      (((*(int *)(param_1 + 0x28) == 1 || (*(int *)(param_1 + 0x30) == 0)) ||
       ((iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 0x30), iVar1 == 0 ||
        (iVar1 = FUN_001a2278(iVar1,param_2), iVar1 == 0)))))))) {
    FUN_001a256c(param_2);
  }
  return;
}


