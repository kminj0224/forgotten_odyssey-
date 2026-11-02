/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001d1748  Symbol: FUN_001d1748 */

undefined4 FUN_001d1748(undefined4 param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  undefined auStack_20 [4];
  undefined auStack_1c [8];
  
  FUN_001c56b4(param_1,param_2 + 0x6c);
  FUN_00204ac4(auStack_20,param_2,param_3);
  FUN_001c5d8c(auStack_20);
  FUN_001d162c(param_2,param_3);
  piVar1 = *(int **)(param_2 + 0x7c);
  if (piVar1 != (int *)0x0) {
    FUN_001c56b4(auStack_1c,piVar1 + 7);
    (**(code **)(*piVar1 + 8))(piVar1,param_3);
    FUN_001c5d24(piVar1 + 7,param_3);
    FUN_001c5d8c(auStack_1c);
  }
  return param_1;
}


