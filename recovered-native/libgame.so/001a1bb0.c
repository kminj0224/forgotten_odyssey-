/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a1bb0  Symbol: FUN_001a1bb0 */

void FUN_001a1bb0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 != 0) && (param_1 != 0)) {
    uVar2 = *(int *)(param_2 + 0x30) - 1;
    if (uVar2 < 5) {
      iVar1 = DAT_001a1cc8 + 0x1a1bbc + DAT_001a1ccc;
                    /* WARNING: Could not emulate address calculation at 0x001a1bd6 */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(*(int *)(iVar1 + uVar2 * 4) + iVar1))();
      return;
    }
    FUN_001a1b94(DAT_001a1cf0,DAT_001a1cc8 + 0x1a1bbc + DAT_001a1cec);
  }
  return;
}


