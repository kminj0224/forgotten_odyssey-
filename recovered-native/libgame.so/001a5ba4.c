/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a5ba4  Symbol: FUN_001a5ba4 */

void FUN_001a5ba4(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(undefined4 *)*param_1;
    puVar3 = (undefined4 *)*param_1;
    while (puVar2 = puVar1, puVar2 != (undefined4 *)*param_1) {
      *puVar3 = puVar3[1];
      puVar3[1] = puVar2;
      puVar3 = puVar2;
      puVar1 = (undefined4 *)*puVar2;
    }
    *puVar3 = puVar3[1];
    puVar3[1] = puVar2;
  }
  return;
}


