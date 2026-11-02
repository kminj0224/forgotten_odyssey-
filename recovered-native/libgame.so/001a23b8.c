/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a23b8  Symbol: FUN_001a23b8 */

undefined4 FUN_001a23b8(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((param_2 != 0) && (param_1 != 0)) && (param_3 - 1U < 6)) {
    iVar1 = DAT_001a2454 + 0x1a23c4 + DAT_001a2458;
                    /* WARNING: Could not emulate address calculation at 0x001a23e8 */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(*(int *)(iVar1 + (param_3 - 1U) * 4) + iVar1))();
    return uVar2;
  }
  return 0;
}


