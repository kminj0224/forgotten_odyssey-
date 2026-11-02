/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00189514  Symbol: FUN_00189514 */

void FUN_00189514(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00189548 + 0x18951e;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      (***(code ***)(iVar1 + DAT_0018954c))();
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      (***(code ***)(iVar1 + DAT_0018954c))();
    }
    (***(code ***)(iVar1 + DAT_0018954c))(param_1);
  }
  return;
}


