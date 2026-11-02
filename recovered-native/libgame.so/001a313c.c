/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a313c  Symbol: FUN_001a313c */

undefined4 FUN_001a313c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 - 1U < 0x15) {
    iVar2 = DAT_001a31a0 + 0x1a3144 + DAT_001a31a4;
                    /* WARNING: Could not emulate address calculation at 0x001a314c */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(*(int *)(iVar2 + (param_1 - 1U) * 4) + iVar2))();
    return uVar1;
  }
  return 0;
}


