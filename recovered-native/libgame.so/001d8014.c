/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001d8014  Symbol: FUN_001d8014 */

uint FUN_001d8014(int **param_1)

{
  int *piVar1;
  
  piVar1 = *param_1;
  if (piVar1 == (int *)0x0) {
    return 0xff;
  }
  if (param_1[1] == (int *)0xffffffff) {
    if ((byte *)piVar1[2] < (byte *)piVar1[3]) {
      piVar1 = (int *)(uint)*(byte *)piVar1[2];
      param_1[1] = piVar1;
    }
    else {
      piVar1 = (int *)(**(code **)(*piVar1 + 0x24))(piVar1);
      if (piVar1 == (int *)0xffffffff) {
        *param_1 = (int *)0x0;
        return 0xff;
      }
      param_1[1] = piVar1;
    }
    return (uint)piVar1 & 0xff;
  }
  return (uint)param_1[1] & 0xff;
}


