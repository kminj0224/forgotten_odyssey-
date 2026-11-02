/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001f2ba0  Symbol: FUN_001f2ba0 */

void FUN_001f2ba0(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_001c60f4(DAT_001f2c00 + 0x1f2bb4);
  if ((uVar1 < *(uint *)(*param_1 + 8)) &&
     (iVar2 = *(int *)(*(int *)(*param_1 + 4) + uVar1 * 4), iVar2 != 0)) {
    iVar2 = __dynamic_cast(iVar2,*(undefined4 *)(DAT_001f2c04 + 0x1f2be4),DAT_001f2c08 + 0x1f2be8,0)
    ;
    if (iVar2 != 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __cxa_bad_cast();
  }
                    /* WARNING: Subroutine does not return */
  FUN_001c4358();
}


