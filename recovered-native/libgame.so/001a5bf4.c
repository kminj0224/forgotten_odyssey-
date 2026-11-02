/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a5bf4  Symbol: FUN_001a5bf4 */

void FUN_001a5bf4(int *param_1,code *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 != (code *)0x0) && (param_1 != (int *)0x0)) {
    iVar2 = *(int *)(*param_1 + 4);
    while ((iVar2 != *param_1 &&
           (iVar1 = (*param_2)(*(undefined4 *)(iVar2 + 8),param_3), iVar1 != 0))) {
      iVar2 = *(int *)(iVar2 + 4);
    }
  }
  return;
}


