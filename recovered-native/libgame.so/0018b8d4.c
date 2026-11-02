/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018b8d4  Symbol: FUN_0018b8d4 */

undefined4 FUN_0018b8d4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if ((param_1 != 0) && (uVar3 = *(int *)(param_1 + 4) - 1, uVar3 < 0x12)) {
    iVar1 = DAT_0018b944 + 0x18b8de + DAT_0018b948;
                    /* WARNING: Could not emulate address calculation at 0x0018b8ee */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(*(int *)(iVar1 + uVar3 * 4) + iVar1))();
    return uVar2;
  }
  return 0;
}


