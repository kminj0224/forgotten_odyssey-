/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001df02c  Symbol: FUN_001df02c */

undefined4 FUN_001df02c(int **param_1)

{
  int *piVar1;
  
  piVar1 = *param_1;
  if (piVar1 == (int *)0x0) {
    return 1;
  }
  if (param_1[1] != (int *)0xffffffff) {
    return 0;
  }
  if ((byte *)piVar1[2] < (byte *)piVar1[3]) {
    piVar1 = (int *)(uint)*(byte *)piVar1[2];
  }
  else {
    piVar1 = (int *)(**(code **)(*piVar1 + 0x24))();
    if (piVar1 == (int *)0xffffffff) {
      *param_1 = (int *)0x0;
      return 1;
    }
  }
  param_1[1] = piVar1;
  return 0;
}


