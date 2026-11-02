/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016ceb0  Symbol: png_write_flush */

void png_write_flush(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) && (*(uint *)(param_1 + 0x1a8) < *(uint *)(param_1 + 0x194))) {
    iVar2 = DAT_0016cf88 + 0x16cec4 + DAT_0016cf8c;
    while( true ) {
      iVar1 = deflate(param_1 + 0x138,2);
      if (iVar1 != 0) {
        if (*(int *)(param_1 + 0x150) != 0) {
                    /* WARNING: Subroutine does not return */
          png_error(param_1);
        }
                    /* WARNING: Subroutine does not return */
        png_error(param_1,iVar2);
      }
      iVar1 = *(int *)(param_1 + 0x148);
      if (iVar1 != 0) break;
      png_write_IDAT(param_1,*(undefined4 *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x174));
      *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x170);
      *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x174);
    }
    if (*(int *)(param_1 + 0x174) != iVar1) {
      png_write_IDAT(param_1,*(undefined4 *)(param_1 + 0x170),*(int *)(param_1 + 0x174) - iVar1);
      *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x170);
      *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x174);
    }
    *(undefined4 *)(param_1 + 0x218) = 0;
    png_flush(param_1);
  }
  return;
}


