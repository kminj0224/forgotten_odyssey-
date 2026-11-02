/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018ab14  Symbol: FUN_0018ab14 */

undefined4 FUN_0018ab14(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if ((param_2 == 0) || (param_1 == 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar3 = *(int *)(param_2 + 4) - 1;
    if (uVar3 < 0x12) {
      iVar1 = DAT_0018ac18 + 0x18ab20 + DAT_0018ac1c;
                    /* WARNING: Could not emulate address calculation at 0x0018ab34 */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(*(int *)(iVar1 + uVar3 * 4) + iVar1))();
      return uVar2;
    }
    uVar2 = 0;
  }
  return uVar2;
}


