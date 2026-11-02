/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a586c  Symbol: FUN_001a586c */

int FUN_001a586c(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    iVar2 = *(int *)(*param_1 + 4);
    while ((iVar2 != *param_1 &&
           (iVar1 = (*(code *)param_1[2])(*(undefined4 *)(iVar2 + 8),param_2), 0 < iVar1))) {
      iVar2 = *(int *)(iVar2 + 4);
    }
    if ((iVar2 != *param_1) &&
       (iVar1 = (*(code *)param_1[2])(*(undefined4 *)(iVar2 + 8),param_2), iVar1 == 0)) {
      return iVar2;
    }
  }
  return 0;
}


