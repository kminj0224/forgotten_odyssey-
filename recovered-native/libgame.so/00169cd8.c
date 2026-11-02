/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00169cd8  Symbol: png_set_text */

void png_set_text(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00169cf4 + 0x169ce2;
  iVar1 = png_set_text_2();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,iVar2 + DAT_00169cf8);
  }
  return;
}


