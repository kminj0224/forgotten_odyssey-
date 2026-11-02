/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001da5b8  Symbol: FUN_001da5b8 */

void FUN_001da5b8(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_001c60f4(*(undefined4 *)(DAT_001da618 + 0x1da5cc));
  if ((uVar1 < *(uint *)(*param_1 + 8)) &&
     (iVar2 = *(int *)(*(int *)(*param_1 + 4) + uVar1 * 4), iVar2 != 0)) {
    iVar2 = __dynamic_cast(iVar2,*(undefined4 *)(DAT_001da61c + 0x1da5fc),
                           *(undefined4 *)(DAT_001da620 + 0x1da600),0);
    if (iVar2 != 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __cxa_bad_cast();
  }
                    /* WARNING: Subroutine does not return */
  FUN_001c4358();
}


