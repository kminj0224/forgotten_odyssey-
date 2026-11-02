/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001dae7c  Symbol: FUN_001dae7c */

void FUN_001dae7c(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_001c60f4(DAT_001daedc + 0x1dae90);
  if ((uVar1 < *(uint *)(*param_1 + 8)) &&
     (iVar2 = *(int *)(*(int *)(*param_1 + 4) + uVar1 * 4), iVar2 != 0)) {
    iVar2 = __dynamic_cast(iVar2,*(undefined4 *)(DAT_001daee0 + 0x1daec0),DAT_001daee4 + 0x1daec4,0)
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


