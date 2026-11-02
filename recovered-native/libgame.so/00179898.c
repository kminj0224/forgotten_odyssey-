/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00179898  Symbol: FUN_00179898 */

void FUN_00179898(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00179900 + 0x1798a2;
  if (param_1 != (int *)0x0) {
    if (param_1[1] != 0) {
      (***(code ***)(iVar1 + DAT_00179904))();
    }
    if (param_1[2] != 0) {
      (***(code ***)(iVar1 + DAT_00179904))();
    }
    if (param_1[0xb] != 0) {
      (***(code ***)(iVar1 + DAT_00179904))();
    }
    if (param_1[0xc] != 0) {
      (***(code ***)(iVar1 + DAT_00179904))();
    }
    if (((code *)param_1[10] != (code *)0x0) && (param_1[3] != 0)) {
      (*(code *)param_1[10])();
    }
    if (*param_1 != 0) {
      FUN_0018ff94();
    }
    (***(code ***)(iVar1 + DAT_00179904))(param_1);
  }
  return;
}


