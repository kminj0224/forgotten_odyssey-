/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001dae10  Symbol: FUN_001dae10 */

void FUN_001dae10(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_001c60f4(DAT_001dae70 + 0x1dae24);
  if ((uVar1 < *(uint *)(*param_1 + 8)) &&
     (iVar2 = *(int *)(*(int *)(*param_1 + 4) + uVar1 * 4), iVar2 != 0)) {
    iVar2 = __dynamic_cast(iVar2,*(undefined4 *)(DAT_001dae74 + 0x1dae54),DAT_001dae78 + 0x1dae58,0)
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


