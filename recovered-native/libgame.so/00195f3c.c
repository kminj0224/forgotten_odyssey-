/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00195f3c  Symbol: FUN_00195f3c */

undefined4 FUN_00195f3c(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (((param_2 != 0) && (param_1 != 0)) &&
     (piVar2 = *(int **)(param_1 + 0x10), piVar2 != (int *)0x0)) {
    for (; *piVar2 != 0; piVar2 = piVar2 + 1) {
      iVar1 = FUN_0019c2dc(*piVar2,param_2);
      if (iVar1 == 0) {
        return 1;
      }
    }
  }
  return 0;
}


