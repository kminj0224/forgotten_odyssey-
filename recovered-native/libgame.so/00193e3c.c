/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00193e3c  Symbol: FUN_00193e3c */

void FUN_00193e3c(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00193e6c + 0x193e46;
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      FUN_00193e3c();
    }
    if (param_1[1] != 0) {
      (***(code ***)(iVar1 + DAT_00193e70))();
    }
    (***(code ***)(iVar1 + DAT_00193e70))(param_1);
  }
  return;
}


