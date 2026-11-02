/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001d0e08  Symbol: FUN_001d0e08 */

undefined4 FUN_001d0e08(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x78) = param_2;
  FUN_001d0d2c(param_1,0);
  return uVar1;
}


