/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001f1f98  Symbol: FUN_001f1f98 */

void FUN_001f1f98(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_001c60f4(*(undefined4 *)(DAT_001f1ff8 + 0x1f1fac));
  if ((uVar1 < *(uint *)(*param_1 + 8)) &&
     (iVar2 = *(int *)(*(int *)(*param_1 + 4) + uVar1 * 4), iVar2 != 0)) {
    iVar2 = __dynamic_cast(iVar2,*(undefined4 *)(DAT_001f1ffc + 0x1f1fdc),
                           *(undefined4 *)(DAT_001f2000 + 0x1f1fe0),0);
    if (iVar2 != 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __cxa_bad_cast();
  }
                    /* WARNING: Subroutine does not return */
  FUN_001c4358();
}


