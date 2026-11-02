/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00179fd4  Symbol: FUN_00179fd4 */

undefined4 FUN_00179fd4(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_0017a110 + 0x179fe0;
  if (param_1 != 0) {
    if (param_2 + 1U < 5) {
      iVar3 = iVar3 + DAT_0017a114;
                    /* WARNING: Could not emulate address calculation at 0x00179ff0 */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(*(int *)(iVar3 + (param_2 + 1U) * 4) + iVar3))();
      return uVar1;
    }
    iVar2 = FUN_001a4320(param_2);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x100) = 1;
      uVar1 = FUN_00179f9c(param_1,iVar2);
      return uVar1;
    }
    if (param_2 - 4U < 0x13) {
      iVar3 = iVar3 + DAT_0017a11c;
                    /* WARNING: Could not emulate address calculation at 0x0017a06e */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(*(int *)(iVar3 + (param_2 - 4U) * 4) + iVar3))();
      return uVar1;
    }
  }
  return 0xffffffff;
}


