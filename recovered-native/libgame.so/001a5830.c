/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a5830  Symbol: FUN_001a5830 */

undefined4 * FUN_001a5830(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 != (int *)0x0) {
    puVar2 = *(undefined4 **)*param_1;
    while ((puVar2 != (undefined4 *)*param_1 &&
           (iVar1 = (*(code *)param_1[2])(puVar2[2],param_2), iVar1 < 0))) {
      puVar2 = (undefined4 *)*puVar2;
    }
    if ((puVar2 != (undefined4 *)*param_1) &&
       (iVar1 = (*(code *)param_1[2])(puVar2[2],param_2), iVar1 == 0)) {
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}


