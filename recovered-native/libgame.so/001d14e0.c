/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001d14e0  Symbol: FUN_001d14e0 */

undefined4 FUN_001d14e0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(param_1 + 0x7c) = param_2;
  FUN_001d1404(param_1,0);
  return uVar1;
}


