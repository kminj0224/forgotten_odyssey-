/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a5a70  Symbol: FUN_001a5a70 */

uint FUN_001a5a70(int **param_1)

{
  uint uVar1;
  
  if (param_1 == (int **)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)((int *)**param_1 == *param_1);
  }
  return uVar1;
}


