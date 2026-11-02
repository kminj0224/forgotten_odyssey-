/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016c1c0  Symbol: png_read_png */

void png_read_png(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_1c;
  
  iVar4 = DAT_0016c354 + 0x16c1d0;
  if (param_1 != 0) {
    png_read_info();
    if (DAT_0016c358 < *(uint *)(param_2 + 4)) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,iVar4 + DAT_0016c360);
    }
    if (param_3 << 0x1f < 0) {
      png_set_strip_16(param_1);
    }
    if (param_3 << 0x1e < 0) {
      png_set_strip_alpha(param_1);
    }
    if (param_3 << 0x1c < 0) {
      png_set_packswap(param_1);
    }
    if ((param_3 << 0x1b < 0) &&
       (((*(byte *)(param_1 + DAT_0016c35c) < 8 || (*(char *)(param_1 + 0x1ea) == '\x03')) ||
        (iVar4 = png_get_valid(param_1,param_2,0x10), iVar4 != 0)))) {
      png_set_expand(param_1);
    }
    if (param_3 << 0x1a < 0) {
      png_set_invert_mono(param_1);
    }
    if ((param_3 << 0x19 < 0) && (iVar4 = png_get_valid(param_1,param_2,2), iVar4 != 0)) {
      png_get_sBIT(param_1,param_2,&local_1c);
      png_set_shift(param_1,local_1c);
    }
    if (param_3 << 0x18 < 0) {
      png_set_bgr(param_1);
    }
    if (param_3 << 0x17 < 0) {
      png_set_swap_alpha(param_1);
    }
    if (param_3 << 0x16 < 0) {
      png_set_swap(param_1);
    }
    if (param_3 << 0x15 < 0) {
      png_set_invert_alpha(param_1);
    }
    if (param_3 << 0x12 < 0) {
      png_set_gray_to_rgb(param_1);
    }
    png_read_update_info(param_1,param_2);
    png_free_data(param_1,param_2,0x40,0);
    iVar4 = *(int *)(param_2 + 0xf8);
    if (iVar4 == 0) {
      iVar4 = png_malloc(param_1,*(int *)(param_2 + 4) << 2);
      uVar2 = *(uint *)(param_2 + 4);
      *(int *)(param_2 + 0xf8) = iVar4;
      if (uVar2 != 0) {
        uVar3 = 0;
        while( true ) {
          *(undefined4 *)(uVar3 * 4 + iVar4) = 0;
          uVar2 = *(uint *)(param_2 + 4);
          uVar3 = uVar3 + 1;
          if (uVar2 <= uVar3) break;
          iVar4 = *(int *)(param_2 + 0xf8);
        }
      }
      iVar4 = 0;
      *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 0x40;
      if (0 < (int)uVar2) {
        do {
          iVar5 = *(int *)(param_2 + 0xf8);
          uVar1 = png_get_rowbytes(param_1,param_2);
          uVar1 = png_malloc(param_1,uVar1);
          *(undefined4 *)(iVar5 + iVar4 * 4) = uVar1;
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(param_2 + 4));
      }
      iVar4 = *(int *)(param_2 + 0xf8);
    }
    png_read_image(param_1,iVar4);
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x8000;
    png_read_end(param_1,param_2);
  }
  return;
}


