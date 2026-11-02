/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a5bc8  Symbol: FUN_001a5bc8 */

void FUN_001a5bc8(int *param_1,code *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((param_2 != (code *)0x0) && (param_1 != (int *)0x0)) {
    puVar2 = *(undefined4 **)*param_1;
    while ((puVar2 != (undefined4 *)*param_1 && (iVar1 = (*param_2)(puVar2[2],param_3), iVar1 != 0))
          ) {
      puVar2 = (undefined4 *)*puVar2;
    }
  }
  return;
}


