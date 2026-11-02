/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00178d1c  Symbol: png_write_IHDR */

void png_write_IHDR(undefined4 param_1)

{
  int iVar1;
  uint param_5;
  
  if (param_5 < 7) {
    iVar1 = DAT_00179054 + 0x178d34 + DAT_00179088;
                    /* WARNING: Could not emulate address calculation at 0x00178fae */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(*(int *)(iVar1 + param_5 * 4) + iVar1))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,DAT_00179054 + 0x178d34 + DAT_00179060);
}


