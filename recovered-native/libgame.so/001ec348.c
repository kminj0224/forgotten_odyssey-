/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ec348  Symbol: FUN_001ec348 */

uint FUN_001ec348(int *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  if (((uint)param_1[1] < uVar1) && (*(byte *)(uVar1 - 1) == param_2)) {
    param_1[2] = uVar1 - 1;
    return (uint)*(byte *)(uVar1 - 1);
  }
  uVar1 = (**(code **)(*param_1 + 0x2c))();
  return uVar1;
}


