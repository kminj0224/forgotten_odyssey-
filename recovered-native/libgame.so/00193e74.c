/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00193e74  Symbol: FUN_00193e74 */

void FUN_00193e74(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00193eb8 + 0x193e7e;
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      (***(code ***)(iVar1 + DAT_00193ebc))();
    }
    if (param_1[1] != 0) {
      (***(code ***)(iVar1 + DAT_00193ebc))();
    }
    if (param_1[2] != 0) {
      (***(code ***)(iVar1 + DAT_00193ebc))();
    }
    (***(code ***)(iVar1 + DAT_00193ebc))(param_1);
  }
  return;
}


