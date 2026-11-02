/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001954d0  Symbol: FUN_001954d0 */

void FUN_001954d0(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00195510 + 0x1954da;
  if (param_1 != 0) {
    FUN_0018b26c();
    FUN_0019541c(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
    if (*(int *)(param_1 + 8) != 0) {
      (***(code ***)(iVar1 + DAT_00195514))();
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      (***(code ***)(iVar1 + DAT_00195514))();
    }
    (***(code ***)(iVar1 + DAT_00195514))(param_1);
  }
  return;
}


