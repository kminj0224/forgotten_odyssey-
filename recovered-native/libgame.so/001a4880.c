/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a4880  Symbol: FUN_001a4880 */

void FUN_001a4880(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_001a48b8 + 0x1a4888;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) == 0) {
      (***(code ***)(iVar1 + DAT_001a48bc))
                (**(undefined4 **)(iVar1 + DAT_001a48c0),iVar1 + DAT_001a48c8,
                 *(undefined4 *)(param_1 + 0x1c));
    }
    else {
      (***(code ***)(iVar1 + DAT_001a48bc))
                (**(undefined4 **)(iVar1 + DAT_001a48c0),iVar1 + DAT_001a48c4);
    }
  }
  return;
}


