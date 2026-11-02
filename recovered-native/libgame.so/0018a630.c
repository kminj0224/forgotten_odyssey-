/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018a630  Symbol: FUN_0018a630 */

undefined4 * FUN_0018a630(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar2 = (undefined4 *)0x0;
  puVar4 = (undefined4 *)0x0;
  for (; param_1 != (undefined4 *)0x0; param_1 = (undefined4 *)*param_1) {
    puVar1 = (undefined4 *)FUN_0018a614(param_1);
    puVar3 = puVar1;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = puVar1;
      puVar3 = puVar4;
    }
    puVar2 = puVar1;
    puVar4 = puVar3;
  }
  return puVar4;
}


