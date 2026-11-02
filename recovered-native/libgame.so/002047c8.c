/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 002047c8  Symbol: FUN_002047c8 */

void FUN_002047c8(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)operator_new(0x10);
  *puVar1 = *(undefined4 *)(param_1 + 0x18);
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = 0;
  *(undefined4 **)(param_1 + 0x18) = puVar1;
  return;
}


