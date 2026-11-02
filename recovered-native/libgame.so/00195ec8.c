/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00195ec8  Symbol: FUN_00195ec8 */

undefined4 FUN_00195ec8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  if ((param_2 != 0) && (param_1 != 0)) {
    piVar2 = *(int **)(param_1 + 0x20);
    if (piVar2 != (int *)0x0) {
      for (; *piVar2 != 0; piVar2 = piVar2 + 1) {
        iVar1 = FUN_0019c2dc(*piVar2,param_2);
        if (iVar1 == 0) {
          return 0xc;
        }
      }
    }
    piVar2 = *(int **)(param_1 + 0x18);
    if (piVar2 != (int *)0x0) {
      for (; *piVar2 != 0; piVar2 = piVar2 + 1) {
        iVar1 = FUN_0019c2dc(*piVar2,param_2);
        if (iVar1 == 0) {
          return 4;
        }
      }
    }
    if ((param_3 != 0) && (piVar2 = *(int **)(param_1 + 0x1c), piVar2 != (int *)0x0)) {
      for (; *piVar2 != 0; piVar2 = piVar2 + 1) {
        iVar1 = FUN_0019c2dc(*piVar2,param_2);
        if (iVar1 == 0) {
          return 2;
        }
      }
    }
  }
  return 1;
}


