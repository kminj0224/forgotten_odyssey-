/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001f67d0  Symbol: FUN_001f67d0 */

bool FUN_001f67d0(int **param_1)

{
  int *piVar1;
  
  piVar1 = *param_1;
  if (piVar1 == (int *)0x0) {
    return true;
  }
  if (param_1[1] == (int *)0xffffffff) {
    if ((int **)piVar1[2] < (int **)piVar1[3]) {
      piVar1 = *(int **)piVar1[2];
    }
    else {
      piVar1 = (int *)(**(code **)(*piVar1 + 0x24))();
    }
    if (piVar1 == (int *)0xffffffff) {
      *param_1 = (int *)0x0;
    }
    else {
      param_1[1] = piVar1;
    }
    return piVar1 == (int *)0xffffffff;
  }
  return false;
}


