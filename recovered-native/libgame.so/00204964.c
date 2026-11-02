/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00204964  Symbol: FUN_00204964 */

void FUN_00204964(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 == (int *)0x0) {
    return;
  }
  do {
    (*(code *)piVar1[1])(param_2,param_1,piVar1[2]);
    piVar1 = (int *)*piVar1;
  } while (piVar1 != (int *)0x0);
  return;
}


