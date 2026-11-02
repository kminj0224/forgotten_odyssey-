/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00016a7c  Symbol: FUN_00016a7c */

void FUN_00016a7c(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    while (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 0x10);
      _Unwind_DeleteException(iVar1 + 0x20);
      iVar1 = iVar2;
    }
    free(param_1);
    return;
  }
  return;
}


