/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a4320  Symbol: FUN_001a4320 */

undefined4 FUN_001a4320(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_001a43f4 + 0x1a432c;
  if (*(int *)(iVar2 + DAT_001a43f8 + 0xc) == 0) {
    FUN_001a40e8();
  }
  if (param_1 - 2U < 0x14) {
    iVar2 = iVar2 + DAT_001a43fc;
                    /* WARNING: Could not emulate address calculation at 0x001a4342 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(*(int *)(iVar2 + (param_1 - 2U) * 4) + iVar2))();
    return uVar1;
  }
  return 0;
}


