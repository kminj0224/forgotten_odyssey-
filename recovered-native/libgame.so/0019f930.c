/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019f930  Symbol: FUN_0019f930 */

void FUN_0019f930(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0019f960 + 0x19f93a;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      (***(code ***)(iVar1 + DAT_0019f964))();
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_001906f8();
    }
    (***(code ***)(iVar1 + DAT_0019f964))(param_1);
  }
  return;
}


