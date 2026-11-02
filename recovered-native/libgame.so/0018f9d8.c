/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018f9d8  Symbol: FUN_0018f9d8 */

undefined4 * FUN_0018f9d8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)0x0;
  if ((param_1 != 0) && (puVar1 = (undefined4 *)FUN_0018f94c(param_4), puVar1 != (undefined4 *)0x0))
  {
    *puVar1 = param_3;
    puVar1[1] = param_1;
    puVar1[2] = param_2;
  }
  return puVar1;
}


