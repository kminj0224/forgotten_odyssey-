/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019bab4  Symbol: FUN_0019bab4 */

undefined4 FUN_0019bab4(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)(DAT_0019bad0 + 0x19bac0 + DAT_0019bad4);
  uVar1 = *puVar2;
  puVar3 = *(undefined4 **)(DAT_0019bad0 + 0x19bac0 + DAT_0019bad8);
  *puVar2 = param_1;
  *puVar3 = 1;
  return uVar1;
}


