/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a4acc  Symbol: FUN_001a4acc */

void FUN_001a4acc(void *param_1)

{
  int iVar1;
  
  iVar1 = DAT_001a4b30 + 0x1a4ad6;
  if ((param_1 != (void *)0x0) && (*(int *)((int)param_1 + 4) != 0)) {
    if (*(int *)((int)param_1 + 8) != 0) {
      (***(code ***)(iVar1 + DAT_001a4b34))();
    }
    if (*(int *)((int)param_1 + 0x10) != 0) {
      (***(code ***)(iVar1 + DAT_001a4b34))();
    }
    if (*(int *)((int)param_1 + 0x18) != 0) {
      (***(code ***)(iVar1 + DAT_001a4b34))();
    }
    if (*(int *)((int)param_1 + 0x1c) != 0) {
      (***(code ***)(iVar1 + DAT_001a4b34))();
    }
    if (*(int *)((int)param_1 + 0x20) != 0) {
      (***(code ***)(iVar1 + DAT_001a4b34))();
    }
    memset(param_1,0,0x34);
  }
  return;
}


