/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001da7f0  Symbol: FUN_001da7f0 */

void FUN_001da7f0(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_001c60f4(*(undefined4 *)(DAT_001da850 + 0x1da804));
  if ((uVar1 < *(uint *)(*param_1 + 8)) &&
     (iVar2 = *(int *)(*(int *)(*param_1 + 4) + uVar1 * 4), iVar2 != 0)) {
    iVar2 = __dynamic_cast(iVar2,*(undefined4 *)(DAT_001da854 + 0x1da834),
                           *(undefined4 *)(DAT_001da858 + 0x1da838),0);
    if (iVar2 != 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __cxa_bad_cast();
  }
                    /* WARNING: Subroutine does not return */
  FUN_001c4358();
}


