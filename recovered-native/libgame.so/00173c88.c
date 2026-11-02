/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00173c88  Symbol: png_handle_IEND */

void png_handle_IEND(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = DAT_00173ccc + 0x173c9c;
  if ((*(uint *)(param_1 + 300) & 5) != 5) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,iVar1 + DAT_00173cd0);
  }
  *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 0x18;
  if (param_3 != 0) {
    png_warning(param_1,iVar1 + DAT_00173cd4);
  }
  png_crc_finish(param_1,param_3);
  return;
}


