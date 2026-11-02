/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001f24f4  Symbol: FUN_001f24f4 */

void FUN_001f24f4(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_001c60f4(DAT_001f2554 + 0x1f2508);
  if ((uVar1 < *(uint *)(*param_1 + 8)) &&
     (iVar2 = *(int *)(*(int *)(*param_1 + 4) + uVar1 * 4), iVar2 != 0)) {
    iVar2 = __dynamic_cast(iVar2,*(undefined4 *)(DAT_001f2558 + 0x1f2538),DAT_001f255c + 0x1f253c,0)
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


