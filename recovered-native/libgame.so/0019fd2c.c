/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019fd2c  Symbol: FUN_0019fd2c */

undefined4 FUN_0019fd2c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = DAT_0019fde8 + 0x19fd36;
  if (param_1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    if ((*(int *)(param_1 + 4) == 1) &&
       (((*(int *)(param_1 + 0x24) == 0 ||
         (iVar1 = FUN_0019c30c(*(undefined4 *)(*(int *)(param_1 + 0x24) + 8),iVar4 + DAT_0019fdec),
         iVar1 != 0)) && (*(int *)(param_1 + 0xc) == 0)))) {
      uVar3 = **(byte **)(param_1 + 8) - 0x61 & 0xff;
      if (uVar3 < 0x10) {
        iVar4 = iVar4 + DAT_0019fdf0;
                    /* WARNING: Could not emulate address calculation at 0x0019fd72 */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)(*(int *)(iVar4 + uVar3 * 4) + iVar4))();
        return uVar2;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}


