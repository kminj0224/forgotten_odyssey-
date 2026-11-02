/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001730ec  Symbol: png_read_filter_row */

void png_read_filter_row(undefined4 param_1,undefined4 param_2,undefined *param_3,undefined4 param_4
                        ,uint param_5)

{
  int iVar1;
  
  if (4 < param_5) {
    png_warning(param_1,DAT_00173230 + 0x173104 + DAT_00173234);
    *param_3 = 0;
    return;
  }
  iVar1 = DAT_00173230 + 0x173104 + DAT_00173238;
                    /* WARNING: Could not emulate address calculation at 0x00173126 */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(*(int *)(iVar1 + param_5 * 4) + iVar1))();
  return;
}


