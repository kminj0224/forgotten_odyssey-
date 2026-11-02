/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ef914  Symbol: FUN_001ef914 */

int * FUN_001ef914(int **param_1)

{
  int *piVar1;
  
  piVar1 = *param_1;
  if (piVar1 == (int *)0x0) {
    return (int *)0xffffffff;
  }
  if (param_1[1] == (int *)0xffffffff) {
    if ((int **)piVar1[2] < (int **)piVar1[3]) {
      piVar1 = *(int **)piVar1[2];
    }
    else {
      piVar1 = (int *)(**(code **)(*piVar1 + 0x24))(piVar1);
    }
    if (piVar1 == (int *)0xffffffff) {
      *param_1 = (int *)0x0;
    }
    else {
      param_1[1] = piVar1;
    }
    return piVar1;
  }
  return param_1[1];
}


